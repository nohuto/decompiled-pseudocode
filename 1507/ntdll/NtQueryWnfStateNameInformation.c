/*
 * XREFs of NtQueryWnfStateNameInformation @ 0x180094DA0
 * Callers:
 *     SignalStartWerSvc @ 0x180002130 (SignalStartWerSvc.c)
 *     RtlWaitForWnfMetaNotification @ 0x180076F20 (RtlWaitForWnfMetaNotification.c)
 *     RtlQueryWnfMetaNotification @ 0x180078680 (RtlQueryWnfMetaNotification.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryWnfStateNameInformation(
        PCWNF_STATE_NAME StateName,
        WNF_STATE_NAME_INFORMATION NameInfoClass,
        const void *ExplicitScope,
        PVOID InfoBuffer,
        ULONG InfoBufferSize)
{
  NTSTATUS result; // eax

  result = 330;
  __asm { syscall; Low latency system call }
  return result;
}
