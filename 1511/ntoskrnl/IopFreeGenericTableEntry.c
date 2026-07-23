/*
 * XREFs of IopFreeGenericTableEntry @ 0x1405F76CC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall IopFreeGenericTableEntry(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0x65546F49u);
}
