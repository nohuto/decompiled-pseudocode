/*
 * XREFs of NtCreateThread @ 0x180093DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtCreateThread()
{
  __int64 result; // rax

  result = 78LL;
  __asm { syscall; Low latency system call }
  return result;
}
