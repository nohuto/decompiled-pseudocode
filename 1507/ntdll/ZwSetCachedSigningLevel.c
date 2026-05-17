/*
 * XREFs of ZwSetCachedSigningLevel @ 0x180094FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSetCachedSigningLevel()
{
  __int64 result; // rax

  result = 366LL;
  __asm { syscall; Low latency system call }
  return result;
}
