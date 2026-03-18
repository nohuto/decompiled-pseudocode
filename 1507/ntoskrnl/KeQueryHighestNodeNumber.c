/*
 * XREFs of KeQueryHighestNodeNumber @ 0x1400DBBB8
 * Callers:
 *     ExpQueryNumaProcessorMap @ 0x1404FADD4 (ExpQueryNumaProcessorMap.c)
 *     IoGetDeviceNumaNode @ 0x1405833F4 (IoGetDeviceNumaNode.c)
 *     EtwpProcessorRundown @ 0x1406E9204 (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryHighestNodeNumber(void)
{
  return KeNumberNodes - 1;
}
