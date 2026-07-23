/*
 * XREFs of ZwWaitForDebugEvent @ 0x14015D990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWaitForDebugEvent(
        HANDLE DebugObject,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PDBGUI_WAIT_STATE_CHANGE StateChange)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DebugObject);
}
