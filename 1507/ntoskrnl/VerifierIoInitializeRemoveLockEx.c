/*
 * XREFs of VerifierIoInitializeRemoveLockEx @ 0x1407433B8
 * Callers:
 *     <none>
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1400257E0 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x140025AC8 (VfAvlInitializeLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x140153FC4 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlReserveNode @ 0x140154068 (VfAvlReserveNode.c)
 *     IoInitializeRemoveLockEx @ 0x140158C94 (IoInitializeRemoveLockEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1407436A4 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x140743758 (ViRemLockFindSurrogate.c)
 */

void __fastcall VerifierIoInitializeRemoveLockEx(
        struct _IO_REMOVE_LOCK *a1,
        ULONG AllocateTag,
        ULONG MaxLockedMinutes,
        ULONG HighWatermark,
        ULONG RemlockSize)
{
  __int64 Surrogate; // rax
  int v10; // r14d
  _QWORD *v11; // rax
  unsigned __int64 *v12; // rbp
  struct _IO_REMOVE_LOCK *v13; // rcx
  _BYTE v14[16]; // [rsp+30h] [rbp-38h] BYREF

  if ( !ViRemLockInitialized )
    goto LABEL_11;
  Surrogate = ViRemLockFindSurrogate();
  if ( Surrogate )
  {
    VerifierBugCheckIfAppropriate(0xC4u, 0xD7uLL, Surrogate + 16, (ULONG_PTR)a1, 0LL);
    _InterlockedAdd(&ViRemLockReusedCount, 1u);
    ViRemLockDeleteFirstTreeNode(a1, RemlockSize);
  }
  v10 = 0;
  if ( (MmVerifierData & 0x10) == 0 )
    goto LABEL_11;
  v11 = VfAvlReserveNode(&ViRemLockAvl, (__int64)a1, RemlockSize);
  v12 = v11;
  if ( !v11 )
  {
    _InterlockedExchange(&ViRemLockAllocationFailures, 1);
LABEL_11:
    pXdvIoInitializeRemoveLockEx(a1, AllocateTag, MaxLockedMinutes, HighWatermark, RemlockSize);
    return;
  }
  v13 = (struct _IO_REMOVE_LOCK *)(v11 + 2);
  if ( RemlockSize == 120 )
  {
    memset(v13, 0, 0x78uLL);
  }
  else
  {
    pXdvIoInitializeRemoveLockEx(v13, AllocateTag, MaxLockedMinutes, HighWatermark, 0x78u);
    v10 = 1;
  }
  VfAvlInitializeLockContext((__int64)v14, 0);
  VfAvlInsertReservedTreeNode((__int64)&ViRemLockAvl, (__int64)v14, v12);
  VfAvlCleanupLockContext((__int64)v14);
  if ( !v10 )
    goto LABEL_11;
}
