/*
 * XREFs of ZwVdmControl @ 0x180095420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwVdmControl()
{
  __int64 result; // rax

  result = 434LL;
  __asm { syscall; Low latency system call }
  return result;
}
