/*
 * XREFs of PiSwAllocateGenericTableEntry @ 0x14055CD4C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall PiSwAllocateGenericTableEntry(_RTL_AVL_TABLE *a1, unsigned int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x57706E50u);
}
