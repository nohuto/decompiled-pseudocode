/*
 * XREFs of ZwAddBootEntry @ 0x140151320
 * Callers:
 *     BiAddBootEntry @ 0x14068EC20 (BiAddBootEntry.c)
 *     VfZwAddBootEntry @ 0x1406D1094 (VfZwAddBootEntry.c)
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
