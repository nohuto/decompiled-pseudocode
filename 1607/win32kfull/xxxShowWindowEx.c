/*
 * XREFs of xxxShowWindowEx @ 0x1C009E4B4
 * Callers:
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     NtUserShowWindow @ 0x1C009E3E0 (NtUserShowWindow.c)
 *     xxxSetWindowPlacement @ 0x1C00B2E28 (xxxSetWindowPlacement.c)
 *     xxxSetParentWorker @ 0x1C00DD234 (xxxSetParentWorker.c)
 *     xxxShowScrollBar @ 0x1C0111EC0 (xxxShowScrollBar.c)
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0148844 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxbFullscreenSwitch @ 0x1C01E5A54 (xxxbFullscreenSwitch.c)
 *     xxxSetInternalWindowPos @ 0x1C01FB91C (xxxSetInternalWindowPos.c)
 *     xxxProcessShowWindowEvent @ 0x1C0224C58 (xxxProcessShowWindowEvent.c)
 *     xxxShowWindow @ 0x1C0224DE0 (xxxShowWindow.c)
 * Callees:
 *     xxxCheckFocus @ 0x1C00715AC (xxxCheckFocus.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C009C580 (xxxMakeWindowForegroundWithState.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C009E938 (IsWindowSubjectToShellWindowBehavior.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C009E988 (IsShellWndManagementBehaviorEnabled.c)
 *     _FChildVisible @ 0x1C009E9A8 (_FChildVisible.c)
 *     SetVisible @ 0x1C00A0D80 (SetVisible.c)
 *     xxxSetWindowPos @ 0x1C00A5850 (xxxSetWindowPos.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxActivateWindow @ 0x1C00AB2EC (xxxActivateWindow.c)
 *     ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C00E54AC (-TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z.c)
 *     xxxSendSizeMessage @ 0x1C010B400 (xxxSendSizeMessage.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C012C5A8 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     xxxCallIAMShowWindowPolicyHandler @ 0x1C01CECA8 (xxxCallIAMShowWindowPolicyHandler.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01CF1A4 (xxxNotifyShellTrackedWindowPosChanged.c)
 *     xxxEndSetWindowArrangement @ 0x1C02036C0 (xxxEndSetWindowArrangement.c)
 *     xxxMinimizeHungWindow @ 0x1C0227630 (xxxMinimizeHungWindow.c)
 */

__int64 __fastcall xxxShowWindowEx(struct tagWND *a1, unsigned __int8 a2, unsigned int a3)
{
  int v4; // r14d
  char v5; // cl
  int v6; // r12d
  unsigned __int8 v7; // di
  int v9; // r13d
  unsigned int v10; // ebp
  int v11; // r8d
  __int64 v12; // r15
  __int64 v13; // r9
  int v14; // r9d
  unsigned int v15; // edx
  int v17; // r14d
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // r8d
  char v21; // al
  unsigned __int64 v22; // rdx
  __int64 v23; // r9
  int v24; // edx
  int v25; // eax
  int v26; // esi
  int v27; // esi
  int v28; // [rsp+50h] [rbp-68h] BYREF
  __int128 v29; // [rsp+58h] [rbp-60h] BYREF
  struct tagRECT v30; // [rsp+68h] [rbp-50h] BYREF

  v4 = 3;
  v5 = *((_BYTE *)a1 + 55);
  v6 = 0;
  v7 = a2;
  v9 = 4;
  v10 = v5 & 0x10 | *((_BYTE *)a1 + 49) & 8;
  v11 = 0;
  v12 = gptiCurrent;
  *(_QWORD *)&v29 = gptiCurrent;
  v13 = *(_QWORD *)(gptiCurrent + 376LL);
  if ( (*(_DWORD *)(v13 + 760) & 1) != 0
    && (v5 & 0xC0) != 0x40
    && (*((_BYTE *)a1 + 54) & 0xC0) == 0xC0
    && !*((_QWORD *)a1 + 13) )
  {
    v11 = 1;
    if ( a2 == 1 || a2 == 5 )
      v7 = 10;
  }
  if ( v7 == 10 )
  {
    if ( (*(_DWORD *)(v13 + 760) & 1) != 0 )
    {
      v7 = *(_BYTE *)(v13 + 764);
      v11 = 1;
      if ( v7 != 10 )
        goto LABEL_60;
    }
    v7 = 1;
  }
  if ( v11 )
  {
LABEL_60:
    *(_DWORD *)(v13 + 760) &= 0xFFFFFFF8;
    TraceLoggingShowWindowDPIAwarenessEvent(a1);
  }
  if ( (*((_BYTE *)a1 + 47) & 7) != 0 && *((_QWORD *)a1 + 3) == grpdeskRitInput && ((v7 - 1) & 0xF5) == 0 && v7 != 11 )
  {
    v7 = 2;
    if ( (*((_BYTE *)a1 + 47) & 7) == 4 )
    {
      SetOrClrWF(0, a1, 0x707u, 1);
      SetOrClrWF(1, a1, 0x701u, 1);
    }
    if ( gpqForeground && *(struct tagWND **)(gpqForeground + 88LL) == a1 )
      xxxMakeWindowForegroundWithState(0LL, 0);
  }
  if ( (unsigned int)IsWindowSubjectToShellWindowBehavior(a1, 1LL) )
  {
    v6 = 1;
    if ( v7 > 7u )
    {
      if ( v7 > 9u )
        goto LABEL_6;
    }
    else if ( v7 == 7 || !v7 || v7 != 1 && (v7 <= 2u || v7 > 5u) )
    {
      goto LABEL_6;
    }
    v6 = xxxCallIAMShowWindowPolicyHandler(a1, v7, &v28, &v30);
    if ( v6 && v28 )
    {
      switch ( v28 )
      {
        case 1:
          v7 = -1;
          break;
        case 2:
          v7 = (unsigned __int8)(v7 - 7) <= 1u ? 17 : 3;
          break;
        case 3:
          v25 = xxxEndSetWindowArrangement(a1, &v30);
          v12 = v29;
          if ( v25 )
            v7 = -1;
          else
            v6 = 0;
          goto LABEL_6;
        default:
          v6 = 0;
          break;
      }
    }
    v12 = v29;
  }
LABEL_6:
  if ( v7 == 0xFF )
    return v10;
  v14 = 128;
  if ( v6 && (unsigned int)IsShellWndManagementBehaviorEnabled(*((_QWORD *)a1 + 3), 16LL) )
  {
    a3 |= v14;
    v4 = 2097155;
  }
  v15 = v7;
  if ( v7 == 8 )
  {
    v17 = v4 | 0x50;
    goto LABEL_20;
  }
  if ( v7 > 8u )
  {
    switch ( v7 )
    {
      case 9u:
        goto LABEL_36;
      case 0xBu:
        xxxMinimizeHungWindow(a1);
        return v10;
      case 0x11u:
        v27 = a3 | 0xC0;
        break;
      case 0x12u:
        v26 = a3 | 0xC0;
        goto LABEL_110;
      case 0x13u:
        v27 = a3 | 0x1C0;
        break;
      case 0x14u:
        v26 = a3 | 0x1C0;
LABEL_110:
        v20 = v26;
        v15 = 9;
        goto LABEL_52;
      default:
        goto LABEL_108;
    }
    v20 = v27;
    v15 = 3;
    goto LABEL_52;
  }
  if ( !v7 )
  {
    if ( !v10 )
      return 0LL;
    v17 = v14 | v4;
    if ( a1 != *(struct tagWND **)(*(_QWORD *)(v12 + 384) + 88LL) )
LABEL_33:
      v17 |= 0x14u;
LABEL_20:
    if ( (v7 != 0) != v10 )
    {
      xxxSendMessage(a1, 0x18u, v7 != 0, 0LL);
      if ( (*((_BYTE *)a1 + 45) & 1) == 0 )
        xxxSendMessage(a1, 9u, v7 != 0, 0LL);
    }
    if ( (*((_BYTE *)a1 + 55) & 0xC0) != 0x40 )
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 19) + 85LL) & 8) == 0 || ((v7 - 1) & 0xFB) != 0 )
        goto LABEL_25;
      xxxActivateWindow(a1);
    }
    v17 |= 0x14u;
