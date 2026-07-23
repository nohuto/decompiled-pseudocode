/*
 * XREFs of ViLookasideDelete @ 0x1406C8D68
 * Callers:
 *     VerifierExDeleteLookasideListEx @ 0x1406C8848 (VerifierExDeleteLookasideListEx.c)
 *     VerifierExDeleteNPagedLookasideList @ 0x1406C8868 (VerifierExDeleteNPagedLookasideList.c)
 *     VerifierExDeletePagedLookasideList @ 0x1406C8888 (VerifierExDeletePagedLookasideList.c)
 * Callees:
 *     VfAvlFreeNodeNoLock @ 0x140002108 (VfAvlFreeNodeNoLock.c)
 *     VfAvlLookupTreeNode @ 0x140002178 (VfAvlLookupTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x140002274 (VfAvlDeleteTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x140002454 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1400025D0 (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall ViLookasideDelete(ULONG_PTR a1)
{
  _SLIST_ENTRY *v2; // rbx
  _BYTE v3[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( ViLookasideInitialized )
  {
    v2 = 0LL;
    VfAvlInitializeLockContext((__int64)v3, 0);
    if ( VfAvlLookupTreeNode(ViLookasideAvl, (__int64)v3, a1, 0LL) )
    {
      v2 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode(ViLookasideAvl, (__int64)v3, a1, 0LL);
    }
    else if ( !ViLookasideAllocationFailures && !ViLookasideAlreadyLoadedDrivers )
    {
      VerifierBugCheckIfAppropriate(0xC4u, 0xCBuLL, a1, 0LL, 0LL);
    }
    VfAvlCleanupLockContext((__int64)v3);
    if ( v2 )
      VfAvlFreeNodeNoLock((__int64)ViLookasideAvl, v2);
  }
}
