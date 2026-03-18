/*
 * XREFs of KeQueryHighestNodeNumber @ 0x140004F1C
 * Callers:
 *     ExpQueryNumaProcessorMap @ 0x1403E4940 (ExpQueryNumaProcessorMap.c)
 *     IoGetDeviceNumaNode @ 0x140547BC4 (IoGetDeviceNumaNode.c)
 *     EtwpProcessorRundown @ 0x1406A7AC0 (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryHighestNodeNumber(void)
{
  return KeNumberNodes - 1;
}
