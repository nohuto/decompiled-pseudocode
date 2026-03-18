/*
 * XREFs of VfZwDeleteBootEntry @ 0x140755BF4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VfZwDeleteBootEntry(PUNICODE_STRING EntryName, PUNICODE_STRING EntryValue)
{
  return pXdvZwDeleteBootEntry(EntryName, EntryValue);
}
