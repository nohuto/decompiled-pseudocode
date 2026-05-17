/*
 * XREFs of NtSetInformationThread @ 0x1800A65C0
 * Callers:
 *     TppAlpcpExecuteCallback @ 0x18001D460 (TppAlpcpExecuteCallback.c)
 *     TppWorkerThread @ 0x18001E750 (TppWorkerThread.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18001FF50 (TppCallbackCheckThreadAfterCallback.c)
 *     TppWorkpExecuteCallback @ 0x180020650 (TppWorkpExecuteCallback.c)
 *     RtlpTpResumeImpersonation @ 0x18003A010 (RtlpTpResumeImpersonation.c)
 *     RtlpTpWorkCallback @ 0x18003A1C0 (RtlpTpWorkCallback.c)
 *     RtlSetThreadWorkOnBehalfTicket @ 0x18003B4B0 (RtlSetThreadWorkOnBehalfTicket.c)
 *     EtwpLogger @ 0x180052AF0 (EtwpLogger.c)
 *     RtlpTpRevertCapture @ 0x180064D78 (RtlpTpRevertCapture.c)
 *     RtlClearThreadWorkOnBehalfTicket @ 0x1800782D0 (RtlClearThreadWorkOnBehalfTicket.c)
 *     RtlAcquirePrivilege @ 0x18007D360 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x18007D5C0 (RtlImpersonateSelfEx.c)
 *     RtlpTpTimerCallback @ 0x18007E570 (RtlpTpTimerCallback.c)
 *     RtlpTpImpersonate @ 0x18007E68C (RtlpTpImpersonate.c)
 *     RtlpTpWaitCallback @ 0x18007FD40 (RtlpTpWaitCallback.c)
 *     TppCritSetThread @ 0x1800810D0 (TppCritSetThread.c)
 *     TppCritResetThread @ 0x1800865B4 (TppCritResetThread.c)
 *     RtlReleasePrivilege @ 0x180087830 (RtlReleasePrivilege.c)
 *     RtlSetThreadIsCritical @ 0x18008D100 (RtlSetThreadIsCritical.c)
 *     RtlDisableThreadProfiling @ 0x1800CF6E0 (RtlDisableThreadProfiling.c)
 *     RtlEnableThreadProfiling @ 0x1800CF750 (RtlEnableThreadProfiling.c)
 *     RtlWow64SetThreadContext @ 0x1800D81D0 (RtlWow64SetThreadContext.c)
 *     RtlpAttachThreadToUmsCompletionList @ 0x1800ECBF0 (RtlpAttachThreadToUmsCompletionList.c)
 *     RtlpDetachThreadFromUmsCompletionList @ 0x1800ECCB4 (RtlpDetachThreadFromUmsCompletionList.c)
 *     BaseGetNamedObjectDirectory @ 0x180102F14 (BaseGetNamedObjectDirectory.c)
 * Callees:
 *     <none>
 */

__int64 NtSetInformationThread()
{
  __int64 result; // rax

  result = 13LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
