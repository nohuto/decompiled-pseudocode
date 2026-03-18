/*
 * XREFs of xxxDefPointerProc @ 0x1C023139C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     SetMiPPromotion @ 0x1C00012DC (SetMiPPromotion.c)
 *     xxxPromotePointerToMouse @ 0x1C01E13FC (xxxPromotePointerToMouse.c)
 *     xxxPromotePointerDataToMouse @ 0x1C01FBD54 (xxxPromotePointerDataToMouse.c)
 */

__int64 __fastcall xxxDefPointerProc(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  if ( (_WORD)a3 == 1 )
  {
    SetMiPPromotion(gptiCurrent, a2);
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
