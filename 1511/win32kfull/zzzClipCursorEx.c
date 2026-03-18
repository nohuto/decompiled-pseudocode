/*
 * XREFs of zzzClipCursorEx @ 0x1C008AA64
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 *     NtUserInternalClipCursor @ 0x1C008CD10 (NtUserInternalClipCursor.c)
 *     xxxSetForegroundWindow2 @ 0x1C008D958 (xxxSetForegroundWindow2.c)
 *     zzzResetSharedDesktops @ 0x1C009A600 (zzzResetSharedDesktops.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C0104D00 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     NtUserClipCursor @ 0x1C0149870 (NtUserClipCursor.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C02083DC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020B08C (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C020CE20 (xxxInitializeMoveSizeData.c)
 * Callees:
 *     IsForegroundShellFrameQueueAccessible @ 0x1C0003224 (IsForegroundShellFrameQueueAccessible.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0041E08 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PtInRect @ 0x1C0066AB8 (PtInRect.c)
 *     CheckWinstaAttributeAccess @ 0x1C008AD60 (CheckWinstaAttributeAccess.c)
 *     zzzInternalSetCursorPos @ 0x1C009A8F8 (zzzInternalSetCursorPos.c)
 */

__int64 __fastcall zzzClipCursorEx(LONG *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v6; // rcx
  _QWORD *v7; // r8
  struct tagRECT v8; // xmm0
  __int64 v9; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  LONG v17; // r8d
  LONG v18; // edx
  LONG v19; // r9d
  LONG v20; // eax

  v4 = a2;
  if ( PsGetCurrentProcess(a1, a2, a3, a4) != gpepCSRSS && !v4 && !(unsigned int)CheckWinstaAttributeAccess(0x10u) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    if ( !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
      return 0LL;
    v7 = (_QWORD *)gpqForeground;
    if ( !gpqForeground )
      goto LABEL_5;
    v12 = *(_QWORD *)(gptiCurrent + 376LL);
    v13 = *(_QWORD *)(gpqForeground + 372LL);
    v14 = *(_QWORD *)(v12 + 832);
    if ( !gbEnforceUIPI )
      goto LABEL_5;
    if ( (unsigned int)v14 > (unsigned int)v13 )
      goto LABEL_5;
    if ( (_DWORD)v14 == (_DWORD)v13 )
    {
      v15 = HIDWORD(v14);
      v16 = HIDWORD(v13);
      if ( (_DWORD)v15 == (_DWORD)v16 || (_DWORD)v15 == -1 || (_DWORD)v16 == -1 )
        goto LABEL_5;
    }
    if ( *(int *)(v12 + 12) < 0 )
      goto LABEL_5;
    if ( !IsForegroundShellFrameQueueAccessible(gptiCurrent) )
      return 0LL;
  }
  v7 = (_QWORD *)gpqForeground;
LABEL_5:
  if ( *(_QWORD *)(gptiCurrent + 384LL) != *v7 )
  {
    if ( !a1 )
    {
LABEL_7:
      v8 = *(struct tagRECT *)(gpDispInfo + 104LL);
      goto LABEL_8;
    }
    if ( IsRectEmptyInl(&grcCursorClip) )
    {
      UserSetLastError(5);
      return 0LL;
    }
  }
  if ( !a1 )
    goto LABEL_7;
  v17 = *a1;
  if ( *(_DWORD *)(gpDispInfo + 104LL) > *a1 )
    v17 = *(_DWORD *)(gpDispInfo + 104LL);
  grcCursorClip.left = v17;
  v18 = a1[2];
  if ( *(_DWORD *)(gpDispInfo + 112LL) < v18 )
    v18 = *(_DWORD *)(gpDispInfo + 112LL);
  grcCursorClip.right = v18;
  v19 = a1[1];
  if ( *(_DWORD *)(gpDispInfo + 108LL) > v19 )
    v19 = *(_DWORD *)(gpDispInfo + 108LL);
  grcCursorClip.top = v19;
  v20 = a1[3];
  if ( *(_DWORD *)(gpDispInfo + 116LL) < v20 )
    v20 = *(_DWORD *)(gpDispInfo + 116LL);
  grcCursorClip.bottom = v20;
  if ( v17 <= v18 && v19 <= v20 )
    goto LABEL_9;
  v8 = *(struct tagRECT *)(gpDispInfo + 104LL);
LABEL_8:
  grcCursorClip = v8;
LABEL_9:
  if ( !PtInRect(&grcCursorClip, *(_QWORD *)(gpsi + 3976LL)) )
    zzzInternalSetCursorPos(*(unsigned int *)(v9 + 3976), *(unsigned int *)(v9 + 3980), 2LL);
  return 1LL;
}
