/*
 * XREFs of NtQueryWnfStateNameInformation @ 0x180094DA0
 * Callers:
 *     SignalStartWerSvc @ 0x180002130 (SignalStartWerSvc.c)
 *     RtlWaitForWnfMetaNotification @ 0x180076F20 (RtlWaitForWnfMetaNotification.c)
 *     RtlQueryWnfMetaNotification @ 0x180078680 (RtlQueryWnfMetaNotification.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryWnfStateNameInformation()
{
  __int64 result; // rax

  result = 330LL;
  __asm { syscall; Low latency system call }
  return result;
}
