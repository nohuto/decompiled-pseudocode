/*
 * XREFs of ?xxxDCEWindowHitTestInternal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0054110
 * Callers:
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0054270 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxWindowFromPoint @ 0x1C00E5B9C (xxxWindowFromPoint.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C022C7CC (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 *     ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x1C022D5C4 (-xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@.c)
 * Callees:
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0054270 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS.c)
 */

HWND __fastcall xxxDCEWindowHitTestInternal(struct tagWND *a1, struct tagPOINT a2, struct DCE_WINDOW_HIT_TEST_ARGS *a3)
{
  struct tagWND *v4; // rbx
  HWND v5; // rbp
  __int64 CurrentProcessWin32Process; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r14
  __int64 v15; // rbp
  int v16; // ecx
  int v17; // edx
  struct tagWND *v18; // rcx
  __int64 v21; // [rsp+20h] [rbp-48h] BYREF
  struct tagWND *i; // [rsp+28h] [rbp-40h]
  struct tagPOINT v23; // [rsp+70h] [rbp+8h] BYREF
  struct tagPOINT v24; // [rsp+78h] [rbp+10h] BYREF

  v24 = a2;
  v4 = a1;
  v5 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v7 = gptiCurrent;
  v8 = *(_QWORD *)(gptiCurrent + 368LL);
  v21 = v8;
  *(_QWORD *)(gptiCurrent + 368LL) = &v21;
  for ( i = 0LL; v4; *((_DWORD *)a3 + 8) = v9 )
  {
    v9 = *((_DWORD *)a3 + 8);
    v23 = v24;
    if ( (v9 & 4) != 0 )
    {
      v10 = *((_QWORD *)v4 + 11);
      if ( v10 )
      {
        v11 = *((_QWORD *)v4 + 3);
        v12 = 0LL;
        if ( v11 )
        {
          v13 = *(_QWORD *)(v11 + 8);
          if ( v13 )
            v12 = *(_QWORD *)(v13 + 16);
        }
        if ( v10 == v12 )
        {
          v14 = CurrentProcessWin32Process;
          v15 = *(_QWORD *)(*((_QWORD *)v4 + 2) + 376LL);
          if ( !v15 )
            v15 = PsGetCurrentProcessWin32Process(v12);
          if ( !CurrentProcessWin32Process )
            v14 = PsGetCurrentProcessWin32Process(v12);
          v16 = *(_DWORD *)(v14 + 776);
          v17 = *(_DWORD *)(v15 + 776);
          if ( ((v17 ^ v16) & 0x4000) != 0 || (((unsigned __int16)v17 ^ (unsigned __int16)v16) & 0x2000) != 0 )
          {
            LogicalToPhysicalDPIPoint(&v23, &v24, 0LL, 0LL, v21);
            *((_DWORD *)a3 + 8) &= ~4u;
          }
        }
      }
    }
    v18 = i;
    i = v4;
    ++*((_DWORD *)v4 + 2);
    if ( v18 )
    {
      if ( (*((_DWORD *)v18 + 2))-- == 1 )
        HMUnlockObjectInternal();
    }
    v5 = xxxDCEWindowHitTest2Internal(v4, v23, a3);
    if ( v5 )
      break;
    v4 = (struct tagWND *)*((_QWORD *)v4 + 9);
  }
  ThreadUnlock1(v8, v7);
  return v5;
}
