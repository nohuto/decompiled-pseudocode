/*
 * XREFs of xxxShowWindow @ 0x1C0081A78
 * Callers:
 *     xxxSetParentWorker @ 0x1C0042BCC (xxxSetParentWorker.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     xxxProcessEventMessage @ 0x1C0071E4C (xxxProcessEventMessage.c)
 *     NtUserShowWindow @ 0x1C00819B0 (NtUserShowWindow.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 *     xxxShowScrollBar @ 0x1C00EB8B0 (xxxShowScrollBar.c)
 *     xxxSetWindowPlacement @ 0x1C00F297C (xxxSetWindowPlacement.c)
 *     xxxSysCommand @ 0x1C00FD5E4 (xxxSysCommand.c)
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0117CEC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxbFullscreenSwitch @ 0x1C01EFDB8 (xxxbFullscreenSwitch.c)
 *     xxxSetInternalWindowPos @ 0x1C020425C (xxxSetInternalWindowPos.c)
 * Callees:
 *     xxxActivateWindow @ 0x1C0044954 (xxxActivateWindow.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C007BF90 (-TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C007FBFC (xxxMakeWindowForegroundWithState.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C0081EAC (IsWindowSubjectToShellWindowBehavior.c)
 *     _FChildVisible @ 0x1C0081ECC (_FChildVisible.c)
 *     SetVisible @ 0x1C0081FA0 (SetVisible.c)
 *     xxxSetWindowPos @ 0x1C00848B8 (xxxSetWindowPos.c)
 *     xxxCheckFocus @ 0x1C00880B8 (xxxCheckFocus.c)
 *     xxxSendSizeMessage @ 0x1C00E57B8 (xxxSendSizeMessage.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C00FE300 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     xxxCallIAMShowWindowPolicyHandler @ 0x1C01D614C (xxxCallIAMShowWindowPolicyHandler.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01D65A8 (xxxNotifyShellTrackedWindowPosChanged.c)
 *     xxxEndSetWindowArrangement @ 0x1C020BEC4 (xxxEndSetWindowArrangement.c)
 *     xxxMinimizeHungWindow @ 0x1C0227678 (xxxMinimizeHungWindow.c)
 */

