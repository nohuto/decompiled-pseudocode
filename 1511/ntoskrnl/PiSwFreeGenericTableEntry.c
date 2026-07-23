/*
 * XREFs of PiSwFreeGenericTableEntry @ 0x1404C6960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PiSwFreeGenericTableEntry(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0x57706E50u);
}
