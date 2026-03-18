/*
 * XREFs of TmIsTransactionActive @ 0x140001198
 * Callers:
 *     CmpReportNotifyHelper @ 0x14042A100 (CmpReportNotifyHelper.c)
 *     CmpSearchAddTrans @ 0x1404F0F50 (CmpSearchAddTrans.c)
 *     CmReferenceKtmTransaction @ 0x140554498 (CmReferenceKtmTransaction.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall TmIsTransactionActive(PKTRANSACTION Transaction)
{
  return __imp_TmIsTransactionActive(Transaction);
}
