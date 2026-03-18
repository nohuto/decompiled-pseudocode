/*
 * XREFs of VidSchTimeoutSyncObject @ 0x1C0014608
 * Callers:
 *     VidSchDestroySyncObject @ 0x1C003ACE0 (VidSchDestroySyncObject.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000C8B0 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiUnblockUnorderedWaiter @ 0x1C00130A0 (VidSchiUnblockUnorderedWaiter.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x1C0021180 (VidSchiPropagateCrossAdapterSignal.c)
 */

__int64 __fastcall VidSchTimeoutSyncObject(__int64 a1)
{
  volatile signed __int32 *v3; // rax
  __int64 v4; // rbx
  struct _KLOCK_QUEUE_HANDLE *v5; // rcx
  int v6; // eax
  volatile signed __int32 *v7; // rax
  struct _KLOCK_QUEUE_HANDLE v8; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v9; // [rsp+38h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 8) + 1824LL), &LockHandle);
  if ( *(_DWORD *)(a1 + 36) )
  {
    v6 = *(_DWORD *)(a1 + 40);
    if ( v6 == 2 )
    {
      VidSchiUnblockUnorderedWaiter(a1, 1u);
      goto LABEL_3;
    }
    if ( v6 == 4 && !*(_BYTE *)(a1 + 28) )
    {
      v7 = *(volatile signed __int32 **)(a1 + 56);
      *(_BYTE *)(a1 + 28) = 1;
      if ( *(_BYTE *)(a1 + 29) )
        *(_QWORD *)v7 = -1LL;
      else
        _InterlockedExchangeAdd(v7, 0x3FFFFFFFu);
      VidSchiUnwaitMonitoredFences(*(_QWORD *)(a1 + 8));
      if ( *(_BYTE *)(a1 + 27) )
      {
        v4 = *(_QWORD *)(a1 + 168);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 8), &v9);
        v5 = &v9;
        goto LABEL_10;
      }
    }
  }
  else if ( *(_DWORD *)(a1 + 40) == 4 && !*(_BYTE *)(a1 + 28) )
  {
    v3 = *(volatile signed __int32 **)(a1 + 56);
    *(_BYTE *)(a1 + 28) = 1;
    if ( *(_BYTE *)(a1 + 29) )
      *(_QWORD *)v3 = -1LL;
    else
      _InterlockedExchangeAdd(v3, 0x3FFFFFFFu);
    VidSchiUnwaitMonitoredFences(*(_QWORD *)(a1 + 8));
    if ( *(_BYTE *)(a1 + 27) )
    {
      v4 = *(_QWORD *)(a1 + 168);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 8), &v8);
      v5 = &v8;
LABEL_10:
      *(_BYTE *)(v4 + 32) = 1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(v5);
      VidSchiPropagateCrossAdapterSignal(a1);
    }
  }
LABEL_3:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
