/*
 * XREFs of KeQueryActiveGroupCount @ 0x140013C28
 * Callers:
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 *     PspBuildCreateProcessContext @ 0x14044EA2C (PspBuildCreateProcessContext.c)
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 *     NtSetInformationThread @ 0x140478220 (NtSetInformationThread.c)
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 *     PsCreateSystemThreadEx @ 0x1404F927C (PsCreateSystemThreadEx.c)
 *     IopConnectInterrupt @ 0x14057CE68 (IopConnectInterrupt.c)
 *     IopConnectInterruptFullySpecified @ 0x1405BC298 (IopConnectInterruptFullySpecified.c)
 *     EtwpProcessorRundown @ 0x1406E9204 (EtwpProcessorRundown.c)
 *     ExpProfileCreate @ 0x1406F9A1C (ExpProfileCreate.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryActiveGroupCount(void)
{
  return KiActiveGroups;
}
