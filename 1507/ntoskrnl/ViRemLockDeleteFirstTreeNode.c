/*
 * XREFs of ViRemLockDeleteFirstTreeNode @ 0x1407436A4
 * Callers:
 *     VerifierIoInitializeRemoveLockEx @ 0x1407433B8 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockDeleteMemoryRange @ 0x1407435AC (VfRemLockDeleteMemoryRange.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x1400257A0 (VfPoolDelayFreeIfPossible.c)
 *     VfAvlCleanupLockContext @ 0x1400257E0 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x140025810 (VfAvlLookupTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x14002591C (VfAvlDeleteTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x140025AC8 (VfAvlInitializeLockContext.c)
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 */

__int64 ViRemLockDeleteFirstTreeNode()
{
  unsigned int v0; // ebx
  _SLIST_ENTRY *v1; // rdi
  unsigned __int64 v2; // r8
  __int64 v3; // r9
  __int64 *v4; // rax
  __int64 *v5; // rsi
  unsigned __int8 CurrentIrql; // cl
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  v0 = 0;
  v1 = 0LL;
  VfAvlInitializeLockContext((__int64)v8, 0);
  v4 = (__int64 *)VfAvlLookupTreeNode(&ViRemLockAvl, (__int64)v8, v2, v3);
  v5 = v4;
  if ( v4 )
    v1 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode(&ViRemLockAvl, (__int64)v8, *v4, 0LL);
  VfAvlCleanupLockContext((__int64)v8);
  if ( !v5 )
    return 0LL;
  if ( v1 )
  {
    if ( dword_14076328C == 1 )
    {
      ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v1);
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      LOBYTE(v0) = CurrentIrql != 2;
      VfPoolDelayFreeIfPossible(v1, v0);
    }
  }
  return 1LL;
}
