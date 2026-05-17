/*
 * XREFs of NtCreateWaitCompletionPacket @ 0x1800944B0
 * Callers:
 *     TppInitializeTimerSubQueue @ 0x18007CEC8 (TppInitializeTimerSubQueue.c)
 *     TpAllocWait @ 0x18007CFD0 (TpAllocWait.c)
 * Callees:
 *     <none>
 */

__int64 NtCreateWaitCompletionPacket()
{
  __int64 result; // rax

  result = 187LL;
  __asm { syscall; Low latency system call }
  return result;
}
