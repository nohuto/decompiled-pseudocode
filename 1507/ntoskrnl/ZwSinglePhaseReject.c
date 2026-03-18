/*
 * XREFs of ZwSinglePhaseReject @ 0x140182350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSinglePhaseReject(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock, v2);
}
