/*
 * XREFs of NtSetInformationThread @ 0x1800A5260
 * Callers:
 *     RtlpTpImpersonate @ 0x180003D0C (RtlpTpImpersonate.c)
 *     RtlpTpWaitCallback @ 0x180005F50 (RtlpTpWaitCallback.c)
 *     RtlpTpTimerCallback @ 0x180006FD0 (RtlpTpTimerCallback.c)
 *     RtlpTpRevertCapture @ 0x180008A70 (RtlpTpRevertCapture.c)
 *     RtlpTpResumeImpersonation @ 0x180008C60 (RtlpTpResumeImpersonation.c)
 *     RtlpTpWorkCallback @ 0x180008E40 (RtlpTpWorkCallback.c)
 *     TppCritSetThread @ 0x18000A380 (TppCritSetThread.c)
 *     TppWorkerThread @ 0x18002B350 (TppWorkerThread.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18002CC00 (TppCallbackCheckThreadAfterCallback.c)
 *     EtwpLogger @ 0x18005BCF0 (EtwpLogger.c)
 *     RtlAcquirePrivilege @ 0x180078990 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x180078BF0 (RtlImpersonateSelfEx.c)
 *     RtlReleasePrivilege @ 0x180082A10 (RtlReleasePrivilege.c)
 *     RtlSetThreadIsCritical @ 0x180088A60 (RtlSetThreadIsCritical.c)
 *     sub_1800C550A @ 0x1800C550A (sub_1800C550A.c)
 *     RtlDisableThreadProfiling @ 0x1800C8300 (RtlDisableThreadProfiling.c)
 *     RtlEnableThreadProfiling @ 0x1800C8370 (RtlEnableThreadProfiling.c)
 *     RtlWow64SetThreadContext @ 0x1800D0320 (RtlWow64SetThreadContext.c)
 *     RtlpAttachThreadToUmsCompletionList @ 0x1800E3B50 (RtlpAttachThreadToUmsCompletionList.c)
 *     RtlpDetachThreadFromUmsCompletionList @ 0x1800E3C14 (RtlpDetachThreadFromUmsCompletionList.c)
 *     BaseGetNamedObjectDirectory @ 0x1800F8580 (BaseGetNamedObjectDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  NTSTATUS result; // eax

  result = 13;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
