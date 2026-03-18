/*
 * XREFs of ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F82AC
 * Callers:
 *     xxxNextWindow @ 0x1C01F8858 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F8E9C (xxxOldNextWindow.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C005E728 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _GetKeyState @ 0x1C0095870 (_GetKeyState.c)
 *     xxxSetWindowPos @ 0x1C00A5850 (xxxSetWindowPos.c)
 *     _GetAsyncKeyState @ 0x1C00A98E8 (_GetAsyncKeyState.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01F6C9C (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxShowSwitchWindow(struct tagWND *a1)
{
  struct tagWND *v1; // rbx
  _DWORD *v2; // rsi
  struct tagSwitchWndInfo *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct tagSwitchWndInfo *v7; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _DWORD *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // ecx
  struct tagSwitchWndInfo *v25; // rax
  struct tagSwitchWndInfo *v26; // rax

  v1 = gspwndAltTab;
  v2 = *(_DWORD **)(GetDispInfo(a1) + 88);
  v3 = Getpswi(v1);
  v7 = v3;
  if ( !v3
    || *((_DWORD *)v3 + 27) && (GetKeyState(0x12u, v4, v5, v6) & 0x8000u) == 0LL
    || !*((_DWORD *)v7 + 27) && (GetAsyncKeyState(0x12u) & 0x8000u) == 0LL )
  {
    return 0LL;
  }
  xxxSetWindowPos(v1, -1LL, 0LL, 0LL, 0, 0, 27);
  if ( (W32GetCurrentThreadDpiAwarenessContext(v10, v9, v11, v12) & 0xF) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v15, v16) + 408)
      ? (v14 = 0LL)
      : (v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v15, v16)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        !(_DWORD)v14) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v14, v13, v15, v16) & 0xF) != 1
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19, v20) + 408)
        ? (v24 = 0)
        : (v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v21,
                                                       v22,
                                                       v23)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v17 = v2 + 27,
          !v24) )
    {
      v17 = v2 + 19;
    }
  }
  else
  {
    v17 = v2 + 23;
  }
  if ( (*((_BYTE *)v1 + 55) & 0x10) == 0 )
  {
    v25 = Getpswi(v1);
    if ( !v25 )
      return 0LL;
    xxxSetWindowPos(
      v1,
      -1LL,
      (unsigned int)((*v17 + v17[2] - *((_DWORD *)v25 + 19)) / 2),
      (unsigned int)((v17[1] + v17[3] - *((_DWORD *)v25 + 20)) / 2),
      *((_DWORD *)v25 + 19),
      *((_DWORD *)v25 + 20),
      80);
  }
  xxxInternalUpdateWindow(v1, 1u);
  xxxWindowEvent(0x14u, (__int64 *)v1, -4, 0, 1);
  v26 = Getpswi(v1);
  if ( !v26 )
    return 0LL;
  xxxWindowEvent(
    0x8005u,
    (__int64 *)v1,
    -4,
    *((_DWORD *)v26 + 17) + 1 + *((_DWORD *)v26 + 14) * *((_DWORD *)v26 + 18),
    1);
  return 1LL;
}
