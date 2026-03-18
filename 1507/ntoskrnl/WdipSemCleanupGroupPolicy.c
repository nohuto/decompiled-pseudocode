/*
 * XREFs of WdipSemCleanupGroupPolicy @ 0x1405ADDA0
 * Callers:
 *     WdipSemCleanStart @ 0x1405ADD3C (WdipSemCleanStart.c)
 *     WdipSemLoadGroupPolicy @ 0x1405ADEB4 (WdipSemLoadGroupPolicy.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void WdipSemCleanupGroupPolicy()
{
  if ( WdipSemDisabledScenarioTable )
  {
    ExFreePoolWithTag(WdipSemDisabledScenarioTable, 0);
    WdipSemDisabledScenarioTable = 0LL;
  }
}
