/*
 * XREFs of ZwQueryInformationThread @ 0x180093B50
 * Callers:
 *     RtlExitUserThread @ 0x180009FA0 (RtlExitUserThread.c)
 *     TppIsWorkerThread @ 0x18000A04C (TppIsWorkerThread.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18000C5FC (EtwpAddLogHeaderToLogFile.c)
 *     PsspSampleCounters @ 0x180059428 (PsspSampleCounters.c)
 *     RtlQueryProcessDebugInformation @ 0x180068A40 (RtlQueryProcessDebugInformation.c)
 *     RtlCheckHeldCriticalSections @ 0x18006CE30 (RtlCheckHeldCriticalSections.c)
 *     RtlSetThreadIsCritical @ 0x180080730 (RtlSetThreadIsCritical.c)
 *     PsspDumpObject_Thread @ 0x180082DF0 (PsspDumpObject_Thread.c)
 *     PsspDumpThread @ 0x180083200 (PsspDumpThread.c)
 *     RtlQueryThreadProfiling @ 0x1800BB750 (RtlQueryThreadProfiling.c)
 *     DbgUiConvertStateChangeStructureWorker @ 0x1800BBF40 (DbgUiConvertStateChangeStructureWorker.c)
 *     LdrpDoDebuggerBreak @ 0x1800BDE50 (LdrpDoDebuggerBreak.c)
 *     RtlSetProcessDebugInformation @ 0x1800C3D20 (RtlSetProcessDebugInformation.c)
 *     RtlWow64GetThreadContext @ 0x1800C6E20 (RtlWow64GetThreadContext.c)
 *     RtlWow64GetThreadSelectorEntry @ 0x1800C6E50 (RtlWow64GetThreadSelectorEntry.c)
 *     RtlWow64SuspendThreadEx @ 0x1800C7020 (RtlWow64SuspendThreadEx.c)
 *     RtlpWow64OpenThreadProcess @ 0x1800C72B8 (RtlpWow64OpenThreadProcess.c)
 *     RtlReportExceptionEx @ 0x1800C7660 (RtlReportExceptionEx.c)
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
  __asm { syscall; Low latency system call }
  return result;
}
