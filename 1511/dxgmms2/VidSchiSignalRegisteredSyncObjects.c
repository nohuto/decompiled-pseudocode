/*
 * XREFs of VidSchiSignalRegisteredSyncObjects @ 0x1C0013EBC
 * Callers:
 *     VidSchiMarkDeviceAsError @ 0x1C0013E38 (VidSchiMarkDeviceAsError.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000C8B0 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x1C0021180 (VidSchiPropagateCrossAdapterSignal.c)
 */

void __fastcall VidSchiSignalRegisteredSyncObjects(__int64 a1, char a2)
{
  __int64 **v4; // rsi
  __int64 *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdi
  bool v8; // zf
  volatile signed __int32 *v9; // rax
  __int64 v10; // rbx
  struct _KLOCK_QUEUE_HANDLE v11; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-20h] BYREF

  if ( !a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 1824LL), &LockHandle);
  v4 = (__int64 **)(a1 + 136);
  while ( *v4 != (__int64 *)v4 )
  {
    v5 = *v4;
    v6 = **v4;
    if ( (__int64 **)(*v4)[1] != v4 || *(__int64 **)(v6 + 8) != v5 )
      __fastfail(3u);
    *v4 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = v4;
    v7 = v5[2];
    if ( !*(_BYTE *)(v7 + 28) )
    {
      v8 = *(_BYTE *)(v7 + 29) == 0;
      v9 = *(volatile signed __int32 **)(v7 + 56);
      *(_BYTE *)(v7 + 28) = 1;
      if ( v8 )
        _InterlockedExchangeAdd(v9, 0x3FFFFFFFu);
      else
        *(_QWORD *)v9 = -1LL;
      VidSchiUnwaitMonitoredFences(*(_QWORD *)(v7 + 8));
      if ( *(_BYTE *)(v7 + 27) )
      {
        v10 = *(_QWORD *)(v7 + 168);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 8), &v11);
        *(_BYTE *)(v10 + 32) = 1;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v11);
        VidSchiPropagateCrossAdapterSignal(v7);
      }
    }
    v5[1] = 0LL;
    *v5 = 0LL;
  }
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
