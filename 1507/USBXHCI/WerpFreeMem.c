/*
 * XREFs of WerpFreeMem @ 0x1C003ACF0
 * Callers:
 *     CheckSpaceAvailable @ 0x1C0039F98 (CheckSpaceAvailable.c)
 *     WerKernelSubmitReport @ 0x1C003A3B0 (WerKernelSubmitReport.c)
 *     WerpAllocateAndInitializeSid @ 0x1C003AABC (WerpAllocateAndInitializeSid.c)
 * Callees:
 *     <none>
 */

void __fastcall WerpFreeMem(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
