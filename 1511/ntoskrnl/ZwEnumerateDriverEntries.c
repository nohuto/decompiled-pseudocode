/*
 * XREFs of ZwEnumerateDriverEntries @ 0x140152040
 * Callers:
 *     VfZwEnumerateDriverEntries @ 0x1406D22E4 (VfZwEnumerateDriverEntries.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwEnumerateDriverEntries(PVOID Buffer, PULONG BufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Buffer);
}
