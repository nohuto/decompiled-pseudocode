/*
 * XREFs of WdipSemClearFrequentScenarioTable @ 0x140137B7C
 * Callers:
 *     WdipSemInitializeGlobalState @ 0x1405340C4 (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x14065C898 (WdipSemShutdown.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 */

void *WdipSemClearFrequentScenarioTable()
{
  void *result; // rax

  result = memset(&WdipSemFrequentScenarioTable, 0, 0x410uLL);
  qword_1402DAE08 = 0LL;
  return result;
}
