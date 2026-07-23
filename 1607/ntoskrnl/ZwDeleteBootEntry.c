/*
 * XREFs of ZwDeleteBootEntry @ 0x14015BA90
 * Callers:
 *     BiDeleteBootEntry @ 0x1406D48FC (BiDeleteBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteBootEntry(PUNICODE_STRING EntryName, PUNICODE_STRING EntryValue)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EntryName);
}
