/*
 * XREFs of ZwWaitForMultipleObjects32 @ 0x180093AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwWaitForMultipleObjects32()
{
  __int64 result; // rax

  result = 26LL;
  __asm { syscall; Low latency system call }
  return result;
}
