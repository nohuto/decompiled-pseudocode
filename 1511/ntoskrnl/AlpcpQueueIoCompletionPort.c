/*
 * XREFs of AlpcpQueueIoCompletionPort @ 0x1400BC0D4
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14007F570 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404069A0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpAssociateIoCompletionPort @ 0x14044FDB4 (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpSignalPortAndUnlock @ 0x1404832E0 (AlpcpSignalPortAndUnlock.c)
 *     AlpcpAdjustCompletionListConcurrencyCount @ 0x140483368 (AlpcpAdjustCompletionListConcurrencyCount.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     IoSetIoCompletionEx2 @ 0x140093370 (IoSetIoCompletionEx2.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall AlpcpQueueIoCompletionPort(__int64 *a1, char a2, char a3, unsigned __int8 a4)
{
  __int64 v4; // rdi
  _QWORD *v9; // r9
  __int64 v10; // rsi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF

  v4 = a1[6];
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v4, &LockHandle);
  if ( *(_DWORD *)(v4 + 12) >= *(_DWORD *)(v4 + 8) )
  {
    v10 = 0LL;
    if ( a2 )
      ++*(_DWORD *)(v4 + 20);
    else
      ++*(_DWORD *)(v4 + 16);
  }
  else
  {
    v9 = *(_QWORD **)(v4 + 32);
    if ( v9 )
      *(_QWORD *)(v4 + 32) = *v9;
    v10 = v9[1];
    ++*(_DWORD *)(v4 + 12);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( a3 )
  {
    if ( _InterlockedCompareExchange64(a1 + 44, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a1 + 44);
    KeAbPostRelease((ULONG_PTR)(a1 + 44));
  }
  if ( v10 )
    IoSetIoCompletionEx2(a1[4], a1[5], -(__int64)(a2 != 0), 0, 0LL, 0, v10, a4);
}
