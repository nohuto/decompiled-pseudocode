/*
 * XREFs of NtCreateResourceManager @ 0x180094400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtCreateResourceManager()
{
  __int64 result; // rax

  result = 176LL;
  __asm { syscall; Low latency system call }
  return result;
}
