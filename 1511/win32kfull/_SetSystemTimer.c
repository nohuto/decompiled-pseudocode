/*
 * XREFs of _SetSystemTimer @ 0x1C00CA594
 * Callers:
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C00087A0 (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     xxxFlashWindow @ 0x1C00C6ACC (xxxFlashWindow.c)
 *     xxxTrackMouseMove @ 0x1C00C6FC4 (xxxTrackMouseMove.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C00C76BC (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C00CA0F4 (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00CA538 (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     zzzStartFade @ 0x1C01397A8 (zzzStartFade.c)
 *     IncrementCompositedCount @ 0x1C01E7BA0 (IncrementCompositedCount.c)
 *     NtUserSetSystemTimer @ 0x1C0220830 (NtUserSetSystemTimer.c)
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0232080 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxTrackBox @ 0x1C0235880 (xxxTrackBox.c)
 * Callees:
 *     InternalSetTimer @ 0x1C004A670 (InternalSetTimer.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 */

__int64 __fastcall SetSystemTimer(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  int v9; // ebx

  v9 = 2;
  if ( a5 )
  {
    v9 = 66;
    return InternalSetTimer(a1, a2, a3, a4, 0, v9);
  }
  if ( PsGetCurrentProcessWin32Process(a1) == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL) )
    return InternalSetTimer(a1, a2, a3, a4, 0, v9);
  UserSetLastError(5);
  return 0LL;
}
