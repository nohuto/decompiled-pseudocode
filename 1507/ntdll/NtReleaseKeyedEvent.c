/*
 * XREFs of NtReleaseKeyedEvent @ 0x180094E40
 * Callers:
 *     RtlRunOnceComplete @ 0x18006CC70 (RtlRunOnceComplete.c)
 * Callees:
 *     <none>
 */

__int64 NtReleaseKeyedEvent()
{
  __int64 result; // rax

  result = 340LL;
  __asm { syscall; Low latency system call }
  return result;
}
