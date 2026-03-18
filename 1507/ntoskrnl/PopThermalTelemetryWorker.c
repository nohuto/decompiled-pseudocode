/*
 * XREFs of PopThermalTelemetryWorker @ 0x14023CB00
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140148454 (PopTraceThermalZonePassiveHistogram.c)
 *     PopCoolingTelemetryWorker @ 0x14023690C (PopCoolingTelemetryWorker.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140565CEC (PopThermalUpdatePassiveTimeTracking.c)
 */

__int64 __fastcall PopThermalTelemetryWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // r9
  __int64 i; // rdi
  struct _KTHREAD *v9; // rax
  signed __int64 *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rdx
  signed __int64 v16; // rax
  signed __int64 v17; // rcx
  signed __int64 v18; // rtt
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax
  signed __int64 v21; // rcx
  ULONG_PTR v22; // rtt
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  struct _KTHREAD *v26; // rcx
  __int16 v27; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&PopPolicyDeviceLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPolicyDeviceLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopPolicyDeviceLock, v6, (ULONG_PTR)&PopPolicyDeviceLock, v7);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  for ( i = PopThermal; (__int64 *)i != &PopThermal; i = *(_QWORD *)i )
  {
    v9 = KeGetCurrentThread();
    v10 = (signed __int64 *)(i + 416);
    --v9->KernelApcDisable;
    v11 = KeAbPreAcquire(i + 416, 0LL, 0LL, v7);
    v14 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(i + 416), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(i + 416), v11, i + 416, v13);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
    *(_QWORD *)(i + 424) = KeGetCurrentThread();
    LOBYTE(v12) = *(_BYTE *)(i + 80);
    PopThermalUpdatePassiveTimeTracking(i + 488, v12);
    PopTraceThermalZonePassiveHistogram(i);
    if ( *(_QWORD *)(i + 424) )
      *(_QWORD *)(i + 424) = 0LL;
    _m_prefetchw(v10);
    v16 = *v10;
    v17 = *v10 - 16;
    if ( (*v10 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v17 = 0LL;
    if ( (v16 & 2) != 0 || (v18 = *v10, v18 != _InterlockedCompareExchange64(v10, v17, v16)) )
      ExfReleasePushLock((_QWORD *)(i + 416), v15);
    KeAbPostRelease(i + 416);
    v19 = KeGetCurrentThread();
    v20 = v19->KernelApcDisable + 1;
    v19->KernelApcDisable = v20;
    if ( !v20
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
      && !v19->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  if ( qword_14032DF48 )
    qword_14032DF48 = 0LL;
  _m_prefetchw(&PopPolicyDeviceLock);
  v21 = PopPolicyDeviceLock - 16;
  if ( (PopPolicyDeviceLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v21 = 0LL;
  if ( (PopPolicyDeviceLock & 2) != 0
    || (v22 = PopPolicyDeviceLock,
        v22 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopPolicyDeviceLock, v21, PopPolicyDeviceLock)) )
  {
    ExfReleasePushLock(&PopPolicyDeviceLock, v5);
  }
  KeAbPostRelease((ULONG_PTR)&PopPolicyDeviceLock);
  v26 = KeGetCurrentThread();
  v27 = v26->KernelApcDisable + 1;
  v26->KernelApcDisable = v27;
  if ( !v27
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
    && !v26->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  PopCoolingTelemetryWorker((__int64)v26, v23, v24, v25);
  return PopOkayToQueueNextWorkItem(&unk_14032DCA8);
}
