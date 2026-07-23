/*
 * XREFs of TmCurrentTransaction @ 0x140001158
 * Callers:
 *     CmCheckNoTxContext @ 0x1404A4760 (CmCheckNoTxContext.c)
 *     IopRetrieveTransactionParameters @ 0x1404A5D00 (IopRetrieveTransactionParameters.c)
 *     FsRtlIsMobileOS @ 0x14052E5B0 (FsRtlIsMobileOS.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 TmCurrentTransaction()
{
  return __imp_TmCurrentTransaction();
}
