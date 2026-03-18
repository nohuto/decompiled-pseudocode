/*
 * XREFs of KeQueryActiveGroupCount @ 0x140004F14
 * Callers:
 *     PsCreateSystemThreadEx @ 0x1403E4750 (PsCreateSystemThreadEx.c)
 *     ExpQuerySystemInformation @ 0x140415620 (ExpQuerySystemInformation.c)
 *     NtSetInformationJobObject @ 0x140464BD8 (NtSetInformationJobObject.c)
 *     PspAllocateProcess @ 0x14046F030 (PspAllocateProcess.c)
 *     NtPowerInformation @ 0x14051E834 (NtPowerInformation.c)
 *     EtwpProcessorRundown @ 0x1406A7AC0 (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryActiveGroupCount(void)
{
  return KiActiveGroups;
}
