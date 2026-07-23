/*
 * XREFs of ZwDeleteWnfStateName @ 0x1800945A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeleteWnfStateName(PCWNF_STATE_NAME StateName)
{
  NTSTATUS result; // eax

  result = 202;
  __asm { syscall; Low latency system call }
  return result;
}
