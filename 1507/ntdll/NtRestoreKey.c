/*
 * XREFs of NtRestoreKey @ 0x180094F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtRestoreKey(HANDLE KeyHandle, HANDLE FileHandle, ULONG Flags)
{
  NTSTATUS result; // eax

  result = 352;
  __asm { syscall; Low latency system call }
  return result;
}
