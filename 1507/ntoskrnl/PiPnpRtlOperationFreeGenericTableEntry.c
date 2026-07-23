/*
 * XREFs of PiPnpRtlOperationFreeGenericTableEntry @ 0x14043BFF8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PiPnpRtlOperationFreeGenericTableEntry(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0x41706E50u);
}
