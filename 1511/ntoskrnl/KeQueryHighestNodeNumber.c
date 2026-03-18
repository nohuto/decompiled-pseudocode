/*
 * XREFs of KeQueryHighestNodeNumber @ 0x1400F69B0
 * Callers:
 *     ExpQueryNumaProcessorMap @ 0x1404D117C (ExpQueryNumaProcessorMap.c)
 *     IoGetDeviceNumaNode @ 0x14050C90C (IoGetDeviceNumaNode.c)
 *     EtwpProcessorRundown @ 0x140666074 (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryHighestNodeNumber(void)
{
  return KeNumberNodes - 1;
}
