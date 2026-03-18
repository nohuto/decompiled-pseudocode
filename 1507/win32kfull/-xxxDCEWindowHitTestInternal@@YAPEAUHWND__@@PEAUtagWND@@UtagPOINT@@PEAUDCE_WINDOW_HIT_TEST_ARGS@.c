/*
 * XREFs of ?xxxDCEWindowHitTestInternal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0065580
 * Callers:
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00656F0 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxWindowFromPoint @ 0x1C00E4128 (xxxWindowFromPoint.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C022C4C8 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 *     ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x1C022D2C0 (-xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@.c)
 * Callees:
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00656F0 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS.c)
 */

HWND __fastcall xxxDCEWindowHitTestInternal(struct tagWND *a1, struct tagPOINT a2, struct DCE_WINDOW_HIT_TEST_ARGS *a3)
{
  struct tagWND *v4; // rbx
  HWND v5; // rbp
  __int64 CurrentProcessWin32Process; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // esi
  struct tagWND *v10; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r14
  __int64 v18; // rbp
  int v19; // ecx
  int v20; // edx
  __int64 v21; // [rsp+20h] [rbp-48h] BYREF
  struct tagWND *i; // [rsp+28h] [rbp-40h]
  struct tagPOINT v23; // [rsp+70h] [rbp+8h] BYREF
  struct tagPOINT v24; // [rsp+78h] [rbp+10h] BYREF

  v24 = a2;
  v4 = a1;
  v5 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v7 = gptiCurrent;
  v8 = *(_QWORD *)(gptiCurrent + 376LL);
  v21 = v8;
  *(_QWORD *)(gptiCurrent + 376LL) = &v21;
  for ( i = 0LL; v4; *((_DWORD *)a3 + 8) = v9 )
  {
    v9 = *((_DWORD *)a3 + 8);
    v23 = v24;
    if ( (v9 & 4) != 0 )
    {
      v13 = *((_QWORD *)v4 + 11);
      if ( v13 )
      {
        v14 = *((_QWORD *)v4 + 3);
        v15 = 0LL;
        if ( v14 )
        {
          v16 = *(_QWORD *)(v14 + 8);
          if ( v16 )
            v15 = *(_QWORD *)(v16 + 16);
        }
        if ( v13 == v15 )
        {
          v17 = CurrentProcessWin32Process;
          v18 = *(_QWORD *)(*((_QWORD *)v4 + 2) + 384LL);
          if ( !v18 )
            v18 = PsGetCurrentProcessWin32Process(v15);
          if ( !CurrentProcessWin32Process )
            v17 = PsGetCurrentProcessWin32Process(v15);
          v19 = *(_DWORD *)(v17 + 776);
          v20 = *(_DWORD *)(v18 + 776);
          if ( ((v20 ^ v19) & 0x4000) != 0 || (((unsigned __int16)v20 ^ (unsigned __int16)v19) & 0x2000) != 0 )
          {
            LogicalToPhysicalDPIPoint(&v23, &v24, 0LL, 0LL);
            *((_DWORD *)a3 + 8) &= ~4u;
          }
        }
      }
    }
    v10 = i;
    i = v4;
    ++*((_DWORD *)v4 + 2);
    if ( v10 )
    {
      if ( (*((_DWORD *)v10 + 2))-- == 1 )
        HMUnlockObjectInternal(v10);
    }
    v5 = xxxDCEWindowHitTest2Internal(v4, v23, a3);
    if ( v5 )
      break;
    v4 = (struct tagWND *)*((_QWORD *)v4 + 9);
  }
  ThreadUnlock1(v8, v7);
  return v5;
}
