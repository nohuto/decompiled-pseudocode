/*
 * XREFs of ??_G?$IndexedSet@VDMMVIDPNTARGET@@@@UEAAPEAXI@Z @ 0x1C0034610
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDMMVIDPNTARGET@@@@UEAA@XZ @ 0x1C000AD80 (--1-$Set@VDMMVIDPNTARGET@@@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall IndexedSet<DMMVIDPNTARGET>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &IndexedSet<DMMVIDPNTARGET>::`vftable';
  Set<DMMVIDPNTARGET>::~Set<DMMVIDPNTARGET>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
