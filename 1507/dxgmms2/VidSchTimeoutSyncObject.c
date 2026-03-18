/*
 * XREFs of VidSchTimeoutSyncObject @ 0x1C001D4A4
 * Callers:
 *     VidSchDestroySyncObject @ 0x1C0032480 (VidSchDestroySyncObject.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C00059CC (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x1C0019518 (VidSchiPropagateCrossAdapterSignal.c)
 *     VidSchiUnblockUnorderedWaiter @ 0x1C001B0A8 (VidSchiUnblockUnorderedWaiter.c)
 */

__int64 __fastcall VidSchTimeoutSyncObject(__int64 a1)
{
  volatile signed __int32 *v2; // rax
  __int64 v3; // rbx
  struct _KLOCK_QUEUE_HANDLE *v4; // rcx
  int v5; // eax
  volatile signed __int32 *v6; // rax
  struct _KLOCK_QUEUE_HANDLE v8; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v9; // [rsp+38h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 8) + 1872LL), &LockHandle);
  if ( *(_DWORD *)(a1 + 36) )
  {
    v5 = *(_DWORD *)(a1 + 40);
    if ( v5 == 2 )
    {
      VidSchiUnblockUnorderedWaiter(a1, 1);
      goto LABEL_19;
    }
    if ( v5 == 4 && !*(_BYTE *)(a1 + 28) )
    {
      v6 = *(volatile signed __int32 **)(a1 + 56);
      *(_BYTE *)(a1 + 28) = 1;
      if ( *(_BYTE *)(a1 + 29) )
        *(_QWORD *)v6 = -1LL;
      else
        _InterlockedExchangeAdd(v6, 0x3FFFFFFFu);
      VidSchiUnwaitMonitoredFences(*(_QWORD *)(a1 + 8));
      if ( *(_BYTE *)(a1 + 27) )
      {
        v3 = *(_QWORD *)(a1 + 168);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 8), &v9);
        v4 = &v9;
        goto LABEL_9;
      }
    }
  }
  else if ( *(_DWORD *)(a1 + 40) == 4 && !*(_BYTE *)(a1 + 28) )
  {
    v2 = *(volatile signed __int32 **)(a1 + 56);
    *(_BYTE *)(a1 + 28) = 1;
    if ( *(_BYTE *)(a1 + 29) )
      *(_QWORD *)v2 = -1LL;
    else
      _InterlockedExchangeAdd(v2, 0x3FFFFFFFu);
    VidSchiUnwaitMonitoredFences(*(_QWORD *)(a1 + 8));
    if ( *(_BYTE *)(a1 + 27) )
    {
      v3 = *(_QWORD *)(a1 + 168);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 8), &v8);
      v4 = &v8;
LABEL_9:
      *(_BYTE *)(v3 + 32) = 1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(v4);
      VidSchiPropagateCrossAdapterSignal((_QWORD *)a1);
    }
  }
LABEL_19:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
