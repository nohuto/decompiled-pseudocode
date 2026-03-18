/*
 * XREFs of WdipSemCleanupGroupPolicy @ 0x1405647F4
 * Callers:
 *     WdipSemCleanStart @ 0x140564790 (WdipSemCleanStart.c)
 *     WdipSemLoadGroupPolicy @ 0x140564918 (WdipSemLoadGroupPolicy.c)
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
