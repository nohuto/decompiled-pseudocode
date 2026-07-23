/*
 * XREFs of ViDevObjRemove @ 0x140743254
 * Callers:
 *     VfIoDeleteDevice @ 0x140742FD4 (VfIoDeleteDevice.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x1400257A0 (VfPoolDelayFreeIfPossible.c)
 *     VfAvlCleanupLockContext @ 0x1400257E0 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x140025810 (VfAvlLookupTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x14002591C (VfAvlDeleteTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x140025AC8 (VfAvlInitializeLockContext.c)
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall ViDevObjRemove(unsigned __int64 a1)
{
  unsigned int v1; // ebx
  _SLIST_ENTRY *v3; // rdi
  _DWORD *v4; // rax
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  if ( ViDevObjInitialized )
  {
    v3 = 0LL;
    VfAvlInitializeLockContext((__int64)v5, 0);
    v4 = VfAvlLookupTreeNode(ViDevObjAvl, (__int64)v5, a1, 0LL);
    if ( v4 )
    {
      if ( (v4[4] & 1) != 0 && (MmVerifierData & 0x800) != 0 )
        VerifierBugCheckIfAppropriate(0xC4u, 0xDBuLL, a1, 0LL, 0LL);
      v3 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode(ViDevObjAvl, (__int64)v5, a1, 0LL);
    }
    VfAvlCleanupLockContext((__int64)v5);
    if ( v3 )
    {
      if ( dword_1407632AC == 1 )
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
