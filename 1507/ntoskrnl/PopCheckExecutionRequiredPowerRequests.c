/*
 * XREFs of PopCheckExecutionRequiredPowerRequests @ 0x1406B0A3C
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404E6210 (PopAcquirePowerRequestPushLock.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x1405C0FA4 (PopEnableExecutionRequiredPowerRequests.c)
 */

void __fastcall PopCheckExecutionRequiredPowerRequests(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  signed __int64 v5; // rcx
  ULONG_PTR v6; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v8; // ax

  _InterlockedExchange(&PopExecutionRequiredWorkRequested, 0);
  PopAcquirePowerRequestPushLock(1, a2, a3, a4);
  if ( byte_14032E534
    && PopLastCsEnterTime
    && !PopExecutionTimeoutProcessed
    && PopExecutionRequiredTimeout != -1
    && MEMORY[0xFFFFF78000000008] - PopLastCsEnterTime >= 10000000
                                                        * (unsigned __int64)(unsigned int)PopExecutionRequiredTimeout )
  {
    PopExecutionTimeoutProcessed = 1;
    PopEnableExecutionRequiredPowerRequests(0);
  }
  if ( qword_14032F7D8 )
    qword_14032F7D8 = 0LL;
  _m_prefetchw(&PopPowerRequestLock);
  v5 = PopPowerRequestLock - 16;
  if ( (PopPowerRequestLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v5 = 0LL;
  if ( (PopPowerRequestLock & 2) != 0
    || (v6 = PopPowerRequestLock,
        v6 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopPowerRequestLock, v5, PopPowerRequestLock)) )
  {
    ExfReleasePushLock(&PopPowerRequestLock, v4);
  }
  KeAbPostRelease((ULONG_PTR)&PopPowerRequestLock);
  CurrentThread = KeGetCurrentThread();
  v8 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v8;
  if ( !v8
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
