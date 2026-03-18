/*
 * XREFs of _GetKeyState @ 0x1C00936A0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     xxxTranslateAccelerator @ 0x1C0092F94 (xxxTranslateAccelerator.c)
 *     NtUserGetKeyState @ 0x1C00934A0 (NtUserGetKeyState.c)
 *     xxxSysCommand @ 0x1C0109460 (xxxSysCommand.c)
 *     xxxMNStartMenu @ 0x1C01347DC (xxxMNStartMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C0134F0C (xxxTrackPopupMenuEx.c)
 *     xxxMNLoop @ 0x1C0137990 (xxxMNLoop.c)
 *     xxxIsDragging @ 0x1C014C940 (xxxIsDragging.c)
 *     xxxDWP_ProcessVirtKey @ 0x1C014CE1C (xxxDWP_ProcessVirtKey.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01FF80C (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C0200428 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C0200D50 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C0200F84 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxOldNextWindow @ 0x1C0201B8C (xxxOldNextWindow.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C02083DC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     MNCheckButtonDownState @ 0x1C02164AC (MNCheckButtonDownState.c)
 *     xxxSBWndProc @ 0x1C0234280 (xxxSBWndProc.c)
 *     xxxTrackThumb @ 0x1C02359E0 (xxxTrackThumb.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 */

__int64 __fastcall GetKeyState(unsigned int a1)
{
  unsigned __int8 v1; // di
  unsigned __int16 v2; // bx
  __int64 v3; // rsi
  __int64 *ThreadWin32Thread; // rax
  int v5; // r8d

  v1 = a1;
  if ( a1 >= 0x100 )
  {
    UserSetLastError(87);
    return 0;
  }
  else
  {
    v2 = 0;
    v3 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
    v5 = *(unsigned __int8 *)(((unsigned __int64)v1 >> 2) + *(_QWORD *)(v3 + 384) + 184);
    if ( _bittest(&v5, (unsigned __int8)(2 * (v1 & 3) + 1)) )
      v2 = 1;
    if ( _bittest(&v5, (unsigned __int8)(2 * (v1 & 3))) )
      v2 |= 0xFF80u;
  }
  return v2;
}
