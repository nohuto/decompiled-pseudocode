/*
 * XREFs of ??_ECVolumeControlBase@@MEAAPEAXI@Z @ 0x18006E480
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ??1CVolumeControlBase@@MEAA@XZ @ 0x18006E388 (--1CVolumeControlBase@@MEAA@XZ.c)
 */

CVolumeControlBase *__fastcall CVolumeControlBase::`vector deleting destructor'(CVolumeControlBase *this, char a2)
{
  CVolumeControlBase::~CVolumeControlBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
