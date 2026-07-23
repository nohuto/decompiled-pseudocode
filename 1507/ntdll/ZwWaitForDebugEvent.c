/*
 * XREFs of ZwWaitForDebugEvent @ 0x180095440
 * Callers:
 *     DbgUiWaitStateChange @ 0x1800BC370 (DbgUiWaitStateChange.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWaitForDebugEvent(
        HANDLE DebugObjectHandle,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PDBGUI_WAIT_STATE_CHANGE WaitStateChange)
{
  NTSTATUS result; // eax

  result = 436;
  __asm { syscall; Low latency system call }
  return result;
}
