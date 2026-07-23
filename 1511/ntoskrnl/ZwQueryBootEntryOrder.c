/*
 * XREFs of ZwQueryBootEntryOrder @ 0x140152B80
 * Callers:
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x14066B6E0 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiQueryBootEntryOrder @ 0x140690E04 (BiQueryBootEntryOrder.c)
 *     SiGetEspFromFirmware @ 0x140692030 (SiGetEspFromFirmware.c)
 *     VfZwQueryBootEntryOrder @ 0x1406D3240 (VfZwQueryBootEntryOrder.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryBootEntryOrder(PULONG Ids, PULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
