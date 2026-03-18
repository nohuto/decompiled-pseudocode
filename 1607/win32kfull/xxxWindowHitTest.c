/*
 * XREFs of xxxWindowHitTest @ 0x1C0117FD0
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxWindowHitTest2 @ 0x1C011807C (xxxWindowHitTest2.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C02224F8 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 *     ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x1C022331C (-xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@.c)
 *     xxxHelpLoop @ 0x1C0234AF4 (xxxHelpLoop.c)
 * Callees:
 *     HMUnlockObject @ 0x1C005EAEC (HMUnlockObject.c)
 *     xxxWindowHitTest2 @ 0x1C011807C (xxxWindowHitTest2.c)
 */

__int64 __fastcall xxxWindowHitTest(struct tagWND *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v7; // [rsp+28h] [rbp-20h]

  v2 = 0LL;
  v3 = 0LL;
  v4 = gptiCurrent;
  v6 = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = &v6;
  v7 = 0LL;
  if ( a1 )
  {
    while ( 1 )
    {
      v7 = a1;
      ++*((_DWORD *)a1 + 2);
      if ( v2 )
        HMUnlockObject(v2);
      v3 = xxxWindowHitTest2(a1);
      if ( v3 )
        break;
      a1 = (struct tagWND *)*((_QWORD *)a1 + 9);
      if ( !a1 )
        break;
      v2 = (__int64)v7;
    }
  }
  ThreadUnlock1(v2, v4);
  return v3;
}
