/*
 * XREFs of ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x1C000C938
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01E2660 (PostMousePointerLeaveAndCleanup.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 */

__int64 __fastcall GetMiPWindowFlags(struct tagWND *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return GetProp(a1, (unsigned __int16)gatomMiPFlags, 1LL);
  return result;
}
