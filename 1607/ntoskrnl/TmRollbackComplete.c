/*
 * XREFs of TmRollbackComplete @ 0x140001208
 * Callers:
 *     CmKtmNotification @ 0x1404D9B64 (CmKtmNotification.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmRollbackComplete(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmRollbackComplete(Enlistment, TmVirtualClock);
}
