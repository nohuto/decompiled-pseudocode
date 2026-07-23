/*
 * XREFs of ViRemLockDeleteFirstTreeNode @ 0x1406C1E30
 * Callers:
 *     VerifierIoInitializeRemoveLockEx @ 0x1406C1B60 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockDeleteMemoryRange @ 0x1406C1D54 (VfRemLockDeleteMemoryRange.c)
 * Callees:
 *     VfAvlFreeNodeNoLock @ 0x140002108 (VfAvlFreeNodeNoLock.c)
 *     VfAvlLookupTreeNode @ 0x140002178 (VfAvlLookupTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x140002274 (VfAvlDeleteTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x140002454 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1400025D0 (VfAvlInitializeLockContext.c)
 */

__int64 ViRemLockDeleteFirstTreeNode()
{
  _SLIST_ENTRY *v0; // rbx
  unsigned __int64 v1; // r8
  __int64 v2; // r9
  __int64 *v3; // rax
  __int64 *v4; // rdi
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  v0 = 0LL;
  VfAvlInitializeLockContext((__int64)v6, 0);
  v3 = (__int64 *)VfAvlLookupTreeNode(&ViRemLockAvl, (__int64)v6, v1, v2);
  v4 = v3;
  if ( v3 )
    v0 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode(&ViRemLockAvl, (__int64)v6, *v3, 0LL);
  VfAvlCleanupLockContext((__int64)v6);
  if ( !v4 )
    return 0LL;
  if ( v0 )
    VfAvlFreeNodeNoLock((__int64)&ViRemLockAvl, v0);
  return 1LL;
}
