/*
 * XREFs of GsDriverEntry @ 0x1C00D6000
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x1C00D602C (__security_init_cookie.c)
 */

NTSTATUS __stdcall GsDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return DriverEntry(DriverObject, RegistryPath);
}
