/*
 * XREFs of _GetKeyState @ 0x1C0041BD0
 * Callers:
 *     xxxTranslateAccelerator @ 0x1C00414D0 (xxxTranslateAccelerator.c)
 *     NtUserGetKeyState @ 0x1C00419D0 (NtUserGetKeyState.c)
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     xxxDWP_ProcessVirtKey @ 0x1C007750C (xxxDWP_ProcessVirtKey.c)
 *     xxxSysCommand @ 0x1C00FD5E4 (xxxSysCommand.c)
 *     xxxMNStartMenu @ 0x1C0107794 (xxxMNStartMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C0108A2C (xxxTrackPopupMenuEx.c)
 *     xxxMNLoop @ 0x1C010B494 (xxxMNLoop.c)
 *     xxxIsDragging @ 0x1C01239CC (xxxIsDragging.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01FF15C (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C0200060 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C02009B0 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C0200BE4 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxOldNextWindow @ 0x1C02017F4 (xxxOldNextWindow.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C0208098 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     MNCheckButtonDownState @ 0x1C0216648 (MNCheckButtonDownState.c)
 *     xxxSBWndProc @ 0x1C0233E70 (xxxSBWndProc.c)
 *     xxxTrackThumb @ 0x1C02355D0 (xxxTrackThumb.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
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
    UserSetLastError(87LL);
    return 0;
  }
  else
  {
    v2 = 0;
    v3 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
    v5 = *(unsigned __int8 *)(((unsigned __int64)v1 >> 2) + *(_QWORD *)(v3 + 392) + 184);
    if ( _bittest(&v5, (unsigned __int8)(2 * (v1 & 3) + 1)) )
      v2 = 1;
    if ( _bittest(&v5, (unsigned __int8)(2 * (v1 & 3))) )
      v2 |= 0xFF80u;
  }
  return v2;
}