__int64 __fastcall xxxShowWindow(struct tagWND *a1, int a2)
{
  char v3; // cl
  int v4; // ebp
  int v5; // edi
  int v6; // r12d
  int v7; // r14d
  unsigned int v8; // esi
  int v9; // r15d
  int v10; // edx
  __int64 v11; // r13
  __int64 v12; // r9
  int v13; // ebp
  int v14; // eax
  unsigned __int64 v15; // r14
  __int64 v17; // rcx
  char v18; // al
  __int64 v19; // rdx
  __int64 v20; // r9
  int v21; // edx
  unsigned int v22; // r8d
  unsigned int v23; // edx
  int v24; // eax
  int v25; // eax
  int v26; // r14d
  int v27; // [rsp+50h] [rbp-68h] BYREF
  __int128 v28; // [rsp+58h] [rbp-60h] BYREF
  struct tagRECT v29; // [rsp+68h] [rbp-50h] BYREF

  v3 = *((_BYTE *)a1 + 55);
  v4 = 3;
  v5 = (unsigned __int16)a2;
  v6 = 0;
  v7 = a2 & 0x10000;
  v8 = v3 & 0x10 | *((_BYTE *)a1 + 49) & 8;
  v9 = 4;
  v10 = 0;
  v11 = gptiCurrent;
  *(_QWORD *)&v28 = gptiCurrent;
  v12 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( (*(_DWORD *)(v12 + 768) & 1) != 0
    && (v3 & 0xC0) != 0x40
    && (*((_BYTE *)a1 + 54) & 0xC0) == 0xC0
    && !*((_QWORD *)a1 + 13) )
  {
    v10 = 1;
    if ( v5 == 1 || v5 == 5 )
      v5 = 10;
  }
  if ( v5 == 10 )
  {
    if ( (*(_DWORD *)(v12 + 768) & 1) != 0 )
    {
      v5 = *(unsigned __int16 *)(v12 + 772);
      v10 = 1;
      if ( v5 != 10 )
        goto LABEL_63;
    }
    v5 = 1;
  }
  if ( v10 )
  {
LABEL_63:
    *(_DWORD *)(v12 + 768) &= 0xFFFFFFF8;
    TraceLoggingShowWindowDPIAwarenessEvent(a1);
  }
  if ( (v5 & 0xFF00) != 0 )
  {
    v24 = v5 & 0xFF80;
    v5 = 5;
    if ( v24 == 65408 )
      v5 = 7;
  }
  if ( (*((_BYTE *)a1 + 47) & 7) != 0
    && *((_QWORD *)a1 + 3) == grpdeskRitInput
    && ((v5 - 1) & 0xFFFFFFF5) == 0
    && v5 != 11 )
  {
    v5 = 2;
    if ( (*((_BYTE *)a1 + 47) & 7) == 4 )
    {
      SetOrClrWF(0, a1, 0x707u, 1);
      SetOrClrWF(1, a1, 0x701u, 1);
    }
    if ( gpqForeground && *(struct tagWND **)(gpqForeground + 80LL) == a1 )
      xxxMakeWindowForegroundWithState(0LL, 0);
  }
  if ( (unsigned int)IsWindowSubjectToShellWindowBehavior(a1, 1LL) )
  {
    v6 = 1;
    if ( v5 > 7 )
    {
      if ( v5 > 9 )
        goto LABEL_7;
    }
    else if ( v5 == 7 || !v5 || v5 != 1 && (v5 <= 2 || v5 > 5) )
    {
      goto LABEL_7;
    }
    v6 = xxxCallIAMShowWindowPolicyHandler(a1, (unsigned int)v5, &v27, &v29);
    if ( v6 && v27 )
    {
      switch ( v27 )
      {
        case 1:
          v5 = -1;
          break;
        case 2:
          v5 = (unsigned int)(v5 - 7) <= 1 ? 15 : 3;
          break;
        case 3:
          v25 = xxxEndSetWindowArrangement(a1, &v29);
          v11 = v28;
          if ( v25 )
            v5 = -1;
          else
            v6 = 0;
          goto LABEL_7;
        default:
          v6 = 0;
          break;
      }
    }
    v11 = v28;
  }
LABEL_7:
  if ( v5 == -1 )
    return v8;
  if ( v6 && (*(_DWORD *)(*((_QWORD *)a1 + 3) + 320LL) & 0x10) != 0 )
  {
    v7 |= 0x80u;
    v4 = 2097155;
  }
  if ( v5 == 8 )
  {
    v13 = v4 | 0x50;
    goto LABEL_18;
  }
  if ( v5 > 8 )
  {
    if ( v5 != 9 )
    {
      switch ( v5 )
      {
        case 11:
          xxxMinimizeHungWindow(a1);
          return v8;
        case 15:
          v26 = v7 | 0xC0;
          break;
        case 16:
          v26 = v7 | 0x1C0;
          break;
        case 17:
          v23 = 9;
          v22 = v7 | 0x1C0;
          goto LABEL_61;
        default:
          UserSetLastError(1449);
          return v8;
      }
      v22 = v26;
      v23 = 3;
LABEL_61:
      xxxShowWindowViaMinMax(a1, v23, v22);
      return v8;
    }
    goto LABEL_38;
  }
  if ( v5 )
  {
    if ( v5 != 1 )
    {
      if ( v5 <= 3 )
      {
LABEL_59:
        v22 = v7;
LABEL_60:
        v23 = v5;
        goto LABEL_61;
      }
      if ( v5 != 4 )
      {
        if ( v5 == 5 )
        {
          if ( !v8 )
          {
            v13 = v4 | 0x40;
LABEL_18:
            v14 = 1;
            goto LABEL_19;
          }
          return v8;
        }
        goto LABEL_59;
      }
    }
LABEL_38:
    if ( (*((_BYTE *)a1 + 55) & 0x21) != 0 )
    {
      if ( (*((_BYTE *)a1 + 289) & 3) == 0 )
        v9 = 0;
    }
    else if ( (*((_BYTE *)a1 + 289) & 3) == 0 )
    {
      if ( !v8 )
      {
        v13 = v4 | 0x40;
        if ( v5 == 4 )
          v13 |= 0x14u;
        goto LABEL_18;
      }
      return v8;
    }
    v22 = v7 | v9;
    goto LABEL_60;
  }
  if ( v8 )
  {
    v13 = v4 | 0x80;
    if ( a1 != *(struct tagWND **)(*(_QWORD *)(v11 + 392) + 80LL) )
      v13 |= 0x14u;
    v14 = 0;
LABEL_19:
    if ( v14 != v8 )
    {
      v15 = v14;
      xxxSendMessage(a1, 0x18u, v14, 0LL);
      if ( (*((_BYTE *)a1 + 45) & 1) == 0 )
        xxxSendMessage(a1, 9u, v15, 0LL);
    }
    if ( (*((_BYTE *)a1 + 55) & 0xC0) != 0x40 )
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 19) + 85LL) & 8) == 0 || ((v5 - 1) & 0xFFFFFFFB) != 0 )
        goto LABEL_24;
      xxxActivateWindow(a1, 1LL);
    }
    v13 |= 0x14u;
LABEL_24:
    if ( (unsigned int)FChildVisible(a1) )
    {
      xxxSetWindowPos((_DWORD)a1, 0, 0, 0, 0, 0, v13);
      if ( (v13 & 0x200000) != 0 )
        xxxNotifyShellTrackedWindowPosChanged(a1, 1LL);
    }
    else
    {
      SetVisible(a1, v5 != 0);
    }
    if ( (*((_BYTE *)a1 + 40) & 0x10) != 0 )
    {
      SetOrClrWF(0, a1, 0x10u, 1);
      v18 = *((_BYTE *)a1 + 55);
      if ( (v18 & 0x20) != 0 )
      {
        v19 = 1LL;
      }
      else if ( (v18 & 1) != 0 )
      {
        v19 = 2LL;
      }
      else
      {
        v19 = 0LL;
      }
      xxxSendSizeMessage(a1, v19);
      v20 = *((_QWORD *)a1 + 11);
      v28 = *(_OWORD *)(v20 + 128);
      TransformRectBetweenCoordinateSpaces(&v28, &v28, a1, v20);
      if ( *((_QWORD *)a1 + 11) == GetDesktopWindow((__int64)a1) )
        v21 = *((unsigned __int16 *)a1 + 64) | (*((unsigned __int16 *)a1 + 66) << 16);
      else
        v21 = (unsigned __int16)(*((_WORD *)a1 + 64) - v28) | ((unsigned __int16)(*((_WORD *)a1 + 66) - WORD2(v28)) << 16);
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(a1, 3u, 0LL, (struct _LARGE_STRING *)v21, 0, 0, 0LL, 1, 0);
    }
    if ( !v5 )
    {
      v17 = *(_QWORD *)(v11 + 392);
      if ( a1 == *(struct tagWND **)(v17 + 80) && v17 == gpqForeground )
        xxxActivateWindow(a1, 3LL);
      else
        xxxCheckFocus(a1);
    }
    return v8;
  }
  return 0LL;
}
