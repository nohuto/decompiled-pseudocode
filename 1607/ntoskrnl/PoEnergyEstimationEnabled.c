/*
 * XREFs of PoEnergyEstimationEnabled @ 0x1400EFEA4
 * Callers:
 *     KiInitializeBootStructures @ 0x1403D4E7C (KiInitializeBootStructures.c)
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x140468A1C (PspQueryProcessAccountingInformationCallback.c)
 *     PspFoldProcessAccountingIntoJob @ 0x140468F4C (PspFoldProcessAccountingIntoJob.c)
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 *     PspAllocateThread @ 0x1404F8890 (PspAllocateThread.c)
 *     PsQueryProcessEnergyValues @ 0x1404F94C0 (PsQueryProcessEnergyValues.c)
 *     NtCreateJobObject @ 0x14051A4B8 (NtCreateJobObject.c)
 * Callees:
 *     <none>
 */

bool PoEnergyEstimationEnabled()
{
  return PopEnergyEstimationDisabled == 0;
}
