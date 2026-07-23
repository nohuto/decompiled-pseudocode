/*
 * XREFs of PopFxResidentTimeoutRoutine @ 0x14012A5F8
 * Callers:
 *     <none>
 * Callees:
 *     PopFxIdleComponent @ 0x1400274D0 (PopFxIdleComponent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     RtlGetInterruptTimePrecise @ 0x1400EA820 (RtlGetInterruptTimePrecise.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PopFxResidentTimeoutRoutine(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rbx
  __int64 v6; // r9
  LARGE_INTEGER InterruptTimePrecise; // rax
  ULONG_PTR v8; // rbx
  LARGE_INTEGER v9; // rsi
  unsigned int i; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _KTHREAD *v13; // rdx
  __int16 v14; // ax
  LARGE_INTEGER PerformanceCounter; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&PopFxDeviceListLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopFxDeviceListLock, v5, (ULONG_PTR)&PopFxDeviceListLock, v6);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  if ( (ULONG_PTR *)PopFxDeviceList != &PopFxDeviceList )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    v8 = PopFxDeviceList;
    v9 = InterruptTimePrecise;
    while ( (ULONG_PTR *)v8 != &PopFxDeviceList )
    {
      for ( i = 0; i < *(_DWORD *)(v8 + 620); ++i )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(v8 + 624) + 8LL * i);
        if ( *(int *)(v11 + 96) > 0
          && v9.QuadPart - *(_QWORD *)(v11 + 144) >= (unsigned __int64)(unsigned int)PopFxActiveIdleThreshold )
        {
          _InterlockedAdd((volatile signed __int32 *)(v11 + 96), 0xFFFFFFFF);
          _InterlockedAdd(&PopFxResidentComponentCount, 0xFFFFFFFF);
          PopFxIdleComponent(v8, i, 1);
        }
      }
      v8 = *(_QWORD *)v8;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  v13 = KeGetCurrentThread();
  v14 = v13->KernelApcDisable + 1;
  v13->KernelApcDisable = v14;
  if ( !v14
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
    && !v13->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  LOBYTE(v12) = 1;
  return PopFxArmResidentTimer(v12);
}
