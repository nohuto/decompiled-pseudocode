/*
 * XREFs of IopIssueSystemEnvironmentCallout @ 0x1405FEC2C
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 */

void __fastcall IopIssueSystemEnvironmentCallout(PVOID Parameter)
{
  *((_DWORD *)Parameter + 4) = IofCallDriver(*(PDEVICE_OBJECT *)Parameter, *((PIRP *)Parameter + 1));
}
