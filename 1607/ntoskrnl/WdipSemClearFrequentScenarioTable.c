/*
 * XREFs of WdipSemClearFrequentScenarioTable @ 0x140141A9C
 * Callers:
 *     WdipSemInitializeGlobalState @ 0x14056654C (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x14069BA74 (WdipSemShutdown.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 */

void *WdipSemClearFrequentScenarioTable()
{
  void *result; // rax

  result = memset(&WdipSemFrequentScenarioTable, 0, 0x410uLL);
  qword_140300328 = 0LL;
  return result;
}
