/*
 * XREFs of ZwTerminateProcess @ 0x1800A69A0
 * Callers:
 *     WerpBreakIntoDebuggerIfPresent @ 0x180006B2C (WerpBreakIntoDebuggerIfPresent.c)
 *     RtlExitUserProcess @ 0x180006E60 (RtlExitUserProcess.c)
 *     LdrpInitializeThread @ 0x180016110 (LdrpInitializeThread.c)
 *     TppWorkerThread @ 0x18001E750 (TppWorkerThread.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpAllocateHeapInternal @ 0x180022DF0 (RtlpAllocateHeapInternal.c)
 *     RtlpxLookupFunctionTable @ 0x1800362F0 (RtlpxLookupFunctionTable.c)
 *     RtlAcquireSRWLockShared @ 0x180042650 (RtlAcquireSRWLockShared.c)
 *     RtlUserThreadStart @ 0x180051D50 (RtlUserThreadStart.c)
 *     RtlpWaitOnCriticalSection @ 0x18006674C (RtlpWaitOnCriticalSection.c)
 *     _LdrpInitialize @ 0x1800787B4 (_LdrpInitialize.c)
 *     LdrpLoadShimEngine @ 0x18007DCE0 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x18007DF78 (LdrpInitializeShimDllDependencies.c)
 *     UninitUser32Proc @ 0x1800968A0 (UninitUser32Proc.c)
 *     __raise_securityfailure @ 0x180096C64 (__raise_securityfailure.c)
 *     __report_gsfailure @ 0x180096C90 (__report_gsfailure.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CEEC0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpCompleteProcessCloning @ 0x1800D2B24 (LdrpCompleteProcessCloning.c)
 *     LdrpFatalExceptionFilter @ 0x1800D2C9C (LdrpFatalExceptionFilter.c)
 *     LdrpGenericExceptionFilter @ 0x1800D2D24 (LdrpGenericExceptionFilter.c)
 *     RtlpProcessReflectionStartup @ 0x1800D34E0 (RtlpProcessReflectionStartup.c)
 *     RtlReportExceptionEx @ 0x1800D86C0 (RtlReportExceptionEx.c)
 *     RtlAssert @ 0x1800E4CD0 (RtlAssert.c)
 *     RtlReportCriticalFailure @ 0x1800F735C (RtlReportCriticalFailure.c)
 *     TppTerminateProcess @ 0x1800FE668 (TppTerminateProcess.c)
 * Callees:
 *     <none>
 */

__int64 ZwTerminateProcess()
{
  __int64 result; // rax

  result = 44LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
