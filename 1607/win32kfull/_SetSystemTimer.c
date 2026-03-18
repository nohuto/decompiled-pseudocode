/*
 * XREFs of _SetSystemTimer @ 0x1C00ABC2C
 * Callers:
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C000B5D8 (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     xxxFlashWindow @ 0x1C0096FE8 (xxxFlashWindow.c)
 *     xxxTrackMouseMove @ 0x1C009DDCC (xxxTrackMouseMove.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00ABBD0 (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C010A8C8 (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C011F72C (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     zzzStartFade @ 0x1C013F924 (zzzStartFade.c)
 *     IncrementCompositedCount @ 0x1C01DE3F0 (IncrementCompositedCount.c)
 *     NtUserSetSystemTimer @ 0x1C021A790 (NtUserSetSystemTimer.c)
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C022AE40 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxTrackBox @ 0x1C022E1C0 (xxxTrackBox.c)
 * Callees:
 *     InternalSetTimer @ 0x1C005E280 (InternalSetTimer.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall SetSystemTimer(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  int v9; // edi

  v9 = 2;
  if ( !a1
    || (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 17LL) & 1) != 0 )
  {
    return 0LL;
  }
  if ( a5 )
  {
    v9 = 66;
  }
  else if ( PsGetCurrentProcessWin32Process(a1, a2) != *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL) )
  {
    UserSetLastError(5LL);
    return 0LL;
  }
  return InternalSetTimer(a1, a2, a3, a4, 0, v9);
}
