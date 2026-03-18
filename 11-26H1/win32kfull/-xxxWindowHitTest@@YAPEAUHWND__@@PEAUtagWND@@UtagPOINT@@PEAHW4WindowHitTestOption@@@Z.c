/*
 * XREFs of ?xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14008A10C
 * Callers:
 *     ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@PEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x140086DFC (-xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x140088A18 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14008B280 (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxHelpLoop @ 0x1402FAAB4 (xxxHelpLoop.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x14008A600 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14008B280 (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 */

__int64 __fastcall xxxWindowHitTest(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rsi
  __int64 v8; // rdi
  struct tagTHREADINFO *v9; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  v8 = a1;
  v9 = PtiCurrent(a1);
  BugCheckParameter3[0] = *((_QWORD *)v9 + 56);
  *((_QWORD *)v9 + 56) = BugCheckParameter3;
  BugCheckParameter3[1] = 0LL;
  while ( v8 )
  {
    Win32HM_ExchangeThreadLock<1>(v8, BugCheckParameter3);
    v4 = xxxWindowHitTest2(v8, a2, a3, a4);
    if ( v4 )
      break;
    v8 = *(_QWORD *)(v8 + 88);
  }
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  return v4;
}
