/*
 * XREFs of ZwPrepareComplete @ 0x1401813F0
 * Callers:
 *     VfZwPrepareComplete @ 0x140756CB4 (VfZwPrepareComplete.c)
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
