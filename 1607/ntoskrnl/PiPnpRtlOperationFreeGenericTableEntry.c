/*
 * XREFs of PiPnpRtlOperationFreeGenericTableEntry @ 0x1404E4ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PiPnpRtlOperationFreeGenericTableEntry(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0x41706E50u);
}
