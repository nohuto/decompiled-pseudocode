/*
 * XREFs of WerpFreeMem @ 0x1C024D674
 * Callers:
 *     WerKernelSubmitReportForHungProcess @ 0x1C024D088 (WerKernelSubmitReportForHungProcess.c)
 *     WerpAllocateAndInitializeSid @ 0x1C024D560 (WerpAllocateAndInitializeSid.c)
 * Callees:
 *     <none>
 */

void __fastcall WerpFreeMem(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
