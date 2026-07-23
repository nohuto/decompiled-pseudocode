/*
 * XREFs of PiPnpRtlOperationAllocateGenericTableEntry @ 0x14043C008
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall PiPnpRtlOperationAllocateGenericTableEntry(_RTL_AVL_TABLE *a1, unsigned int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x41706E50u);
}
