/*
 * XREFs of xxxWindowHitTest @ 0x1C0096200
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxWindowHitTest2 @ 0x1C00962A0 (xxxWindowHitTest2.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C022C7CC (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 *     ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x1C022D5C4 (-xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@.c)
 *     xxxHelpLoop @ 0x1C023D09C (xxxHelpLoop.c)
 * Callees:
 *     xxxWindowHitTest2 @ 0x1C00962A0 (xxxWindowHitTest2.c)
 *     ThreadLockExchangeAlways @ 0x1C0096828 (ThreadLockExchangeAlways.c)
 */

__int64 __fastcall xxxWindowHitTest(struct tagWND *a1)
{
  __int64 v1; // rdi
  struct tagWND *v2; // rbx
  __int64 v3; // rdx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0LL;
  v2 = a1;
  v3 = gptiCurrent;
  v5[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v5;
  for ( v5[1] = 0LL; v2; v2 = (struct tagWND *)*((_QWORD *)v2 + 9) )
  {
    ThreadLockExchangeAlways(v2, v5);
    v1 = xxxWindowHitTest2(v2);
    if ( v1 )
      break;
  }
  ThreadUnlock1(a1, v3);
  return v1;
}
