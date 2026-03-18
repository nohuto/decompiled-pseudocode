/*
 * XREFs of VfCheckForLookaside @ 0x1406C8BF0
 * Callers:
 *     ExpCheckForLookaside @ 0x1402148BC (ExpCheckForLookaside.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x140002178 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x140002454 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1400025D0 (VfAvlInitializeLockContext.c)
 *     VfPoolIsInternalFree @ 0x14020BE28 (VfPoolIsInternalFree.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
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
