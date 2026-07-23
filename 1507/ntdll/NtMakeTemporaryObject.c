/*
 * XREFs of NtMakeTemporaryObject @ 0x1800948E0
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x18007F190 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtMakeTemporaryObject(HANDLE Handle)
{
  NTSTATUS result; // eax

  result = 254;
  __asm { syscall; Low latency system call }
  return result;
}
