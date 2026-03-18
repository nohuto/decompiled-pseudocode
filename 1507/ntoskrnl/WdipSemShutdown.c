/*
 * XREFs of WdipSemShutdown @ 0x1406DF140
 * Callers:
 *     WdipSemDisableScenario @ 0x140551F04 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x140581A0C (WdipSemEnableScenario.c)
 *     WdipSemCleanStart @ 0x1405ADD3C (WdipSemCleanStart.c)
 *     WdipSemUpdate @ 0x1406DEBD4 (WdipSemUpdate.c)
 * Callees:
 *     WdipSemClearFrequentScenarioTable @ 0x1401676FC (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x140195A80 (memset.c)
 *     WdipSemDisableAllProviders @ 0x1406DF5D8 (WdipSemDisableAllProviders.c)
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
  qword_14032AB28 = 0LL;
  dword_14032AB50 = 0;
  qword_14032AB58 = 0LL;
  qword_14032AB48 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemClearFrequentScenarioTable();
  return WdipSemFreePool();
}
