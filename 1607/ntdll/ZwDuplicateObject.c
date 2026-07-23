/*
 * XREFs of ZwDuplicateObject @ 0x1800A6BA0
 * Callers:
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180004424 (PsspDuplicateSnapshotRemoteToRemote.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180004D60 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspWalkHandleTable @ 0x18000576C (PsspWalkHandleTable.c)
 *     RtlReportSilentProcessExit @ 0x180007300 (RtlReportSilentProcessExit.c)
 *     RtlReportExceptionHelper @ 0x18000786C (RtlReportExceptionHelper.c)
 *     TppIsWorkerThread @ 0x1800529CC (TppIsWorkerThread.c)
 *     TppPoolUpdateTrimmedWorker @ 0x180062DE8 (TppPoolUpdateTrimmedWorker.c)
 *     RtlCreateProcessReflection @ 0x1800D2FE0 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D35A0 (RtlpProcessReflectionStartup.c)
 *     RtlWow64SuspendThreadEx @ 0x1800D82C0 (RtlWow64SuspendThreadEx.c)
 *     RtlpWow64OpenThreadProcess @ 0x1800D8558 (RtlpWow64OpenThreadProcess.c)
 *     RtlReportExceptionEx @ 0x1800D8780 (RtlReportExceptionEx.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800EA3FC (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlGetUmsCompletionListEvent @ 0x1800ECAE0 (RtlGetUmsCompletionListEvent.c)
 *     PssNtFreeRemoteSnapshot @ 0x1800FED10 (PssNtFreeRemoteSnapshot.c)
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
