/*
 * XREFs of FxDriverEntry @ 0x1C0007810
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x1C0054000 (__security_init_cookie.c)
 */

NTSTATUS __stdcall FxDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  PUNICODE_STRING v2; // rdx
  _DRIVER_OBJECT *v3; // r8

  _security_init_cookie();
  return FxDriverEntryWorker(v3, v2);
}
