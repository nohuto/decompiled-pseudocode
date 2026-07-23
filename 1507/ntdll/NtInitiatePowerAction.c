/*
 * XREFs of NtInitiatePowerAction @ 0x180094810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtInitiatePowerAction(
        POWER_ACTION SystemAction,
        SYSTEM_POWER_STATE LightestSystemState,
        ULONG Flags,
        BOOLEAN Asynchronous)
{
  NTSTATUS result; // eax

  result = 241;
  __asm { syscall; Low latency system call }
  return result;
}
