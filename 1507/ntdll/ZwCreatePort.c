/*
 * XREFs of ZwCreatePort @ 0x1800943B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwCreatePort()
{
  __int64 result; // rax

  result = 171LL;
  __asm { syscall; Low latency system call }
  return result;
}
