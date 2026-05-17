/*
 * XREFs of NtFlushWriteBuffer @ 0x1800946D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtFlushWriteBuffer()
{
  __int64 result; // rax

  result = 221LL;
  __asm { syscall; Low latency system call }
  return result;
}
