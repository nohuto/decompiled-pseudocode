/*
 * XREFs of GsDriverEntry @ 0x1C00BF000
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x1C00BF02C (__security_init_cookie.c)
 */

NTSTATUS __stdcall GsDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return DriverEntry(DriverObject, RegistryPath);
}
