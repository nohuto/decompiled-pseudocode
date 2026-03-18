/*
 * XREFs of KeExpandKernelStackAndCalloutEx @ 0x1400216E0
 * Callers:
 *     sub_140452800 @ 0x140452800 (sub_140452800.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140679794 (IopIssueSystemEnvironmentRequest.c)
 *     ViPoolLogStackTrace @ 0x1407463EC (ViPoolLogStackTrace.c)
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
