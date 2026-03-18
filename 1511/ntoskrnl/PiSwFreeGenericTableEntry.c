/*
 * XREFs of PiSwFreeGenericTableEntry @ 0x1404C6960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PiSwFreeGenericTableEntry(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x57706E50u);
}
