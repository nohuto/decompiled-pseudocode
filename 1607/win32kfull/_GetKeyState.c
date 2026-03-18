/*
 * XREFs of _GetKeyState @ 0x1C0095870
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     xxxTranslateAccelerator @ 0x1C0095174 (xxxTranslateAccelerator.c)
 *     NtUserGetKeyState @ 0x1C0095670 (NtUserGetKeyState.c)
 *     xxxSysCommand @ 0x1C012ABE4 (xxxSysCommand.c)
 *     xxxMNStartMenu @ 0x1C013B778 (xxxMNStartMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C013BE70 (xxxTrackPopupMenuEx.c)
 *     xxxMNLoop @ 0x1C0141414 (xxxMNLoop.c)
 *     xxxIsDragging @ 0x1C0150E5C (xxxIsDragging.c)
 *     xxxDWP_ProcessVirtKey @ 0x1C01523EC (xxxDWP_ProcessVirtKey.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F6CEC (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F7C6C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F8078 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F82AC (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxOldNextWindow @ 0x1C01F8E9C (xxxOldNextWindow.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FF724 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     MNCheckButtonDownState @ 0x1C020F048 (MNCheckButtonDownState.c)
 *     xxxSBWndProc @ 0x1C022CE10 (xxxSBWndProc.c)
 *     xxxTrackThumb @ 0x1C022E320 (xxxTrackThumb.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall GetKeyState(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // di
  unsigned __int16 v5; // bx
  __int64 v6; // rsi
  __int64 *ThreadWin32Thread; // rax
  int v8; // r8d

  v4 = a1;
  if ( a1 >= 0x100 )
  {
    UserSetLastError(87LL);
    return 0;
  }
  else
  {
    v5 = 0;
    v6 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
    v8 = *(unsigned __int8 *)(((unsigned __int64)v4 >> 2) + *(_QWORD *)(v6 + 384) + 192);
    if ( _bittest(&v8, (unsigned __int8)(2 * (v4 & 3) + 1)) )
      v5 = 1;
    if ( _bittest(&v8, (unsigned __int8)(2 * (v4 & 3))) )
      v5 |= 0xFF80u;
  }
  return v5;
}
