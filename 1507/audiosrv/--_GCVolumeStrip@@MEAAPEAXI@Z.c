/*
 * XREFs of ??_GCVolumeStrip@@MEAAPEAXI@Z @ 0x1800719B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ??1CVolumeStrip@@MEAA@XZ @ 0x180071768 (--1CVolumeStrip@@MEAA@XZ.c)
 */

CVolumeStrip *__fastcall CVolumeStrip::`scalar deleting destructor'(CVolumeStrip *this, char a2)
{
  CVolumeStrip::~CVolumeStrip(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
