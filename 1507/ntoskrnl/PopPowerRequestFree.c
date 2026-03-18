/*
 * XREFs of PopPowerRequestFree @ 0x1405599E8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PopPowerRequestFree(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x6C564150u);
}
