/*
 * XREFs of ZwPrepareComplete @ 0x1401813F0
 * Callers:
 *     VfZwPrepareComplete @ 0x140756CB4 (VfZwPrepareComplete.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrepareComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
