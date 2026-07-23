/*
 * XREFs of VfCheckForResource @ 0x14074C420
 * Callers:
 *     ExpCheckForResource @ 0x140263DEC (ExpCheckForResource.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x1400257A0 (VfPoolDelayFreeIfPossible.c)
 *     VfAvlCleanupLockContext @ 0x1400257E0 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x140025810 (VfAvlLookupTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x14002591C (VfAvlDeleteTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x140025AC8 (VfAvlInitializeLockContext.c)
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfCheckForResource(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD **v7; // rax
  ULONG_PTR *v8; // rdi
  _SLIST_ENTRY *v9; // rdi
  _BYTE v10[24]; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR v11; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  if ( ViResourceInitialized )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = (struct _KTHREAD **)&unk_140356F68;
    do
    {
      if ( CurrentThread == *v7 )
        return 1LL;
      v7 += 8;
    }
    while ( (__int64)v7 < (__int64)&PcwpSynchCounterSet );
    if ( !qword_1407631B0 )
      return 1LL;
    v11 = 0LL;
    VfAvlInitializeLockContext((__int64)v10, 1);
    v8 = (ULONG_PTR *)VfAvlLookupTreeNode(&ViResourceAvl, (__int64)v10, a1, a2);
    if ( v8 )
    {
      if ( !ViResourcesAlreadyLoadedDrivers )
        VerifierBugCheckIfAppropriate(0xC4u, 0xD2uLL, *v8, a1, a2);
      v11 = *v8;
    }
    VfAvlCleanupLockContext((__int64)v10);
    if ( !v11 )
      return 1LL;
    _InterlockedIncrement(&ViResourceStaleNodes);
    VfAvlInitializeLockContext((__int64)v10, 0);
    v9 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode(&ViResourceAvl, (__int64)v10, (__int64)&v11, 0LL);
    VfAvlCleanupLockContext((__int64)v10);
    if ( v9 )
    {
      if ( dword_1407631C4 == 1 )
      {
        ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v9);
      }
      else
      {
        LOBYTE(v2) = KeGetCurrentIrql() != 2;
        VfPoolDelayFreeIfPossible(v9, v2);
      }
    }
  }
  return 0LL;
}
