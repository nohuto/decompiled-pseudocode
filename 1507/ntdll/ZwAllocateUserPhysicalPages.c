/*
 * XREFs of ZwAllocateUserPhysicalPages @ 0x180094010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAllocateUserPhysicalPages(HANDLE ProcessHandle, PULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  NTSTATUS result; // eax

  result = 113;
  __asm { syscall; Low latency system call }
  return result;
}
