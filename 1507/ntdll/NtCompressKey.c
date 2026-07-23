/*
 * XREFs of NtCompressKey @ 0x180094280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCompressKey(HANDLE KeyHandle)
{
  NTSTATUS result; // eax

  result = 152;
  __asm { syscall; Low latency system call }
  return result;
}
