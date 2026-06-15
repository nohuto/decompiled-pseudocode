/*
 * XREFs of ??_GCMeterHardware@@EEAAPEAXI@Z @ 0x18003DCB0
 * Callers:
 *     ?Release@CMeterControlBase@@UEAAKXZ @ 0x18003F550 (-Release@CMeterControlBase@@UEAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ??1CMeterHardware@@EEAA@XZ @ 0x18003E08C (--1CMeterHardware@@EEAA@XZ.c)
 */

CMeterHardware *__fastcall CMeterHardware::`scalar deleting destructor'(CMeterHardware *this, char a2)
{
  CMeterHardware::~CMeterHardware(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
