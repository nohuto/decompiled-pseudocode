/*
 * XREFs of ZwAddBootEntry @ 0x14017FCF0
 * Callers:
 *     BiAddBootEntry @ 0x14070E738 (BiAddBootEntry.c)
 *     VfZwAddBootEntry @ 0x140754C5C (VfZwAddBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAddBootEntry(PUNICODE_STRING EntryName, PUNICODE_STRING EntryValue)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EntryName);
}
