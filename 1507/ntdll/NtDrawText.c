/*
 * XREFs of NtDrawText @ 0x1800945D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtDrawText()
{
  __int64 result; // rax

  result = 205LL;
  __asm { syscall; Low latency system call }
  return result;
}
