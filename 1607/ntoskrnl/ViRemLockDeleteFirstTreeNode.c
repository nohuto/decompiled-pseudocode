/*
 * XREFs of ViRemLockDeleteFirstTreeNode @ 0x14070DEAC
 * Callers:
 *     VerifierIoInitializeRemoveLockEx @ 0x14070DBDC (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockDeleteMemoryRange @ 0x14070DDD0 (VfRemLockDeleteMemoryRange.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F4A4 (ExFreeToNPagedLookasideList.c)
 *     VfAvlCleanupLockContext @ 0x14008446C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1400845E8 (VfAvlInitializeLockContext.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14012EF04 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x14012EF54 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14012F004 (VfAvlLookupTreeNode.c)
 */

__int64 ViRemLockDeleteFirstTreeNode()
{
  struct _SLIST_ENTRY *v0; // rbx
  unsigned __int64 v1; // r8
  __int64 v2; // r9
  unsigned __int64 *v3; // rax
  unsigned __int64 *v4; // rdi
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  v0 = 0LL;
  VfAvlInitializeLockContext((__int64)v6, 0);
  v3 = (unsigned __int64 *)VfAvlLookupTreeNode(&ViRemLockAvl, (__int64)v6, v1, v2);
  v4 = v3;
  if ( v3 )
    v0 = (struct _SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)&ViRemLockAvl, (__int64)v6, *v3, 0LL);
  VfAvlCleanupLockContext((__int64)v6);
  if ( !v4 )
    return 0LL;
  if ( v0 )
  {
    if ( dword_14072C320 == 1 )
      ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v0);
    else
      VfUtilFreePoolCheckIRQL(v0);
  }
  return 1LL;
}
