/*
 * XREFs of ZwSystemDebugControl @ 0x180095310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSystemDebugControl()
{
  __int64 result; // rax

  result = 417LL;
  __asm { syscall; Low latency system call }
  return result;
}
