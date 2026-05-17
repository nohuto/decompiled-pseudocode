/*
 * XREFs of ZwDuplicateObject @ 0x1800A6BA0
 * Callers:
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180004424 (PsspDuplicateSnapshotRemoteToRemote.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180004D44 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspWalkHandleTable @ 0x180005778 (PsspWalkHandleTable.c)
 *     RtlReportSilentProcessExit @ 0x180007310 (RtlReportSilentProcessExit.c)
 *     RtlReportExceptionHelper @ 0x18000787C (RtlReportExceptionHelper.c)
 *     TppIsWorkerThread @ 0x1800529DC (TppIsWorkerThread.c)
 *     TppPoolUpdateTrimmedWorker @ 0x180062DF8 (TppPoolUpdateTrimmedWorker.c)
 *     RtlCreateProcessReflection @ 0x1800D2F20 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D34E0 (RtlpProcessReflectionStartup.c)
 *     RtlWow64SuspendThreadEx @ 0x1800D8200 (RtlWow64SuspendThreadEx.c)
 *     RtlpWow64OpenThreadProcess @ 0x1800D8498 (RtlpWow64OpenThreadProcess.c)
 *     RtlReportExceptionEx @ 0x1800D86C0 (RtlReportExceptionEx.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800EA33C (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlGetUmsCompletionListEvent @ 0x1800ECA20 (RtlGetUmsCompletionListEvent.c)
 *     PssNtFreeRemoteSnapshot @ 0x1800FED10 (PssNtFreeRemoteSnapshot.c)
 * Callees:
 *     <none>
 */

__int64 ZwDuplicateObject()
{
  __int64 result; // rax

  result = 60LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
