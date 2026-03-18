/*
 * XREFs of xxxShowWindowEx @ 0x1C00794D0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     NtUserShowWindow @ 0x1C0079400 (NtUserShowWindow.c)
 *     xxxSetParentWorker @ 0x1C0088E64 (xxxSetParentWorker.c)
 *     xxxShowScrollBar @ 0x1C00F23F0 (xxxShowScrollBar.c)
 *     xxxSetWindowPlacement @ 0x1C00F7AE0 (xxxSetWindowPlacement.c)
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0142CB0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxbFullscreenSwitch @ 0x1C01EFD14 (xxxbFullscreenSwitch.c)
 *     xxxSetInternalWindowPos @ 0x1C02045CC (xxxSetInternalWindowPos.c)
 *     xxxShowWindow @ 0x1C022422C (xxxShowWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     xxxCheckFocus @ 0x1C0069950 (xxxCheckFocus.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C006E7C4 (IsWindowSubjectToShellWindowBehavior.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C006F5AC (IsShellWndManagementBehaviorEnabled.c)
 *     xxxSetWindowPos @ 0x1C0075840 (xxxSetWindowPos.c)
 *     _FChildVisible @ 0x1C0079908 (_FChildVisible.c)
 *     SetVisible @ 0x1C007A120 (SetVisible.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     xxxActivateWindow @ 0x1C008CA64 (xxxActivateWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C008F264 (xxxMakeWindowForegroundWithState.c)
 *     ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C00945E4 (-TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z.c)
 *     xxxSendSizeMessage @ 0x1C00EC168 (xxxSendSizeMessage.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C010A2C4 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     xxxCallIAMShowWindowPolicyHandler @ 0x1C01D7C30 (xxxCallIAMShowWindowPolicyHandler.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01D812C (xxxNotifyShellTrackedWindowPosChanged.c)
 *     xxxEndSetWindowArrangement @ 0x1C020C568 (xxxEndSetWindowArrangement.c)
 *     xxxMinimizeHungWindow @ 0x1C02279D4 (xxxMinimizeHungWindow.c)
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
  __int64 v14; // r8
  int v15; // r9d
  unsigned int v16; // edx
  int v17; // r14d
  __int64 v18; // rdx
  __int64 v20; // rcx
  unsigned int v21; // r8d
  char v22; // al
  __int64 v23; // rdx
  __int64 v24; // r9
  int v25; // edx
  int v26; // eax
  int v27; // esi
  int v28; // esi
  int v29; // [rsp+50h] [rbp-68h] BYREF
  __int128 v30; // [rsp+58h] [rbp-60h] BYREF
  struct tagRECT v31; // [rsp+68h] [rbp-50h] BYREF

  v4 = 3;
  v5 = *((_BYTE *)a1 + 55);
  v6 = 0;
  v7 = a2;
  v9 = 4;
  v10 = v5 & 0x10 | *((_BYTE *)a1 + 49) & 8;
  v11 = 0;
  v12 = gptiCurrent;
  *(_QWORD *)&v30 = gptiCurrent;
  v13 = *(_QWORD *)(gptiCurrent + 376LL);
  if ( (*(_DWORD *)(v13 + 768) & 1) != 0
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
    if ( (*(_DWORD *)(v13 + 768) & 1) != 0 )
    {
      v7 = *(_BYTE *)(v13 + 772);
      v11 = 1;
      if ( v7 != 10 )
        goto LABEL_61;
    }
    v7 = 1;
  }
  if ( v11 )
  {
LABEL_61:
    *(_DWORD *)(v13 + 768) &= 0xFFFFFFF8;
    TraceLoggingShowWindowDPIAwarenessEvent(a1);
  }
  v14 = 7LL;
  if ( (*((_BYTE *)a1 + 47) & 7) != 0 && *((_QWORD *)a1 + 3) == grpdeskRitInput && ((v7 - 1) & 0xF5) == 0 && v7 != 11 )
  {
    v7 = 2;
    if ( (*((_BYTE *)a1 + 47) & 7) == 4 )
    {
      SetOrClrWF(0LL, a1, 1799LL, 1LL);
      SetOrClrWF(1LL, a1, 1793LL, 1LL);
    }
    if ( gpqForeground && *(struct tagWND **)(gpqForeground + 80LL) == a1 )
      xxxMakeWindowForegroundWithState(0LL, 0LL);
  }
  if ( (unsigned int)IsWindowSubjectToShellWindowBehavior((__int64)a1, 1LL, v14) )
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
    v6 = xxxCallIAMShowWindowPolicyHandler(a1, v7, &v29, &v31);
    if ( v6 && v29 )
    {
      switch ( v29 )
      {
        case 1:
          v7 = -1;
          break;
        case 2:
          v7 = (unsigned __int8)(v7 - 7) <= 1u ? 17 : 3;
          break;
        case 3:
          v26 = xxxEndSetWindowArrangement(a1, &v31);
          v12 = v30;
          if ( v26 )
            v7 = -1;
          else
            v6 = 0;
          goto LABEL_6;
        default:
          v6 = 0;
          break;
      }
    }
    v12 = v30;
  }
LABEL_6:
  if ( v7 == 0xFF )
    return v10;
  v15 = 128;
  if ( v6 && (unsigned int)IsShellWndManagementBehaviorEnabled(*((_QWORD *)a1 + 3), 16) )
  {
    a3 |= v15;
    v4 = 2097155;
  }
  v16 = v7;
  if ( v7 == 8 )
  {
    v17 = v4 | 0x50;
    goto LABEL_18;
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
        v28 = a3 | 0xC0;
        break;
      case 0x12u:
        v27 = a3 | 0xC0;
        goto LABEL_109;
      case 0x13u:
        v28 = a3 | 0x1C0;
        break;
      case 0x14u:
        v27 = a3 | 0x1C0;
LABEL_109:
        v21 = v27;
        v16 = 9;
        goto LABEL_52;
      default:
        goto LABEL_107;
    }
    v21 = v28;
    v16 = 3;
    goto LABEL_52;
  }
  if ( v7 )
  {
    if ( v7 != 1 )
    {
      if ( v7 <= 1u )
        goto LABEL_107;
      if ( v7 <= 3u )
      {
LABEL_51:
        v21 = a3;
LABEL_52:
        xxxShowWindowViaMinMax(a1, v16, v21);
        return v10;
      }
      if ( v7 != 4 )
      {
        if ( v7 == 5 )
        {
          if ( !v10 )
          {
            v17 = v4 | 0x40;
LABEL_18:
            if ( (v7 != 0) != v10 )
            {
              xxxSendMessage(a1, 0x18u, v7 != 0, 0LL);
              if ( (*((_BYTE *)a1 + 45) & 1) == 0 )
                xxxSendMessage(a1, 9u, v7 != 0, 0LL);
            }
            if ( (*((_BYTE *)a1 + 55) & 0xC0) != 0x40 )
            {
              if ( (*(_BYTE *)(*((_QWORD *)a1 + 19) + 85LL) & 8) == 0 || ((v7 - 1) & 0xFB) != 0 )
                goto LABEL_23;
              xxxActivateWindow(a1);
            }
            v17 |= 0x14u;
LABEL_23:
            if ( (unsigned int)FChildVisible(a1) )
            {
              xxxSetWindowPos(a1, 0, 0, 0, 0, 0, v17);
              if ( (v17 & 0x200000) != 0 )
                xxxNotifyShellTrackedWindowPosChanged(a1, 1LL);
            }
            else
            {
              SetVisible(a1, v7 != 0);
            }
            if ( (*((_BYTE *)a1 + 40) & 0x10) != 0 )
            {
              SetOrClrWF(0LL, a1, 16LL, 1LL);
              v22 = *((_BYTE *)a1 + 55);
              if ( (v22 & 0x20) != 0 )
              {
                v23 = 1LL;
              }
              else if ( (v22 & 1) != 0 )
              {
                v23 = 2LL;
              }
              else
              {
                v23 = 0LL;
              }
              xxxSendSizeMessage(a1, v23);
              v24 = *((_QWORD *)a1 + 11);
              v30 = *(_OWORD *)(v24 + 128);
              TransformRectBetweenCoordinateSpaces(&v30, &v30, a1, v24);
              if ( *((_QWORD *)a1 + 11) == GetDesktopWindow((__int64)a1) )
                v25 = *((unsigned __int16 *)a1 + 64) | (*((unsigned __int16 *)a1 + 66) << 16);
              else
                v25 = (unsigned __int16)(*((_WORD *)a1 + 64) - v30) | ((unsigned __int16)(*((_WORD *)a1 + 66)
                                                                                        - WORD2(v30)) << 16);
              _InterlockedAdd(&glSendMessage, 1u);
              xxxSendTransformableMessageTimeout(a1, 3LL, 0LL, v25, 0, 0, 0LL, 1, 0);
            }
            if ( !v7 )
            {
              v20 = *(_QWORD *)(v12 + 384);
              if ( a1 == *(struct tagWND **)(v20 + 80) && v20 == gpqForeground )
                xxxActivateWindow(a1);
              else
                xxxCheckFocus((__int64)a1, v18);
            }
          }
          return v10;
        }
        if ( v7 <= 7u )
          goto LABEL_51;
LABEL_107:
        UserSetLastError(1449);
        return v10;
      }
    }
LABEL_36:
    if ( (*((_BYTE *)a1 + 55) & 0x21) != 0 )
    {
      if ( (*((_BYTE *)a1 + 289) & 3) == 0 )
        v9 = 0;
    }
    else if ( (*((_BYTE *)a1 + 289) & 3) == 0 )
    {
      if ( v10 )
        return v10;
      v17 = v4 | 0x40;
      if ( v7 != 4 )
        goto LABEL_18;
LABEL_33:
      v17 |= 0x14u;
      goto LABEL_18;
    }
    v21 = a3 | v9;
    goto LABEL_52;
  }
  if ( v10 )
  {
    v17 = v15 | v4;
    if ( a1 == *(struct tagWND **)(*(_QWORD *)(v12 + 384) + 80LL) )
      goto LABEL_18;
    goto LABEL_33;
  }
  return 0LL;
}
