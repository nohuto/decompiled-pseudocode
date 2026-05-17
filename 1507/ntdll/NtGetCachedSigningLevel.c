/*
 * XREFs of NtGetCachedSigningLevel @ 0x180094710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtGetCachedSigningLevel()
{
  __int64 result; // rax

  result = 225LL;
  __asm { syscall; Low latency system call }
  return result;
}
