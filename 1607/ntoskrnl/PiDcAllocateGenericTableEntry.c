/*
 * XREFs of PiDcAllocateGenericTableEntry @ 0x1405800DC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall PiDcAllocateGenericTableEntry(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePoolWithTag(PagedPool, ByteSize, 0x47706E50u);
}
