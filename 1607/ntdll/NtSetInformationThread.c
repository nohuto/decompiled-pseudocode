/*
 * XREFs of NtSetInformationThread @ 0x1800A65C0
 * Callers:
 *     TppAlpcpExecuteCallback @ 0x18001D450 (TppAlpcpExecuteCallback.c)
 *     TppWorkerThread @ 0x18001E740 (TppWorkerThread.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18001FF40 (TppCallbackCheckThreadAfterCallback.c)
 *     TppWorkpExecuteCallback @ 0x180020640 (TppWorkpExecuteCallback.c)
 *     RtlpTpResumeImpersonation @ 0x18003A000 (RtlpTpResumeImpersonation.c)
 *     RtlpTpWorkCallback @ 0x18003A1B0 (RtlpTpWorkCallback.c)
 *     RtlSetThreadWorkOnBehalfTicket @ 0x18003B4A0 (RtlSetThreadWorkOnBehalfTicket.c)
 *     EtwpLogger @ 0x180052AE0 (EtwpLogger.c)
 *     RtlpTpRevertCapture @ 0x180064D68 (RtlpTpRevertCapture.c)
 *     RtlClearThreadWorkOnBehalfTicket @ 0x1800782C0 (RtlClearThreadWorkOnBehalfTicket.c)
 *     RtlAcquirePrivilege @ 0x18007D350 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x18007D5B0 (RtlImpersonateSelfEx.c)
 *     RtlpTpTimerCallback @ 0x18007E560 (RtlpTpTimerCallback.c)
 *     RtlpTpImpersonate @ 0x18007E67C (RtlpTpImpersonate.c)
 *     RtlpTpWaitCallback @ 0x18007FD30 (RtlpTpWaitCallback.c)
 *     TppCritSetThread @ 0x1800810C0 (TppCritSetThread.c)
 *     TppCritResetThread @ 0x1800865A4 (TppCritResetThread.c)
 *     RtlReleasePrivilege @ 0x180087820 (RtlReleasePrivilege.c)
 *     RtlSetThreadIsCritical @ 0x18008D0F0 (RtlSetThreadIsCritical.c)
 *     RtlDisableThreadProfiling @ 0x1800CF6E0 (RtlDisableThreadProfiling.c)
 *     RtlEnableThreadProfiling @ 0x1800CF750 (RtlEnableThreadProfiling.c)
 *     RtlWow64SetThreadContext @ 0x1800D8290 (RtlWow64SetThreadContext.c)
 *     RtlpAttachThreadToUmsCompletionList @ 0x1800ECCB0 (RtlpAttachThreadToUmsCompletionList.c)
 *     RtlpDetachThreadFromUmsCompletionList @ 0x1800ECD74 (RtlpDetachThreadFromUmsCompletionList.c)
 *     BaseGetNamedObjectDirectory @ 0x180102E54 (BaseGetNamedObjectDirectory.c)
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
