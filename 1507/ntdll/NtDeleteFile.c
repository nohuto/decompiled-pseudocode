/*
 * XREFs of NtDeleteFile @ 0x180094540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtDeleteFile()
{
  __int64 result; // rax

  result = 196LL;
  __asm { syscall; Low latency system call }
  return result;
}
