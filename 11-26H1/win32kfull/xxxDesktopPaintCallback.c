/*
 * XREFs of xxxDesktopPaintCallback @ 0x14025A350
 * Callers:
 *     NtUserPaintMonitor @ 0x1402B8D20 (NtUserPaintMonitor.c)
 * Callees:
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x140030420 (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     GetMonitorWorkRectForDpi @ 0x140030818 (GetMonitorWorkRectForDpi.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetStyleWindow @ 0x1400463E0 (GetStyleWindow.c)
 *     FillRect @ 0x140126BCC (FillRect.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x140138DEC (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140138E4C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z @ 0x14013D9E8 (-_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1402D1ADC (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 */

_BOOL8 __fastcall xxxDesktopPaintCallback(__int64 a1, HDC a2, const RECT *a3, __int64 a4)
{
  int v5; // r14d
  __int64 StyleWindow; // rdi
  unsigned int CurrentThreadCompositedDpiContext; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 UserSessionState; // rax
  __int64 v21; // rax
  int v22; // edx
  int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  BOOL v28; // edi
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // ebx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  char v37; // bl
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  struct tagTHREADINFO *v48; // rax
  struct tagRECT v50; // [rsp+20h] [rbp-20h] BYREF
  __m128i v51; // [rsp+30h] [rbp-10h] BYREF
  char v52; // [rsp+68h] [rbp+28h] BYREF

  v5 = 0;
  StyleWindow = 0LL;
  if ( *(_QWORD *)(a4 + 8) )
    a2 = *(HDC *)(a4 + 8);
  CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
  GetMonitorWorkRectForDpi(&v51, a1, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
  v50 = (struct tagRECT)v51;
  if ( a2 )
  {
    GreLockVisRgnShared(v11, v10, v12, v13);
    v14 = LookupDC(a2, 0LL);
    v17 = v14;
    if ( v14 )
    {
      v18 = *(_QWORD *)(v14 + 80);
      v19 = v18;
      if ( v18 )
      {
        v16 = *(_WORD *)(*(_QWORD *)(v18 + 40) + 42LL) & 0x2FFF;
        if ( (_DWORD)v16 == 669 )
        {
          UserSessionState = W32GetUserSessionState(v16, v15);
          v19 = *(_QWORD *)(v17 + 80);
          if ( *(_QWORD *)(v19 + 24) == *(_QWORD *)(UserSessionState + 62968) )
            v5 = 1;
        }
      }
      if ( (*(_DWORD *)(v17 + 48) & 0x4000) != 0 )
        StyleWindow = GetStyleWindow(v19, 2848);
    }
    GreUnlockVisRgn(v16);
    if ( StyleWindow )
    {
      v21 = *(_QWORD *)(StyleWindow + 40);
      v22 = *(_DWORD *)(v21 + 88);
      v23 = -*(_DWORD *)(v21 + 92);
      v50.bottom -= *(_DWORD *)(v21 + 92);
      v10 = (unsigned int)-v22;
      v50.right += v10;
      v11 = (unsigned int)(v10 + v51.m128i_i32[0]);
      v50.top += v23;
      v50.left = v10 + v51.m128i_i32[0];
    }
  }
  v25 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 19904);
  if ( !*(_DWORD *)(v25 + 2164) && !v5 )
  {
    if ( *(_DWORD *)(W32GetUserSessionState(v25, v24) + 62824) )
    {
      v28 = 0;
    }
    else
    {
      LOBYTE(v26) = 1;
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v52, v26);
      EnterSharedCrit(0LL, 1LL);
      EnterSharedRenderCrit(v29);
      v32 = W32GetUserSessionState(v31, v30);
      v33 = FillRect(a2, a3, *(HBRUSH *)(*(_QWORD *)(v32 + 19904) + 4704LL));
      LeaveRenderCrit(v35, v34);
      UserSessionSwitchLeaveCrit(v36);
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v52);
      v28 = v33 != 0;
    }
LABEL_23:
    if ( *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v27, v26) + 19904) + 2164LL) )
    {
      v48 = PtiCurrent(v47);
      if ( !_GetShellWindow(*((struct tagDESKTOP **)v48 + 61)) )
        PaintWatermark(a2, &v50);
    }
    return v28;
  }
  v37 = 0;
  v38 = W32GetUserSessionState(v25, v24);
  if ( (unsigned __int8)ExIsFastResourceHeldExclusive(*(_QWORD *)(v38 + 16)) == 1 )
  {
    v37 = 1;
    LeaveMitRitHazardCrit(v39);
  }
  UserSessionSwitchLeaveCrit(v39);
  EnterSharedCrit(0LL, 1LL);
  EnterSharedRenderCrit(v40);
  v43 = W32GetUserSessionState(v42, v41);
  v28 = FillRect(a2, a3, *(HBRUSH *)(v43 + 43080)) != 0;
  LeaveRenderCrit(v45, v44);
  UserSessionSwitchLeaveCrit(v46);
  EnterCrit(1LL, 0LL);
  if ( v37 )
    EnterMitRitHazardCrit(v27, v26);
  if ( !v5 )
    goto LABEL_23;
  return v28;
}
