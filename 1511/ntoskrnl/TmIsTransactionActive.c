/*
 * XREFs of TmIsTransactionActive @ 0x140001198
 * Callers:
 *     CmpSearchAddTrans @ 0x1403D6DD0 (CmpSearchAddTrans.c)
 *     CmpReportNotifyHelper @ 0x1403F5130 (CmpReportNotifyHelper.c)
 *     CmReferenceKtmTransaction @ 0x1404B8A10 (CmReferenceKtmTransaction.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall TmIsTransactionActive(PKTRANSACTION Transaction)
{
  return __imp_TmIsTransactionActive(Transaction);
}
