/*
 * XREFs of PopThermalSxEntry @ 0x14014822C
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140148454 (PopTraceThermalZonePassiveHistogram.c)
 *     PopThermalStandbyEndTracking @ 0x1401485D4 (PopThermalStandbyEndTracking.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140565CEC (PopThermalUpdatePassiveTimeTracking.c)
 */

void PopThermalSxEntry()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // r9
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // r9
  __int64 i; // rsi
  struct _KTHREAD *v6; // rax
  signed __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rdx
  signed __int64 v13; // rax
  signed __int64 v14; // rcx
  signed __int64 v15; // rtt
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax
  signed __int64 v18; // rcx
  ULONG_PTR v19; // rtt
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax

  PopAcquirePolicyLock();
  PopThermalStandbyEndTracking(4LL);
  PopReleasePolicyLock();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&PopPolicyDeviceLock, 0LL, 0LL, v1);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPolicyDeviceLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopPolicyDeviceLock, v3, (ULONG_PTR)&PopPolicyDeviceLock, v4);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  for ( i = PopThermal; (__int64 *)i != &PopThermal; i = *(_QWORD *)i )
  {
    v6 = KeGetCurrentThread();
    v7 = (signed __int64 *)(i + 416);
    --v6->KernelApcDisable;
    v8 = KeAbPreAcquire(i + 416, 0LL, 0LL, v4);
    v11 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(i + 416), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(i + 416), v8, i + 416, v10);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    *(_QWORD *)(i + 424) = KeGetCurrentThread();
    LOBYTE(v9) = *(_BYTE *)(i + 80);
    PopThermalUpdatePassiveTimeTracking(i + 488, v9);
    PopTraceThermalZonePassiveHistogram(i);
    *(_BYTE *)(i + 488) = 1;
    if ( *(_QWORD *)(i + 424) )
      *(_QWORD *)(i + 424) = 0LL;
    _m_prefetchw(v7);
    v13 = *v7;
    v14 = *v7 - 16;
    if ( (*v7 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v14 = 0LL;
    if ( (v13 & 2) != 0 || (v15 = *v7, v15 != _InterlockedCompareExchange64(v7, v14, v13)) )
      ExfReleasePushLock((_QWORD *)(i + 416), v12);
    KeAbPostRelease(i + 416);
    v16 = KeGetCurrentThread();
    v17 = v16->KernelApcDisable + 1;
    v16->KernelApcDisable = v17;
    if ( !v17
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
      && !v16->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  if ( qword_14032DF48 )
    qword_14032DF48 = 0LL;
  _m_prefetchw(&PopPolicyDeviceLock);
  v18 = PopPolicyDeviceLock - 16;
  if ( (PopPolicyDeviceLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v18 = 0LL;
  if ( (PopPolicyDeviceLock & 2) != 0
    || (v19 = PopPolicyDeviceLock,
        v19 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopPolicyDeviceLock, v18, PopPolicyDeviceLock)) )
  {
    ExfReleasePushLock(&PopPolicyDeviceLock, v2);
  }
  KeAbPostRelease((ULONG_PTR)&PopPolicyDeviceLock);
  v20 = KeGetCurrentThread();
  v21 = v20->KernelApcDisable + 1;
  v20->KernelApcDisable = v21;
  if ( !v21
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
    && !v20->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
