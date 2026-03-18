/*
 * XREFs of MiUpdatePagingFileMinimum @ 0x140222774
 * Callers:
 *     MiExtendPagingFiles @ 0x1406A50F4 (MiExtendPagingFiles.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 */

void __fastcall MiUpdatePagingFileMinimum(__int64 a1, __int64 a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 192), &LockHandle);
  *(_QWORD *)(a1 + 16) += a2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
