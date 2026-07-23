/*
 * XREFs of ZwQueryInformationThread @ 0x1800A68C0
 * Callers:
 *     PsspDumpThread @ 0x180005574 (PsspDumpThread.c)
 *     PsspDumpObject_Thread @ 0x180006740 (PsspDumpObject_Thread.c)
 *     WerpThreadId @ 0x180007838 (WerpThreadId.c)
 *     RtlGetThreadWorkOnBehalfTicket @ 0x18003D210 (RtlGetThreadWorkOnBehalfTicket.c)
 *     RtlExitUserThread @ 0x180052920 (RtlExitUserThread.c)
 *     TppIsWorkerThread @ 0x1800529CC (TppIsWorkerThread.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180054904 (EtwpAddLogHeaderToLogFile.c)
 *     PsspSampleCounters @ 0x18005961C (PsspSampleCounters.c)
 *     RtlQueryProcessDebugInformation @ 0x18006D3A0 (RtlQueryProcessDebugInformation.c)
 *     LdrpDetectDetour @ 0x180073554 (LdrpDetectDetour.c)
 *     RtlCheckHeldCriticalSections @ 0x180082490 (RtlCheckHeldCriticalSections.c)
 *     RtlSetThreadIsCritical @ 0x18008D0F0 (RtlSetThreadIsCritical.c)
 *     RtlQueryThreadProfiling @ 0x1800CF850 (RtlQueryThreadProfiling.c)
 *     DbgUiConvertStateChangeStructureWorker @ 0x1800D0100 (DbgUiConvertStateChangeStructureWorker.c)
 *     LdrpDoDebuggerBreak @ 0x1800D2160 (LdrpDoDebuggerBreak.c)
 *     RtlSetProcessDebugInformation @ 0x1800D53B0 (RtlSetProcessDebugInformation.c)
 *     RtlWow64GetThreadContext @ 0x1800D80C0 (RtlWow64GetThreadContext.c)
 *     RtlWow64GetThreadSelectorEntry @ 0x1800D80F0 (RtlWow64GetThreadSelectorEntry.c)
 *     RtlWow64SuspendThreadEx @ 0x1800D82C0 (RtlWow64SuspendThreadEx.c)
 *     RtlpWow64OpenThreadProcess @ 0x1800D8558 (RtlpWow64OpenThreadProcess.c)
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
