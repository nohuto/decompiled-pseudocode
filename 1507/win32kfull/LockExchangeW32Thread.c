/*
 * XREFs of LockExchangeW32Thread @ 0x1C00438FC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ReferenceW32Thread @ 0x1C0046520 (ReferenceW32Thread.c)
 */

__int64 __fastcall LockExchangeW32Thread(__int64 a1, __int64 a2)
{
  if ( a1 )
    ReferenceW32Thread();
  return ExchangeW32ThreadLock(a1, a2);
}
