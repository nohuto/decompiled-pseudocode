/*
 * XREFs of NtOpenPrivateNamespace @ 0x180094A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtOpenPrivateNamespace()
{
  __int64 result; // rax

  result = 275LL;
  __asm { syscall; Low latency system call }
  return result;
}
