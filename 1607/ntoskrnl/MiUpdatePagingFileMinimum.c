/*
 * XREFs of MiUpdatePagingFileMinimum @ 0x1401EEC18
 * Callers:
 *     MiExtendPagingFiles @ 0x14065B078 (MiExtendPagingFiles.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall MiUpdatePagingFileMinimum(__int64 a1, __int64 a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
  *(_QWORD *)(a1 + 16) += a2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
