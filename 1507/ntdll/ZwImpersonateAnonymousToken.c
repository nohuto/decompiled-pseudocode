/*
 * XREFs of ZwImpersonateAnonymousToken @ 0x1800947D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwImpersonateAnonymousToken()
{
  __int64 result; // rax

  result = 237LL;
  __asm { syscall; Low latency system call }
  return result;
}
