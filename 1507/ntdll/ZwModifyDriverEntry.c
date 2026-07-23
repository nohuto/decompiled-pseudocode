/*
 * XREFs of ZwModifyDriverEntry @ 0x180094930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwModifyDriverEntry(PEFI_DRIVER_ENTRY DriverEntry)
{
  NTSTATUS result; // eax

  result = 259;
  __asm { syscall; Low latency system call }
  return result;
}
