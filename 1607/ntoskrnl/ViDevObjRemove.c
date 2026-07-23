/*
 * XREFs of ViDevObjRemove @ 0x14070DAC0
 * Callers:
 *     VfIoDeleteDevice @ 0x14070D840 (VfIoDeleteDevice.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     VfAvlCleanupLockContext @ 0x1400825CC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x140082748 (VfAvlInitializeLockContext.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14012F474 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x14012F4C4 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14012F574 (VfAvlLookupTreeNode.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall ViDevObjRemove(unsigned __int64 a1)
{
  _SLIST_ENTRY *v2; // rbx
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
      v2 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)ViDevObjAvl, (__int64)v4, a1, 0LL);
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
