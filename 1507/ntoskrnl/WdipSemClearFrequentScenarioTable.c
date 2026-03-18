/*
 * XREFs of WdipSemClearFrequentScenarioTable @ 0x1401676FC
 * Callers:
 *     WdipSemInitializeGlobalState @ 0x1405AF3A0 (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x1406DF140 (WdipSemShutdown.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 */

void *WdipSemClearFrequentScenarioTable()
{
  void *result; // rax

  result = memset(&WdipSemFrequentScenarioTable, 0, 0x410uLL);
  qword_14032AF88 = 0LL;
  return result;
}
