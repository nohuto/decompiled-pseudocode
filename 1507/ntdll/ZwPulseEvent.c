/*
 * XREFs of ZwPulseEvent @ 0x180094B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwPulseEvent()
{
  __int64 result; // rax

  result = 295LL;
  __asm { syscall; Low latency system call }
  return result;
}
