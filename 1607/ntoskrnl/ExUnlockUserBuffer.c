/*
 * XREFs of ExUnlockUserBuffer @ 0x140086998
 * Callers:
 *     ExpGetLookasideInformation @ 0x14022C4EC (ExpGetLookasideInformation.c)
 *     NtQueryInformationProcess @ 0x140422590 (NtQueryInformationProcess.c)
 *     ExGetSessionPoolTagInformation @ 0x1404990F4 (ExGetSessionPoolTagInformation.c)
 *     ExLockUserBuffer @ 0x140499420 (ExLockUserBuffer.c)
 *     NtSystemDebugControl @ 0x1404DE844 (NtSystemDebugControl.c)
 *     KdSystemDebugControl @ 0x14064E858 (KdSystemDebugControl.c)
 *     MmGetSessionMappedViewInformation @ 0x140657244 (MmGetSessionMappedViewInformation.c)
 *     MiCopyLargeVad @ 0x1406622EC (MiCopyLargeVad.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406A3258 (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x1406AB034 (ExGetSessionBigPoolInformation.c)
 *     ExpGetHandleInformation @ 0x1406AB42C (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x1406AB498 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x1406AB504 (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x1406AB570 (ExpGetObjectInformation.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1406B0E44 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1406B2440 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateBootEntries @ 0x1406B378C (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1406B3D2C (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1406B41DC (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x1406B44B0 (NtQueryBootEntryOrder.c)
 *     NtQueryDriverEntryOrder @ 0x1406B4A14 (NtQueryDriverEntryOrder.c)
 * Callees:
 *     MmUnlockPages @ 0x140051A80 (MmUnlockPages.c)
 */

void __fastcall ExUnlockUserBuffer(struct _MDL *a1)
{
  MmUnlockPages(a1);
  ExFreePoolWithTag(a1, 0);
}
