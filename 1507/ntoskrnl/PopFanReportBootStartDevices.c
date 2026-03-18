/*
 * XREFs of PopFanReportBootStartDevices @ 0x1407E5C5C
 * Callers:
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PopSqmFanEnumeration @ 0x1406BE998 (PopSqmFanEnumeration.c)
 */

void __fastcall PopFanReportBootStartDevices(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // r9
  __int64 *i; // rbx
  signed __int64 v9; // rcx
  ULONG_PTR v10; // rtt
  struct _KTHREAD *v11; // rcx
  __int16 v12; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&PopPolicyDeviceLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPolicyDeviceLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopPolicyDeviceLock, v6, (ULONG_PTR)&PopPolicyDeviceLock, v7);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  for ( i = (__int64 *)PopFans; i != &PopFans; i = (__int64 *)*i )
    PopSqmFanEnumeration();
  if ( qword_14032DF48 )
    qword_14032DF48 = 0LL;
  _m_prefetchw(&PopPolicyDeviceLock);
  v9 = PopPolicyDeviceLock - 16;
  if ( (PopPolicyDeviceLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v9 = 0LL;
  if ( (PopPolicyDeviceLock & 2) != 0
    || (v10 = PopPolicyDeviceLock,
        v10 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopPolicyDeviceLock, v9, PopPolicyDeviceLock)) )
  {
    ExfReleasePushLock(&PopPolicyDeviceLock, v5);
  }
  KeAbPostRelease((ULONG_PTR)&PopPolicyDeviceLock);
  v11 = KeGetCurrentThread();
  v12 = v11->KernelApcDisable + 1;
  v11->KernelApcDisable = v12;
  if ( !v12
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
    && !v11->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
