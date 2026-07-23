/*
 * XREFs of ZwEnumerateBootEntries @ 0x140152020
 * Callers:
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x14066B6E0 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiEnumerateBootEntries @ 0x140690140 (BiEnumerateBootEntries.c)
 *     SiGetEspFromFirmware @ 0x140692030 (SiGetEspFromFirmware.c)
 *     VfZwEnumerateBootEntries @ 0x1406D228C (VfZwEnumerateBootEntries.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwEnumerateBootEntries(PVOID Buffer, PULONG BufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Buffer);
}
