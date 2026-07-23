/*
 * XREFs of ZwAddBootEntry @ 0x14015AEF0
 * Callers:
 *     BiAddBootEntry @ 0x1406D34C4 (BiAddBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAddBootEntry(PUNICODE_STRING EntryName, PUNICODE_STRING EntryValue)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EntryName);
}
