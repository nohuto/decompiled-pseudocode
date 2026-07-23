/*
 * XREFs of ZwImpersonateAnonymousToken @ 0x1800947D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwImpersonateAnonymousToken(HANDLE ThreadHandle)
{
  NTSTATUS result; // eax

  result = 237;
  __asm { syscall; Low latency system call }
  return result;
}
