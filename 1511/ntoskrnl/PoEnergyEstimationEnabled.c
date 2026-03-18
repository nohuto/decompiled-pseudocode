/*
 * XREFs of PoEnergyEstimationEnabled @ 0x14002D424
 * Callers:
 *     KiInitializeBootStructures @ 0x1403A770C (KiInitializeBootStructures.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x1403EBDD8 (PspQueryProcessAccountingInformationCallback.c)
 *     PspFoldProcessAccountingIntoJob @ 0x1403EC880 (PspFoldProcessAccountingIntoJob.c)
 *     PspAllocateThread @ 0x1403F0BB0 (PspAllocateThread.c)
 *     PsQueryProcessEnergyValues @ 0x1403F1B44 (PsQueryProcessEnergyValues.c)
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 *     NtCreateJobObject @ 0x140487354 (NtCreateJobObject.c)
 * Callees:
 *     <none>
 */

bool PoEnergyEstimationEnabled()
{
  return PopEnergyEstimationDisabled == 0;
}
