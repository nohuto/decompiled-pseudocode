/*
 * XREFs of ZwReadOnlyEnlistment @ 0x1401819B0
 * Callers:
 *     VerifierZwReadOnlyEnlistment @ 0x1407425EC (VerifierZwReadOnlyEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwReadOnlyEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock, v2);
}
