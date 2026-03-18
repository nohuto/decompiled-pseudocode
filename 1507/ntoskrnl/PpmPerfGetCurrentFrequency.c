/*
 * XREFs of PpmPerfGetCurrentFrequency @ 0x14017063C
 * Callers:
 *     KeSetActualBasePriorityThread @ 0x140009C20 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14000A20C (KeSetPriorityAndQuantumProcess.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x14000B3A4 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiCheckForThreadDispatch @ 0x14000DCB4 (KiCheckForThreadDispatch.c)
 *     KiSchedulerApc @ 0x14000EB14 (KiSchedulerApc.c)
 *     KeRemovePriQueue @ 0x1400319E0 (KeRemovePriQueue.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x14003237C (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KeSetLegacyAffinityThread @ 0x140043120 (KeSetLegacyAffinityThread.c)
 *     KeReleaseSemaphoreEx @ 0x140044830 (KeReleaseSemaphoreEx.c)
 *     KeReleaseSemaphore @ 0x140048A40 (KeReleaseSemaphore.c)
 *     KiChooseTargetProcessor @ 0x14004D7D0 (KiChooseTargetProcessor.c)
 *     KeSetPriorityThread @ 0x14009B5F0 (KeSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x14009BE20 (KiProcessDeferredReadyList.c)
 *     KeRemoveQueueEx @ 0x14009E640 (KeRemoveQueueEx.c)
 *     KiSwapThread @ 0x1400A0810 (KiSwapThread.c)
 *     KiQuantumEnd @ 0x1400A25A0 (KiQuantumEnd.c)
 *     KiRetireDpcList @ 0x1400A4C50 (KiRetireDpcList.c)
 *     KeBoostPriorityThread @ 0x1400DBC80 (KeBoostPriorityThread.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     PpmCheckComputeEnergy @ 0x1400E9ECC (PpmCheckComputeEnergy.c)
 *     NtYieldExecution @ 0x1400EB420 (NtYieldExecution.c)
 *     KiDirectSwitchThread @ 0x1400EBC80 (KiDirectSwitchThread.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400EC860 (KiGroupSchedulingGenerationEnd.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x1400F0E94 (KeUpdateTotalCyclesCurrentThread.c)
 *     KiEndThreadAccountingPeriod @ 0x140102C70 (KiEndThreadAccountingPeriod.c)
 *     KiBeginThreadAccountingPeriod @ 0x140107510 (KiBeginThreadAccountingPeriod.c)
 *     KiIdleSchedule @ 0x14010FB70 (KiIdleSchedule.c)
 *     KiReadyOutSwappedThreads @ 0x1401106FC (KiReadyOutSwappedThreads.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x140117A68 (KiReduceByEffectiveIdleSmtSet.c)
 *     KeSetBasePriorityThread @ 0x14011ABD0 (KeSetBasePriorityThread.c)
 *     PpmPerfGetCurrentState @ 0x14012D224 (PpmPerfGetCurrentState.c)
 *     KeUpdateThreadTag @ 0x1401321C8 (KeUpdateThreadTag.c)
 *     PoGetFrequencyBucket @ 0x140170614 (PoGetFrequencyBucket.c)
 *     KeFreezeExecution @ 0x140205F0C (KeFreezeExecution.c)
 *     KeThawExecution @ 0x14020657C (KeThawExecution.c)
 *     KiFreezeTargetExecution @ 0x140206774 (KiFreezeTargetExecution.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmPerfGetCurrentFrequency(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  unsigned int v3; // ecx
  unsigned int v5; // eax

  v1 = *(_QWORD *)(a1 + 24176);
  v2 = *(_QWORD *)(a1 + 24184);
  if ( v1 && v2 )
  {
    v5 = *(_DWORD *)(v2 + 52);
    v3 = *(_DWORD *)(v1 + 364);
    if ( v5 < v3 )
      return v5;
  }
  else
  {
    return 100;
  }
  return v3;
}
