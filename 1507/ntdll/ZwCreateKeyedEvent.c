/*
 * XREFs of ZwCreateKeyedEvent @ 0x180094340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwCreateKeyedEvent()
{
  __int64 result; // rax

  result = 164LL;
  __asm { syscall; Low latency system call }
  return result;
}
