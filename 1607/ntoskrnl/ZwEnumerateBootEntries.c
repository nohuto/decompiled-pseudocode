/*
 * XREFs of ZwEnumerateBootEntries @ 0x14015B6C0
 * Callers:
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1406ABF58 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiEnumerateBootEntries @ 0x1406D48E0 (BiEnumerateBootEntries.c)
 *     SiGetEspFromFirmware @ 0x1406D67C8 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwEnumerateBootEntries(PVOID Buffer, PULONG BufferLength)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(Buffer, BufferLength, v2);
}
