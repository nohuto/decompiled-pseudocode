/*
 * XREFs of PiDmFreeGenericTableEntry @ 0x1406058DC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PiDmFreeGenericTableEntry(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0x5A706E50u);
}
