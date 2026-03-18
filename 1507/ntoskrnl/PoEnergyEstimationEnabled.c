/*
 * XREFs of PoEnergyEstimationEnabled @ 0x140021210
 * Callers:
 *     KiInitializeBootStructures @ 0x1403F77B0 (KiInitializeBootStructures.c)
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 *     PspAllocateThread @ 0x140451490 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 *     ExpGetProcessInformation @ 0x140497410 (ExpGetProcessInformation.c)
 *     NtCreateJobObject @ 0x1404EB86C (NtCreateJobObject.c)
 *     PspFoldProcessAccountingIntoJob @ 0x140506568 (PspFoldProcessAccountingIntoJob.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x14054B990 (PspQueryProcessAccountingInformationCallback.c)
 *     PsQueryProcessEnergyValues @ 0x1406BFAB8 (PsQueryProcessEnergyValues.c)
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

bool PoEnergyEstimationEnabled()
{
  return PopEnergyEstimationDisabled == 0;
}
