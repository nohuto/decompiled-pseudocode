/*
 * XREFs of GsDriverEntry @ 0x1C01B7000
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x1C01B7B7C (__security_init_cookie.c)
 */

NTSTATUS __stdcall GsDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _DRIVER_OBJECT *v2; // rdx

  _security_init_cookie();
  return DriverEntry(v2, (PUNICODE_STRING)v2);
}
