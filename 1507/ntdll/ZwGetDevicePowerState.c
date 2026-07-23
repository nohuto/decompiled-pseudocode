/*
 * XREFs of ZwGetDevicePowerState @ 0x180094760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetDevicePowerState(HANDLE Device, PDEVICE_POWER_STATE State)
{
  NTSTATUS result; // eax

  result = 230;
  __asm { syscall; Low latency system call }
  return result;
}
