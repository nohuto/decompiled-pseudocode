/*
 * XREFs of WerpFreeMem @ 0x1C003BBFC
 * Callers:
 *     CheckSpaceAvailable @ 0x1C003AEA4 (CheckSpaceAvailable.c)
 *     WerKernelSubmitReport @ 0x1C003B2BC (WerKernelSubmitReport.c)
 *     WerpAllocateAndInitializeSid @ 0x1C003B9C8 (WerpAllocateAndInitializeSid.c)
 * Callees:
 *     <none>
 */

void __fastcall WerpFreeMem(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
