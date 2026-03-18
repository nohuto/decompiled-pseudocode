/*
 * XREFs of ??1?$Queue@VDMMVIDPN@@@@UEAA@XZ @ 0x1C00328C0
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C0032A18 (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ??_G?$Queue@VDMMVIDPN@@@@UEAAPEAXI@Z @ 0x1C00333F0 (--_G-$Queue@VDMMVIDPN@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Queue<DMMVIDPN>::~Queue<DMMVIDPN>(_QWORD *a1)
{
  *a1 = &Queue<DMMVIDPN>::`vftable';
  a1[1] = &DoublyLinkedList<DMMVIDPN>::`vftable';
  return DoublyLinkedList<DMMVIDPN>::Clear();
}
