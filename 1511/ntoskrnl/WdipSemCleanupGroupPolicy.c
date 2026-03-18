/*
 * XREFs of WdipSemCleanupGroupPolicy @ 0x1405328BC
 * Callers:
 *     WdipSemCleanStart @ 0x140532858 (WdipSemCleanStart.c)
 *     WdipSemLoadGroupPolicy @ 0x1405329D0 (WdipSemLoadGroupPolicy.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void WdipSemCleanupGroupPolicy()
{
  if ( WdipSemDisabledScenarioTable )
  {
    ExFreePoolWithTag(WdipSemDisabledScenarioTable, 0);
    WdipSemDisabledScenarioTable = 0LL;
  }
}
