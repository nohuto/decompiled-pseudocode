/*
 * XREFs of NtQueryFullAttributesFile @ 0x180094BE0
 * Callers:
 *     _ResGetFileAttributesEx @ 0x1800FA684 (_ResGetFileAttributesEx.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryFullAttributesFile()
{
  __int64 result; // rax

  result = 302LL;
  __asm { syscall; Low latency system call }
  return result;
}
