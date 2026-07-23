/*
 * XREFs of ZwReadOnlyEnlistment @ 0x140153040
 * Callers:
 *     VerifierZwReadOnlyEnlistment @ 0x1406C0DAC (VerifierZwReadOnlyEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwReadOnlyEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
