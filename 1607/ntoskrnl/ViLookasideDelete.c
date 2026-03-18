/*
 * XREFs of ViLookasideDelete @ 0x140717728
 * Callers:
 *     VerifierExDeleteLookasideListEx @ 0x1407171F0 (VerifierExDeleteLookasideListEx.c)
 *     VerifierExDeleteNPagedLookasideList @ 0x140717210 (VerifierExDeleteNPagedLookasideList.c)
 *     VerifierExDeletePagedLookasideList @ 0x140717230 (VerifierExDeletePagedLookasideList.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F4A4 (ExFreeToNPagedLookasideList.c)
 *     VfAvlCleanupLockContext @ 0x14008446C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1400845E8 (VfAvlInitializeLockContext.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14012EF04 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x14012EF54 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14012F004 (VfAvlLookupTreeNode.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C2E8 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall ViLookasideDelete(unsigned __int64 a1)
{
  struct _SLIST_ENTRY *v2; // rbx
  _BYTE v3[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( ViLookasideInitialized )
  {
    v2 = 0LL;
    VfAvlInitializeLockContext((__int64)v3, 0);
    if ( VfAvlLookupTreeNode(ViLookasideAvl, (__int64)v3, a1, 0LL) )
    {
      v2 = (struct _SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)ViLookasideAvl, (__int64)v3, a1, 0LL);
    }
    else if ( !ViLookasideAllocationFailures && !ViLookasideAlreadyLoadedDrivers )
    {
      VerifierBugCheckIfAppropriate(0xC4u, 0xCBuLL, a1, 0LL, 0LL);
    }
    VfAvlCleanupLockContext((__int64)v3);
    if ( v2 )
    {
      if ( dword_14072C2F8 == 1 )
        ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v2);
      else
        VfUtilFreePoolCheckIRQL(v2);
    }
  }
}
