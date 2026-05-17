/*
 * XREFs of ZwOpenKeyTransactedEx @ 0x1800949E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwOpenKeyTransactedEx()
{
  __int64 result; // rax

  result = 270LL;
  __asm { syscall; Low latency system call }
  return result;
}
