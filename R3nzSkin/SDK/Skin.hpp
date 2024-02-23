#pragma once

#include <cstdint>

#include "AString.hpp"

class Skin {
public:
	std::int32_t skin_id;
	PAD(0x4)
	AString skin_name;
};
