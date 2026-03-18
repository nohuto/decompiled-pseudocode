/*
 * XREFs of PiDqAllocateGenericTableEntry @ 0x14055806C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall PiDqAllocateGenericTableEntry(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePoolWithTag(PagedPool, ByteSize, 0x58706E50u);
}
