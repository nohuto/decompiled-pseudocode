/*
 * XREFs of LockExchangeW32Thread @ 0x1C009C7A8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ReferenceW32Process @ 0x1C009E9F4 (ReferenceW32Process.c)
 */

__int64 __fastcall LockExchangeW32Thread(__int64 a1, __int64 a2)
{
  if ( a1 )
    ReferenceW32Process();
  return ExchangeW32ThreadLock(a1, a2);
}
