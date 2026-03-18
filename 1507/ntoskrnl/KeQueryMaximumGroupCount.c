/*
 * XREFs of KeQueryMaximumGroupCount @ 0x140021220
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x140113FA0 (KeQueryLogicalProcessorRelationship.c)
 *     KiValidateCpuSetMasks @ 0x14013356C (KiValidateCpuSetMasks.c)
 *     KeQueryCpuSetsProcess @ 0x1402057A0 (KeQueryCpuSetsProcess.c)
 *     KeQueryCpuSetsThread @ 0x14020587C (KeQueryCpuSetsThread.c)
 *     KeSetCpuSetsProcess @ 0x140205964 (KeSetCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140205B1C (KeSetSelectedCpuSetsThread.c)
 *     PspAllocateThread @ 0x140451490 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryMaximumGroupCount(void)
{
  USHORT result; // ax

  result = KiActiveGroups;
  if ( KeDynamicPartitioningSupported )
    return KiMaximumGroups;
  return result;
}
