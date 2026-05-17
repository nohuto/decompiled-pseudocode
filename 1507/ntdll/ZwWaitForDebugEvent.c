/*
 * XREFs of ZwWaitForDebugEvent @ 0x180095440
 * Callers:
 *     DbgUiWaitStateChange @ 0x1800BC370 (DbgUiWaitStateChange.c)
 * Callees:
 *     <none>
 */

__int64 ZwWaitForDebugEvent()
{
  __int64 result; // rax

  result = 436LL;
  __asm { syscall; Low latency system call }
  return result;
}
