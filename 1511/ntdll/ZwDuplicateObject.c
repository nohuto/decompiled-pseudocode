/*
 * XREFs of ZwDuplicateObject @ 0x1800A5840
 * Callers:
 *     RtlReportSilentProcessExit @ 0x18005B560 (RtlReportSilentProcessExit.c)
 *     TppIsWorkerThread @ 0x18005C69C (TppIsWorkerThread.c)
 *     TppPoolUpdateTrimmedWorker @ 0x180068308 (TppPoolUpdateTrimmedWorker.c)
 *     PsspWalkHandleTable @ 0x18008A7C0 (PsspWalkHandleTable.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x18008BDD8 (PsspDuplicateSnapshotLocalToRemote.c)
 *     RtlCreateProcessReflection @ 0x18008C990 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x18008D1C0 (RtlpProcessReflectionStartup.c)
 *     RtlWow64SuspendThreadEx @ 0x1800D0350 (RtlWow64SuspendThreadEx.c)
 *     RtlpWow64OpenThreadProcess @ 0x1800D05E8 (RtlpWow64OpenThreadProcess.c)
 *     RtlReportExceptionEx @ 0x1800D0990 (RtlReportExceptionEx.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800E1180 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlGetUmsCompletionListEvent @ 0x1800E3980 (RtlGetUmsCompletionListEvent.c)
 *     PssNtFreeRemoteSnapshot @ 0x1800F5E80 (PssNtFreeRemoteSnapshot.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x1800F67B8 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDuplicateObject(
        HANDLE SourceProcessHandle,
        HANDLE SourceHandle,
        HANDLE TargetProcessHandle,
        PHANDLE TargetHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Options)
{
  NTSTATUS result; // eax

  result = 60;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
