/*
 * XREFs of WdipSemFastFree @ 0x140504B28
 * Callers:
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1404B6B3C (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemDeleteTransitionalInstance @ 0x1405048A0 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x140504988 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemLoadNextScenario @ 0x140533420 (WdipSemLoadNextScenario.c)
 *     WdipSemFreeScenario @ 0x140533A6C (WdipSemFreeScenario.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x14065C464 (WdipSemLogInflightLimitExceededInformation.c)
 *     WdipSemRollBackProviderTable @ 0x14065C834 (WdipSemRollBackProviderTable.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastFree(int a1, _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY result; // rax

  if ( a2 )
    return RtlpInterlockedPushEntrySList(&stru_140306240 + a1, a2);
  return result;
}
