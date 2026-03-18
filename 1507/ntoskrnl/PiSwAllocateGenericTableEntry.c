/*
 * XREFs of PiSwAllocateGenericTableEntry @ 0x14055CD4C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall PiSwAllocateGenericTableEntry(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePoolWithTag(PagedPool, ByteSize, 0x57706E50u);
}
