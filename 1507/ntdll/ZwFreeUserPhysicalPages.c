/*
 * XREFs of ZwFreeUserPhysicalPages @ 0x1800946E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFreeUserPhysicalPages(HANDLE ProcessHandle, PULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  NTSTATUS result; // eax

  result = 222;
  __asm { syscall; Low latency system call }
  return result;
}
