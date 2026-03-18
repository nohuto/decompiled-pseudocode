/*
 * XREFs of NtUnloadDriver @ 0x14067A088
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopUnloadDriver(&DriverServiceName->Length, 0);
}
