/*
 * XREFs of CmpTransIsTransActive @ 0x1401B5060
 * Callers:
 *     CmpReportNotifyHelper @ 0x1404F7D50 (CmpReportNotifyHelper.c)
 * Callees:
 *     TmIsTransactionActive @ 0x140001198 (TmIsTransactionActive.c)
 *     CmpTransGetTransPtr @ 0x140581CB8 (CmpTransGetTransPtr.c)
 */

__int64 __fastcall CmpTransIsTransActive(char a1)
{
  struct _KTRANSACTION *TransPtr; // rax

  if ( (a1 & 1) != 0 )
    return *(_DWORD *)CmpTransGetTransPtr() == 0;
  TransPtr = (struct _KTRANSACTION *)CmpTransGetTransPtr();
  return TmIsTransactionActive(TransPtr);
}
