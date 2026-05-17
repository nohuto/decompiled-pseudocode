/*
 * XREFs of NtOpenIoCompletion @ 0x1800949A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtOpenIoCompletion()
{
  __int64 result; // rax

  result = 266LL;
  __asm { syscall; Low latency system call }
  return result;
}
