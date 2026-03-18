/*
 * XREFs of VidSchTimeoutSyncObject @ 0x1C0011E00
 * Callers:
 *     VidSchDestroySyncObject @ 0x1C00443F0 (VidSchDestroySyncObject.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000B590 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiUnblockUnorderedWaiter @ 0x1C0010B10 (VidSchiUnblockUnorderedWaiter.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x1C00249D4 (VidSchiPropagateCrossAdapterSignal.c)
 */

__int64 __fastcall VidSchTimeoutSyncObject(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  volatile signed __int32 *v6; // rax
  __int64 v7; // rbx
  struct _KLOCK_QUEUE_HANDLE *v8; // rcx
  int v9; // eax
  volatile signed __int32 *v10; // rax
  struct _KLOCK_QUEUE_HANDLE v11; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v12; // [rsp+38h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 8) + 1856LL), &LockHandle);
  if ( *(_DWORD *)(a1 + 36) )
  {
    v9 = *(_DWORD *)(a1 + 40);
    if ( v9 == 2 )
    {
      VidSchiUnblockUnorderedWaiter(a1, 1u);
      goto LABEL_3;
    }
    if ( v9 == 4 && !*(_BYTE *)(a1 + 28) )
    {
      v10 = *(volatile signed __int32 **)(a1 + 56);
      *(_BYTE *)(a1 + 28) = 1;
      if ( *(_BYTE *)(a1 + 29) )
        *(_QWORD *)v10 = -1LL;
      else
        _InterlockedExchangeAdd(v10, 0x3FFFFFFFu);
      VidSchiUnwaitMonitoredFences(*(_QWORD *)(a1 + 8), v2, v3, v4);
      if ( *(_BYTE *)(a1 + 27) )
      {
        v7 = *(_QWORD *)(a1 + 168);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 8), &v12);
        v8 = &v12;
        goto LABEL_10;
      }
    }
  }
  else if ( *(_DWORD *)(a1 + 40) == 4 && !*(_BYTE *)(a1 + 28) )
  {
    v6 = *(volatile signed __int32 **)(a1 + 56);
    *(_BYTE *)(a1 + 28) = 1;
    if ( *(_BYTE *)(a1 + 29) )
      *(_QWORD *)v6 = -1LL;
    else
      _InterlockedExchangeAdd(v6, 0x3FFFFFFFu);
    VidSchiUnwaitMonitoredFences(*(_QWORD *)(a1 + 8), v2, v3, v4);
    if ( *(_BYTE *)(a1 + 27) )
    {
      v7 = *(_QWORD *)(a1 + 168);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 8), &v11);
      v8 = &v11;
LABEL_10:
      *(_BYTE *)(v7 + 32) = 1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(v8);
      VidSchiPropagateCrossAdapterSignal(a1);
    }
  }
LABEL_3:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
