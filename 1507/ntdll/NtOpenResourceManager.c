/*
 * XREFs of NtOpenResourceManager @ 0x180094A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtOpenResourceManager()
{
  __int64 result; // rax

  result = 277LL;
  __asm { syscall; Low latency system call }
  return result;
}
