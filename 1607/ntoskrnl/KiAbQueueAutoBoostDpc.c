/*
 * XREFs of KiAbQueueAutoBoostDpc @ 0x14006C668
 * Callers:
 *     PsBoostThreadIoEx @ 0x14002D440 (PsBoostThreadIoEx.c)
 *     KiDirectSwitchThread @ 0x140052C70 (KiDirectSwitchThread.c)
 *     KiDeferredReadyThread @ 0x140056AC0 (KiDeferredReadyThread.c)
 *     ExpApplyPriorityBoost @ 0x14005D2D0 (ExpApplyPriorityBoost.c)
 *     KeInsertPriQueue @ 0x14005F700 (KeInsertPriQueue.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x140062420 (KeAbProcessEffectiveIoPriorityChange.c)
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExpReleaseResourceForThreadLite @ 0x140068950 (ExpReleaseResourceForThreadLite.c)
 *     KiAbThreadBoostIoPriority @ 0x14006C5A4 (KiAbThreadBoostIoPriority.c)
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x1400721B0 (KeAbProcessBaseIoPriorityChangeInternal.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x14007EFD8 (KiSetBasePriorityAndClearDecrement.c)
 *     KiUpdateThreadPriority @ 0x140091DA8 (KiUpdateThreadPriority.c)
 *     KiRemoveBoostThread @ 0x1400CF3B0 (KiRemoveBoostThread.c)
 *     KeDelayExecutionThread @ 0x1400D0580 (KeDelayExecutionThread.c)
 *     KiQuantumEnd @ 0x1400D1780 (KiQuantumEnd.c)
 *     KeSetActualBasePriorityThread @ 0x1400D2840 (KeSetActualBasePriorityThread.c)
 *     KiSetPriorityThread @ 0x1400D2BA0 (KiSetPriorityThread.c)
 *     KeSetPriorityThread @ 0x1400D2F20 (KeSetPriorityThread.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400D82C0 (KiInsertQueueDpc.c)
 */

__int64 __fastcall KiAbQueueAutoBoostDpc(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_QWORD *)(a1 + 25824) )
  {
    result = KiInsertQueueDpc(a1 + 25792, 0);
    *(_QWORD *)(a1 + 25824) = 1LL;
  }
  return result;
}
