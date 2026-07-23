/*
 * XREFs of ViLookasideDelete @ 0x14074B940
 * Callers:
 *     VerifierExDeleteLookasideListEx @ 0x14074B3D4 (VerifierExDeleteLookasideListEx.c)
 *     VerifierExDeleteNPagedLookasideList @ 0x14074B3F4 (VerifierExDeleteNPagedLookasideList.c)
 *     VerifierExDeletePagedLookasideList @ 0x14074B414 (VerifierExDeletePagedLookasideList.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x1400257A0 (VfPoolDelayFreeIfPossible.c)
 *     VfAvlCleanupLockContext @ 0x1400257E0 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x140025810 (VfAvlLookupTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x14002591C (VfAvlDeleteTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x140025AC8 (VfAvlInitializeLockContext.c)
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall ViLookasideDelete(ULONG_PTR a1)
{
  unsigned int v1; // ebx
  _SLIST_ENTRY *v3; // rdi
  _BYTE v4[24]; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  if ( ViLookasideInitialized )
  {
    v3 = 0LL;
    VfAvlInitializeLockContext((__int64)v4, 0);
    if ( VfAvlLookupTreeNode(ViLookasideAvl, (__int64)v4, a1, 0LL) )
    {
      v3 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode(ViLookasideAvl, (__int64)v4, a1, 0LL);
    }
    else if ( !ViLookasideAllocationFailures && !ViLookasideAlreadyLoadedDrivers )
    {
      VerifierBugCheckIfAppropriate(0xC4u, 0xCBuLL, a1, 0LL, 0LL);
    }
    VfAvlCleanupLockContext((__int64)v4);
    if ( v3 )
    {
      if ( dword_14076326C == 1 )
      {
        ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v3);
      }
      else
      {
        LOBYTE(v1) = KeGetCurrentIrql() != 2;
        VfPoolDelayFreeIfPossible(v3, v1);
      }
    }
  }
}
