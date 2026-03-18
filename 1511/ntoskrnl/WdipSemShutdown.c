/*
 * XREFs of WdipSemShutdown @ 0x14065C898
 * Callers:
 *     WdipSemDisableScenario @ 0x140505648 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x140505934 (WdipSemEnableScenario.c)
 *     WdipSemCleanStart @ 0x140532858 (WdipSemCleanStart.c)
 *     WdipSemUpdate @ 0x14065C388 (WdipSemUpdate.c)
 * Callees:
 *     WdipSemClearFrequentScenarioTable @ 0x140137B7C (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     WdipSemDisableAllProviders @ 0x14065CD30 (WdipSemDisableAllProviders.c)
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
  qword_1402DA788 = 0LL;
  dword_1402DA7B0 = 0;
  qword_1402DA7B8 = 0LL;
  qword_1402DA7A8 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemClearFrequentScenarioTable();
  return WdipSemFreePool();
}
