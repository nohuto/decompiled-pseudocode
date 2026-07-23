/*
 * XREFs of NtSaveKeyEx @ 0x180094F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSaveKeyEx(HANDLE KeyHandle, HANDLE FileHandle, ULONG Format)
{
  NTSTATUS result; // eax

  result = 360;
  __asm { syscall; Low latency system call }
  return result;
}
