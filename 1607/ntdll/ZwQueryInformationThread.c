/*
 * XREFs of ZwQueryInformationThread @ 0x1800A68C0
 * Callers:
 *     PsspDumpThread @ 0x180005580 (PsspDumpThread.c)
 *     PsspDumpObject_Thread @ 0x180006750 (PsspDumpObject_Thread.c)
 *     WerpThreadId @ 0x180007848 (WerpThreadId.c)
 *     RtlGetThreadWorkOnBehalfTicket @ 0x18003D220 (RtlGetThreadWorkOnBehalfTicket.c)
 *     RtlExitUserThread @ 0x180052930 (RtlExitUserThread.c)
 *     TppIsWorkerThread @ 0x1800529DC (TppIsWorkerThread.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180054914 (EtwpAddLogHeaderToLogFile.c)
 *     PsspSampleCounters @ 0x18005962C (PsspSampleCounters.c)
 *     RtlQueryProcessDebugInformation @ 0x18006D3B0 (RtlQueryProcessDebugInformation.c)
 *     LdrpDetectDetour @ 0x180073564 (LdrpDetectDetour.c)
 *     RtlCheckHeldCriticalSections @ 0x1800824A0 (RtlCheckHeldCriticalSections.c)
 *     RtlSetThreadIsCritical @ 0x18008D100 (RtlSetThreadIsCritical.c)
 *     RtlQueryThreadProfiling @ 0x1800CF850 (RtlQueryThreadProfiling.c)
 *     DbgUiConvertStateChangeStructureWorker @ 0x1800D0100 (DbgUiConvertStateChangeStructureWorker.c)
 *     LdrpDoDebuggerBreak @ 0x1800D20A0 (LdrpDoDebuggerBreak.c)
 *     RtlSetProcessDebugInformation @ 0x1800D52F0 (RtlSetProcessDebugInformation.c)
 *     RtlWow64GetThreadContext @ 0x1800D8000 (RtlWow64GetThreadContext.c)
 *     RtlWow64GetThreadSelectorEntry @ 0x1800D8030 (RtlWow64GetThreadSelectorEntry.c)
 *     RtlWow64SuspendThreadEx @ 0x1800D8200 (RtlWow64SuspendThreadEx.c)
 *     RtlpWow64OpenThreadProcess @ 0x1800D8498 (RtlpWow64OpenThreadProcess.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryInformationThread()
{
  __int64 result; // rax

  result = 37LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
