/*
 * XREFs of WdipSemFastFree @ 0x1404E4414
 * Callers:
 *     WdipSemDeleteTransitionalInstance @ 0x1404E418C (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x1404E4274 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x14051C458 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemLoadNextScenario @ 0x140565368 (WdipSemLoadNextScenario.c)
 *     WdipSemFreeScenario @ 0x1405659B4 (WdipSemFreeScenario.c)
 *     WdipSemRollBackProviderTable @ 0x14069B92C (WdipSemRollBackProviderTable.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x14069BA2C (WdipSemLogInflightLimitExceededInformation.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140166E40 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastFree(int a1, struct _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY result; // rax

  if ( a2 )
    return RtlpInterlockedPushEntrySList(&stru_140328AD0 + a1, a2);
  return result;
}
