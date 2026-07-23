/*
 * XREFs of NtAddDriverEntry @ 0x180093F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtAddDriverEntry(PEFI_DRIVER_ENTRY DriverEntry, PULONG Id)
{
  NTSTATUS result; // eax

  result = 105;
  __asm { syscall; Low latency system call }
  return result;
}
