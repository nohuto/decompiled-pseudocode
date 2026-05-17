/*
 * XREFs of NtDeletePrivateNamespace @ 0x180094570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtDeletePrivateNamespace()
{
  __int64 result; // rax

  result = 199LL;
  __asm { syscall; Low latency system call }
  return result;
}
