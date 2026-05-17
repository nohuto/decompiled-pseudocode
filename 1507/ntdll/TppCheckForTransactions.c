/*
 * XREFs of TppCheckForTransactions @ 0x1800F5AE4
 * Callers:
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 *     TppCallbackCheckThreadBeforeCallback @ 0x1800705B4 (TppCallbackCheckThreadBeforeCallback.c)
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
