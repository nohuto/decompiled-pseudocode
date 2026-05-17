/*
 * XREFs of ZwCancelIoFile @ 0x180093ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwCancelIoFile()
{
  __int64 result; // rax

  result = 93LL;
  __asm { syscall; Low latency system call }
  return result;
}
