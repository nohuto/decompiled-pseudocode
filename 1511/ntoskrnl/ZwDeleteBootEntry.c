/*
 * XREFs of ZwDeleteBootEntry @ 0x140151E80
 * Callers:
 *     BiDeleteBootEntry @ 0x140690024 (BiDeleteBootEntry.c)
 *     VfZwDeleteBootEntry @ 0x1406D202C (VfZwDeleteBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteBootEntry(PUNICODE_STRING EntryName, PUNICODE_STRING EntryValue)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EntryName);
}
