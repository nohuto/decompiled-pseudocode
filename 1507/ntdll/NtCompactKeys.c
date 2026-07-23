/*
 * XREFs of NtCompactKeys @ 0x180094240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCompactKeys(ULONG Count, HANDLE KeyArray[])
{
  NTSTATUS result; // eax

  result = 148;
  __asm { syscall; Low latency system call }
  return result;
}
