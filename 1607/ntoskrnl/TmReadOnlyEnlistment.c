/*
 * XREFs of TmReadOnlyEnlistment @ 0x1400011D0
 * Callers:
 *     CmKtmNotification @ 0x1404BD168 (CmKtmNotification.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmReadOnlyEnlistment(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmReadOnlyEnlistment(Enlistment, TmVirtualClock);
}
