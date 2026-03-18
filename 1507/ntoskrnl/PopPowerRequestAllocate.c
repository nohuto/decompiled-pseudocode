/*
 * XREFs of PopPowerRequestAllocate @ 0x140559C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall PopPowerRequestAllocate(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePoolWithTag(PagedPool, ByteSize, 0x6C564150u);
}
