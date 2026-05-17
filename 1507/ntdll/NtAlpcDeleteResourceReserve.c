/*
 * XREFs of NtAlpcDeleteResourceReserve @ 0x1800940D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtAlpcDeleteResourceReserve()
{
  __int64 result; // rax

  result = 125LL;
  __asm { syscall; Low latency system call }
  return result;
}
