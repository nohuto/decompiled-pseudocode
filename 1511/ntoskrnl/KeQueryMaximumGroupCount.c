/*
 * XREFs of KeQueryMaximumGroupCount @ 0x14002D41C
 * Callers:
 *     PspAllocateThread @ 0x1403F0BB0 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryMaximumGroupCount(void)
{
  return KiMaximumGroups;
}
