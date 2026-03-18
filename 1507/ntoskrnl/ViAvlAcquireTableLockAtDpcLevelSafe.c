/*
 * XREFs of ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1400259F8
 * Callers:
 *     VfAvlLookupTreeNode @ 0x140025810 (VfAvlLookupTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x14002591C (VfAvlDeleteTreeNode.c)
 *     VfAvlInsertReservedTreeNode @ 0x140153FC4 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlEnumerateNodes @ 0x14074A940 (VfAvlEnumerateNodes.c)
 * Callees:
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1400259C0 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevel @ 0x140025A3C (ViAvlAcquireTableLockAtDpcLevel.c)
 */

__int64 __fastcall ViAvlAcquireTableLockAtDpcLevelSafe(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a2 + 9) & 2) != 0 && *(_QWORD *)a2 != a1 )
    result = ViAvlReleaseTableLockFromDpcLevel(*(_QWORD *)a2, a2);
  if ( (*(_BYTE *)(a2 + 9) & 2) == 0 )
    return ViAvlAcquireTableLockAtDpcLevel(a1, a2);
  return result;
}
