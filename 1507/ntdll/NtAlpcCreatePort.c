/*
 * XREFs of NtAlpcCreatePort @ 0x180094070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtAlpcCreatePort()
{
  __int64 result; // rax

  result = 119LL;
  __asm { syscall; Low latency system call }
  return result;
}
