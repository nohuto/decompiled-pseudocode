/*
 * XREFs of PoEnergyEstimationEnabled @ 0x1400F2054
 * Callers:
 *     KiInitializeBootStructures @ 0x1403D4E7C (KiInitializeBootStructures.c)
 *     ExpQuerySystemInformation @ 0x140415620 (ExpQuerySystemInformation.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x140469B4C (PspQueryProcessAccountingInformationCallback.c)
 *     PspFoldProcessAccountingIntoJob @ 0x14046A07C (PspFoldProcessAccountingIntoJob.c)
 *     PspAllocateProcess @ 0x14046F030 (PspAllocateProcess.c)
 *     NtCreateJobObject @ 0x1404A20AC (NtCreateJobObject.c)
 *     PspAllocateThread @ 0x1405154A0 (PspAllocateThread.c)
 *     PsQueryProcessEnergyValues @ 0x1405160D0 (PsQueryProcessEnergyValues.c)
 * Callees:
 *     <none>
 */

bool PoEnergyEstimationEnabled()
{
  return PopEnergyEstimationDisabled == 0;
}
