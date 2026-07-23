/*
 * XREFs of PopPowerRequestAllocate @ 0x140559C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall PopPowerRequestAllocate(_RTL_AVL_TABLE *a1, unsigned int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x6C564150u);
}
