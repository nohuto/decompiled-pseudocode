/*
 * XREFs of IopIssueSystemEnvironmentCallout @ 0x140628C60
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x14002E060 (IofCallDriver.c)
 */

void __fastcall IopIssueSystemEnvironmentCallout(PVOID Parameter)
{
  *((_DWORD *)Parameter + 4) = IofCallDriver(*(PDEVICE_OBJECT *)Parameter, *((PIRP *)Parameter + 1));
}
