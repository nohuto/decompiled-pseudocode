/*
 * XREFs of ZwAlpcDeleteSectionView @ 0x1800940E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcDeleteSectionView(HANDLE PortHandle, ULONG Flags, PVOID ViewBase)
{
  NTSTATUS result; // eax

  result = 126;
  __asm { syscall; Low latency system call }
  return result;
}
