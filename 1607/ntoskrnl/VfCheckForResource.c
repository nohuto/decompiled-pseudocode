/*
 * XREFs of VfCheckForResource @ 0x1407181D0
 * Callers:
 *     ExpCheckForResource @ 0x14022DBC8 (ExpCheckForResource.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F4A4 (ExFreeToNPagedLookasideList.c)
 *     VfAvlCleanupLockContext @ 0x14008446C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1400845E8 (VfAvlInitializeLockContext.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14012EF04 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x14012EF54 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14012F004 (VfAvlLookupTreeNode.c)
 *     VfPoolIsInternalFree @ 0x1402238E4 (VfPoolIsInternalFree.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C2E8 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfCheckForResource(unsigned __int64 a1, __int64 a2)
{
  ULONG_PTR *v5; // rax
  ULONG_PTR *v6; // rbx
  struct _SLIST_ENTRY *v7; // rbx
  _BYTE v8[24]; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR v9; // [rsp+60h] [rbp+18h] BYREF

  if ( !ViResourceInitialized )
    return 0LL;
  if ( !(unsigned int)VfPoolIsInternalFree() && qword_14072C1E8 )
  {
    v9 = 0LL;
    VfAvlInitializeLockContext((__int64)v8, 1);
    v5 = (ULONG_PTR *)VfAvlLookupTreeNode(&ViResourceAvl, (__int64)v8, a1, a2);
    v6 = v5;
    if ( v5 )
    {
      if ( !ViResourcesAlreadyLoadedDrivers )
        VerifierBugCheckIfAppropriate(0xC4u, 0xD2uLL, *v5, a1, a2);
      v9 = *v6;
    }
    VfAvlCleanupLockContext((__int64)v8);
    if ( v9 )
    {
      _InterlockedIncrement(&ViResourceStaleNodes);
      VfAvlInitializeLockContext((__int64)v8, 0);
      v7 = (struct _SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)&ViResourceAvl, (__int64)v8, (unsigned __int64)&v9, 0LL);
      VfAvlCleanupLockContext((__int64)v8);
      if ( v7 )
      {
        if ( dword_14072C200 == 1 )
          ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v7);
        else
          VfUtilFreePoolCheckIRQL(v7);
      }
      return 0LL;
    }
  }
  return 1LL;
}
