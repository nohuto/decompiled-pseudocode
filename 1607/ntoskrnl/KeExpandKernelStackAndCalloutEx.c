/*
 * XREFs of KeExpandKernelStackAndCalloutEx @ 0x1400EEE10
 * Callers:
 *     sub_1404B3800 @ 0x1404B3800 (sub_1404B3800.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140628D34 (IopIssueSystemEnvironmentRequest.c)
 *     ViPoolLogStackTrace @ 0x140710BB0 (ViPoolLogStackTrace.c)
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
