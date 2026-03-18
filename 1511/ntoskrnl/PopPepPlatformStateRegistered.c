/*
 * XREFs of PopPepPlatformStateRegistered @ 0x1401EDE44
 * Callers:
 *     PopFxEnablePlatformStates @ 0x1401EA1CC (PopFxEnablePlatformStates.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PopPepUpdateIdleStateRefCount @ 0x14012605C (PopPepUpdateIdleStateRefCount.c)
 *     PopPepInitializeVetoMasks @ 0x1401EDA28 (PopPepInitializeVetoMasks.c)
 */

__int64 __fastcall PopPepPlatformStateRegistered(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rbp
  __int64 v3; // rax
  signed __int8 v4; // cf
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 i; // r14
  KIRQL v14; // al
  bool v15; // di

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&PopPepVetoMaskReadyLock, 0LL, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&PopPepVetoMaskReadyLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&PopPepVetoMaskReadyLock, v3, (ULONG_PTR)&PopPepVetoMaskReadyLock);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  v6 = KeAbPreAcquire((ULONG_PTR)&PopPepDeviceListLock, 0LL, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&PopPepDeviceListLock, 0LL);
  v7 = v6;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&PopPepDeviceListLock, v6, (ULONG_PTR)&PopPepDeviceListLock);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  if ( PopPepPlatformState )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopPepDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepVetoMaskReadyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopPepVetoMaskReadyLock);
    KeAbPostRelease((ULONG_PTR)&PopPepVetoMaskReadyLock);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  else
  {
    PopPepPlatformState = PpmPlatformStates + 64;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopPepDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
    v9 = KeAbPreAcquire((ULONG_PTR)&PopPepDeviceListLock, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&PopPepDeviceListLock, v9, (ULONG_PTR)&PopPepDeviceListLock);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    if ( (_DWORD)v2 )
    {
      v10 = PopPepPlatformState;
      v11 = 0LL;
      v12 = v2;
      do
      {
        *(_DWORD *)(v11 + v10 + 320) = 1;
        v11 += 384LL;
        --v12;
      }
      while ( v12 );
    }
    for ( i = PopPepDeviceList; (__int64 *)i != &PopPepDeviceList; i = *(_QWORD *)i )
    {
      if ( *(_BYTE *)(i + 124) )
      {
        v14 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(i + 64));
        v15 = *(_DWORD *)(i + 160) == 1;
        ExReleaseSpinLockShared((PEX_SPIN_LOCK)(i + 64), v14);
        if ( v15 )
          PopPepInitializeVetoMasks(i, v2);
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepVetoMaskReadyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopPepVetoMaskReadyLock);
    KeAbPostRelease((ULONG_PTR)&PopPepVetoMaskReadyLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return PopPepUpdateIdleStateRefCount((1 << v2) - 1, 0, 0LL);
  }
}
