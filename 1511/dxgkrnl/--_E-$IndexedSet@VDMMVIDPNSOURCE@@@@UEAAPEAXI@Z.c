/*
 * XREFs of ??_E?$IndexedSet@VDMMVIDPNSOURCE@@@@UEAAPEAXI@Z @ 0x1C002C130
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDMMVIDPNSOURCE@@@@UEAA@XZ @ 0x1C00085B4 (--1-$Set@VDMMVIDPNSOURCE@@@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall IndexedSet<DMMVIDPNSOURCE>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &IndexedSet<DMMVIDPNSOURCE>::`vftable';
  Set<DMMVIDPNSOURCE>::~Set<DMMVIDPNSOURCE>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
