/*
 * XREFs of ViLookasideAdd @ 0x14074B81C
 * Callers:
 *     VerifierExInitializeLookasideListEx @ 0x14074B434 (VerifierExInitializeLookasideListEx.c)
 *     ViLookasideTrackList @ 0x14074BA1C (ViLookasideTrackList.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x1400257A0 (VfPoolDelayFreeIfPossible.c)
 *     VfAvlCleanupLockContext @ 0x1400257E0 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x140025810 (VfAvlLookupTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x14002591C (VfAvlDeleteTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x140025AC8 (VfAvlInitializeLockContext.c)
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     VfAvlInsertReservedTreeNode @ 0x140153FC4 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlReserveNode @ 0x140154068 (VfAvlReserveNode.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall ViLookasideAdd(ULONG_PTR a1)
{
  unsigned int v1; // ebx
  unsigned __int64 *v3; // rbp
  _SLIST_ENTRY *v4; // rdi
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  if ( ViLookasideInitialized )
  {
    v3 = VfAvlReserveNode(ViLookasideAvl, a1, 0LL);
    if ( v3 )
    {
      v4 = 0LL;
      VfAvlInitializeLockContext((__int64)v5, 0);
      if ( VfAvlLookupTreeNode(ViLookasideAvl, (__int64)v5, a1, 0LL) )
      {
        if ( !ViLookasideAllocationFailures && !ViLookasideAlreadyLoadedDrivers )
          VerifierBugCheckIfAppropriate(0xC4u, 0xCAuLL, a1, 0LL, 0LL);
        v4 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode(ViLookasideAvl, (__int64)v5, a1, 0LL);
      }
      VfAvlInsertReservedTreeNode((__int64)ViLookasideAvl, (__int64)v5, v3);
      VfAvlCleanupLockContext((__int64)v5);
      if ( v4 )
      {
        if ( dword_14076326C == 1 )
        {
          ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v4);
        }
        else
        {
          LOBYTE(v1) = KeGetCurrentIrql() != 2;
          VfPoolDelayFreeIfPossible(v4, v1);
        }
      }
    }
    else
    {
      _InterlockedExchange(&ViLookasideAllocationFailures, 1);
    }
  }
}
