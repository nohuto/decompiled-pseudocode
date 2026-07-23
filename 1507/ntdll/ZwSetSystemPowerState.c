/*
 * XREFs of ZwSetSystemPowerState @ 0x1800951F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetSystemPowerState(POWER_ACTION SystemAction, SYSTEM_POWER_STATE LightestSystemState, ULONG Flags)
{
  NTSTATUS result; // eax

  result = 399;
  __asm { syscall; Low latency system call }
  return result;
}
