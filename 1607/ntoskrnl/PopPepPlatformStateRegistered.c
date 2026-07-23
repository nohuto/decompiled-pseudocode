/*
 * XREFs of PopPepPlatformStateRegistered @ 0x1402067F4
 * Callers:
 *     PopFxEnablePlatformStates @ 0x1402029D0 (PopFxEnablePlatformStates.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 *     PopPepUpdateIdleStateRefCount @ 0x140130DD8 (PopPepUpdateIdleStateRefCount.c)
 *     PopPepInitializeVetoMasks @ 0x1402063D4 (PopPepInitializeVetoMasks.c)
 */

__int64 __fastcall PopPepPlatformStateRegistered(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rbp
  _BYTE *v3; // rax
  signed __int8 v4; // cf
  _BYTE *v5; // rdi
  _BYTE *v6; // rax
  _BYTE *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 i; // r14
  KIRQL v17; // al
  bool v18; // di
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  --CurrentThread->KernelApcDisable;
  v3 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&PopPepVetoMaskReadyLock, 0LL, 0);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&PopPepVetoMaskReadyLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&PopPepVetoMaskReadyLock, v3, (ULONG_PTR)&PopPepVetoMaskReadyLock);
  if ( v5 )
    v5[26] |= 1u;
  v6 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&PopPepDeviceListLock, 0LL, 0);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&PopPepDeviceListLock, 0LL);
  v7 = v6;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&PopPepDeviceListLock, v6, (ULONG_PTR)&PopPepDeviceListLock);
  if ( v7 )
    v7[26] |= 1u;
  if ( PopPepPlatformState )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopPepDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepVetoMaskReadyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopPepVetoMaskReadyLock);
    KeAbPostRelease((ULONG_PTR)&PopPepVetoMaskReadyLock);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
  }
  else
  {
    PopPepPlatformState = PpmPlatformStates + 64;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopPepDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
    v12 = KeAbPreAcquire((ULONG_PTR)&PopPepDeviceListLock, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&PopPepDeviceListLock, v12, (ULONG_PTR)&PopPepDeviceListLock);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    if ( (_DWORD)v2 )
    {
      v13 = PopPepPlatformState;
      v14 = 0LL;
      v15 = v2;
      do
      {
        *(_DWORD *)(v14 + v13 + 320) = 1;
        v14 += 384LL;
        --v15;
      }
      while ( v15 );
    }
    for ( i = PopPepDeviceList; (__int64 *)i != &PopPepDeviceList; i = *(_QWORD *)i )
    {
      if ( *(_BYTE *)(i + 124) )
      {
        v17 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(i + 64));
        v18 = *(_DWORD *)(i + 160) == 1;
        ExReleaseSpinLockShared((PEX_SPIN_LOCK)(i + 64), v17);
        if ( v18 )
          PopPepInitializeVetoMasks(i, v2);
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepVetoMaskReadyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopPepVetoMaskReadyLock);
    KeAbPostRelease((ULONG_PTR)&PopPepVetoMaskReadyLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v19, v20, v21);
    return PopPepUpdateIdleStateRefCount((1 << v2) - 1, 0, 0);
  }
}
