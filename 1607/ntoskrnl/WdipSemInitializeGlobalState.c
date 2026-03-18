/*
 * XREFs of WdipSemInitializeGlobalState @ 0x14056600C
 * Callers:
 *     WdipSemInitialize @ 0x1405646D4 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x14069B850 (WdipSemUpdate.c)
 * Callees:
 *     InitializeSListHead @ 0x140002B3C (InitializeSListHead.c)
 *     WdipSemClearFrequentScenarioTable @ 0x14014152C (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x1401715C0 (memset.c)
 */

void *WdipSemInitializeGlobalState()
{
  __int64 v0; // rdi
  union _SLIST_HEADER *v1; // rbx
  void *result; // rax

  WdipSemPushLock = 0LL;
  WdipSemRegHandle = 0LL;
  WdipSemEnabled = 0;
  WdipSemTimeoutEnabled = 0;
  WdipSemTimeoutValue = 0;
  WdipSemDisabledScenarioTable = 0LL;
  WdipDiagLoggerId = 0;
  WdipContextLoggerId = 0;
  memset(&WdipSemPool, 0, 0x90uLL);
  qword_140328AA8 = (__int64)&WdipSemPool;
  v0 = 6LL;
  WdipSemPool = &WdipSemPool;
  v1 = &stru_140328AD0;
  qword_140328AC0 = 0LL;
  do
  {
    InitializeSListHead(v1++);
    --v0;
  }
  while ( v0 );
  memset(WdipSemScenarioTable, 0, 0x208uLL);
  memset(WdipSemProviderTable, 0, 0x2010uLL);
  qword_1402FFF28 = 0LL;
  qword_1402FDF08 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  dword_1402FDF10 = 0;
  qword_1402FDF18 = 0LL;
  result = WdipSemClearFrequentScenarioTable();
  WdipSemInitialized = 1;
  return result;
}
