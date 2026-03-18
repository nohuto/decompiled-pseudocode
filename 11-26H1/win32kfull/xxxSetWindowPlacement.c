/*
 * XREFs of xxxSetWindowPlacement @ 0x1401FBF30
 * Callers:
 *     NtUserSetWindowPlacement @ 0x1402BE650 (NtUserSetWindowPlacement.c)
 * Callees:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1400125F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     GetMonitorRectForDpi @ 0x14002F7BC (GetMonitorRectForDpi.c)
 *     _MonitorFromRect @ 0x14002FC00 (_MonitorFromRect.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x140030420 (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     UpdateCheckpoint @ 0x140030480 (UpdateCheckpoint.c)
 *     GetMonitorWorkRectForDpi @ 0x140030818 (GetMonitorWorkRectForDpi.c)
 *     ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x140032708 (-SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     ?_ShowWindowAsync@@YAHPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@H_K@Z @ 0x14009275C (-_ShowWindowAsync@@YAHPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@H_K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1401FC428 (-CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z.c)
 *     WPUpdateCheckPointSettings @ 0x1401FC6A0 (WPUpdateCheckPointSettings.c)
 *     ?xxxInterceptSetWindowPlacement@WindowActions@@YAXPEAUtagWND@@_NIAEBUtagRECT@@@Z @ 0x1401FC6E0 (-xxxInterceptSetWindowPlacement@WindowActions@@YAXPEAUtagWND@@_NIAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSetWindowPlacement(struct tagWND *a1, __int64 a2)
{
  struct tagMONITOR *v4; // r14
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  char v6; // r13
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int CurrentThreadCompositedDpiContext; // eax
  struct tagPOINT v12; // rax
  BOOL v13; // r12d
  struct tagPOINT v14; // rax
  BOOL v15; // ebx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  CHECKPOINT *updated; // rax
  __int64 v20; // rdx
  struct tagPOINT *v21; // r15
  _DWORD *v22; // r14
  unsigned int v23; // ecx
  int v24; // edx
  __int64 v25; // rcx
  int v26; // ebx
  char v27; // al
  unsigned __int8 v28; // bl
  int v29; // r14d
  __int64 v30; // rax
  unsigned int v32; // eax
  struct tagWND *v33; // rdx
  __int64 v34; // rdx
  bool v35; // bl
  bool v36; // di
  __int64 UserSessionState; // rax
  int v38; // r8d
  int v39; // edx
  struct tagTHREADINFO *v40; // rax
  const struct tagRECT *v41; // [rsp+20h] [rbp-49h]
  struct tagPOINT v42; // [rsp+40h] [rbp-29h] BYREF
  struct tagPOINT v43; // [rsp+48h] [rbp-21h] BYREF
  __m128i v44; // [rsp+50h] [rbp-19h]
  __m128i v45; // [rsp+60h] [rbp-9h] BYREF
  struct tagRECT v46; // [rsp+70h] [rbp+7h] BYREF

  v46 = 0LL;
  v44 = 0LL;
  v4 = 0LL;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1);
  v6 = ShouldVirtualizeWindowRect(a1, CurrentThreadDpiAwarenessContext);
  v7 = 0LL;
  v8 = *((_QWORD *)a1 + 3);
  v46 = *(struct tagRECT *)(a2 + 28);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 8);
    if ( v9 )
      v7 = *(_QWORD *)(v9 + 24);
  }
  v10 = *((_QWORD *)a1 + 13);
  if ( v10 == v7 )
  {
    v4 = (struct tagMONITOR *)MonitorFromRect(&v46.left, 1LL, 0);
    CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
    GetMonitorWorkRectForDpi(&v45, (__int64)v4, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
    v10 = *((_QWORD *)a1 + 13);
    v44 = v45;
  }
  v12 = *(struct tagPOINT *)(a2 + 12);
  v42 = v12;
  v13 = v12.x != -1 && v12.y != -1;
  v14 = *(struct tagPOINT *)(a2 + 20);
  v43 = v14;
  v15 = v14.x != -1 && v14.y != -1;
  v16 = *((_QWORD *)a1 + 3);
  v17 = 0LL;
  if ( v16 )
  {
    v18 = *(_QWORD *)(v16 + 8);
    if ( v18 )
      v17 = *(_QWORD *)(v18 + 24);
  }
  if ( v10 == v17 && *(char *)(*((_QWORD *)a1 + 5) + 24LL) >= 0 )
  {
    v32 = GetCurrentThreadCompositedDpiContext();
    GetMonitorRectForDpi(&v45, (__int64)v4, (v32 >> 8) & 0x1FF);
    v46.left += v44.m128i_i32[0] - v45.m128i_i32[0];
    v46.right += v44.m128i_i32[0] - v45.m128i_i32[0];
    v46.bottom += v44.m128i_i32[1] - v45.m128i_i32[1];
    v46.top += v44.m128i_i32[1] - v45.m128i_i32[1];
    if ( v13 )
    {
      v42.x += v44.m128i_i32[0] - v45.m128i_i32[0];
      v42.y += v44.m128i_i32[1] - v45.m128i_i32[1];
    }
    CheckPlacementBounds(&v46, &v42, &v43, v4);
  }
  if ( v6 )
    TransformRectBetweenCoordinateSpaces(&v46, &v46, a1, 0LL);
  if ( (*((_DWORD *)a1 + 96) & 0x10) != 0 )
  {
    v33 = (struct tagWND *)(*(_DWORD *)(a2 + 4) >> 1);
    LOBYTE(v33) = (*(_DWORD *)(a2 + 4) & 2) != 0;
    WindowActions::xxxInterceptSetWindowPlacement(a1, v33, *(_DWORD *)(a2 + 8), (unsigned int)&v46, v41);
    if ( v13 || v15 )
    {
      v35 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v36 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v35 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v34);
        LOBYTE(v38) = v36;
        LOBYTE(v39) = v35;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v39,
          v38,
          *(_QWORD *)(UserSessionState + 69152),
          3,
          4,
          10,
          (__int64)&WPP_867488863ffe3093fa9718447395f37e_Traceguids);
      }
    }
  }
  else
  {
    updated = UpdateCheckpoint(a1);
    v21 = (struct tagPOINT *)updated;
    v22 = (_DWORD *)((char *)updated + 16);
    if ( updated )
    {
      CHECKPOINT::SetNormalRect(updated, a1, &v46, 0);
      *v21 = v42;
      v23 = (16 * v13) | *v22 & 0xFFFFFFEF;
      *v22 = v23;
      v24 = v23 ^ (*(_DWORD *)(a2 + 4) ^ v23) & 1;
      *v22 = v24;
      v20 = (32 * v15) | v24 & 0xFFFFFFDD;
      v21[1] = v43;
      *v22 = v20;
    }
    v25 = *((_QWORD *)a1 + 5);
    v26 = ((*(_DWORD *)(a2 + 4) & 4) << 12) | 0x14;
    v27 = *(_BYTE *)(v25 + 31);
    if ( (v27 & 0x20) != 0 )
    {
      if ( (!v21 || (*v22 & 1) != 0) && v13 )
      {
        if ( v6 )
          TransformPointBetweenCoordinateSpaces(&v42, &v42, a1, 0LL);
        xxxSetWindowPos(a1, 0LL, (unsigned int)v42.x, (unsigned int)v42.y, 0, 0, v26 | 1);
      }
    }
    else if ( (v27 & 1) != 0 )
    {
      if ( v21 )
      {
        if ( (*(_BYTE *)(v25 + 19) & 0x40) != 0 )
          *v22 &= ~0x20u;
        if ( (*v22 & 0x20) != 0 )
        {
          if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
          {
            v43.x += v44.m128i_i32[0];
            v43.y += v44.m128i_i32[1];
          }
          if ( v6 )
            TransformPointBetweenCoordinateSpaces(&v43, &v43, a1, 0LL);
          xxxSetWindowPos(a1, 0LL, (unsigned int)v43.x, (unsigned int)v43.y, 0, 0, v26 | 1);
        }
      }
    }
    else
    {
      xxxSetWindowPos(
        a1,
        0LL,
        (unsigned int)v46.left,
        (unsigned int)v46.top,
        v46.right - v46.left,
        v46.bottom - v46.top,
        v26);
    }
    if ( (*(_DWORD *)(a2 + 4) & 4) == 0
      || (v40 = PtiCurrent(v25), v25 = *((_QWORD *)a1 + 2), *(_QWORD *)(v25 + 464) == *((_QWORD *)v40 + 58)) )
    {
      v28 = *(_BYTE *)(a2 + 8);
      v29 = 0;
      v30 = W32GetUserSessionState(v25, v20);
      xxxShowWindowEx(a1, v28, *(_DWORD *)(v30 + 66792) & 0x10000);
    }
    else
    {
      _ShowWindowAsync(a1, 0LL, *(_DWORD *)(a2 + 8), *(unsigned int *)(a2 + 4));
      v29 = 1;
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 && !v29 )
      WPUpdateCheckPointSettings(a1, *(unsigned int *)(a2 + 4));
  }
  return 1LL;
}
