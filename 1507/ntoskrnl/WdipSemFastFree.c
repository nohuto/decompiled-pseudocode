/*
 * XREFs of WdipSemFastFree @ 0x1405525BC
 * Callers:
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x14054CF68 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140552314 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x14055241C (WdipSemWriteSemActionsEvent.c)
 *     WdipSemLoadNextScenario @ 0x1405AE904 (WdipSemLoadNextScenario.c)
 *     WdipSemFreeScenario @ 0x1405AEF50 (WdipSemFreeScenario.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x1406DECE0 (WdipSemLogInflightLimitExceededInformation.c)
 *     WdipSemRollBackProviderTable @ 0x1406DF0DC (WdipSemRollBackProviderTable.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastFree(int a1, _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY result; // rax

  if ( a2 )
    return RtlpInterlockedPushEntrySList(&stru_140356540 + a1, a2);
  return result;
}
