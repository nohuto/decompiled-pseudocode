/*
 * XREFs of PiDcAllocateGenericTableEntry @ 0x1405C1F54
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall PiDcAllocateGenericTableEntry(_RTL_AVL_TABLE *a1, unsigned int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x47706E50u);
}
