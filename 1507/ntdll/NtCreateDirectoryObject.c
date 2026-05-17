/*
 * XREFs of NtCreateDirectoryObject @ 0x1800942B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtCreateDirectoryObject()
{
  __int64 result; // rax

  result = 155LL;
  __asm { syscall; Low latency system call }
  return result;
}
