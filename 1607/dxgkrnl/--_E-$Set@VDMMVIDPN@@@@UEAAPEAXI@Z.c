/*
 * XREFs of ??_E?$Set@VDMMVIDPN@@@@UEAAPEAXI@Z @ 0x1C0033480
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDMMVIDPN@@@@UEAA@XZ @ 0x1C0032920 (--1-$Set@VDMMVIDPN@@@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall Set<DMMVIDPN>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  Set<DMMVIDPN>::~Set<DMMVIDPN>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
