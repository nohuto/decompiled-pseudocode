/*
 * XREFs of _SetSystemTimer @ 0x1C0079ECC
 * Callers:
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C0006938 (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     xxxFlashWindow @ 0x1C00776EC (xxxFlashWindow.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C0079D2C (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C0079E70 (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     xxxTrackMouseMove @ 0x1C007AAC8 (xxxTrackMouseMove.c)
 *     zzzStartFade @ 0x1C010DD38 (zzzStartFade.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C0121BE0 (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     IncrementCompositedCount @ 0x1C01E7730 (IncrementCompositedCount.c)
 *     NtUserSetSystemTimer @ 0x1C02209F0 (NtUserSetSystemTimer.c)
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0231C50 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxTrackBox @ 0x1C0235470 (xxxTrackBox.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     InternalSetTimer @ 0x1C007A390 (InternalSetTimer.c)
 */

__int64 __fastcall SetSystemTimer(__int64 a1, int a2, int a3, int a4, int a5)
{
  int v8; // ebx
  int v9; // edi

  v8 = a1;
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
  else if ( PsGetCurrentProcessWin32Process(a1) != *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL) )
  {
    UserSetLastError(5);
    return 0LL;
  }
  return InternalSetTimer(v8, a2, a3, a4, 0, v9);
}
