/*
 * XREFs of KiAbQueueAutoBoostDpc @ 0x14010287C
 * Callers:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x14003F010 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x14003F6E0 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     ExpReleaseResourceForThreadLite @ 0x14003FF80 (ExpReleaseResourceForThreadLite.c)
 *     PsBoostThreadIoEx @ 0x140040D00 (PsBoostThreadIoEx.c)
 *     KiQuantumEnd @ 0x14007AAB0 (KiQuantumEnd.c)
 *     KiSetPriorityThread @ 0x14007BEA0 (KiSetPriorityThread.c)
 *     KiRemoveBoostThread @ 0x14007CF40 (KiRemoveBoostThread.c)
 *     KiUpdateThreadPriority @ 0x14007D120 (KiUpdateThreadPriority.c)
 *     KeSetActualBasePriorityThread @ 0x14007D1E0 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x14007D6F0 (KeSetPriorityThread.c)
 *     ExpApplyPriorityBoost @ 0x14007EC80 (ExpApplyPriorityBoost.c)
 *     KiDirectSwitchThread @ 0x1400844B0 (KiDirectSwitchThread.c)
 *     KiDeferredReadyThread @ 0x140087D50 (KiDeferredReadyThread.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1400950A0 (KiSetBasePriorityAndClearDecrement.c)
 *     KeAbProcessBaseIoPriorityChange @ 0x1400FB898 (KeAbProcessBaseIoPriorityChange.c)
 *     KeInsertPriQueue @ 0x1401015B0 (KeInsertPriQueue.c)
 *     KiAbThreadBoostIoPriority @ 0x1401027C4 (KiAbThreadBoostIoPriority.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140043D50 (KiInsertQueueDpc.c)
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
