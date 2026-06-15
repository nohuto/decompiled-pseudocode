/*
 * XREFs of ??_GCMeterSoftware@@EEAAPEAXI@Z @ 0x18006FFE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??1CMeterSoftware@@EEAA@XZ @ 0x18006FC44 (--1CMeterSoftware@@EEAA@XZ.c)
 */

CMeterSoftware *__fastcall CMeterSoftware::`scalar deleting destructor'(CMeterSoftware *this, char a2)
{
  CMeterSoftware::~CMeterSoftware(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
