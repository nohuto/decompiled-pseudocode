/*
 * XREFs of SetPointer @ 0x1C0094C10
 * Callers:
 *     zzzUpdateCursorImage @ 0x1C005C620 (zzzUpdateCursorImage.c)
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     SetMouseTrails @ 0x1C0094A28 (SetMouseTrails.c)
 *     zzzEnableDwmPointerSupport @ 0x1C0094A9C (zzzEnableDwmPointerSupport.c)
 *     UserResetPointer @ 0x1C0094BF0 (UserResetPointer.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C009C580 (xxxMakeWindowForegroundWithState.c)
 *     xxxRemoteReconnect @ 0x1C01537F0 (xxxRemoteReconnect.c)
 *     xxxUserResetDisplayDevice @ 0x1C0154CD0 (xxxUserResetDisplayDevice.c)
 *     ChangeComposableCursor @ 0x1C01DD530 (ChangeComposableCursor.c)
 *     RemoteShadowCleanup @ 0x1C01FA230 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C01FA3B0 (RemoteShadowStart.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C005C8F4 (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     FixupCursorForMonitor @ 0x1C005C91C (FixupCursorForMonitor.c)
 *     HasHidTable @ 0x1C005C980 (HasHidTable.c)
 *     GreSetPointer @ 0x1C005DA90 (GreSetPointer.c)
 *     ?FCursorShadowed@@YAHPEAU_CURSINFO@@@Z @ 0x1C005DD20 (-FCursorShadowed@@YAHPEAU_CURSINFO@@@Z.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

void __fastcall SetPointer(int a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  struct _CURSINFO *v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _DWORD *v18; // rcx
  struct tagCURSOR *v19; // rax
  struct tagCURSOR *CurrentCursorFrame; // rax
  struct _CURSINFO *v21; // r10
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // ecx
  unsigned int v36; // [rsp+20h] [rbp-18h]

  if ( !a1 )
  {
    v1 = 0LL;
    v36 = 0;
    if ( gbForceSoftwareCursor == 1 )
      v1 = 32LL;
    v2 = 0LL;
    v3 = 0LL;
LABEL_5:
    GreSetPointer((HDEV)*gpDispInfo, v3, v1, v2, v36);
    return;
  }
  if ( !gpqForeground
    || ((v4 = *(_QWORD *)(gpqForeground + 72LL)) != 0
      ? (v5 = *(_QWORD *)(v4 + 16))
      : (v5 = *(_QWORD *)(gpqForeground + 56LL)),
        *(int *)(gpqForeground + 336LL) >= 0
     || !(unsigned int)HasHidTable(v5)
     || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 376) + 776LL) + 100LL) & 0x100) == 0) )
  {
    if ( gpqCursor && *(int *)(gpqCursor + 336LL) >= 0 && *(_QWORD *)(gpqCursor + 328LL) )
    {
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x13uLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v7, v6, v8, v9) & 0xF) == 0 )
        {
LABEL_36:
          v18 = (_DWORD *)(gpsi + 2344LL);
          goto LABEL_18;
        }
      }
      else if ( IsDPIDWMSysMet(v7)
             && (W32GetCurrentThreadDpiAwarenessContext(v11, v10, v12, v13) & 0xF) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v25,
                                                      v26,
                                                      v27)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1 )
      {
        goto LABEL_36;
      }
      if ( IsDPIDWMSysMet(0x13uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v15, v14, v16, v17) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v30, v31) + 408)
          ? (v35 = 0)
          : (v35 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v32,
                                                         v33,
                                                         v34)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v35) )
      {
        v18 = (_DWORD *)(gpsi + 2732LL);
      }
      else
      {
        v18 = (_DWORD *)(gpsi + 1956LL);
      }
LABEL_18:
      if ( *v18 )
      {
        v19 = (struct tagCURSOR *)FixupCursorForMonitor(*(_QWORD *)(gpqCursor + 328LL));
        CurrentCursorFrame = GetCurrentCursorFrame(v19);
        if ( CurrentCursorFrame )
        {
          v1 = (unsigned int)FCursorShadowed((struct tagCURSOR *)((char *)CurrentCursorFrame + 80)) != 0 ? 0x10 : 0;
          if ( gbForceSoftwareCursor == 1 )
            v1 = (unsigned int)v1 | 0x20;
          v3 = v21;
          v2 = (unsigned int)gMouseTrails;
          v36 = 50;
          if ( gProtocolType )
            v2 = 0LL;
          goto LABEL_5;
        }
      }
    }
  }
}
