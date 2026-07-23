/*
 * XREFs of WdipSemShutdown @ 0x14069BA74
 * Callers:
 *     WdipSemDisableScenario @ 0x1404C6A5C (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x140541D18 (WdipSemEnableScenario.c)
 *     WdipSemCleanStart @ 0x140564CD0 (WdipSemCleanStart.c)
 *     WdipSemUpdate @ 0x14069B934 (WdipSemUpdate.c)
 * Callees:
 *     WdipSemClearFrequentScenarioTable @ 0x140141A9C (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     WdipSemDisableAllProviders @ 0x14069C660 (WdipSemDisableAllProviders.c)
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
  qword_1402FFF08 = 0LL;
  dword_1402FDEF0 = 0;
  qword_1402FDEF8 = 0LL;
  qword_1402FDEE8 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemClearFrequentScenarioTable();
  return WdipSemFreePool();
}
