/*
 * XREFs of IopAllocateGenericTableEntry @ 0x1405F70A4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall IopAllocateGenericTableEntry(_RTL_AVL_TABLE *a1, unsigned int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x65546F49u);
}
