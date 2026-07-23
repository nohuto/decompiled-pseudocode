/*
 * XREFs of ZwDisplayString @ 0x140151FC0
 * Callers:
 *     VfZwDisplayString @ 0x1406D217C (VfZwDisplayString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDisplayString(PUNICODE_STRING String)
{
  _disable();
  __readeflags();
  return KiServiceInternal(String);
}
