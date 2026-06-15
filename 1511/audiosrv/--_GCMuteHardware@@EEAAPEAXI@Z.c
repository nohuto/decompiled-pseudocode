/*
 * XREFs of ??_GCMuteHardware@@EEAAPEAXI@Z @ 0x18006BFC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??1CMuteHardware@@EEAA@XZ @ 0x18006BF00 (--1CMuteHardware@@EEAA@XZ.c)
 */

CMuteHardware *__fastcall CMuteHardware::`scalar deleting destructor'(CMuteHardware *this, char a2)
{
  CMuteHardware::~CMuteHardware(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
