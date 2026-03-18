/*
 * XREFs of WerpFreeMem @ 0x1C024D604
 * Callers:
 *     WerKernelSubmitReportForHungProcess @ 0x1C024D018 (WerKernelSubmitReportForHungProcess.c)
 *     WerpAllocateAndInitializeSid @ 0x1C024D4F0 (WerpAllocateAndInitializeSid.c)
 * Callees:
 *     <none>
 */

void __fastcall WerpFreeMem(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
