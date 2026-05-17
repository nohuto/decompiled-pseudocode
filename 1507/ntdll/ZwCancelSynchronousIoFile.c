/*
 * XREFs of ZwCancelSynchronousIoFile @ 0x1800941E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwCancelSynchronousIoFile()
{
  __int64 result; // rax

  result = 142LL;
  __asm { syscall; Low latency system call }
  return result;
}
