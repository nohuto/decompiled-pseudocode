/*
 * XREFs of ZwPrepareComplete @ 0x140152A80
 * Callers:
 *     VfZwPrepareComplete @ 0x1406D30EC (VfZwPrepareComplete.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrepareComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock, v2);
}
