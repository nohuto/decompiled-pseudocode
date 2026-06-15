/*
 * XREFs of ??_ECVolumeHardware@@EEAAPEAXI@Z @ 0x18006E4C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ??1CVolumeHardware@@EEAA@XZ @ 0x18006E404 (--1CVolumeHardware@@EEAA@XZ.c)
 */

CVolumeHardware *__fastcall CVolumeHardware::`vector deleting destructor'(CVolumeHardware *this, char a2)
{
  CVolumeHardware::~CVolumeHardware(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
