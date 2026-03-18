/*
 * XREFs of ?Clear@?$Set@VDMMVIDEOPRESENTTARGET@@@@UEAAXXZ @ 0x1C0033860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Set<DMMVIDEOPRESENTTARGET>::Clear(__int64 a1)
{
  DoublyLinkedList<DMMVIDEOPRESENTSOURCE>::Clear(a1 + 8);
}
