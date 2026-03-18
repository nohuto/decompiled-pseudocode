/*
 * XREFs of ViTargetFreeContiguousMemory @ 0x140745C64
 * Callers:
 *     VerifierMmFreeContiguousMemory @ 0x14075378C (VerifierMmFreeContiguousMemory.c)
 *     VerifierMmFreeContiguousMemorySpecifyCache @ 0x1407537BC (VerifierMmFreeContiguousMemorySpecifyCache.c)
 *     VerifierMmFreeNonCachedMemory @ 0x14075380C (VerifierMmFreeNonCachedMemory.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1400257E0 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x140025810 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x140025AC8 (VfAvlInitializeLockContext.c)
 *     ViTargetFreeContiguousMemoryFromNode @ 0x140745CF4 (ViTargetFreeContiguousMemoryFromNode.c)
 *     ViTargetUpdateTreeAllowed @ 0x140746018 (ViTargetUpdateTreeAllowed.c)
 *     VfAvlEnumerateNodes @ 0x14074A940 (VfAvlEnumerateNodes.c)
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
