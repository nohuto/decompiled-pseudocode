/*
 * XREFs of ??_ECVolumeGainStage@@UEAAPEAXI@Z @ 0x180009F60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 */

CVolumeGainStage *__fastcall CVolumeGainStage::`vector deleting destructor'(CVolumeGainStage *this, char a2)
{
  *(_QWORD *)this = &CRefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x38uLL);
  return this;
}
