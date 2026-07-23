/*
 * XREFs of ViAvlRaiseIrqlSafe @ 0x140082718
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x1400825FC (VfAvlInsertReservedTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x14012F4C4 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14012F574 (VfAvlLookupTreeNode.c)
 *     VfAvlEnumerateNodes @ 0x1407168E0 (VfAvlEnumerateNodes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViAvlRaiseIrqlSafe(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 9) & 1) == 0 )
  {
    result = KeGetCurrentIrql();
    __writecr8(2uLL);
    *(_BYTE *)(a1 + 9) |= 1u;
    *(_BYTE *)(a1 + 8) = result;
  }
  return result;
}
