/*
 * XREFs of NtMapUserPhysicalPages @ 0x180094910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtMapUserPhysicalPages(PVOID VirtualAddress, ULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  NTSTATUS result; // eax

  result = 257;
  __asm { syscall; Low latency system call }
  return result;
}
