/*
 * XREFs of IopIssueSystemEnvironmentCallout @ 0x140679774
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 */

void __fastcall IopIssueSystemEnvironmentCallout(PVOID Parameter)
{
  *((_DWORD *)Parameter + 4) = IofCallDriver(*(PDEVICE_OBJECT *)Parameter, *((PIRP *)Parameter + 1));
}
