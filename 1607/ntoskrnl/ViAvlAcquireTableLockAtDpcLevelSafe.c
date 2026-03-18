/*
 * XREFs of ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140084560
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x14008449C (VfAvlInsertReservedTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x14012EF54 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14012F004 (VfAvlLookupTreeNode.c)
 *     VfAvlEnumerateNodes @ 0x1407168E0 (VfAvlEnumerateNodes.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14001DD60 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026F70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x140084530 (ViAvlReleaseTableLockFromDpcLevel.c)
 */

void __fastcall ViAvlAcquireTableLockAtDpcLevelSafe(__int64 a1, __int64 a2)
{
  char v4; // al
  volatile LONG *v5; // rcx

  if ( (*(_BYTE *)(a2 + 9) & 2) != 0 && *(_QWORD *)a2 != a1 )
    ViAvlReleaseTableLockFromDpcLevel(*(_QWORD *)a2, a2);
  v4 = *(_BYTE *)(a2 + 9);
  if ( (v4 & 2) == 0 )
  {
    v5 = (volatile LONG *)(a1 + 128);
    if ( (v4 & 4) != 0 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v5);
    else
      ExAcquireSpinLockSharedAtDpcLevel(v5);
    *(_BYTE *)(a2 + 9) |= 2u;
    *(_QWORD *)a2 = a1;
  }
}
