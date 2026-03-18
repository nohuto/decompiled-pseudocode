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
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // r9
  __int64 i; // rdi
  struct _KTHREAD *v12; // rax
  signed __int64 *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // rsi
  signed __int64 v18; // rax
  signed __int64 v19; // rcx
  signed __int64 v20; // rtt
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax
  signed __int64 v23; // rcx
  ULONG_PTR v24; // rtt
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax

  if ( PoResumeFromHibernate )
  {
    PopAcquirePolicyLock();
    if ( PopThermalHibernateInitiated )
    {
      PopThermalHibernateInitiated = 0;
      ZwUpdateWnfStateData(&WNF_PO_THERMAL_HIBERNATE_OCCURRED, 0LL, 0LL);
    }
    PopReleasePolicyLock(v5, v4, v6);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = KeAbPreAcquire((ULONG_PTR)&PopPolicyDeviceLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPolicyDeviceLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopPolicyDeviceLock, v9, (ULONG_PTR)&PopPolicyDeviceLock, v10);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  for ( i = PopThermal; (__int64 *)i != &PopThermal; i = *(_QWORD *)i )
  {
    v12 = KeGetCurrentThread();
    v13 = (signed __int64 *)(i + 416);
    --v12->KernelApcDisable;
    v14 = KeAbPreAcquire(i + 416, 0LL, 0LL, v10);
    v17 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(i + 416), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(i + 416), v14, i + 416, v16);
    if ( v17 )
      *(_BYTE *)(v17 + 26) |= 1u;
    *(_QWORD *)(i + 424) = KeGetCurrentThread();
    *(_QWORD *)(i + 496) = MEMORY[0xFFFFF78000000008];
    *(_BYTE *)(i + 488) = 0;
    if ( *(_QWORD *)(i + 424) )
      *(_QWORD *)(i + 424) = 0LL;
    _m_prefetchw(v13);
    v18 = *v13;
    v19 = *v13 - 16;
    if ( (*v13 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v19 = 0LL;
    if ( (v18 & 2) != 0 || (v20 = *v13, v20 != _InterlockedCompareExchange64(v13, v19, v18)) )
      ExfReleasePushLock((_QWORD *)(i + 416), v15);
    KeAbPostRelease(i + 416);
    v21 = KeGetCurrentThread();
    v22 = v21->KernelApcDisable + 1;
    v21->KernelApcDisable = v22;
    if ( !v22
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
      && !v21->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  if ( qword_14032DF48 )
    qword_14032DF48 = 0LL;
  _m_prefetchw(&PopPolicyDeviceLock);
  v23 = PopPolicyDeviceLock - 16;
  if ( (PopPolicyDeviceLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v23 = 0LL;
  if ( (PopPolicyDeviceLock & 2) != 0
    || (v24 = PopPolicyDeviceLock,
        v24 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopPolicyDeviceLock, v23, PopPolicyDeviceLock)) )
  {
    ExfReleasePushLock(&PopPolicyDeviceLock, v8);
  }
  KeAbPostRelease((ULONG_PTR)&PopPolicyDeviceLock);
  v25 = KeGetCurrentThread();
  v26 = v25->KernelApcDisable + 1;
  v25->KernelApcDisable = v26;
  if ( !v26
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v25->ApcState.ApcListHead[0].Flink != &v25->152
    && !v25->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
