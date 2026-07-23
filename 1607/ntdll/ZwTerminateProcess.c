/*
 * XREFs of ZwTerminateProcess @ 0x1800A69A0
 * Callers:
 *     WerpBreakIntoDebuggerIfPresent @ 0x180006B1C (WerpBreakIntoDebuggerIfPresent.c)
 *     RtlExitUserProcess @ 0x180006E50 (RtlExitUserProcess.c)
 *     LdrpInitializeThread @ 0x180016100 (LdrpInitializeThread.c)
 *     TppWorkerThread @ 0x18001E740 (TppWorkerThread.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpAllocateHeapInternal @ 0x180022DE0 (RtlpAllocateHeapInternal.c)
 *     RtlpxLookupFunctionTable @ 0x1800362E0 (RtlpxLookupFunctionTable.c)
 *     RtlAcquireSRWLockShared @ 0x180042640 (RtlAcquireSRWLockShared.c)
 *     RtlUserThreadStart @ 0x180051D40 (RtlUserThreadStart.c)
 *     RtlpWaitOnCriticalSection @ 0x18006673C (RtlpWaitOnCriticalSection.c)
 *     _LdrpInitialize @ 0x1800787A4 (_LdrpInitialize.c)
 *     LdrpLoadShimEngine @ 0x18007DCD0 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x18007DF68 (LdrpInitializeShimDllDependencies.c)
 *     UninitUser32Proc @ 0x180096890 (UninitUser32Proc.c)
 *     __raise_securityfailure @ 0x180096C54 (__raise_securityfailure.c)
 *     __report_gsfailure @ 0x180096C80 (__report_gsfailure.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CEEC0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpCompleteProcessCloning @ 0x1800D2BE4 (LdrpCompleteProcessCloning.c)
 *     LdrpFatalExceptionFilter @ 0x1800D2D5C (LdrpFatalExceptionFilter.c)
 *     LdrpGenericExceptionFilter @ 0x1800D2DE4 (LdrpGenericExceptionFilter.c)
 *     RtlpProcessReflectionStartup @ 0x1800D35A0 (RtlpProcessReflectionStartup.c)
 *     RtlReportExceptionEx @ 0x1800D8780 (RtlReportExceptionEx.c)
 *     RtlAssert @ 0x1800E4D90 (RtlAssert.c)
 *     RtlReportCriticalFailure @ 0x1800F735C (RtlReportCriticalFailure.c)
 *     TppTerminateProcess @ 0x1800FE668 (TppTerminateProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  NTSTATUS result; // eax

  result = 44;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
