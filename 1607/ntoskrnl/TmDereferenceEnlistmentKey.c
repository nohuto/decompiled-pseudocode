/*
 * XREFs of TmDereferenceEnlistmentKey @ 0x140001160
 * Callers:
 *     CmKtmNotification @ 0x1404BD168 (CmKtmNotification.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmDereferenceEnlistmentKey(PKENLISTMENT Enlistment, PBOOLEAN LastReference)
{
  return __imp_TmDereferenceEnlistmentKey(Enlistment, LastReference);
}
