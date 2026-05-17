/*
 * XREFs of ZwRevertContainerImpersonation @ 0x180094F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwRevertContainerImpersonation()
{
  __int64 result; // rax

  result = 354LL;
  __asm { syscall; Low latency system call }
  return result;
}
