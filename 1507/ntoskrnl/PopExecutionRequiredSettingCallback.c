/*
 * XREFs of PopExecutionRequiredSettingCallback @ 0x1405C0E88
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404E6210 (PopAcquirePowerRequestPushLock.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x1405C0FA4 (PopEnableExecutionRequiredPowerRequests.c)
 */

__int64 __fastcall PopExecutionRequiredSettingCallback(_QWORD *a1, int *a2, __int64 a3, __int64 a4)
{
  int v5; // ebp
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r9
  signed __int64 v11; // rcx
  ULONG_PTR v12; // rtt
  struct _KTHREAD *CurrentThread; // rdx
  __int16 v14; // ax

  v5 = a3;
  v7 = -1073741811;
  PopAcquirePowerRequestPushLock(1, (__int64)a2, a3, a4);
  v10 = *(_QWORD *)&GUID_EXECUTION_REQUIRED_REQUEST_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_EXECUTION_REQUIRED_REQUEST_TIMEOUT.Data1 == *a1 )
    v10 = *(_QWORD *)GUID_EXECUTION_REQUIRED_REQUEST_TIMEOUT.Data4 - a1[1];
  if ( !v10 && v5 == 4 && a2 )
  {
    PopExecutionRequiredTimeout = *a2;
    if ( PopExecutionRequiredTimeout )
      LOBYTE(v9) = 1;
    else
      v9 = 0LL;
    PopEnableExecutionRequiredPowerRequests(v9);
    v7 = 0;
  }
  if ( qword_14032F7D8 )
    qword_14032F7D8 = 0LL;
  _m_prefetchw(&PopPowerRequestLock);
  v11 = PopPowerRequestLock - 16;
  if ( (PopPowerRequestLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v11 = 0LL;
  if ( (PopPowerRequestLock & 2) != 0
    || (v12 = PopPowerRequestLock,
        v12 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopPowerRequestLock, v11, PopPowerRequestLock)) )
  {
    ExfReleasePushLock(&PopPowerRequestLock, v8);
  }
  KeAbPostRelease((ULONG_PTR)&PopPowerRequestLock);
  CurrentThread = KeGetCurrentThread();
  v14 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v14;
  if ( !v14
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v7;
}
