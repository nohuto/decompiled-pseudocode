/*
 * XREFs of PnpAllocateGenericTableEntry @ 0x1404EFF30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall PnpAllocateGenericTableEntry(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePoolWithTag(PagedPool, ByteSize, 0x75737050u);
}
