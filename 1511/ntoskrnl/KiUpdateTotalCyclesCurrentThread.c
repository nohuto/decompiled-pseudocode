/*
 * XREFs of KiUpdateTotalCyclesCurrentThread @ 0x1400292C4
 * Callers:
 *     NtYieldExecution @ 0x1400290C0 (NtYieldExecution.c)
 *     KeRemovePriQueue @ 0x14006FC60 (KeRemovePriQueue.c)
 *     KeSetBasePriorityThread @ 0x140094928 (KeSetBasePriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x140094B64 (KeSetPriorityAndQuantumProcess.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x140095180 (KiRemoveThreadFromSchedulingGroup.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1400A01F4 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x1400E1A1C (KiReduceByEffectiveIdleSmtSet.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x1400F14C8 (KeUpdateTotalCyclesCurrentThread.c)
 *     KeBoostPriorityThread @ 0x1400F6440 (KeBoostPriorityThread.c)
 *     KiStartDebugAccumulation @ 0x1401C95B4 (KiStartDebugAccumulation.c)
 *     KiCompleteDirectSwitchThread @ 0x1401C9674 (KiCompleteDirectSwitchThread.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x14007BC90 (KiEndThreadCycleAccumulation.c)
 *     KiStartThreadCycleAccumulation @ 0x14007CDE0 (KiStartThreadCycleAccumulation.c)
 */

__int64 __fastcall KiUpdateTotalCyclesCurrentThread(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx

  v4 = KiEndThreadCycleAccumulation();
  KiStartThreadCycleAccumulation(a1, a2, 0LL);
  return v4;
}
