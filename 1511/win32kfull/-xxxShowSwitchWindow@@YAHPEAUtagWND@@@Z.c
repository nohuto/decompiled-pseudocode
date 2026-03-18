/*
 * XREFs of ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C0200F84
 * Callers:
 *     xxxNextWindow @ 0x1C0201554 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C0201B8C (xxxOldNextWindow.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     xxxSetWindowPos @ 0x1C0075840 (xxxSetWindowPos.c)
 *     _GetKeyState @ 0x1C00936A0 (_GetKeyState.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00964A8 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     _GetAsyncKeyState @ 0x1C00EB660 (_GetAsyncKeyState.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01FF7BC (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxShowSwitchWindow(struct tagWND *a1, __int64 a2, __int64 a3)
{
  struct tagWND *v3; // rbx
  _DWORD *v4; // rsi
  struct tagSwitchWndInfo *v5; // rax
  struct tagSwitchWndInfo *v6; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  _DWORD *v10; // rdi
  int v11; // ecx
  struct tagSwitchWndInfo *v12; // rax
  struct tagSwitchWndInfo *v13; // rax

  v3 = gspwndAltTab;
  v4 = *(_DWORD **)(GetDispInfo(a1, a2, a3) + 88);
  v5 = Getpswi(v3);
  v6 = v5;
  if ( !v5
    || *((_DWORD *)v5 + 27) && (GetKeyState(0x12u) & 0x8000u) == 0LL
    || !*((_DWORD *)v6 + 27) && (GetAsyncKeyState(0x12u) & 0x8000u) == 0LL )
  {
    return 0LL;
  }
  xxxSetWindowPos(v3, -1, 0, 0, 0, 0, 27);
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x4000) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v9 = 0LL)
      : (v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 244LL) & 1),
        !(_DWORD)v9) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) == 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v11 = 0)
        : (v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v10 = v4 + 27,
          !v11) )
    {
      v10 = v4 + 19;
    }
  }
  else
  {
    v10 = v4 + 23;
  }
  if ( (*((_BYTE *)v3 + 55) & 0x10) == 0 )
  {
    v12 = Getpswi(v3);
    if ( !v12 )
      return 0LL;
    xxxSetWindowPos(
      v3,
      -1,
      (*v10 + v10[2] - *((_DWORD *)v12 + 19)) / 2,
      (v10[1] + v10[3] - *((_DWORD *)v12 + 20)) / 2,
      *((_DWORD *)v12 + 19),
      *((_DWORD *)v12 + 20),
      80);
  }
  xxxInternalUpdateWindow(v3, 1u);
  xxxWindowEvent(0x14u, (__int64 *)v3, -4, 0, 1);
  v13 = Getpswi(v3);
  if ( !v13 )
    return 0LL;
  xxxWindowEvent(
    0x8005u,
    (__int64 *)v3,
    -4,
    *((_DWORD *)v13 + 17) + 1 + *((_DWORD *)v13 + 14) * *((_DWORD *)v13 + 18),
    1);
  return 1LL;
}
