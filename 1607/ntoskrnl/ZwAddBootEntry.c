/*
 * XREFs of ZwAddBootEntry @ 0x14015A980
 * Callers:
 *     BiAddBootEntry @ 0x1406D338C (BiAddBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAddBootEntry(PUNICODE_STRING EntryName, PUNICODE_STRING EntryValue)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(EntryName, EntryValue, v2);
}
