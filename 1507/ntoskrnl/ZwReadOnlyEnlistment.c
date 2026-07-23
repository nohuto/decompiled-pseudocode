/*
 * XREFs of ZwReadOnlyEnlistment @ 0x1401819B0
 * Callers:
 *     VerifierZwReadOnlyEnlistment @ 0x1407425EC (VerifierZwReadOnlyEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwReadOnlyEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
