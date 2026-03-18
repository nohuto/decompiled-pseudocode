/*
 * XREFs of ??_E?$Set@VDMMVIDPNTARGETMODE@@@@UEAAPEAXI@Z @ 0x1C0034240
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDMMVIDPNTARGETMODE@@@@UEAA@XZ @ 0x1C001D670 (--1-$Set@VDMMVIDPNTARGETMODE@@@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall Set<DMMVIDPNTARGETMODE>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  Set<DMMVIDPNTARGETMODE>::~Set<DMMVIDPNTARGETMODE>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
