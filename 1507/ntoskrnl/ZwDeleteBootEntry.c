/*
 * XREFs of ZwDeleteBootEntry @ 0x140180830
 * Callers:
 *     BiDeleteBootEntry @ 0x14070FB3C (BiDeleteBootEntry.c)
 *     VfZwDeleteBootEntry @ 0x140755BF4 (VfZwDeleteBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteBootEntry(PUNICODE_STRING EntryName, PUNICODE_STRING EntryValue)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EntryName);
}
