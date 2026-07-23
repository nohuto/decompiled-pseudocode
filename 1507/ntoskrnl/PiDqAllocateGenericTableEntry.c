/*
 * XREFs of PiDqAllocateGenericTableEntry @ 0x14055806C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall PiDqAllocateGenericTableEntry(_RTL_AVL_TABLE *a1, unsigned int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x58706E50u);
}
