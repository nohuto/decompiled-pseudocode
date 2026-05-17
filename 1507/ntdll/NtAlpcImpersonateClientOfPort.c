/*
 * XREFs of NtAlpcImpersonateClientOfPort @ 0x180094120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtAlpcImpersonateClientOfPort()
{
  __int64 result; // rax

  result = 130LL;
  __asm { syscall; Low latency system call }
  return result;
}
