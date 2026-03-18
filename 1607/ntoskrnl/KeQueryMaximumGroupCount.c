/*
 * XREFs of KeQueryMaximumGroupCount @ 0x1400F204C
 * Callers:
 *     PspAllocateProcess @ 0x14046F030 (PspAllocateProcess.c)
 *     PspAllocateThread @ 0x1405154A0 (PspAllocateThread.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryMaximumGroupCount(void)
{
  return KiMaximumGroups;
}
