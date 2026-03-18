/*
 * XREFs of WerpFreeMem @ 0x140303D00
 * Callers:
 *     WerKernelSubmitReportForHungProcess @ 0x140303654 (WerKernelSubmitReportForHungProcess.c)
 *     WerpAllocateAndInitializeSid @ 0x140303BDC (WerpAllocateAndInitializeSid.c)
 * Callees:
 *     <none>
 */

void __fastcall WerpFreeMem(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
