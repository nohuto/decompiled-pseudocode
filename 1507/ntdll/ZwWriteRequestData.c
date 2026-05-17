/*
 * XREFs of ZwWriteRequestData @ 0x180093E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwWriteRequestData()
{
  __int64 result; // rax

  result = 87LL;
  __asm { syscall; Low latency system call }
  return result;
}
