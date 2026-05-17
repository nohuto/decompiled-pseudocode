/*
 * XREFs of ZwWaitHighEventPair @ 0x180095470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwWaitHighEventPair()
{
  __int64 result; // rax

  result = 439LL;
  __asm { syscall; Low latency system call }
  return result;
}
