/*
 * XREFs of WdipSemFastAllocate @ 0x1405525E0
 * Callers:
 *     WdipSemWriteSemActionsEvent @ 0x14055241C (WdipSemWriteSemActionsEvent.c)
 *     WdipSemBuildScenarioInstance @ 0x14056BD00 (WdipSemBuildScenarioInstance.c)
 *     WdipSemLoadScenarioTable @ 0x1405AE61C (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x1405AE904 (WdipSemLoadNextScenario.c)
 *     WdipSemUpdateProviderTableWithEvent @ 0x1405AF0FC (WdipSemUpdateProviderTableWithEvent.c)
 *     WdipSemAddContextEventToScenario @ 0x1405C55AC (WdipSemAddContextEventToScenario.c)
 *     WdipSemAddEndEventToScenario @ 0x1405C5668 (WdipSemAddEndEventToScenario.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x1406DEE94 (WdipSemUpdateFrequentScenarioTable.c)
 *     WdipSemUpdateInflightScenarioTable @ 0x1406DEFF8 (WdipSemUpdateInflightScenarioTable.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastAllocate(int a1, unsigned int a2)
{
  PSLIST_ENTRY result; // rax

  result = RtlpInterlockedPopEntrySList(&stru_140356540 + a1);
  if ( !result )
    return (PSLIST_ENTRY)WdipSemAllocatePool(a2);
  return result;
}
