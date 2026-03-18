/*
 * XREFs of zzzClipCursorEx @ 0x1C003D634
 * Callers:
 *     zzzResetSharedDesktops @ 0x1C003DE30 (zzzResetSharedDesktops.c)
 *     NtUserInternalClipCursor @ 0x1C00442D0 (NtUserInternalClipCursor.c)
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     xxxProcessEventMessage @ 0x1C0071E4C (xxxProcessEventMessage.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C00FABEC (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     NtUserClipCursor @ 0x1C01201A0 (NtUserClipCursor.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C0208098 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020AB48 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C020C6A4 (xxxInitializeMoveSizeData.c)
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C003DD20 (CheckWinstaAttributeAccess.c)
 *     zzzInternalSetCursorPos @ 0x1C0040BC0 (zzzInternalSetCursorPos.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     PtInRect @ 0x1C008D7D8 (PtInRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00918C4 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 */

__int64 __fastcall zzzClipCursorEx(LONG *a1, int a2)
{
  struct tagRECT v4; // xmm0
  __int64 v5; // r9
  LONG v7; // r8d
  LONG v8; // edx
  LONG v9; // r9d
  LONG v10; // eax

  if ( PsGetCurrentProcess() != gpepCSRSS && !a2 && !(unsigned int)CheckWinstaAttributeAccess(0x10u) )
    return 0LL;
  if ( *(_QWORD *)(gptiCurrent + 392LL) != gpqForeground )
  {
    if ( !a1 )
    {
LABEL_6:
      v4 = *(struct tagRECT *)(gpDispInfo + 104LL);
      goto LABEL_7;
    }
    if ( (unsigned int)IsRectEmptyInl(&grcCursorClip) )
    {
      UserSetLastError(5LL);
      return 0LL;
    }
  }
  if ( !a1 )
    goto LABEL_6;
  v7 = *a1;
  if ( *(_DWORD *)(gpDispInfo + 104LL) > *a1 )
    v7 = *(_DWORD *)(gpDispInfo + 104LL);
  grcCursorClip.left = v7;
  v8 = a1[2];
  if ( *(_DWORD *)(gpDispInfo + 112LL) < v8 )
    v8 = *(_DWORD *)(gpDispInfo + 112LL);
  grcCursorClip.right = v8;
  v9 = a1[1];
  if ( *(_DWORD *)(gpDispInfo + 108LL) > v9 )
    v9 = *(_DWORD *)(gpDispInfo + 108LL);
  grcCursorClip.top = v9;
  v10 = a1[3];
  if ( *(_DWORD *)(gpDispInfo + 116LL) < v10 )
    v10 = *(_DWORD *)(gpDispInfo + 116LL);
  grcCursorClip.bottom = v10;
  if ( v7 <= v8 && v9 <= v10 )
    goto LABEL_8;
  v4 = *(struct tagRECT *)(gpDispInfo + 104LL);
LABEL_7:
  grcCursorClip = v4;
LABEL_8:
  if ( !(unsigned int)PtInRect(&grcCursorClip, *(_QWORD *)(gpsi + 3976LL)) )
    zzzInternalSetCursorPos(*(unsigned int *)(v5 + 3976), *(unsigned int *)(v5 + 3980), 2LL);
  return 1LL;
}
