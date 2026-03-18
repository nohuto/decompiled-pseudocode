/*
 * XREFs of IopFreeGenericTableEntry @ 0x1405F76CC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall IopFreeGenericTableEntry(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x65546F49u);
}
