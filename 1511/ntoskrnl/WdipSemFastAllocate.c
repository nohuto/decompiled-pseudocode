/*
 * XREFs of WdipSemFastAllocate @ 0x140504B4C
 * Callers:
 *     WdipSemBuildScenarioInstance @ 0x140504830 (WdipSemBuildScenarioInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x140504988 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemLoadScenarioTable @ 0x140533138 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140533420 (WdipSemLoadNextScenario.c)
 *     WdipSemUpdateProviderTableWithEvent @ 0x140533C18 (WdipSemUpdateProviderTableWithEvent.c)
 *     WdipSemAddContextEventToScenario @ 0x140533F48 (WdipSemAddContextEventToScenario.c)
 *     WdipSemAddEndEventToScenario @ 0x140534004 (WdipSemAddEndEventToScenario.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x14065C618 (WdipSemUpdateFrequentScenarioTable.c)
 *     WdipSemUpdateInflightScenarioTable @ 0x14065C750 (WdipSemUpdateInflightScenarioTable.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14015B960 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastAllocate(int a1, unsigned int a2)
{
  PSLIST_ENTRY result; // rax

  result = RtlpInterlockedPopEntrySList(&stru_140306240 + a1);
  if ( !result )
    return (PSLIST_ENTRY)WdipSemAllocatePool(a2);
  return result;
}
