/*
 * XREFs of NtRequestPort @ 0x180094ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtRequestPort()
{
  __int64 result; // rax

  result = 349LL;
  __asm { syscall; Low latency system call }
  return result;
}
