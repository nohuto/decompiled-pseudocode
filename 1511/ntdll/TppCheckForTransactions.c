/*
 * XREFs of TppCheckForTransactions @ 0x1800F54E4
 * Callers:
 *     TppCallbackCheckThreadBeforeCallback @ 0x18000A33C (TppCallbackCheckThreadBeforeCallback.c)
 *     TppWorkerThread @ 0x18002B350 (TppWorkerThread.c)
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
