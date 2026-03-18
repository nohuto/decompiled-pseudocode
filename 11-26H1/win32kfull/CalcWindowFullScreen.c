/*
 * XREFs of CalcWindowFullScreen @ 0x140010674
 * Callers:
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x140010D38 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1400426E4 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     CalcWindowsFullScreen @ 0x140222DE0 (CalcWindowsFullScreen.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x140260B0C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1400101EC (PostShellHookMessagesEx.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1400103E0 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     GetMonitorRectForDpi @ 0x14002F7BC (GetMonitorRectForDpi.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x140031410 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     RemoveWindowFullScreen @ 0x14024985C (RemoveWindowFullScreen.c)
 *     memcmp @ 0x14034FDE0 (memcmp.c)
 */

void __fastcall CalcWindowFullScreen(struct tagWND *a1, __int64 a2)
{
  bool v3; // di
  __int64 v4; // rdx
  struct tagMONITOR *v5; // r14
  __int64 v6; // rcx
  char v7; // dl
  __m128i v8; // xmm6
  int v9; // edi
  unsigned int WindowCompositedDpiContext; // eax
  int v11; // r11d
  int v12; // r10d
  int v13; // r14d
  BOOL v14; // r9d
  BOOL v15; // eax
  int v16; // eax
  unsigned __int64 v17; // rdx
  int v18; // eax
  unsigned __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  int v25; // edx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v27; // rax
  __m128i Buf1; // [rsp+20h] [rbp-40h] BYREF
  __m128i Buf2; // [rsp+30h] [rbp-30h] BYREF
  __m128i v30; // [rsp+40h] [rbp-20h] BYREF

  Buf1 = 0LL;
  v3 = 0;
  if ( !(unsigned int)IsTopLevelWindow(a1, a2) || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) == 0 )
  {
    if ( (*((_DWORD *)a1 + 95) & 0x400) != 0 )
      RemoveWindowFullScreen(a1);
    return;
  }
  v5 = _MonitorFromWindowInternal(a1, 2u, 0);
  if ( v5 )
  {
    v6 = *((_QWORD *)a1 + 5);
    v7 = *(_BYTE *)(v6 + 30);
    if ( (v7 & 0x40) != 0 && v7 < 0 && (v7 & 4) != 0 )
    {
      v8 = *(__m128i *)(v6 + 104);
      v23 = *(_QWORD *)(v6 + 88);
      Buf2 = v8;
      v24 = v23 - *(_QWORD *)(v6 + 104);
      if ( !v24 )
        v24 = *(_QWORD *)(v6 + 96) - *(_QWORD *)(v6 + 112);
      if ( v24 )
      {
        v25 = *(_DWORD *)(v6 + 288) & 0xF;
        if ( v25 == 3 )
        {
          WindowDpiLastNotify = (*(_DWORD *)(v6 + 288) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v6 + 232) & 0x400) != 0 )
        {
          WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
        }
        else if ( !v25
               && (v27 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 488LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v27 + 8) + 64LL) & 1) != 0 )
        {
          WindowDpiLastNotify = 96;
        }
        else
        {
          WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) + 272LL);
        }
        v9 = GetDpiDependentMetric(2LL, WindowDpiLastNotify) + *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL);
        Buf2.m128i_i32[1] = v9;
        v8 = Buf2;
        goto LABEL_9;
      }
    }
    else
    {
      v8 = *(__m128i *)(v6 + 88);
      Buf2 = v8;
    }
    v9 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 4));
LABEL_9:
    WindowCompositedDpiContext = GetWindowCompositedDpiContext(a1);
    GetMonitorRectForDpi(&v30, v5, (WindowCompositedDpiContext >> 8) & 0x1FF);
    v11 = _mm_cvtsi128_si32(v8);
    v12 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 12));
    v13 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 8));
    v14 = v11 >= v13 || v9 >= v12;
    v15 = v30.m128i_i32[0] >= v30.m128i_i32[2] || v30.m128i_i32[1] >= v30.m128i_i32[3];
    if ( v14 )
    {
      if ( !v15 )
        Buf1 = v30;
    }
    else if ( v15 )
    {
      Buf1 = v8;
    }
    else
    {
      v16 = v30.m128i_i32[0];
      if ( v11 < v30.m128i_i32[0] )
        v16 = v11;
      v17 = HIDWORD(v30.m128i_i64[0]);
      Buf1.m128i_i32[0] = v16;
      v18 = v30.m128i_i32[2];
      if ( v9 < v30.m128i_i32[1] )
        LODWORD(v17) = v9;
      Buf1.m128i_i32[1] = v17;
      if ( v13 > v30.m128i_i32[2] )
        v18 = v13;
      v19 = HIDWORD(v30.m128i_i64[1]);
      Buf1.m128i_i32[2] = v18;
      if ( v12 > v30.m128i_i32[3] )
        LODWORD(v19) = v12;
      Buf1.m128i_i32[3] = v19;
    }
    v3 = memcmp(&Buf1, &Buf2, 0x10uLL) == 0;
  }
  v20 = *((unsigned int *)a1 + 95);
  if ( v3 != ((*((_DWORD *)a1 + 95) & 0x400) != 0) )
  {
    LODWORD(v20) = v20 ^ 0x400;
    *((_DWORD *)a1 + 95) = v20;
    if ( *(_QWORD *)(W32GetUserSessionState(v20, v4) + 18928)
      && *(struct tagWND **)(*(_QWORD *)(W32GetUserSessionState(v22, v21) + 18928) + 128LL) == a1 )
    {
      if ( v3 )
        EtwTraceForegroundWindowFullScreenStart(0LL);
      else
        EtwTraceForegroundWindowFullScreenStop(0LL);
    }
    PostShellHookMessagesEx((LastWokenThread *)(!v3 + 53), *(_QWORD *)a1);
  }
}
