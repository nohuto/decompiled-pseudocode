/*
 * XREFs of NtReplyPort @ 0x1800939C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtReplyPort()
{
  __int64 result; // rax

  result = 12LL;
  __asm { syscall; Low latency system call }
  return result;
}
