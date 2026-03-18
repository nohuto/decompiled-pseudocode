/*
 * XREFs of ViDevObjRemove @ 0x14070DA90
 * Callers:
 *     VfIoDeleteDevice @ 0x14070D810 (VfIoDeleteDevice.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F4A4 (ExFreeToNPagedLookasideList.c)
 *     VfAvlCleanupLockContext @ 0x14008446C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1400845E8 (VfAvlInitializeLockContext.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14012EF04 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x14012EF54 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14012F004 (VfAvlLookupTreeNode.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C2E8 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall ViDevObjRemove(unsigned __int64 a1)
{
  struct _SLIST_ENTRY *v2; // rbx
  _DWORD *v3; // rax
  _BYTE v4[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( ViDevObjInitialized )
  {
    v2 = 0LL;
    VfAvlInitializeLockContext((__int64)v4, 0);
    v3 = VfAvlLookupTreeNode(ViDevObjAvl, (__int64)v4, a1, 0LL);
    if ( v3 )
    {
      if ( (v3[4] & 1) != 0 && (MmVerifierData & 0x800) != 0 )
        VerifierBugCheckIfAppropriate(0xC4u, 0xDBuLL, a1, 0LL, 0LL);
      v2 = (struct _SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)ViDevObjAvl, (__int64)v4, a1, 0LL);
    }
    VfAvlCleanupLockContext((__int64)v4);
    if ( v2 )
    {
      if ( dword_14072C348 == 1 )
        ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v2);
      else
        VfUtilFreePoolCheckIRQL(v2);
    }
  }
}
