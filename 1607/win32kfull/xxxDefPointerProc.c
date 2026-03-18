/*
 * XREFs of xxxDefPointerProc @ 0x1C022A614
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     xxxPromotePointerToMouse @ 0x1C01D7C84 (xxxPromotePointerToMouse.c)
 *     SetMiPPromotion @ 0x1C01D88CC (SetMiPPromotion.c)
 *     xxxPromotePointerDataToMouse @ 0x1C01F3488 (xxxPromotePointerDataToMouse.c)
 */

__int64 __fastcall xxxDefPointerProc(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (_WORD)a3 == 1 )
  {
    SetMiPPromotion(gptiCurrent, a2, a3);
  }
  else if ( (unsigned __int64)(a4 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    xxxPromotePointerToMouse(a3, 0x10000000u);
  }
  else
  {
    xxxPromotePointerDataToMouse(a4, 0x10000000u, a3, a4);
  }
  return 0LL;
}
