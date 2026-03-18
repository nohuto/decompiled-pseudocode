/*
 * XREFs of TmCurrentTransaction @ 0x140001158
 * Callers:
 *     CmCheckNoTxContext @ 0x1403DC18C (CmCheckNoTxContext.c)
 *     IopRetrieveTransactionParameters @ 0x140491000 (IopRetrieveTransactionParameters.c)
 *     FsRtlIsMobileOS @ 0x1404EC300 (FsRtlIsMobileOS.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 TmCurrentTransaction()
{
  return __imp_TmCurrentTransaction();
}
