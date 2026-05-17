/*
 * XREFs of NtClearEvent @ 0x180093CE0
 * Callers:
 *     RtlBarrier @ 0x1800D38B0 (RtlBarrier.c)
 *     RtlBarrierForDelete @ 0x1800D39F0 (RtlBarrierForDelete.c)
 * Callees:
 *     <none>
 */

__int64 NtClearEvent()
{
  __int64 result; // rax

  result = 62LL;
  __asm { syscall; Low latency system call }
  return result;
}
