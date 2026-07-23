/*
 * XREFs of TppCheckForTransactions @ 0x1800FE4C4
 * Callers:
 *     TppWorkerThread @ 0x18001E740 (TppWorkerThread.c)
 *     TppCallbackCheckThreadBeforeCallback @ 0x18003A430 (TppCallbackCheckThreadBeforeCallback.c)
 * Callees:
 *     <none>
 */

bool TppCheckForTransactions()
{
  struct _TEB *v0; // rdx

  v0 = NtCurrentTeb();
  return (unsigned __int64)v0->CurrentTransactionHandle - 1 <= 0xFFFFFFFFFFFFFFFDuLL
      || v0->TxnScopeEnterCallback
      || v0->TxnScopeExitCallback
      || v0->TxnScopeContext
      || v0->TxFsContext != 65534;
}
