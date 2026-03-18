/*
 * XREFs of zzzClipCursorEx @ 0x1C0097C50
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 *     zzzResetSharedDesktops @ 0x1C00D8AA0 (zzzResetSharedDesktops.c)
 *     NtUserInternalClipCursor @ 0x1C011E790 (NtUserInternalClipCursor.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C012B8C0 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FF724 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C0202188 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C0203F8C (xxxInitializeMoveSizeData.c)
 *     NtUserClipCursor @ 0x1C0211120 (NtUserClipCursor.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0035534 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     CheckWinstaAttributeAccess @ 0x1C0098290 (CheckWinstaAttributeAccess.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     IsForegroundShellFrameQueueAccessible @ 0x1C00A9964 (IsForegroundShellFrameQueueAccessible.c)
 *     zzzInternalSetCursorPos @ 0x1C00DB4DC (zzzInternalSetCursorPos.c)
 */

__int64 __fastcall zzzClipCursorEx(LONG *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // r8
  struct tagRECT v7; // xmm0
  __int64 v8; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  LONG v16; // r8d
  LONG v17; // edx
  LONG v18; // r9d
  LONG v19; // eax

  if ( PsGetCurrentProcess(a1) != gpepCSRSS && !a2 && !(unsigned int)CheckWinstaAttributeAccess(0x10u) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5, v4);
    if ( !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
      return 0LL;
    v6 = (_QWORD *)gpqForeground;
    if ( !gpqForeground )
      goto LABEL_5;
    v11 = *(_QWORD *)(gptiCurrent + 376LL);
    v12 = *(_QWORD *)(gpqForeground + 380LL);
    v13 = *(_QWORD *)(v11 + 824);
    if ( !gbEnforceUIPI )
      goto LABEL_5;
    if ( (unsigned int)v13 > (unsigned int)v12 )
      goto LABEL_5;
    if ( (_DWORD)v13 == (_DWORD)v12 )
    {
      v14 = HIDWORD(v13);
      v15 = HIDWORD(v12);
      if ( (_DWORD)v14 == (_DWORD)v15 || (_DWORD)v14 == -1 || (_DWORD)v15 == -1 )
        goto LABEL_5;
    }
    if ( *(int *)(v11 + 12) < 0 )
      goto LABEL_5;
    if ( !(unsigned int)IsForegroundShellFrameQueueAccessible(gptiCurrent) )
      return 0LL;
  }
  v6 = (_QWORD *)gpqForeground;
LABEL_5:
  if ( *(_QWORD *)(gptiCurrent + 384LL) != *v6 )
  {
    if ( !a1 )
    {
LABEL_7:
      v7 = *(struct tagRECT *)(gpDispInfo + 104LL);
      goto LABEL_8;
    }
    if ( IsRectEmptyInl(&grcCursorClip) )
    {
      UserSetLastError(5LL);
      return 0LL;
    }
  }
  if ( !a1 )
    goto LABEL_7;
  v16 = *a1;
  if ( *(_DWORD *)(gpDispInfo + 104LL) > *a1 )
    v16 = *(_DWORD *)(gpDispInfo + 104LL);
  grcCursorClip.left = v16;
  v17 = a1[2];
  if ( *(_DWORD *)(gpDispInfo + 112LL) < v17 )
    v17 = *(_DWORD *)(gpDispInfo + 112LL);
  grcCursorClip.right = v17;
  v18 = a1[1];
  if ( *(_DWORD *)(gpDispInfo + 108LL) > v18 )
    v18 = *(_DWORD *)(gpDispInfo + 108LL);
  grcCursorClip.top = v18;
  v19 = a1[3];
  if ( *(_DWORD *)(gpDispInfo + 116LL) < v19 )
    v19 = *(_DWORD *)(gpDispInfo + 116LL);
  grcCursorClip.bottom = v19;
  if ( v16 <= v17 && v18 <= v19 )
    goto LABEL_9;
  v7 = *(struct tagRECT *)(gpDispInfo + 104LL);
LABEL_8:
  grcCursorClip = v7;
LABEL_9:
  if ( !PtInRect(&grcCursorClip, *(_QWORD *)(gpsi + 5368LL)) )
    zzzInternalSetCursorPos(*(unsigned int *)(v8 + 5368), *(unsigned int *)(v8 + 5372), 2LL);
  return 1LL;
}
