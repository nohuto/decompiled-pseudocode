/*
 * XREFs of AlpcpQueueIoCompletionPort @ 0x14011311C
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x14049B070 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpDisconnectPort @ 0x1404A3D10 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessage @ 0x14052BBC4 (AlpcpCancelMessage.c)
 *     AlpcpAssociateIoCompletionPort @ 0x14052CB7C (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpAdjustCompletionListConcurrencyCount @ 0x14052CD28 (AlpcpAdjustCompletionListConcurrencyCount.c)
 * Callees:
 *     IoSetIoCompletionEx2 @ 0x140013590 (IoSetIoCompletionEx2.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

void __fastcall AlpcpQueueIoCompletionPort(__int64 *a1, char a2, char a3, char a4)
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
