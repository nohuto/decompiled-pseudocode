/*
 * XREFs of ViLookasideAdd @ 0x14071761C
 * Callers:
 *     VerifierExInitializeLookasideListEx @ 0x140717250 (VerifierExInitializeLookasideListEx.c)
 *     ViLookasideTrackList @ 0x1407177EC (ViLookasideTrackList.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F4A4 (ExFreeToNPagedLookasideList.c)
 *     VfAvlReserveNode @ 0x1400842D8 (VfAvlReserveNode.c)
 *     VfAvlCleanupLockContext @ 0x14008446C (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x14008449C (VfAvlInsertReservedTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x1400845E8 (VfAvlInitializeLockContext.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14012EF04 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x14012EF54 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14012F004 (VfAvlLookupTreeNode.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C2E8 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall ViLookasideAdd(ULONG_PTR a1)
{
  char *v2; // rsi
  struct _SLIST_ENTRY *v3; // rbx
  _BYTE v4[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( ViLookasideInitialized )
  {
    v2 = VfAvlReserveNode(ViLookasideAvl, a1, 0LL);
    if ( v2 )
    {
      v3 = 0LL;
      VfAvlInitializeLockContext((__int64)v4, 0);
      if ( VfAvlLookupTreeNode(ViLookasideAvl, (__int64)v4, a1, 0LL) )
      {
        if ( !ViLookasideAllocationFailures && !ViLookasideAlreadyLoadedDrivers )
          VerifierBugCheckIfAppropriate(0xC4u, 0xCAuLL, a1, 0LL, 0LL);
        v3 = (struct _SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)ViLookasideAvl, (__int64)v4, a1, 0LL);
      }
      VfAvlInsertReservedTreeNode((__int64)ViLookasideAvl, (__int64)v4, v2);
      VfAvlCleanupLockContext((__int64)v4);
      if ( v3 )
      {
        if ( dword_14072C2F8 == 1 )
          ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v3);
        else
          VfUtilFreePoolCheckIRQL(v3);
      }
    }
    else
    {
      _InterlockedExchange(&ViLookasideAllocationFailures, 1);
    }
  }
}
