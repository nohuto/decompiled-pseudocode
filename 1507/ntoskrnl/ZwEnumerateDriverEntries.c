/*
 * XREFs of ZwEnumerateDriverEntries @ 0x1401809F0
 * Callers:
 *     VfZwEnumerateDriverEntries @ 0x140755EAC (VfZwEnumerateDriverEntries.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwEnumerateDriverEntries(PVOID Buffer, PULONG BufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Buffer);
}
