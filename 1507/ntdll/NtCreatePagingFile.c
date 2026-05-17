/*
 * XREFs of NtCreatePagingFile @ 0x180094390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtCreatePagingFile()
{
  __int64 result; // rax

  result = 169LL;
  __asm { syscall; Low latency system call }
  return result;
}
