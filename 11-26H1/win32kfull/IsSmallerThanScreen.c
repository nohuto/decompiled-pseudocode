/*
 * XREFs of IsSmallerThanScreen @ 0x14000FB4C
 * Callers:
 *     xxxSetSysMenu @ 0x14000E260 (xxxSetSysMenu.c)
 *     ?FixupMonitorRgn@@YAXPEAUtagWND@@_N@Z @ 0x14026F7C4 (-FixupMonitorRgn@@YAXPEAUtagWND@@_N@Z.c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1400103E0 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     GetMonitorWorkRectForDpi @ 0x140030818 (GetMonitorWorkRectForDpi.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x140031410 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 */

_BOOL8 __fastcall IsSmallerThanScreen(struct tagWND *a1)
{
  unsigned int WindowCompositedDpiContext; // eax
  __int64 v3; // r9
  _DWORD *v4; // r9
  _DWORD v6[6]; // [rsp+20h] [rbp-18h] BYREF

  _MonitorFromWindowInternal(a1, 1u, 0);
  WindowCompositedDpiContext = GetWindowCompositedDpiContext(a1);
  GetMonitorWorkRectForDpi(v6, v3, (WindowCompositedDpiContext >> 8) & 0x1FF);
  v4 = (_DWORD *)*((_QWORD *)a1 + 5);
  return v4[24] - v4[22] < v6[2] - v6[0] || v4[25] - v4[23] < v6[3] - v6[1];
}
