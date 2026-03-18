/*
 * XREFs of PopPowerRequestFree @ 0x1404EF7DC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PopPowerRequestFree(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x6C564150u);
}
