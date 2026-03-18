/*
 * XREFs of ??_G?$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@UEAAPEAXI@Z @ 0x1C00332E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDMMVIDEOPRESENTSOURCE@@@@UEAA@XZ @ 0x1C00328E0 (--1-$Set@VDMMVIDEOPRESENTSOURCE@@@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall IndexedSet<DMMVIDEOPRESENTSOURCE>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &IndexedSet<DMMVIDEOPRESENTSOURCE>::`vftable';
  Set<DMMVIDEOPRESENTSOURCE>::~Set<DMMVIDEOPRESENTSOURCE>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
