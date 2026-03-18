/*
 * XREFs of TmCurrentTransaction @ 0x140001158
 * Callers:
 *     CmCheckNoTxContext @ 0x14049C5C8 (CmCheckNoTxContext.c)
 *     IopRetrieveTransactionParameters @ 0x1404B9FD0 (IopRetrieveTransactionParameters.c)
 *     FsRtlIsMobileOS @ 0x14052E070 (FsRtlIsMobileOS.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 TmCurrentTransaction()
{
  return __imp_TmCurrentTransaction();
}
