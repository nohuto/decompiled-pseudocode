/*
 * XREFs of ??1?$Queue@VDMMVIDPN@@@@UEAA@XZ @ 0x1C002AE68
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C002AEF4 (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ??_E?$Set@VDMMVIDPN@@@@UEAAPEAXI@Z @ 0x1C002B490 (--_E-$Set@VDMMVIDPN@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Queue<DMMVIDPN>::~Queue<DMMVIDPN>(_QWORD *a1)
{
  *a1 = &Set<DMMVIDPN>::`vftable';
  a1[1] = &DoublyLinkedList<DMMVIDPN>::`vftable';
  return DoublyLinkedList<DMMVIDPN>::Clear();
}
