/*
 * XREFs of ZwQueryInformationThread @ 0x1800A5560
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x180045664 (EtwpAddLogHeaderToLogFile.c)
 *     PsspSampleCounters @ 0x180047D7C (PsspSampleCounters.c)
 *     RtlExitUserThread @ 0x18005C5F0 (RtlExitUserThread.c)
 *     TppIsWorkerThread @ 0x18005C69C (TppIsWorkerThread.c)
 *     RtlQueryProcessDebugInformation @ 0x18006C270 (RtlQueryProcessDebugInformation.c)
 *     RtlCheckHeldCriticalSections @ 0x18007EC20 (RtlCheckHeldCriticalSections.c)
 *     RtlSetThreadIsCritical @ 0x180088A60 (RtlSetThreadIsCritical.c)
 *     PsspDumpObject_Thread @ 0x18008AD80 (PsspDumpObject_Thread.c)
 *     PsspDumpThread @ 0x18008B79C (PsspDumpThread.c)
 *     RtlQueryThreadProfiling @ 0x1800C8470 (RtlQueryThreadProfiling.c)
 *     DbgUiConvertStateChangeStructureWorker @ 0x1800C8C60 (DbgUiConvertStateChangeStructureWorker.c)
 *     LdrpDoDebuggerBreak @ 0x1800CAAF0 (LdrpDoDebuggerBreak.c)
 *     RtlSetProcessDebugInformation @ 0x1800CD370 (RtlSetProcessDebugInformation.c)
 *     RtlWow64GetThreadContext @ 0x1800D0150 (RtlWow64GetThreadContext.c)
 *     RtlWow64GetThreadSelectorEntry @ 0x1800D0180 (RtlWow64GetThreadSelectorEntry.c)
 *     RtlWow64SuspendThreadEx @ 0x1800D0350 (RtlWow64SuspendThreadEx.c)
 *     RtlpWow64OpenThreadProcess @ 0x1800D05E8 (RtlpWow64OpenThreadProcess.c)
 *     RtlReportExceptionEx @ 0x1800D0990 (RtlReportExceptionEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 37;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
