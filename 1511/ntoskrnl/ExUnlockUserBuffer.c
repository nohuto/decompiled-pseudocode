/*
 * XREFs of ExUnlockUserBuffer @ 0x1400E718C
 * Callers:
 *     ExpGetLookasideInformation @ 0x140213404 (ExpGetLookasideInformation.c)
 *     NtQueryInformationProcess @ 0x14041D530 (NtQueryInformationProcess.c)
 *     ExGetSessionPoolTagInformation @ 0x1404AC20C (ExGetSessionPoolTagInformation.c)
 *     ExLockUserBuffer @ 0x1404AC538 (ExLockUserBuffer.c)
 *     KdSystemDebugControl @ 0x1406196A8 (KdSystemDebugControl.c)
 *     MmGetSessionMappedViewInformation @ 0x1406213A0 (MmGetSessionMappedViewInformation.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406627B0 (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x14066A9A8 (ExGetSessionBigPoolInformation.c)
 *     ExpGetHandleInformation @ 0x14066AD94 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x14066AE00 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x14066AE6C (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x14066AED8 (ExpGetObjectInformation.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x14066E12C (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14066F738 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateBootEntries @ 0x140670A9C (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x140671040 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1406714EC (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x1406717BC (NtQueryBootEntryOrder.c)
 *     NtQueryDriverEntryOrder @ 0x140671D18 (NtQueryDriverEntryOrder.c)
 *     NtSystemDebugControl @ 0x1406772A8 (NtSystemDebugControl.c)
 * Callees:
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 */

void __fastcall ExUnlockUserBuffer(struct _MDL *a1)
{
  MmUnlockPages(a1);
  ExFreePoolWithTag(a1, 0);
}
