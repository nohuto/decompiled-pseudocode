/*
 * XREFs of ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C0200BE4
 * Callers:
 *     xxxNextWindow @ 0x1C02011B0 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C02017F4 (xxxOldNextWindow.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     _GetAsyncKeyState @ 0x1C00411FC (_GetAsyncKeyState.c)
 *     _GetKeyState @ 0x1C0041BD0 (_GetKeyState.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     xxxSetWindowPos @ 0x1C00848B8 (xxxSetWindowPos.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00DF658 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01FF10C (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
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
  xxxSetWindowPos(v3, -1LL, 0LL, 0LL, 0, 0, 27);
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x4000) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v9 = 0LL)
      : (v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                        + 260LL) & 1),
        !(_DWORD)v9) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) == 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v11 = 0)
        : (v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
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
      -1LL,
      (unsigned int)((*v10 + v10[2] - *((_DWORD *)v12 + 19)) / 2),
      (unsigned int)((v10[1] + v10[3] - *((_DWORD *)v12 + 20)) / 2),
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
