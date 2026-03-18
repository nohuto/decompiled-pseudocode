/*
 * XREFs of PiDmFreeGenericTableEntry @ 0x1406804AC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PiDmFreeGenericTableEntry(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x5A706E50u);
}
