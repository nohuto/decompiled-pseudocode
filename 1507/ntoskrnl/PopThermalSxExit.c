/*
 * XREFs of PopThermalSxExit @ 0x1401486FC
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ZwUpdateWnfStateData @ 0x140182610 (ZwUpdateWnfStateData.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 */

void __fastcall PopThermalSxExit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  signed __int64 v15; // rax
  signed __int64 v16; // rcx
  signed __int64 v17; // rtt
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  signed __int64 v20; // rcx
  ULONG_PTR v21; // rtt
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax

  if ( PoResumeFromHibernate )
  {
    PopAcquirePolicyLock();
    if ( PopThermalHibernateInitiated )
    {
      PopThermalHibernateInitiated = 0;
      ZwUpdateWnfStateData(&WNF_PO_THERMAL_HIBERNATE_OCCURRED, 0LL, 0, 0LL, 0LL, 0, 0);
    }
    PopReleasePolicyLock();
  }
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
    *(_QWORD *)(i + 496) = MEMORY[0xFFFFF78000000008];
    *(_BYTE *)(i + 488) = 0;
    if ( *(_QWORD *)(i + 424) )
      *(_QWORD *)(i + 424) = 0LL;
    _m_prefetchw(v10);
    v15 = *v10;
    v16 = *v10 - 16;
    if ( (*v10 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v16 = 0LL;
    if ( (v15 & 2) != 0 || (v17 = *v10, v17 != _InterlockedCompareExchange64(v10, v16, v15)) )
      ExfReleasePushLock((_QWORD *)(i + 416), v12);
    KeAbPostRelease(i + 416);
    v18 = KeGetCurrentThread();
    v19 = v18->KernelApcDisable + 1;
    v18->KernelApcDisable = v19;
    if ( !v19
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
      && !v18->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  if ( qword_14032DF48 )
    qword_14032DF48 = 0LL;
  _m_prefetchw(&PopPolicyDeviceLock);
  v20 = PopPolicyDeviceLock - 16;
  if ( (PopPolicyDeviceLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v20 = 0LL;
  if ( (PopPolicyDeviceLock & 2) != 0
    || (v21 = PopPolicyDeviceLock,
        v21 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopPolicyDeviceLock, v20, PopPolicyDeviceLock)) )
  {
    ExfReleasePushLock(&PopPolicyDeviceLock, v5);
  }
  KeAbPostRelease((ULONG_PTR)&PopPolicyDeviceLock);
  v22 = KeGetCurrentThread();
  v23 = v22->KernelApcDisable + 1;
  v22->KernelApcDisable = v23;
  if ( !v23
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
    && !v22->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
