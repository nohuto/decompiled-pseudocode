/*
 * XREFs of ZwImpersonateClientOfPort @ 0x180093AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwImpersonateClientOfPort()
{
  __int64 result; // rax

  result = 31LL;
  __asm { syscall; Low latency system call }
  return result;
}
