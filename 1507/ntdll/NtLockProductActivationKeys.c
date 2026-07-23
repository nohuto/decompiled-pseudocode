/*
 * XREFs of NtLockProductActivationKeys @ 0x1800948A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtLockProductActivationKeys(ULONG *pPrivateVer, ULONG *pSafeMode)
{
  NTSTATUS result; // eax

  result = 250;
  __asm { syscall; Low latency system call }
  return result;
}
