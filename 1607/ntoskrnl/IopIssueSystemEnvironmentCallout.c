/*
 * XREFs of IopIssueSystemEnvironmentCallout @ 0x140628D14
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x14002DBE0 (IofCallDriver.c)
 */

void __fastcall IopIssueSystemEnvironmentCallout(PVOID Parameter)
{
  *((_DWORD *)Parameter + 4) = IofCallDriver(*(PDEVICE_OBJECT *)Parameter, *((PIRP *)Parameter + 1));
}
