/*
 * XREFs of ??_E?$Set@VDMMVIDEOPRESENTSOURCE@@@@UEAAPEAXI@Z @ 0x1C0033420
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDMMVIDEOPRESENTSOURCE@@@@UEAA@XZ @ 0x1C00328E0 (--1-$Set@VDMMVIDEOPRESENTSOURCE@@@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall Set<DMMVIDEOPRESENTSOURCE>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  Set<DMMVIDEOPRESENTSOURCE>::~Set<DMMVIDEOPRESENTSOURCE>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
