/*
 * XREFs of FxDriverEntry @ 0x1C0002560
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x1C0024D00 (__security_init_cookie.c)
 */

NTSTATUS __stdcall FxDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return DriverEntry_0(DriverObject, RegistryPath);
}
