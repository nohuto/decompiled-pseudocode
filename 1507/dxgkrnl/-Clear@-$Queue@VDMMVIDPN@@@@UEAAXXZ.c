/*
 * XREFs of ?Clear@?$Queue@VDMMVIDPN@@@@UEAAXXZ @ 0x1C002B9D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Queue<DMMVIDPN>::Clear(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  DoublyLinkedList<DMMVIDPN>::Clear(a1 + 8, a2, a3, a4);
}
