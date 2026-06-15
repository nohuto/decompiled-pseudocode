/*
 * XREFs of ??_GCMeterHardware@@EEAAPEAXI@Z @ 0x18002F3F0
 * Callers:
 *     ?Release@CMeterControlBase@@UEAAKXZ @ 0x18002F280 (-Release@CMeterControlBase@@UEAAKXZ.c)
 * Callees:
 *     ??1CMeterHardware@@EEAA@XZ @ 0x18002F42C (--1CMeterHardware@@EEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CMeterHardware *__fastcall CMeterHardware::`scalar deleting destructor'(CMeterHardware *this, char a2)
{
  CMeterHardware::~CMeterHardware(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
