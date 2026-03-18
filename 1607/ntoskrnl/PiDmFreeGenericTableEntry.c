/*
 * XREFs of PiDmFreeGenericTableEntry @ 0x14062F8BC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PiDmFreeGenericTableEntry(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x5A706E50u);
}
