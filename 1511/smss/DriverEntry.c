/*
 * XREFs of DriverEntry @ 0x140001020
 * Callers:
 *     <none>
 * Callees:
 *     sub_140001040 @ 0x140001040 (sub_140001040.c)
 *     sub_14000C140 @ 0x14000C140 (sub_14000C140.c)
 */

NTSTATUS __stdcall __noreturn DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  sub_14000C140(DriverObject, RegistryPath);
  sub_140001040(DriverObject);
  JUMPOUT(0x140001036LL);
}
