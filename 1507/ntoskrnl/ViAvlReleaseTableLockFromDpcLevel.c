/*
 * XREFs of ViAvlReleaseTableLockFromDpcLevel @ 0x1400259C0
 * Callers:
 *     VfAvlCleanupLockContext @ 0x1400257E0 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x140025810 (VfAvlLookupTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x14002591C (VfAvlDeleteTreeNode.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1400259F8 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     VfAvlInsertReservedTreeNode @ 0x140153FC4 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlEnumerateNodes @ 0x14074A940 (VfAvlEnumerateNodes.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall ViAvlReleaseTableLockFromDpcLevel(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rcx
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (volatile signed __int32 *)(a1 + 128);
  if ( (*(_BYTE *)(a2 + 9) & 4) != 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      result = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
    else
      *v2 = 0;
  }
  else if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v2, retaddr);
  }
  else
  {
    _InterlockedAnd(v2, 0xBFFFFFFF);
    _InterlockedDecrement(v2);
  }
  *(_BYTE *)(a2 + 9) &= ~2u;
  *(_QWORD *)a2 = 0LL;
  return result;
}
