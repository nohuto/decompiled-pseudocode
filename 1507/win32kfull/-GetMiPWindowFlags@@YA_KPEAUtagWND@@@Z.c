/*
 * XREFs of ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x1C00091A4
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01E2140 (PostMousePointerLeaveAndCleanup.c)
 * Callees:
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 */

__int64 __fastcall GetMiPWindowFlags(struct tagWND *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return GetProp(a1, (unsigned __int16)gatomMiPFlags, 1LL);
  return result;
}
