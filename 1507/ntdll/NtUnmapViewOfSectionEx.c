/*
 * XREFs of NtUnmapViewOfSectionEx @ 0x1800953F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtUnmapViewOfSectionEx(HANDLE ProcessHandle, PVOID BaseAddress, ULONG Flags)
{
  NTSTATUS result; // eax

  result = 431;
  __asm { syscall; Low latency system call }
  return result;
}
