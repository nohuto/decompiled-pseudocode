/*
 * XREFs of GetAppCompatFlags2 @ 0x1C006F66C
 * Callers:
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C0024F60 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     GetAppCompatFlags2WithDPIAware @ 0x1C0067928 (GetAppCompatFlags2WithDPIAware.c)
 *     NtUserCreateWindowEx @ 0x1C006C220 (NtUserCreateWindowEx.c)
 *     _AdjustWindowRectExForDpi @ 0x1C006D7AC (_AdjustWindowRectExForDpi.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     xxxSetWindowStyle @ 0x1C00A1758 (xxxSetWindowStyle.c)
 *     xxxDrawCaptionBar @ 0x1C00AD500 (xxxDrawCaptionBar.c)
 *     xxxInternalToUnicode @ 0x1C00E7C78 (xxxInternalToUnicode.c)
 *     ?pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z @ 0x1C011261C (-pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z.c)
 *     xxxDWP_UpdateUIState @ 0x1C01148BC (xxxDWP_UpdateUIState.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0131828 (xxxDrawMenuBarUnderlines.c)
 *     NtGdiTransparentBlt @ 0x1C013A310 (NtGdiTransparentBlt.c)
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     zzzHideCursorNoCapture @ 0x1C01DD890 (zzzHideCursorNoCapture.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01E2C4C (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackWindowDying @ 0x1C01E3234 (xxxDDETrackWindowDying.c)
 *     ?xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0236810 (-xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxMenuBarDraw @ 0x1C0238258 (xxxMenuBarDraw.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetAppCompatFlags2(unsigned __int16 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 *ThreadWin32Thread; // rax

  v5 = 0;
  v6 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
  if ( ThreadWin32Thread )
    v6 = *ThreadWin32Thread;
  if ( (unsigned int)a1 >= *(_DWORD *)(v6 + 552) )
    return *(unsigned int *)(v6 + 568);
  return v5;
}
