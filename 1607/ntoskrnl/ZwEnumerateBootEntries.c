/*
 * XREFs of ZwEnumerateBootEntries @ 0x14015BC30
 * Callers:
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1406AC090 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiEnumerateBootEntries @ 0x1406D4A18 (BiEnumerateBootEntries.c)
 *     SiGetEspFromFirmware @ 0x1406D6900 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwEnumerateBootEntries(PVOID Buffer, PULONG BufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Buffer);
}
