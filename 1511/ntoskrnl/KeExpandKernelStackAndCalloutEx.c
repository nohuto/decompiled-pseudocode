/*
 * XREFs of KeExpandKernelStackAndCalloutEx @ 0x14002C380
 * Callers:
 *     sub_1404AE888 @ 0x1404AE888 (sub_1404AE888.c)
 *     IopIssueSystemEnvironmentRequest @ 0x1405FEC4C (IopIssueSystemEnvironmentRequest.c)
 *     ViPoolLogStackTrace @ 0x1406C4AF8 (ViPoolLogStackTrace.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall KeExpandKernelStackAndCalloutEx(
        PEXPAND_STACK_CALLOUT Callout,
        PVOID Parameter,
        SIZE_T Size,
        BOOLEAN Wait,
        PVOID Context)
{
  BOOLEAN v5; // r10

  v5 = 0;
  if ( Wait )
    v5 = 2;
  return KeExpandKernelStackAndCalloutInternal(Callout, Parameter, Size, v5, Context);
}
