/*
 * XREFs of ZwQuerySystemEnvironmentValue @ 0x140152F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySystemEnvironmentValue(PUNICODE_STRING Name, PWSTR Value, ULONG Length, PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Name);
}
