/*
 * XREFs of ZwQuerySystemEnvironmentValue @ 0x14015CB70
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
