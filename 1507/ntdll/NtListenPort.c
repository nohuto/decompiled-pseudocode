/*
 * XREFs of NtListenPort @ 0x180094840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtListenPort()
{
  __int64 result; // rax

  result = 244LL;
  __asm { syscall; Low latency system call }
  return result;
}
