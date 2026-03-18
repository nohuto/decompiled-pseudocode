/*
 * XREFs of PiPnpRtlOperationFreeGenericTableEntry @ 0x140440DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PiPnpRtlOperationFreeGenericTableEntry(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x41706E50u);
}
