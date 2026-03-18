/*
 * XREFs of ZwEnumerateBootEntries @ 0x1401809D0
 * Callers:
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1406EED28 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiEnumerateBootEntries @ 0x14070FC58 (BiEnumerateBootEntries.c)
 *     SiGetEspFromFirmware @ 0x140711B48 (SiGetEspFromFirmware.c)
 *     VfZwEnumerateBootEntries @ 0x140755E54 (VfZwEnumerateBootEntries.c)
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
