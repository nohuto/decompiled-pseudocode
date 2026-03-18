/*
 * XREFs of ZwQueryBootEntryOrder @ 0x14015C240
 * Callers:
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1406ABF58 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiQueryBootEntryOrder @ 0x1406D55CC (BiQueryBootEntryOrder.c)
 *     SiGetEspFromFirmware @ 0x1406D67C8 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryBootEntryOrder(PULONG Ids, PULONG Count)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(Ids, Count, v2);
}
