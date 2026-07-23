/*
 * XREFs of ZwCreateIRTimer @ 0x1800942F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateIRTimer(PHANDLE TimerHandle, ACCESS_MASK DesiredAccess)
{
  NTSTATUS result; // eax

  result = 159;
  __asm { syscall; Low latency system call }
  return result;
}
