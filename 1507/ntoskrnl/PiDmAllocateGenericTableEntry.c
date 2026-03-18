/*
 * XREFs of PiDmAllocateGenericTableEntry @ 0x1405B7844
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall PiDmAllocateGenericTableEntry(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePoolWithTag(PagedPool, ByteSize, 0x5A706E50u);
}
