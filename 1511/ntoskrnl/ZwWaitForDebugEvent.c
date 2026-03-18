/*
 * XREFs of ZwWaitForDebugEvent @ 0x140153D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwWaitForDebugEvent(
        HANDLE DebugObject,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PDBGUI_WAIT_STATE_CHANGE StateChange)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DebugObject, Alertable, Timeout);
}
