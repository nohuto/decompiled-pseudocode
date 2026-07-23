/*
 * XREFs of PiDqFreeGenericTableEntry @ 0x1404D2568
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PiDqFreeGenericTableEntry(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0x58706E50u);
}
