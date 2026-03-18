/*
 * XREFs of KiEndCounterAccumulation @ 0x140205058
 * Callers:
 *     KeSetActualBasePriorityThread @ 0x140009C20 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14000A20C (KeSetPriorityAndQuantumProcess.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x14000B3A4 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiCheckForThreadDispatch @ 0x14000DCB4 (KiCheckForThreadDispatch.c)
 *     KiSchedulerApc @ 0x14000EB14 (KiSchedulerApc.c)
 *     ExTryQueueWorkItem @ 0x1400292FC (ExTryQueueWorkItem.c)
 *     KeRemovePriQueue @ 0x1400319E0 (KeRemovePriQueue.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x14003237C (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KeSetLegacyAffinityThread @ 0x140043120 (KeSetLegacyAffinityThread.c)
 *     KeReleaseSemaphoreEx @ 0x140044830 (KeReleaseSemaphoreEx.c)
 *     KeReleaseSemaphore @ 0x140048A40 (KeReleaseSemaphore.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KiChooseTargetProcessor @ 0x14004D7D0 (KiChooseTargetProcessor.c)
 *     KeSetPriorityThread @ 0x14009B5F0 (KeSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x14009BE20 (KiProcessDeferredReadyList.c)
 *     KeRemoveQueueEx @ 0x14009E640 (KeRemoveQueueEx.c)
 *     KiSwapThread @ 0x1400A0810 (KiSwapThread.c)
 *     KiQuantumEnd @ 0x1400A25A0 (KiQuantumEnd.c)
 *     KiRetireDpcList @ 0x1400A4C50 (KiRetireDpcList.c)
 *     CcMapAndCopyInToCache @ 0x1400B2720 (CcMapAndCopyInToCache.c)
 *     KeBoostPriorityThread @ 0x1400DBC80 (KeBoostPriorityThread.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     PpmCheckRun @ 0x1400E7D30 (PpmCheckRun.c)
 *     NtYieldExecution @ 0x1400EB420 (NtYieldExecution.c)
 *     KiDirectSwitchThread @ 0x1400EBC80 (KiDirectSwitchThread.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400EC860 (KiGroupSchedulingGenerationEnd.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x1400F0E94 (KeUpdateTotalCyclesCurrentThread.c)
 *     KiEndThreadAccountingPeriod @ 0x140102C70 (KiEndThreadAccountingPeriod.c)
 *     KiIdleSchedule @ 0x14010FB70 (KiIdleSchedule.c)
 *     KiReadyOutSwappedThreads @ 0x1401106FC (KiReadyOutSwappedThreads.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x140117A68 (KiReduceByEffectiveIdleSmtSet.c)
 *     KeSetBasePriorityThread @ 0x14011ABD0 (KeSetBasePriorityThread.c)
 *     KeUpdateThreadTag @ 0x1401321C8 (KeUpdateThreadTag.c)
 *     KeCpuSetReportParkedProcessors @ 0x140132C60 (KeCpuSetReportParkedProcessors.c)
 *     KeRemovePriorityBoost @ 0x1401FEDB4 (KeRemovePriorityBoost.c)
 *     KeFreezeExecution @ 0x140205F0C (KeFreezeExecution.c)
 *     KiFreezeTargetExecution @ 0x140206774 (KiFreezeTargetExecution.c)
 * Callees:
 *     <none>
 */

void __fastcall KiEndCounterAccumulation(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r11
  __int64 v3; // r9
  unsigned int *v4; // r10
  __int64 v5; // r8
  __int64 v6; // rbx
  unsigned __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 360);
  v2 = *(_QWORD *)(v1 + 32);
  if ( v2 )
  {
    v3 = 1LL;
    if ( KiHwCountersCount )
    {
      v4 = (unsigned int *)&KiHwCounters;
      v5 = v1 + 48;
      v6 = (unsigned int)KiHwCountersCount;
      do
      {
        if ( (v3 & v2) != 0 )
        {
          v7 = __readpmc(*v4);
          *(_QWORD *)(v5 + 8) += (unsigned int)(v7 - *(_DWORD *)v5);
          *(_QWORD *)v5 = v7;
        }
        v3 *= 2LL;
        ++v4;
        v5 += 24LL;
        --v6;
      }
      while ( v6 );
    }
  }
}
