/*
 * XREFs of PopPepPlatformStateRegistered @ 0x14023BFE0
 * Callers:
 *     PopFxEnablePlatformStates @ 0x140237ED4 (PopFxEnablePlatformStates.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     PopPepUpdateIdleStateRefCount @ 0x1401386E8 (PopPepUpdateIdleStateRefCount.c)
 *     PopPepInitializeVetoMasks @ 0x14023BA2C (PopPepInitializeVetoMasks.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

void __fastcall PopPepPlatformStateRegistered(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // r9
  signed __int8 v8; // cf
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rdi
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 i; // rdi
  _DWORD *v22; // rsi
  unsigned __int8 CurrentIrql; // r12
  signed __int32 v24; // ett
  bool v25; // r15
  struct _KTHREAD *v26; // rcx
  __int16 v27; // ax
  void *retaddr; // [rsp+48h] [rbp+0h]

  CurrentThread = KeGetCurrentThread();
  v5 = a1;
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&PopPepVetoMaskReadyLock, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&PopPepVetoMaskReadyLock, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&PopPepVetoMaskReadyLock, v6, (ULONG_PTR)&PopPepVetoMaskReadyLock, v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = KeAbPreAcquire((ULONG_PTR)&PopPepDeviceListLock, 0LL, 0LL, v7);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&PopPepDeviceListLock, 0LL);
  v12 = v10;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&PopPepDeviceListLock, v10, (ULONG_PTR)&PopPepDeviceListLock, v11);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  if ( PopPepPlatformState )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopPepDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepVetoMaskReadyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopPepVetoMaskReadyLock);
    KeAbPostRelease((ULONG_PTR)&PopPepVetoMaskReadyLock);
    v13 = KeGetCurrentThread();
    v14 = v13->KernelApcDisable + 1;
    v13->KernelApcDisable = v14;
    if ( !v14
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
      && !v13->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  else
  {
    PopPepPlatformState = PpmPlatformStates + 64;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopPepDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
    v16 = KeAbPreAcquire((ULONG_PTR)&PopPepDeviceListLock, 0LL, 0LL, v15);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&PopPepDeviceListLock, v16, (ULONG_PTR)&PopPepDeviceListLock, v17);
    if ( v16 )
      *(_BYTE *)(v16 + 26) |= 1u;
    if ( (_DWORD)v5 )
    {
      v18 = PopPepPlatformState;
      v19 = 0LL;
      v20 = v5;
      do
      {
        *(_DWORD *)(v19 + v18 + 320) = 1;
        v19 += 384LL;
        --v20;
      }
      while ( v20 );
    }
    for ( i = PopPepDeviceList; (__int64 *)i != &PopPepDeviceList; i = *(_QWORD *)i )
    {
      if ( *(_BYTE *)(i + 124) )
      {
        v22 = (_DWORD *)(i + 64);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockSharedAtDpcLevelInstrumented(i + 64);
        }
        else
        {
          _m_prefetchw(v22);
          v24 = *v22 & 0x7FFFFFFF;
          if ( v24 != _InterlockedCompareExchange(v22, v24 + 1, v24) )
            ExpWaitForSpinLockSharedAndAcquire((volatile signed __int32 *)(i + 64));
        }
        v25 = *(_DWORD *)(i + 160) == 1;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(i + 64, retaddr);
        }
        else
        {
          _InterlockedAnd(v22, 0xBFFFFFFF);
          _InterlockedAdd(v22, 0xFFFFFFFF);
        }
        __writecr8(CurrentIrql);
        if ( v25 )
          PopPepInitializeVetoMasks(i, v5);
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepVetoMaskReadyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopPepVetoMaskReadyLock);
    KeAbPostRelease((ULONG_PTR)&PopPepVetoMaskReadyLock);
    v26 = KeGetCurrentThread();
    v27 = v26->KernelApcDisable + 1;
    v26->KernelApcDisable = v27;
    if ( !v27
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
      && !v26->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    PopPepUpdateIdleStateRefCount((1 << v5) - 1, 0, 0);
  }
}
