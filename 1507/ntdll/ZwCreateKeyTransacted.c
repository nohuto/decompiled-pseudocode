/*
 * XREFs of ZwCreateKeyTransacted @ 0x180094330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwCreateKeyTransacted()
{
  __int64 result; // rax

  result = 163LL;
  __asm { syscall; Low latency system call }
  return result;
}
