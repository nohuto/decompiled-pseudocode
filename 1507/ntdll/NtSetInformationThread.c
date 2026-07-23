/*
 * XREFs of NtSetInformationThread @ 0x1800939D0
 * Callers:
 *     EtwpLogger @ 0x1800096B0 (EtwpLogger.c)
 *     RtlpTpWaitCallback @ 0x18000BCB0 (RtlpTpWaitCallback.c)
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18003AC50 (TppCallbackCheckThreadAfterCallback.c)
 *     RtlAcquirePrivilege @ 0x18006E600 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x18006E860 (RtlImpersonateSelfEx.c)
 *     TppCritSetThread @ 0x180070F24 (TppCritSetThread.c)
 *     RtlReleasePrivilege @ 0x1800774D0 (RtlReleasePrivilege.c)
 *     RtlpTpWorkCallback @ 0x18007C030 (RtlpTpWorkCallback.c)
 *     RtlpTpResumeImpersonation @ 0x18007CA9C (RtlpTpResumeImpersonation.c)
 *     RtlpTpRevertCapture @ 0x18007CB50 (RtlpTpRevertCapture.c)
 *     RtlpTpImpersonate @ 0x18007E060 (RtlpTpImpersonate.c)
 *     RtlpTpTimerCallback @ 0x18007E0E0 (RtlpTpTimerCallback.c)
 *     RtlSetThreadIsCritical @ 0x180080730 (RtlSetThreadIsCritical.c)
 *     sub_1800B7722 @ 0x1800B7722 (sub_1800B7722.c)
 *     RtlDisableThreadProfiling @ 0x1800BB5E0 (RtlDisableThreadProfiling.c)
 *     RtlEnableThreadProfiling @ 0x1800BB650 (RtlEnableThreadProfiling.c)
 *     RtlWow64SetThreadContext @ 0x1800C6FF0 (RtlWow64SetThreadContext.c)
 *     RtlpAttachThreadToUmsCompletionList @ 0x1800DE3A0 (RtlpAttachThreadToUmsCompletionList.c)
 *     RtlpDetachThreadFromUmsCompletionList @ 0x1800DE464 (RtlpDetachThreadFromUmsCompletionList.c)
 *     BaseGetNamedObjectDirectory @ 0x1800F8BA8 (BaseGetNamedObjectDirectory.c)
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
  __asm { syscall; Low latency system call }
  return result;
}
