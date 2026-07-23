/*
 * XREFs of ZwDebugActiveProcess @ 0x140151E20
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
