/*
 * XREFs of WerpFreeMem @ 0x1C003C1C8
 * Callers:
 *     CheckSpaceAvailable @ 0x1C003B470 (CheckSpaceAvailable.c)
 *     WerKernelSubmitReport @ 0x1C003B888 (WerKernelSubmitReport.c)
 *     WerpAllocateAndInitializeSid @ 0x1C003BF94 (WerpAllocateAndInitializeSid.c)
 * Callees:
 *     <none>
 */

void __fastcall WerpFreeMem(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
