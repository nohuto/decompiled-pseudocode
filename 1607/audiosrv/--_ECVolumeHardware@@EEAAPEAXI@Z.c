/*
 * XREFs of ??_ECVolumeHardware@@EEAAPEAXI@Z @ 0x180056720
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CVolumeHardware@@EEAA@XZ @ 0x180056684 (--1CVolumeHardware@@EEAA@XZ.c)
 */

CVolumeHardware *__fastcall CVolumeHardware::`vector deleting destructor'(CVolumeHardware *this, char a2)
{
  CVolumeHardware::~CVolumeHardware(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF0);
  return this;
}
