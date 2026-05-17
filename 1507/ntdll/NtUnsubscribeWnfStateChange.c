/*
 * XREFs of NtUnsubscribeWnfStateChange @ 0x180095400
 * Callers:
 *     RtlpDecRefWnfNameSubscription @ 0x18000BBE0 (RtlpDecRefWnfNameSubscription.c)
 * Callees:
 *     <none>
 */

__int64 NtUnsubscribeWnfStateChange()
{
  __int64 result; // rax

  result = 432LL;
  __asm { syscall; Low latency system call }
  return result;
}
