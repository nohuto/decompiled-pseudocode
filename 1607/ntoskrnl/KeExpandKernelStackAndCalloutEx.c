/*
 * XREFs of KeExpandKernelStackAndCalloutEx @ 0x1400F0FC0
 * Callers:
 *     sub_1404CE5A0 @ 0x1404CE5A0 (sub_1404CE5A0.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140628C80 (IopIssueSystemEnvironmentRequest.c)
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
