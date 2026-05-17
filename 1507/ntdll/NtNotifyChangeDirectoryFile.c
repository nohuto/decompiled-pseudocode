/*
 * XREFs of NtNotifyChangeDirectoryFile @ 0x180094940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtNotifyChangeDirectoryFile()
{
  __int64 result; // rax

  result = 260LL;
  __asm { syscall; Low latency system call }
  return result;
}
