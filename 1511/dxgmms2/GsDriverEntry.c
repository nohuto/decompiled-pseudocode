/*
 * XREFs of GsDriverEntry @ 0x1C008E030
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x1C008E000 (__security_init_cookie.c)
 */

NTSTATUS __stdcall GsDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return 0;
}
