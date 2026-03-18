/*
 * XREFs of NtUnloadDriver @ 0x140629514
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopUnloadDriver(&DriverServiceName->Length, 0);
}
