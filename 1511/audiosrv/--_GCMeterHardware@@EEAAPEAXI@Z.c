/*
 * XREFs of ??_GCMeterHardware@@EEAAPEAXI@Z @ 0x180042CD0
 * Callers:
 *     ?Release@CMeterControlBase@@UEAAKXZ @ 0x180042A60 (-Release@CMeterControlBase@@UEAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??1CMeterHardware@@EEAA@XZ @ 0x180043090 (--1CMeterHardware@@EEAA@XZ.c)
 */

CMeterHardware *__fastcall CMeterHardware::`scalar deleting destructor'(CMeterHardware *this, char a2)
{
  CMeterHardware::~CMeterHardware(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
