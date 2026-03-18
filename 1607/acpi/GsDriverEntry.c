/*
 * XREFs of GsDriverEntry @ 0x1C00A8ED0
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x1C00A8EE8 (__security_init_cookie.c)
 */

NTSTATUS __stdcall GsDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  PUNICODE_STRING v2; // rdx
  _DRIVER_OBJECT *v3; // r8

  _security_init_cookie();
  return DriverEntry(v3, v2);
}
