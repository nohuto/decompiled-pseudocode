/*
 * XREFs of IopAllocateGenericTableEntry @ 0x140670E34
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall IopAllocateGenericTableEntry(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePoolWithTag(PagedPool, ByteSize, 0x65546F49u);
}
