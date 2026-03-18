/*
 * XREFs of ??_E?$Set@VDMMVIDPNTARGET@@@@UEAAPEAXI@Z @ 0x1C00346E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDMMVIDPNTARGET@@@@UEAA@XZ @ 0x1C000AD80 (--1-$Set@VDMMVIDPNTARGET@@@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall Set<DMMVIDPNTARGET>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  Set<DMMVIDPNTARGET>::~Set<DMMVIDPNTARGET>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
