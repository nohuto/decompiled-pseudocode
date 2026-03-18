/*
 * XREFs of ?Clear@?$Queue@VDMMVIDPN@@@@UEAAXXZ @ 0x1C002B780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Queue<DMMVIDPN>::Clear(__int64 a1)
{
  DoublyLinkedList<DMMVIDPN>::Clear(a1 + 8);
}
