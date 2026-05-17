/*
 * XREFs of NtReadRequestData @ 0x180093E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtReadRequestData()
{
  __int64 result; // rax

  result = 84LL;
  __asm { syscall; Low latency system call }
  return result;
}
