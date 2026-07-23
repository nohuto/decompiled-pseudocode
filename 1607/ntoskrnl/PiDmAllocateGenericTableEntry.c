/*
 * XREFs of PiDmAllocateGenericTableEntry @ 0x140573118
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall PiDmAllocateGenericTableEntry(_RTL_AVL_TABLE *a1, unsigned int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x5A706E50u);
}
