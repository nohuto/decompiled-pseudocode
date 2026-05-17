/*
 * XREFs of ZwAlpcCreateResourceReserve @ 0x180094090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwAlpcCreateResourceReserve()
{
  __int64 result; // rax

  result = 121LL;
  __asm { syscall; Low latency system call }
  return result;
}
