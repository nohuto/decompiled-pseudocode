/*
 * XREFs of ZwDisplayString @ 0x140180970
 * Callers:
 *     VfZwDisplayString @ 0x140755D44 (VfZwDisplayString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDisplayString(PUNICODE_STRING String)
{
  _disable();
  __readeflags();
  return KiServiceInternal(String);
}
