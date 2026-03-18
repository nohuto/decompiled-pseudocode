/*
 * XREFs of TmCurrentTransaction @ 0x140001158
 * Callers:
 *     CmCheckNoTxContext @ 0x140445960 (CmCheckNoTxContext.c)
 *     IopRetrieveTransactionParameters @ 0x140488530 (IopRetrieveTransactionParameters.c)
 *     FsRtlIsMobileOS @ 0x1405C2720 (FsRtlIsMobileOS.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 TmCurrentTransaction()
{
  return __imp_TmCurrentTransaction();
}
