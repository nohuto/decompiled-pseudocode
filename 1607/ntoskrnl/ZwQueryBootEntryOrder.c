/*
 * XREFs of ZwQueryBootEntryOrder @ 0x14015C7B0
 * Callers:
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1406AC090 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiQueryBootEntryOrder @ 0x1406D5704 (BiQueryBootEntryOrder.c)
 *     SiGetEspFromFirmware @ 0x1406D6900 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryBootEntryOrder(PULONG Ids, PULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
