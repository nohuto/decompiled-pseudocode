/*
 * XREFs of KiUpdateTotalCyclesCurrentThread @ 0x1400CF394
 * Callers:
 *     KeBoostPriorityThread @ 0x1400049F8 (KeBoostPriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14007EAE4 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetBasePriorityThread @ 0x14007EE14 (KeSetBasePriorityThread.c)
 *     KiStartDebugAccumulation @ 0x1400838E8 (KiStartDebugAccumulation.c)
 *     NtYieldExecution @ 0x140091250 (NtYieldExecution.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x14009559C (KeUpdateTotalCyclesCurrentThread.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x14009F110 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400C6B2C (KiRemoveThreadFromSchedulingGroup.c)
 *     KiCompleteDirectSwitchThread @ 0x1400CD1D4 (KiCompleteDirectSwitchThread.c)
 *     KeRemovePriQueue @ 0x1400E5870 (KeRemovePriQueue.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x1400D0560 (KiEndThreadCycleAccumulation.c)
 *     KiStartThreadCycleAccumulation @ 0x1400D1640 (KiStartThreadCycleAccumulation.c)
 */

__int64 __fastcall KiUpdateTotalCyclesCurrentThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx

  v5 = KiEndThreadCycleAccumulation(a1, a2, a3);
  KiStartThreadCycleAccumulation(a1, a2, 0LL);
  return v5;
}
