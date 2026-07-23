/*
 * XREFs of CmpRemoveKeyControlBlock @ 0x1403FA7E8
 * Callers:
 *     CmpDiscardKcb @ 0x14000A96C (CmpDiscardKcb.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpRemoveKeyControlBlock(__int64 a1)
{
  return CmpRemoveKeyHash(*(_QWORD *)(a1 + 24), a1 + 8);
}
