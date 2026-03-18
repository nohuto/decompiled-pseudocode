/*
 * XREFs of WerpFreeMem @ 0x1C0249930
 * Callers:
 *     WerKernelSubmitReportForHungProcess @ 0x1C0249348 (WerKernelSubmitReportForHungProcess.c)
 *     WerpAllocateAndInitializeSid @ 0x1C024981C (WerpAllocateAndInitializeSid.c)
 * Callees:
 *     <none>
 */

void __fastcall WerpFreeMem(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
