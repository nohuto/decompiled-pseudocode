/*
 * XREFs of ViAvlRaiseIrqlSafe @ 0x1400025A0
 * Callers:
 *     VfAvlLookupTreeNode @ 0x140002178 (VfAvlLookupTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x140002274 (VfAvlDeleteTreeNode.c)
 *     VfAvlInsertReservedTreeNode @ 0x140002484 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlEnumerateNodes @ 0x1406C7F3C (VfAvlEnumerateNodes.c)
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
