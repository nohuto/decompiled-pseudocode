/*
 * XREFs of KiUpdateTotalCyclesCurrentThread @ 0x1400D14F4
 * Callers:
 *     KeBoostPriorityThread @ 0x140004884 (KeBoostPriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14007EA64 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetBasePriorityThread @ 0x14007ED94 (KeSetBasePriorityThread.c)
 *     KiStartDebugAccumulation @ 0x140082C68 (KiStartDebugAccumulation.c)
 *     NtYieldExecution @ 0x140091AF0 (NtYieldExecution.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x140095D9C (KeUpdateTotalCyclesCurrentThread.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x1400A07E8 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400C8C8C (KiRemoveThreadFromSchedulingGroup.c)
 *     KiCompleteDirectSwitchThread @ 0x1400CF334 (KiCompleteDirectSwitchThread.c)
 *     KeRemovePriQueue @ 0x1400E79D0 (KeRemovePriQueue.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x1400D26C0 (KiEndThreadCycleAccumulation.c)
 *     KiStartThreadCycleAccumulation @ 0x1400D37A0 (KiStartThreadCycleAccumulation.c)
 */

__int64 __fastcall KiUpdateTotalCyclesCurrentThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx

  v5 = KiEndThreadCycleAccumulation(a1, a2, a3);
  KiStartThreadCycleAccumulation(a1, a2, 0LL);
  return v5;
}
