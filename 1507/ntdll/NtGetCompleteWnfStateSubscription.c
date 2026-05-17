/*
 * XREFs of NtGetCompleteWnfStateSubscription @ 0x180094720
 * Callers:
 *     RtlpWnfNotificationThread @ 0x18000B470 (RtlpWnfNotificationThread.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18000B588 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800C8F90 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     <none>
 */

__int64 NtGetCompleteWnfStateSubscription()
{
  __int64 result; // rax

  result = 226LL;
  __asm { syscall; Low latency system call }
  return result;
}
