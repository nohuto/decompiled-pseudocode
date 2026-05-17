/*
 * XREFs of NtSetContextThread @ 0x180094FF0
 * Callers:
 *     RtlRemoteCall @ 0x1800E2420 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

__int64 NtSetContextThread()
{
  __int64 result; // rax

  result = 367LL;
  __asm { syscall; Low latency system call }
  return result;
}
