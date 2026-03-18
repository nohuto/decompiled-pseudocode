/*
 * XREFs of KiBeginCounterAccumulation @ 0x140204F4C
 * Callers:
 *     KeSetActualBasePriorityThread @ 0x140009C20 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14000A20C (KeSetPriorityAndQuantumProcess.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x14000B3A4 (KiRemoveThreadFromSchedulingGroup.c)
 *     KeRemovePriQueue @ 0x1400319E0 (KeRemovePriQueue.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x14003237C (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KeReleaseSemaphoreEx @ 0x140044830 (KeReleaseSemaphoreEx.c)
 *     KeReleaseSemaphore @ 0x140048A40 (KeReleaseSemaphore.c)
 *     KiChooseTargetProcessor @ 0x14004D7D0 (KiChooseTargetProcessor.c)
 *     KeSetPriorityThread @ 0x14009B5F0 (KeSetPriorityThread.c)
 *     KiSwapThread @ 0x1400A0810 (KiSwapThread.c)
 *     KiRetireDpcList @ 0x1400A4C50 (KiRetireDpcList.c)
 *     KeBoostPriorityThread @ 0x1400DBC80 (KeBoostPriorityThread.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     NtYieldExecution @ 0x1400EB420 (NtYieldExecution.c)
 *     KiDirectSwitchThread @ 0x1400EBC80 (KiDirectSwitchThread.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400EC860 (KiGroupSchedulingGenerationEnd.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x1400F0E94 (KeUpdateTotalCyclesCurrentThread.c)
 *     KiBeginThreadAccountingPeriod @ 0x140107510 (KiBeginThreadAccountingPeriod.c)
 *     KiIdleSchedule @ 0x14010FB70 (KiIdleSchedule.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x140117A68 (KiReduceByEffectiveIdleSmtSet.c)
 *     KeSetBasePriorityThread @ 0x14011ABD0 (KeSetBasePriorityThread.c)
 *     KeUpdateThreadTag @ 0x1401321C8 (KeUpdateThreadTag.c)
 *     KeFreezeExecution @ 0x140205F0C (KeFreezeExecution.c)
 *     KeThawExecution @ 0x14020657C (KeThawExecution.c)
 *     KiFreezeTargetExecution @ 0x140206774 (KiFreezeTargetExecution.c)
 *     KeEnableProfiling @ 0x14069905C (KeEnableProfiling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiBeginCounterAccumulation(__int64 a1, char a2)
{
  __int64 v2; // r8
  __int64 v3; // rdi
  __int64 v4; // r9
  unsigned int *v5; // r10
  __int64 v6; // rsi
  _QWORD *v7; // r11
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 360);
  v3 = *(_QWORD *)(v2 + 32);
  if ( v3 )
  {
    v4 = 1LL;
    if ( KiHwCountersCount )
    {
      v5 = (unsigned int *)&KiHwCounters;
      v6 = (unsigned int)KiHwCountersCount;
      v7 = (_QWORD *)(v2 + 48);
      do
      {
        if ( (v4 & v3) != 0 )
          *v7 = __readpmc(*v5);
        v4 *= 2LL;
        v7 += 3;
        ++v5;
        --v6;
      }
      while ( v6 );
    }
  }
  result = *(unsigned int *)(v2 + 16);
  if ( (result & 1) != 0 )
  {
    if ( a2 )
    {
      ++*(_DWORD *)(v2 + 20);
      result = *(unsigned __int8 *)(a1 + 643);
      *(_QWORD *)v2 |= 1LL << result;
    }
  }
  return result;
}
