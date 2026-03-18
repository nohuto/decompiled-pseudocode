/*
 * XREFs of xxxDefPointerProc @ 0x140053A6C
 * Callers:
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetMiPPromotion @ 0x140054DB4 (SetMiPPromotion.c)
 *     xxxPromotePointerToMouse @ 0x140135AFC (xxxPromotePointerToMouse.c)
 */

__int64 __fastcall xxxDefPointerProc(__int64 a1, __int64 a2, unsigned __int16 a3, unsigned __int64 a4)
{
  unsigned int v5; // edi
  struct tagTHREADINFO *v6; // rax
  __int64 UserSessionState; // rax

  v5 = a2;
  if ( a3 == 1 )
  {
    v6 = PtiCurrent(a1);
    SetMiPPromotion(v6, v5);
  }
  else if ( a4 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    xxxPromotePointerToMouse(a3, 0x10000000LL);
  }
  else
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    CTouchProcessor::PromotePointerDataToMouse(*(CTouchProcessor **)(UserSessionState + 3256), a4, 0x10000000u);
  }
  return 0LL;
}
