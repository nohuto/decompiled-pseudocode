/*
 * XREFs of VfCheckForLookaside @ 0x140717598
 * Callers:
 *     ExpCheckForLookaside @ 0x14022E358 (ExpCheckForLookaside.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1400825CC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x140082748 (VfAvlInitializeLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14012F574 (VfAvlLookupTreeNode.c)
 *     VfPoolIsInternalFree @ 0x140223710 (VfPoolIsInternalFree.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfCheckForLookaside(unsigned __int64 a1, __int64 a2)
{
  ULONG_PTR *v5; // rax
  _BYTE v6[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( !ViLookasideInitialized )
    return 0LL;
  if ( !(unsigned int)VfPoolIsInternalFree() )
  {
    VfAvlInitializeLockContext((__int64)v6, 1);
    v5 = (ULONG_PTR *)VfAvlLookupTreeNode(ViLookasideAvl, (__int64)v6, a1, a2);
    if ( v5 )
      VerifierBugCheckIfAppropriate(0xC4u, 0xCCuLL, *v5, a1, a2);
    VfAvlCleanupLockContext((__int64)v6);
  }
  return 1LL;
}
