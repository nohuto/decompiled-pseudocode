/*
 * XREFs of ZwDebugActiveProcess @ 0x1401807D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDebugActiveProcess(HANDLE Process, HANDLE DebugObject)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Process);
}
