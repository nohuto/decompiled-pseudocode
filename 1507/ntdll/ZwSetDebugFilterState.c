/*
 * XREFs of ZwSetDebugFilterState @ 0x180095000
 * Callers:
 *     DbgSetDebugFilterState @ 0x1800CAD10 (DbgSetDebugFilterState.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetDebugFilterState()
{
  __int64 result; // rax

  result = 368LL;
  __asm { syscall; Low latency system call }
  return result;
}
