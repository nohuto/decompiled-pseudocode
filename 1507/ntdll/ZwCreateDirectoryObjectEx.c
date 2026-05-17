/*
 * XREFs of ZwCreateDirectoryObjectEx @ 0x1800942C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwCreateDirectoryObjectEx()
{
  __int64 result; // rax

  result = 156LL;
  __asm { syscall; Low latency system call }
  return result;
}
