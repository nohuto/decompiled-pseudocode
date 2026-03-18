/*
 * XREFs of AlpcpQueueIoCompletionPort @ 0x1400A5470
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14005E910 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpCompleteDispatchMessage @ 0x14044B990 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpAssociateIoCompletionPort @ 0x140472B2C (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpAdjustCompletionListConcurrencyCount @ 0x1404D0BF0 (AlpcpAdjustCompletionListConcurrencyCount.c)
 *     AlpcpSignalPortAndUnlock @ 0x1404D0C84 (AlpcpSignalPortAndUnlock.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     IoSetIoCompletionEx2 @ 0x14007DEC0 (IoSetIoCompletionEx2.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 */

void __fastcall AlpcpQueueIoCompletionPort(__int64 a1, char a2, char a3, unsigned __int8 a4)
{
  __int64 v4; // rdi
  _QWORD *v9; // r9
  __int64 v10; // rsi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 48);
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
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a1 + 352);
    KeAbPostRelease(a1 + 352);
  }
  if ( v10 )
    IoSetIoCompletionEx2(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), -(__int64)(a2 != 0), 0, 0LL, 0, v10, a4);
}
