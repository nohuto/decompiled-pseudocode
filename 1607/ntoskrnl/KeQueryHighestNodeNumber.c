/*
 * XREFs of KeQueryHighestNodeNumber @ 0x140005090
 * Callers:
 *     ExpQueryNumaProcessorMap @ 0x1403E5F6C (ExpQueryNumaProcessorMap.c)
 *     IoGetDeviceNumaNode @ 0x140548104 (IoGetDeviceNumaNode.c)
 *     EtwpProcessorRundown @ 0x1406A7BF8 (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryHighestNodeNumber(void)
{
  return KeNumberNodes - 1;
}
