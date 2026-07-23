/*
 * XREFs of ExUnlockUserBuffer @ 0x140088288
 * Callers:
 *     ExpGetLookasideInformation @ 0x14022C318 (ExpGetLookasideInformation.c)
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 *     ExGetSessionPoolTagInformation @ 0x140499B84 (ExGetSessionPoolTagInformation.c)
 *     ExLockUserBuffer @ 0x140499EB0 (ExLockUserBuffer.c)
 *     NtSystemDebugControl @ 0x1404C1E48 (NtSystemDebugControl.c)
 *     KdSystemDebugControl @ 0x14064E93C (KdSystemDebugControl.c)
 *     MmGetSessionMappedViewInformation @ 0x140657328 (MmGetSessionMappedViewInformation.c)
 *     MiCopyLargeVad @ 0x1406623D0 (MiCopyLargeVad.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406A3390 (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x1406AB16C (ExGetSessionBigPoolInformation.c)
 *     ExpGetHandleInformation @ 0x1406AB564 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x1406AB5D0 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x1406AB63C (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x1406AB6A8 (ExpGetObjectInformation.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1406B0F7C (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1406B2578 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateBootEntries @ 0x1406B38C4 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1406B3E64 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1406B4314 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x1406B45E8 (NtQueryBootEntryOrder.c)
 *     NtQueryDriverEntryOrder @ 0x1406B4B4C (NtQueryDriverEntryOrder.c)
 * Callees:
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 */

void __fastcall ExUnlockUserBuffer(struct _MDL *a1)
{
  MmUnlockPages(a1);
  ExFreePoolWithTag(a1, 0);
}
