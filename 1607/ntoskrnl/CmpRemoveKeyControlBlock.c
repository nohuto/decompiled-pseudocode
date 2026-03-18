/*
 * XREFs of CmpRemoveKeyControlBlock @ 0x1403FB928
 * Callers:
 *     CmpDiscardKcb @ 0x14000ADEC (CmpDiscardKcb.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpRemoveKeyControlBlock(__int64 a1)
{
  return CmpRemoveKeyHash(*(_QWORD *)(a1 + 24), a1 + 8);
}
