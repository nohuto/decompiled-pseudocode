/*
 * XREFs of ZwCreateEventPair @ 0x1800942E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwCreateEventPair()
{
  __int64 result; // rax

  result = 158LL;
  __asm { syscall; Low latency system call }
  return result;
}
