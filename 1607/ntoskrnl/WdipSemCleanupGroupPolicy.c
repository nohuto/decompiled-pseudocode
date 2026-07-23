/*
 * XREFs of WdipSemCleanupGroupPolicy @ 0x140564D34
 * Callers:
 *     WdipSemCleanStart @ 0x140564CD0 (WdipSemCleanStart.c)
 *     WdipSemLoadGroupPolicy @ 0x140564E58 (WdipSemLoadGroupPolicy.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void WdipSemCleanupGroupPolicy()
{
  if ( WdipSemDisabledScenarioTable )
  {
    ExFreePoolWithTag(WdipSemDisabledScenarioTable, 0);
    WdipSemDisabledScenarioTable = 0LL;
  }
}
