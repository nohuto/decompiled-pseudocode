/*
 * XREFs of NtMakeTemporaryObject @ 0x1800948E0
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x18007F190 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     <none>
 */

__int64 NtMakeTemporaryObject()
{
  __int64 result; // rax

  result = 254LL;
  __asm { syscall; Low latency system call }
  return result;
}
