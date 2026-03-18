/*
 * XREFs of ??_E?$IndexedSet@VDMMVIDPNTARGETMODE@@@@UEAAPEAXI@Z @ 0x1C00341A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDMMVIDPNTARGETMODE@@@@UEAA@XZ @ 0x1C001D670 (--1-$Set@VDMMVIDPNTARGETMODE@@@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall IndexedSet<DMMVIDPNTARGETMODE>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
  Set<DMMVIDPNTARGETMODE>::~Set<DMMVIDPNTARGETMODE>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