LABEL_25:
    if ( (unsigned int)FChildVisible(a1) )
    {
      xxxSetWindowPos((_DWORD)a1, 0, 0, 0, 0, 0, v17);
      if ( (v17 & 0x200000) != 0 )
        xxxNotifyShellTrackedWindowPosChanged(a1, 1LL);
    }
    else
    {
      SetVisible(a1, v7 != 0);
    }
    if ( (*((_BYTE *)a1 + 40) & 0x10) != 0 )
    {
      SetOrClrWF(0, a1, 0x10u, 1);
      v21 = *((_BYTE *)a1 + 55);
      if ( (v21 & 0x20) != 0 )
      {
        v22 = 1LL;
      }
      else if ( (v21 & 1) != 0 )
      {
        v22 = 2LL;
      }
      else
      {
        v22 = 0LL;
      }
      xxxSendSizeMessage(a1, v22);
      v23 = *((_QWORD *)a1 + 11);
      v29 = *(_OWORD *)(v23 + 128);
      TransformRectBetweenCoordinateSpaces(&v29, &v29, a1, v23);
      if ( *((_QWORD *)a1 + 11) == GetDesktopWindow((__int64)a1) )
        v24 = *((unsigned __int16 *)a1 + 64) | (*((unsigned __int16 *)a1 + 66) << 16);
      else
        v24 = (unsigned __int16)(*((_WORD *)a1 + 64) - v29) | ((unsigned __int16)(*((_WORD *)a1 + 66) - WORD2(v29)) << 16);
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(a1, 3LL, 0LL, v24, 0, 0, 0LL, 1, 0);
    }
    if ( !v7 )
    {
      v19 = *(_QWORD *)(v12 + 384);
      if ( a1 == *(struct tagWND **)(v19 + 88) && v19 == gpqForeground )
        xxxActivateWindow(a1);
      else
        xxxCheckFocus((__int64)a1, v18);
    }
    return v10;
  }
  if ( v7 == 1 )
    goto LABEL_36;
  if ( v7 <= 1u )
    goto LABEL_108;
  if ( v7 <= 3u )
  {
LABEL_51:
    v20 = a3;
    goto LABEL_52;
  }
  if ( v7 == 4 )
  {
LABEL_36:
    if ( (*((_BYTE *)a1 + 55) & 0x21) != 0 )
    {
      if ( (*((_BYTE *)a1 + 289) & 3) == 0 )
        v9 = 0;
    }
    else if ( (*((_BYTE *)a1 + 289) & 3) == 0 )
    {
      if ( !v10 )
      {
        v17 = v4 | 0x40;
        if ( v7 != 4 )
          goto LABEL_20;
        goto LABEL_33;
      }
      return v10;
    }
    v20 = a3 | v9;
LABEL_52:
    xxxShowWindowViaMinMax(a1, v15, v20);
    return v10;
  }
  if ( v7 != 5 )
  {
    if ( v7 <= 7u )
      goto LABEL_51;
LABEL_108:
    UserSetLastError(1449LL);
    return v10;
  }
  if ( !v10 )
  {
    v17 = v4 | 0x40;
    goto LABEL_20;
  }
  return v10;
}
