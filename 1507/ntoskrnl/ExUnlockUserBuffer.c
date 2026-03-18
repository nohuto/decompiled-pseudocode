/*
 * XREFs of ExUnlockUserBuffer @ 0x1400FED14
 * Callers:
 *     ExpGetLookasideInformation @ 0x140262C20 (ExpGetLookasideInformation.c)
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 *     ExGetSessionPoolTagInformation @ 0x14051C77C (ExGetSessionPoolTagInformation.c)
 *     ExLockUserBuffer @ 0x14051CAD0 (ExLockUserBuffer.c)
 *     KdSystemDebugControl @ 0x140697CC4 (KdSystemDebugControl.c)
 *     MmGetSessionMappedViewInformation @ 0x1406A0A34 (MmGetSessionMappedViewInformation.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406E58C8 (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x1406EDFF0 (ExGetSessionBigPoolInformation.c)
 *     ExpGetHandleInformation @ 0x1406EE3DC (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x1406EE448 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x1406EE4B4 (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x1406EE520 (ExpGetObjectInformation.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1406F1A38 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1406F3230 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateBootEntries @ 0x1406F4780 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1406F4DB4 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1406F5304 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x1406F5720 (NtQueryBootEntryOrder.c)
 *     NtQueryDriverEntryOrder @ 0x1406F5DA8 (NtQueryDriverEntryOrder.c)
 *     NtSystemDebugControl @ 0x1406FBA78 (NtSystemDebugControl.c)
 * Callees:
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 */

void __fastcall ExUnlockUserBuffer(struct _MDL *a1)
{
  MmUnlockPages(a1);
  ExFreePoolWithTag(a1, 0);
}
