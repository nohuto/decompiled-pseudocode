/*
 * XREFs of xxxDCEWindowHitTestIndirect @ 0x1C007A4F0
 * Callers:
 *     xxxWindowFromPoint @ 0x1C006D6BC (xxxWindowFromPoint.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C007A660 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C02224F8 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 *     ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x1C022331C (-xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@.c)
 * Callees:
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C007A660 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0084C90 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 */

HWND __fastcall xxxDCEWindowHitTestIndirect(struct tagWND *a1, struct tagPOINT a2, __int64 a3, __int64 a4)
{
  int v6; // r14d
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 CurrentProcessWin32Process; // rax
  HWND v12; // rbp
  __int64 v13; // rcx
  int v14; // esi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct tagWND *v19; // rcx
  __int64 v22; // [rsp+20h] [rbp-38h] BYREF
  struct tagWND *i; // [rsp+28h] [rbp-30h]
  struct tagPOINT v24; // [rsp+60h] [rbp+8h] BYREF
  struct tagPOINT v25; // [rsp+68h] [rbp+10h] BYREF

  v25 = a2;
  LOBYTE(v6) = 18;
  v7 = (_QWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))PsGetThreadWin32Thread)(
                   KeGetCurrentThread(),
                   a2,
                   a3,
                   a4);
  if ( v7 )
  {
    v10 = *v7;
    if ( *v7 )
    {
      if ( *(_QWORD *)(v10 + 352) )
        CaptureAndValidateUserModeDpiAwarenessContext(*v7);
      if ( *(_DWORD *)(v10 + 340) )
      {
        v6 = *(_DWORD *)(v10 + 340);
      }
      else
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9, v8);
        if ( CurrentProcessWin32Process )
          v6 = *(_DWORD *)(CurrentProcessWin32Process + 280);
      }
    }
  }
  v12 = 0LL;
  v13 = gptiCurrent;
  v22 = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = &v22;
  for ( i = 0LL; a1; a1 = (struct tagWND *)*((_QWORD *)a1 + 9) )
  {
    v14 = *(_DWORD *)(a3 + 32);
    v24 = v25;
    if ( (v14 & 4) != 0 )
    {
      v15 = *((_QWORD *)a1 + 11);
      if ( v15 )
      {
        v16 = *((_QWORD *)a1 + 3);
        v17 = 0LL;
        if ( v16 )
        {
          v18 = *(_QWORD *)(v16 + 8);
          if ( v18 )
            v17 = *(_QWORD *)(v18 + 16);
        }
        if ( v15 == v17 && (((unsigned __int8)v6 ^ *((_BYTE *)a1 + 352)) & 0xF) != 0 )
        {
          LogicalToPhysicalDPIPoint(&v24, &v25, 0LL, 0LL, v22);
          *(_DWORD *)(a3 + 32) &= ~4u;
        }
      }
    }
    v19 = i;
    i = a1;
    ++*((_DWORD *)a1 + 2);
    if ( v19 )
    {
      if ( (*((_DWORD *)v19 + 2))-- == 1 )
        HMUnlockObjectInternal(v19);
    }
    v12 = xxxDCEWindowHitTest2Internal(a1, v24, (struct tagDCE_WINDOW_HIT_TEST_ARGS *)a3);
    if ( v12 )
      break;
    *(_DWORD *)(a3 + 32) = v14;
  }
  ThreadUnlock1(v13, v8);
  return v12;
}
