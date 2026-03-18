/*
 * XREFs of TmPrepareComplete @ 0x1400011B0
 * Callers:
 *     CmKtmNotification @ 0x1404D9B64 (CmKtmNotification.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmPrepareComplete(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmPrepareComplete(Enlistment, TmVirtualClock);
}
