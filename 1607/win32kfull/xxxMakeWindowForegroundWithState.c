/*
 * XREFs of xxxMakeWindowForegroundWithState @ 0x1C009C580
 * Callers:
 *     xxxActivateThisWindow @ 0x1C009BBAC (xxxActivateThisWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 *     xxxShowWindowEx @ 0x1C009E4B4 (xxxShowWindowEx.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C010048C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxSysCommand @ 0x1C012ABE4 (xxxSysCommand.c)
 *     PowerOnGdi @ 0x1C0154B90 (PowerOnGdi.c)
 *     xxxbFullscreenSwitch @ 0x1C01E5A54 (xxxbFullscreenSwitch.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     xxxRedrawWindow @ 0x1C0059F20 (xxxRedrawWindow.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     ThreadLockExchange @ 0x1C00777C4 (ThreadLockExchange.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     SetPointer @ 0x1C0094C10 (SetPointer.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     LockW32Thread @ 0x1C009E9CC (LockW32Thread.c)
 *     xxxCapture @ 0x1C00AACF4 (xxxCapture.c)
 *     zzzInternalSetCursorPos @ 0x1C00DB4DC (zzzInternalSetCursorPos.c)
 *     zzzLockWindowUpdate2 @ 0x1C0121EF4 (zzzLockWindowUpdate2.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMakeWindowForegroundWithState(_DWORD *a1, char a2)
{
  int v2; // r14d
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 DesktopWindow; // rdi
  struct tagWND *v9; // rsi
  unsigned __int8 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  signed __int32 v25[8]; // [rsp+0h] [rbp-70h] BYREF
  _QWORD v26[3]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v27[24]; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v28[4]; // [rsp+50h] [rbp-20h] BYREF

  v2 = 0;
  v5 = 1;
  if ( a1 )
  {
    if ( a2 == 2 )
      HMAssignmentLock(&gspwndShouldBeForeground, a1);
    SetOrClrWF(0, a1, 0x707u, 1);
    SetOrClrWF(1, a1, a2 & 7 | 0x700, 1);
    if ( a2 == 1 && (!gpqForeground || *(_DWORD **)(gpqForeground + 88LL) != a1) )
    {
      SetOrClrWF(0, a1, 0x707u, 1);
      SetOrClrWF(1, a1, 0x704u, 1);
    }
  }
  if ( ghSwitcher )
  {
    gfRedoFullScreenSwitch = 1;
    return v5;
  }
  ghSwitcher = PsGetCurrentThreadId();
  v7 = gptiCurrent;
  v26[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v26;
  v26[1] = 0LL;
  do
  {
    DesktopWindow = gspwndShouldBeForeground;
    gfRedoFullScreenSwitch = 0;
    if ( gspwndShouldBeForeground )
    {
      ThreadLockExchange(gspwndShouldBeForeground, (__int64)v26);
      HMAssignmentUnlock(&gspwndShouldBeForeground);
    }
    else if ( gpqForeground && (DesktopWindow = *(_QWORD *)(gpqForeground + 88LL)) != 0 )
    {
      if ( (*(_BYTE *)(DesktopWindow + 47) & 3) == 0 )
        DesktopWindow = GetDesktopWindow(DesktopWindow);
    }
    else
    {
      v7 = grpdeskRitInput;
      DesktopWindow = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
    }
    v9 = gspwndFullScreen;
    if ( (struct tagWND *)DesktopWindow == gspwndFullScreen )
      break;
    v11 = *(_BYTE *)(DesktopWindow + 47) & 7;
    ThreadLockExchange(DesktopWindow, (__int64)v26);
    v28[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v28;
    v28[1] = v9;
    if ( v9 )
      ++*((_DWORD *)v9 + 2);
    HMAssignmentLock(&gspwndFullScreen, DesktopWindow);
    gbFullScreen = v11;
    if ( (v9 || gbRemoteSession) && gbFullScreen == 2 && v11 == 2 )
    {
      xxxRedrawWindow((struct tagWND *)DesktopWindow, 0LL, 0LL, 645);
      ThreadUnlock1(v15, v14);
    }
    else
    {
      if ( v9 )
      {
        v13 = (unsigned int)gbFullScreen - 1;
        if ( gbFullScreen == 1 )
        {
          if ( (*((_BYTE *)v9 + 47) & 7) == 1 )
          {
            SetOrClrWF(0, v9, 0x707u, 1);
            SetOrClrWF(1, v9, 0x704u, 1);
          }
          xxxSendMessage(v9, 0x3Au, 0LL, 0LL);
          v16 = *((_QWORD *)v9 + 2);
          if ( v16 != gptiCurrent )
          {
            LockW32Thread(v16, v27);
            v2 = 1;
          }
          xxxCapture(*((_QWORD *)v9 + 2), 0LL, 5LL);
          if ( v2 )
          {
            PopAndFreeW32ThreadLock((__int64)v27, v12, v17, v18);
            v2 = 0;
          }
          gdwPUDFlags &= ~0x4000000u;
          _InterlockedOr(v25, 0);
        }
        else if ( gbFullScreen == 2 )
        {
          zzzLockWindowUpdate2(v9);
          gdwPUDFlags |= 0x20000000u;
          if ( gProtocolType || gfSwitchInProgress || !(unsigned int)SafeDisableMDEV(2LL) )
          {
            gdwPUDFlags &= ~0x20000000u;
            zzzLockWindowUpdate2(0LL);
            HMAssignmentLock(&gspwndFullScreen, v9);
            ThreadUnlock1(v24, v23);
            v5 = 0;
            break;
          }
          v13 = gpsi;
          gptCursorFullScreen = *(struct tagPOINT *)(gpsi + 5368LL);
          gfGdiEnabled = 0;
        }
      }
      ThreadUnlock1(v13, v12);
      v7 = (unsigned int)v11 - 1;
      if ( v11 == 1 )
      {
        v19 = *(_QWORD *)(DesktopWindow + 16);
        if ( v19 != gptiCurrent )
        {
          LockW32Thread(v19, v27);
          v2 = 1;
        }
        xxxCapture(*(_QWORD *)(DesktopWindow + 16), DesktopWindow, 5LL);
        if ( v2 )
          PopAndFreeW32ThreadLock((__int64)v27, v20, v21, v22);
        xxxSendMessage((struct tagWND *)DesktopWindow, 0x3Au, 1uLL, 0LL);
LABEL_52:
        v2 = 0;
        continue;
      }
      if ( v11 != 2 )
        goto LABEL_52;
      SafeEnableMDEV(2LL);
      v2 = 0;
      gfGdiEnabled = 1;
      gpcurPhysCurrent = 0LL;
      gpqCursor = 0LL;
      gpcurLogCurrent = 0LL;
      SetPointer(0);
      *(struct tagPOINT *)gptSSCursor = gptCursorFullScreen;
      zzzInternalSetCursorPos((unsigned int)gptCursorFullScreen.x, (unsigned int)gptCursorFullScreen.y, 2LL);
      gdwPUDFlags &= ~0x20000000u;
      zzzLockWindowUpdate2(0LL);
      xxxRedrawWindow((struct tagWND *)DesktopWindow, 0LL, 0LL, 645);
    }
  }
  while ( gfRedoFullScreenSwitch );
  ThreadUnlock1(v7, v6);
  ghSwitcher = 0LL;
  return v5;
}
