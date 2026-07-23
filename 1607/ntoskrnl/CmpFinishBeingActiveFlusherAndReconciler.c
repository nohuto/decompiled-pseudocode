/*
 * XREFs of CmpFinishBeingActiveFlusherAndReconciler @ 0x14054E064
 * Callers:
 *     CmpLoadHiveThread @ 0x14054D948 (CmpLoadHiveThread.c)
 *     CmpSaveKeyByFileCopy @ 0x14060DB48 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     CmpWakeWriteQueueWaiters @ 0x1403F7ED0 (CmpWakeWriteQueueWaiters.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpReleaseWriteQueue @ 0x1404C9704 (CmpReleaseWriteQueue.c)
 */

LONG __fastcall CmpFinishBeingActiveFlusherAndReconciler(__int64 a1)
{
  __int64 v2; // rcx
  struct _KEVENT *v3; // rbx
  __int64 v4; // rcx
  struct _KEVENT *v5; // rdi

  CmpLockRegistry();
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 2848), 1u);
  *(_DWORD *)(a1 + 5488) &= 0xFFFFFFFC;
  v3 = (struct _KEVENT *)CmpReleaseWriteQueue(v2, a1 + 5440);
  v5 = (struct _KEVENT *)CmpReleaseWriteQueue(v4, a1 + 5464);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
  CmpUnlockRegistry();
  CmpWakeWriteQueueWaiters(v3, -1073741823);
  return CmpWakeWriteQueueWaiters(v5, -1073741823);
}
