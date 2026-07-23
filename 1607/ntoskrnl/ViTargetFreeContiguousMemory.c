/*
 * XREFs of ViTargetFreeContiguousMemory @ 0x14071049C
 * Callers:
 *     VerifierMmFreeContiguousMemory @ 0x14071BD84 (VerifierMmFreeContiguousMemory.c)
 *     VerifierMmFreeContiguousMemorySpecifyCache @ 0x14071BDB4 (VerifierMmFreeContiguousMemorySpecifyCache.c)
 *     VerifierMmFreeNonCachedMemory @ 0x14071BE04 (VerifierMmFreeNonCachedMemory.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1400825CC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x140082748 (VfAvlInitializeLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14012F574 (VfAvlLookupTreeNode.c)
 *     ViTargetFreeContiguousMemoryFromNode @ 0x14071052C (ViTargetFreeContiguousMemoryFromNode.c)
 *     ViTargetUpdateTreeAllowed @ 0x140710818 (ViTargetUpdateTreeAllowed.c)
 *     VfAvlEnumerateNodes @ 0x1407168E0 (VfAvlEnumerateNodes.c)
 */

unsigned __int64 __fastcall ViTargetFreeContiguousMemory(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  int v4; // edx
  unsigned __int64 v5; // r8
  PVOID v6; // rax
  __int64 v7; // rcx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  result = ViTargetUpdateTreeAllowed(a1, a2, a1);
  if ( (_DWORD)result )
  {
    VfAvlInitializeLockContext((__int64)v8, 0);
    v6 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)v8, v5, (unsigned int)(v4 + 1));
    if ( !v6 || !(unsigned int)ViTargetFreeContiguousMemoryFromNode(a2, v6) )
      VfAvlEnumerateNodes(v7, v8, ViTargetFreeContiguousMemoryCallback, a2);
    return VfAvlCleanupLockContext((__int64)v8);
  }
  return result;
}
