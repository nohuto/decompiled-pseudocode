/*
 * XREFs of TmIsTransactionActive @ 0x140001198
 * Callers:
 *     CmpTransIsTransActive @ 0x1401B5060 (CmpTransIsTransActive.c)
 *     CmpTransReferenceTransaction @ 0x1403FDF98 (CmpTransReferenceTransaction.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall TmIsTransactionActive(PKTRANSACTION Transaction)
{
  return __imp_TmIsTransactionActive(Transaction);
}
