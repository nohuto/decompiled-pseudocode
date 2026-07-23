/*
 * XREFs of NtUnsubscribeWnfStateChange @ 0x180095400
 * Callers:
 *     RtlpDecRefWnfNameSubscription @ 0x18000BBE0 (RtlpDecRefWnfNameSubscription.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtUnsubscribeWnfStateChange(PCWNF_STATE_NAME StateName)
{
  NTSTATUS result; // eax

  result = 432;
  __asm { syscall; Low latency system call }
  return result;
}
