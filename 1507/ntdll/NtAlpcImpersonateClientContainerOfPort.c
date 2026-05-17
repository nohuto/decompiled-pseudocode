/*
 * XREFs of NtAlpcImpersonateClientContainerOfPort @ 0x180094110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtAlpcImpersonateClientContainerOfPort()
{
  __int64 result; // rax

  result = 129LL;
  __asm { syscall; Low latency system call }
  return result;
}
