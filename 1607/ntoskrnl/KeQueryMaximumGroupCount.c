/*
 * XREFs of KeQueryMaximumGroupCount @ 0x1400EFE9C
 * Callers:
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 *     PspAllocateThread @ 0x1404F8890 (PspAllocateThread.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryMaximumGroupCount(void)
{
  return KiMaximumGroups;
}
