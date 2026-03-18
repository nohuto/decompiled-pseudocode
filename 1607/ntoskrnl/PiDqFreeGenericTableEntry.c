/*
 * XREFs of PiDqFreeGenericTableEntry @ 0x1404F0474
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PiDqFreeGenericTableEntry(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x58706E50u);
}
