/*
 * XREFs of WdipSemFastAllocate @ 0x1404E4438
 * Callers:
 *     WdipSemWriteSemActionsEvent @ 0x1404E4274 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemBuildScenarioInstance @ 0x140541DAC (WdipSemBuildScenarioInstance.c)
 *     WdipSemLoadScenarioTable @ 0x140565080 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140565368 (WdipSemLoadNextScenario.c)
 *     WdipSemUpdateProviderTableWithEvent @ 0x140565B60 (WdipSemUpdateProviderTableWithEvent.c)
 *     WdipSemAddContextEventToScenario @ 0x140565E90 (WdipSemAddContextEventToScenario.c)
 *     WdipSemAddEndEventToScenario @ 0x140565F4C (WdipSemAddEndEventToScenario.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x14069BBE0 (WdipSemUpdateFrequentScenarioTable.c)
 *     WdipSemUpdateInflightScenarioTable @ 0x14069BD18 (WdipSemUpdateInflightScenarioTable.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140166E00 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastAllocate(int a1, unsigned int a2)
{
  PSLIST_ENTRY result; // rax

  result = RtlpInterlockedPopEntrySList(&stru_140328AD0 + a1);
  if ( !result )
    return (PSLIST_ENTRY)WdipSemAllocatePool(a2);
  return result;
}
