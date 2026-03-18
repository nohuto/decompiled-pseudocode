/*
 * XREFs of KeQueryActiveGroupCount @ 0x1400F9548
 * Callers:
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 *     PsCreateSystemThreadEx @ 0x1404D211C (PsCreateSystemThreadEx.c)
 *     EtwpProcessorRundown @ 0x140666074 (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryActiveGroupCount(void)
{
  return KiActiveGroups;
}
