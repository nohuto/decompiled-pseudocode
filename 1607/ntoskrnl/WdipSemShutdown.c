/*
 * XREFs of WdipSemShutdown @ 0x14069B990
 * Callers:
 *     WdipSemDisableScenario @ 0x1404E3DA4 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x1405417D8 (WdipSemEnableScenario.c)
 *     WdipSemCleanStart @ 0x140564790 (WdipSemCleanStart.c)
 *     WdipSemUpdate @ 0x14069B850 (WdipSemUpdate.c)
 * Callees:
 *     WdipSemClearFrequentScenarioTable @ 0x14014152C (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     WdipSemDisableAllProviders @ 0x14069C57C (WdipSemDisableAllProviders.c)
 */

__int64 WdipSemShutdown()
{
  WdipSemDisabledScenarioTable = 0LL;
  WdipSemEnabled = 0;
  WdipSemTimeoutEnabled = 0;
  WdipSemTimeoutValue = 600;
  WdipSemDisableAllProviders();
  WdipDiagLoggerId = 0;
  WdipContextLoggerId = 0;
  memset(WdipSemScenarioTable, 0, 0x208uLL);
  memset(WdipSemProviderTable, 0, 0x2010uLL);
  qword_1402FFF28 = 0LL;
  dword_1402FDF10 = 0;
  qword_1402FDF18 = 0LL;
  qword_1402FDF08 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemClearFrequentScenarioTable();
  return WdipSemFreePool();
}
