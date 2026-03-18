/*
 * XREFs of WdipSemClearFrequentScenarioTable @ 0x14014152C
 * Callers:
 *     WdipSemInitializeGlobalState @ 0x14056600C (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x14069B990 (WdipSemShutdown.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 */

void *WdipSemClearFrequentScenarioTable()
{
  void *result; // rax

  result = memset(&WdipSemFrequentScenarioTable, 0, 0x410uLL);
  qword_140300348 = 0LL;
  return result;
}
