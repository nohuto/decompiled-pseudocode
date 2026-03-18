/*
 * XREFs of ??_E?$Set@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z @ 0x1C002C210
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDMMVIDPNSOURCEMODE@@@@UEAA@XZ @ 0x1C00075A4 (--1-$Set@VDMMVIDPNSOURCEMODE@@@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall Set<DMMVIDPNSOURCEMODE>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  Set<DMMVIDPNSOURCEMODE>::~Set<DMMVIDPNSOURCEMODE>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
