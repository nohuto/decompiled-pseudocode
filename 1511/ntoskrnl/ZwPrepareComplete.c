/*
 * XREFs of ZwPrepareComplete @ 0x140152A80
 * Callers:
 *     VfZwPrepareComplete @ 0x1406D30EC (VfZwPrepareComplete.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrepareComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
