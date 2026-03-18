/*
 * XREFs of GetAppCompatFlags2 @ 0x1C00956B8
 * Callers:
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@@Z @ 0x1C0027C60 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@@Z.c)
 *     xxxDrawCaptionBar @ 0x1C004ED9C (xxxDrawCaptionBar.c)
 *     NtUserCreateWindowEx @ 0x1C0057F00 (NtUserCreateWindowEx.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     xxxSetWindowStyle @ 0x1C0068470 (xxxSetWindowStyle.c)
 *     xxxInternalToUnicode @ 0x1C00DA574 (xxxInternalToUnicode.c)
 *     ?pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z @ 0x1C00E44D0 (-pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z.c)
 *     xxxDWP_UpdateUIState @ 0x1C00EF9E4 (xxxDWP_UpdateUIState.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00F8334 (xxxDrawMenuBarUnderlines.c)
 *     NtGdiTransparentBlt @ 0x1C01058C0 (NtGdiTransparentBlt.c)
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     zzzHideCursorNoCapture @ 0x1C01E6C60 (zzzHideCursorNoCapture.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01EBBAC (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackWindowDying @ 0x1C01EC184 (xxxDDETrackWindowDying.c)
 *     ?xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C023ECF4 (-xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxMenuBarDraw @ 0x1C0241C80 (xxxMenuBarDraw.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetAppCompatFlags2(unsigned __int16 a1)
{
  unsigned int v1; // ebx
  __int64 ThreadWin32Thread; // rax

  v1 = a1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( v1 < *(_DWORD *)(ThreadWin32Thread + 560) )
    return 0LL;
  else
    return *(unsigned int *)(ThreadWin32Thread + 576);
}
