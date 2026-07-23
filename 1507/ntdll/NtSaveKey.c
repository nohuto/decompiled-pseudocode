/*
 * XREFs of NtSaveKey @ 0x180094F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSaveKey(HANDLE KeyHandle, HANDLE FileHandle)
{
  NTSTATUS result; // eax

  result = 359;
  __asm { syscall; Low latency system call }
  return result;
}
