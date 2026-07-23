/*
 * XREFs of ZwRemoveProcessDebug @ 0x140181AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRemoveProcessDebug(HANDLE Process, HANDLE DebugObject)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Process);
}
