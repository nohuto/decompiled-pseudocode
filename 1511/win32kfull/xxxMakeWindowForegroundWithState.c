/*
 * XREFs of xxxMakeWindowForegroundWithState @ 0x1C008F264
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C006F67C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxShowWindowEx @ 0x1C00794D0 (xxxShowWindowEx.c)
 *     xxxSetForegroundWindow2 @ 0x1C008D958 (xxxSetForegroundWindow2.c)
 *     xxxActivateThisWindow @ 0x1C008E8B8 (xxxActivateThisWindow.c)
 *     xxxSysCommand @ 0x1C0109460 (xxxSysCommand.c)
 *     PowerOnGdi @ 0x1C014F210 (PowerOnGdi.c)
 *     xxxbFullscreenSwitch @ 0x1C01EFD14 (xxxbFullscreenSwitch.c)
 * Callees:
 *     xxxRedrawWindow @ 0x1C00520F0 (xxxRedrawWindow.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0064370 (PopAndFreeW32ThreadLock.c)
 *     ThreadLockExchange @ 0x1C006D548 (ThreadLockExchange.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     LockW32Thread @ 0x1C008E0B4 (LockW32Thread.c)
 *     xxxCapture @ 0x1C008E5F8 (xxxCapture.c)
 *     zzzLockWindowUpdate2 @ 0x1C0090970 (zzzLockWindowUpdate2.c)
 *     SetPointer @ 0x1C0096E50 (SetPointer.c)
 *     zzzInternalSetCursorPos @ 0x1C009A8F8 (zzzInternalSetCursorPos.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMakeWindowForegroundWithState(_DWORD *a1, char a2)
{
  int v2; // r14d
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagWND *DesktopWindow; // rdi
  struct tagWND *v9; // rsi
  unsigned __int8 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  signed __int32 v20[8]; // [rsp+0h] [rbp-70h] BYREF
  _QWORD v21[3]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v22[3]; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v23[4]; // [rsp+50h] [rbp-20h] BYREF

  v2 = 0;
  v5 = 1;
  if ( a1 )
  {
    if ( a2 == 2 )
      HMAssignmentLock(&gspwndShouldBeForeground, a1);
    SetOrClrWF(0, a1, 0x707u, 1);
    SetOrClrWF(1, a1, a2 & 7 | 0x700, 1);
    if ( a2 == 1 && (!gpqForeground || *(_DWORD **)(gpqForeground + 80LL) != a1) )
    {
      SetOrClrWF(0, a1, 0x707u, 1);
      SetOrClrWF(1, a1, 0x704u, 1);
    }
  }
  if ( !ghSwitcher )
  {
    ghSwitcher = PsGetCurrentThreadId();
    v7 = gptiCurrent;
    v21[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v21;
    v21[1] = 0LL;
    while ( 1 )
    {
      DesktopWindow = gspwndShouldBeForeground;
      gfRedoFullScreenSwitch = 0;
      if ( gspwndShouldBeForeground )
      {
        ThreadLockExchange((__int64)gspwndShouldBeForeground, (__int64)v21);
        HMAssignmentUnlock(&gspwndShouldBeForeground);
      }
      else if ( gpqForeground && (DesktopWindow = *(struct tagWND **)(gpqForeground + 80LL)) != 0LL )
      {
        if ( (*((_BYTE *)DesktopWindow + 47) & 3) == 0 )
          DesktopWindow = (struct tagWND *)GetDesktopWindow((__int64)DesktopWindow);
      }
      else
      {
        v7 = grpdeskRitInput;
        DesktopWindow = *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
      }
      v9 = gspwndFullScreen;
      if ( DesktopWindow == gspwndFullScreen )
      {
LABEL_52:
        ThreadUnlock1(v7, v6);
        ghSwitcher = 0LL;
        return v5;
      }
      v10 = *((_BYTE *)DesktopWindow + 47) & 7;
      ThreadLockExchange((__int64)DesktopWindow, (__int64)v21);
      v23[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v23;
      v23[1] = v9;
      if ( v9 )
        ++*((_DWORD *)v9 + 2);
      HMAssignmentLock(&gspwndFullScreen, DesktopWindow);
      gbFullScreen = v10;
      if ( (v9 || gbRemoteSession) && gbFullScreen == 2 && v10 == 2 )
      {
        xxxRedrawWindow(DesktopWindow, 0LL, 0LL, 645);
        ThreadUnlock1(v14, v13);
      }
      else
      {
        if ( v9 )
        {
          v12 = (unsigned int)gbFullScreen - 1;
          if ( gbFullScreen == 1 )
          {
            if ( (*((_BYTE *)v9 + 47) & 7) == 1 )
            {
              SetOrClrWF(0, v9, 0x707u, 1);
              SetOrClrWF(1, v9, 0x704u, 1);
            }
            xxxSendMessage(v9, 0x3Au, 0LL, 0LL);
            v15 = *((_QWORD *)v9 + 2);
            if ( v15 != gptiCurrent )
            {
              LockW32Thread(v15, v22);
              v2 = 1;
            }
            xxxCapture(*((_QWORD **)v9 + 2), 0LL, 5);
            if ( v2 )
            {
              PopAndFreeW32ThreadLock((__int64)v22);
              v2 = 0;
            }
            gdwPUDFlags &= ~0x4000000u;
            _InterlockedOr(v20, 0);
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
              ThreadUnlock1(v18, v17);
              v5 = 0;
              goto LABEL_52;
            }
            v12 = gpsi;
            gptCursorFullScreen = *(struct tagPOINT *)(gpsi + 3976LL);
            gfGdiEnabled = 0;
          }
        }
        ThreadUnlock1(v12, v11);
        v7 = (unsigned int)v10 - 1;
        if ( v10 == 1 )
        {
          v16 = *((_QWORD *)DesktopWindow + 2);
          if ( v16 != gptiCurrent )
          {
            LockW32Thread(v16, v22);
            v2 = 1;
          }
          xxxCapture(*((_QWORD **)DesktopWindow + 2), (__int64 *)DesktopWindow, 5);
          if ( v2 )
            PopAndFreeW32ThreadLock((__int64)v22);
          xxxSendMessage(DesktopWindow, 0x3Au, 1uLL, 0LL);
LABEL_48:
          v2 = 0;
          goto LABEL_49;
        }
        if ( v10 != 2 )
          goto LABEL_48;
        SafeEnableMDEV(2LL);
        v2 = 0;
        gfGdiEnabled = 1;
        gpcurPhysCurrent = 0LL;
        gpqCursor = 0LL;
        gpcurLogCurrent = 0LL;
        SetPointer(0LL);
        *(struct tagPOINT *)gptSSCursor = gptCursorFullScreen;
        zzzInternalSetCursorPos((unsigned int)gptCursorFullScreen.x, (unsigned int)gptCursorFullScreen.y, 2LL);
        gdwPUDFlags &= ~0x20000000u;
        zzzLockWindowUpdate2(0LL);
        xxxRedrawWindow(DesktopWindow, 0LL, 0LL, 645);
      }
LABEL_49:
      if ( !gfRedoFullScreenSwitch )
        goto LABEL_52;
    }
  }
  gfRedoFullScreenSwitch = 1;
  return v5;
}
