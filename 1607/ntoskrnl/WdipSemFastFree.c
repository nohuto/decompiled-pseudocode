/*
 * XREFs of WdipSemFastFree @ 0x1404C70CC
 * Callers:
 *     WdipSemDeleteTransitionalInstance @ 0x1404C6E44 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x1404C6F2C (WdipSemWriteSemActionsEvent.c)
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1404FF848 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemLoadNextScenario @ 0x1405658A8 (WdipSemLoadNextScenario.c)
 *     WdipSemFreeScenario @ 0x140565EF4 (WdipSemFreeScenario.c)
 *     WdipSemRollBackProviderTable @ 0x14069BA10 (WdipSemRollBackProviderTable.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x14069BB10 (WdipSemLogInflightLimitExceededInformation.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastFree(int a1, _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY result; // rax

  if ( a2 )
    return RtlpInterlockedPushEntrySList(&stru_140328B10 + a1, a2);
  return result;
}
