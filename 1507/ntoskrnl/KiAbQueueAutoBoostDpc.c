/*
 * XREFs of KiAbQueueAutoBoostDpc @ 0x1400D6414
 * Callers:
 *     KeSetActualBasePriorityThread @ 0x140009C20 (KeSetActualBasePriorityThread.c)
 *     KeAbProcessBaseIoPriorityChange @ 0x14000A100 (KeAbProcessBaseIoPriorityChange.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14000A20C (KeSetPriorityAndQuantumProcess.c)
 *     KiTryUnwaitThreadWithPriority @ 0x14000D710 (KiTryUnwaitThreadWithPriority.c)
 *     KeRemovePriQueue @ 0x1400319E0 (KeRemovePriQueue.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KiDeferredReadyThread @ 0x14004CE40 (KiDeferredReadyThread.c)
 *     KiRemoveBoostThread @ 0x14009AE80 (KiRemoveBoostThread.c)
 *     KiSetPriorityThread @ 0x14009B110 (KiSetPriorityThread.c)
 *     KeSetPriorityThread @ 0x14009B5F0 (KeSetPriorityThread.c)
 *     KiAbProcessThreadPriorityModification @ 0x14009C0D0 (KiAbProcessThreadPriorityModification.c)
 *     ExpApplyPriorityBoost @ 0x14009CD90 (ExpApplyPriorityBoost.c)
 *     KiQuantumEnd @ 0x1400A25A0 (KiQuantumEnd.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400C92E0 (ExpReleaseResourceForThreadLite.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x1400CA5E0 (KeAbProcessEffectiveIoPriorityChange.c)
 *     PsBoostThreadIoEx @ 0x1400CA890 (PsBoostThreadIoEx.c)
 *     KiProcessPendingForegroundBoosts @ 0x1400D2D38 (KiProcessPendingForegroundBoosts.c)
 *     KiAbThreadBoostIoPriority @ 0x1400D635C (KiAbThreadBoostIoPriority.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     KiQueueReadyThread @ 0x1400EAD80 (KiQueueReadyThread.c)
 *     NtYieldExecution @ 0x1400EB420 (NtYieldExecution.c)
 *     KiDirectSwitchThread @ 0x1400EBC80 (KiDirectSwitchThread.c)
 *     KeSetBasePriorityThread @ 0x14011ABD0 (KeSetBasePriorityThread.c)
 *     KeTransitionProcessorParkState @ 0x14020AF40 (KeTransitionProcessorParkState.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
 */

__int64 __fastcall KiAbQueueAutoBoostDpc(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_QWORD *)(a1 + 25696) )
  {
    result = KiInsertQueueDpc(a1 + 25664, a1, 0LL, 0LL, 0);
    *(_QWORD *)(a1 + 25696) = 1LL;
  }
  return result;
}
