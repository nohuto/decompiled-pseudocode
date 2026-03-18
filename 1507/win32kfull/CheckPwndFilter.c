/*
 * XREFs of CheckPwndFilter @ 0x1C0090AD4
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxDoPaint @ 0x1C008FE9C (xxxDoPaint.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01E1450 (xxxRetrievePointerInputMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckPwndFilter(__int64 a1, __int64 a2)
{
  if ( !a2 || a2 == a1 || a2 == 1 && !a1 )
    return 1LL;
  else
    return IsChild(a2);
}
