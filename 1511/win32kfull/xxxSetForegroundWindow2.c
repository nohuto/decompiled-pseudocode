/*
 * XREFs of xxxSetForegroundWindow2 @ 0x1C008D958
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 *     xxxSetFocus @ 0x1C0080BD4 (xxxSetFocus.c)
 *     xxxKeyEvent @ 0x1C008345C (xxxKeyEvent.c)
 *     xxxDoHotKeyStuff @ 0x1C0083DBC (xxxDoHotKeyStuff.c)
 *     xxxButtonEvent @ 0x1C0085B2C (xxxButtonEvent.c)
 *     xxxSetForegroundWindow @ 0x1C008CF98 (xxxSetForegroundWindow.c)
 *     xxxSwitchDesktop @ 0x1C0093754 (xxxSwitchDesktop.c)
 *     xxxMinMaximizeEx @ 0x1C00C83F4 (xxxMinMaximizeEx.c)
 *     xxxSetThreadDesktop @ 0x1C00CEE94 (xxxSetThreadDesktop.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 *     xxxSetForegroundCheckNoActivate @ 0x1C01D3018 (xxxSetForegroundCheckNoActivate.c)
 *     xxxActiveWindowTracking @ 0x1C01E2C7C (xxxActiveWindowTracking.c)
 *     xxxNextWindow @ 0x1C0201554 (xxxNextWindow.c)
 *     NtUserNavigateFocus @ 0x1C021E4D0 (NtUserNavigateFocus.c)
 * Callees:
 *     SetWakeBit @ 0x1C00535C0 (SetWakeBit.c)
 *     LogicalQmsgCursorPos @ 0x1C0053D48 (LogicalQmsgCursorPos.c)
 *     AllocQEntry @ 0x1C0057810 (AllocQEntry.c)
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     StoreQMessage @ 0x1C0060180 (StoreQMessage.c)
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0064370 (PopAndFreeW32ThreadLock.c)
 *     xxxSetWindowPosAndBand @ 0x1C0074F6C (xxxSetWindowPosAndBand.c)
 *     xxxApplyGlobalInputSettings @ 0x1C00812CC (xxxApplyGlobalInputSettings.c)
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C0081354 (xxxSetForegroundThreadWithWindowHint.c)
 *     zzzClipCursorEx @ 0x1C008AA64 (zzzClipCursorEx.c)
 *     SetHungFlag @ 0x1C008BFF0 (SetHungFlag.c)
 *     IsThreadHung @ 0x1C008C3A4 (IsThreadHung.c)
 *     xxxDeactivate @ 0x1C008C738 (xxxDeactivate.c)
 *     LockW32Thread @ 0x1C008E0B4 (LockW32Thread.c)
 *     SetNewForegroundQueue @ 0x1C008E570 (SetNewForegroundQueue.c)
 *     xxxActivateThisWindow @ 0x1C008E8B8 (xxxActivateThisWindow.c)
 *     xxxUpdateTray @ 0x1C008F0B0 (xxxUpdateTray.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C008F264 (xxxMakeWindowForegroundWithState.c)
 *     ?RemoveEventMessage@@YAHPEAUtagQ@@KK@Z @ 0x1C008F6F8 (-RemoveEventMessage@@YAHPEAUtagQ@@KK@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C008F830 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C0090970 (zzzLockWindowUpdate2.c)
 *     xxxCancelTracking @ 0x1C0090B88 (xxxCancelTracking.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C0090C38 (IsWindowUnderActiveLockScreen.c)
 *     ClearKeyboardToggleStates @ 0x1C0092EB4 (ClearKeyboardToggleStates.c)
 *     ?UpdateKeyStateFlag@@YAXXZ @ 0x1C00F1AA0 (-UpdateKeyStateFlag@@YAXXZ.c)
 *     xxxRedrawHungWindowFrame @ 0x1C01425EC (xxxRedrawHungWindowFrame.c)
 *     zzzActiveCursorTracking @ 0x1C01E2DC0 (zzzActiveCursorTracking.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C022663C (-IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetForegroundWindow2(LARGE_INTEGER *a1, __int64 a2, unsigned __int8 a3, unsigned int a4)
{
  char v4; // r11
  __int64 v5; // r10
  unsigned int v7; // r15d
  int v8; // r13d
  unsigned int v9; // r12d
  __int64 v10; // rsi
  __int64 v11; // rcx
  struct tagWND *v12; // rdx
  __int64 v13; // rcx
  __int64 **v14; // r14
  __int64 v15; // rdx
  __int64 **v16; // rbx
  __int64 *v17; // rax
  __int64 v18; // r15
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r14
  __int64 v22; // rax
  LARGE_INTEGER *v23; // r13
  LARGE_INTEGER *v24; // r13
  BOOL v25; // r15d
  LONGLONG v26; // rbx
  HANDLE ThreadId; // r9
  __int64 v28; // r14
  __int64 v29; // rbx
  int v30; // eax
  LARGE_INTEGER v31; // r12
  DWORD v32; // r15d
  LONGLONG v33; // rbx
  unsigned int v34; // eax
  LARGE_INTEGER v35; // r9
  __int64 v36; // rcx
  __int64 v37; // rax
  unsigned int v38; // ebx
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // r9
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 QuadPart; // [rsp+80h] [rbp-88h]
  DWORD v52[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v53; // [rsp+98h] [rbp-70h]
  __int64 v54; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v55; // [rsp+A8h] [rbp-60h]
  _BYTE v56[24]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v57[24]; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v58[96]; // [rsp+E8h] [rbp-20h] BYREF

  v52[0] = 0;
  v4 = 1;
  v5 = a2;
  v52[1] = 4;
  v7 = 0;
  v53 = gptiCurrent;
  v8 = 0;
  v9 = 0;
  if ( a1
    && (a1[3].QuadPart != grpdeskRitInput
     || (*(_BYTE *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)a1->LowPart
                  + *((_QWORD *)&gSharedInfo + 1)
                  + 17LL) & 1) != 0
     || (unsigned int)IsWindowUnderActiveLockScreen(a1)) )
  {
    return 0LL;
  }
  if ( v5 )
  {
    LockW32Thread(v5, v58);
    v4 = 1;
  }
  gppiLockSFW = 0LL;
  v10 = gptiForeground;
  if ( !gptiForeground || ((unsigned __int8)*(_DWORD *)(gptiForeground + 440LL) & (unsigned __int8)v4) != 0 )
    v10 = 0LL;
  else
    LockW32Thread(gptiForeground, v57);
  gpqForegroundPrev = gpqForeground;
  if ( a1 )
  {
    QuadPart = a1[2].QuadPart;
    SetNewForegroundQueue(*(_QWORD *)(QuadPart + 384));
    LockW32Thread(QuadPart, v56);
    v11 = a1[2].QuadPart;
    v12 = (struct tagWND *)a1;
  }
  else
  {
    QuadPart = 0LL;
    SetNewForegroundQueue(0LL);
    v12 = 0LL;
    v11 = 0LL;
  }
  xxxSetForegroundThreadWithWindowHint(v11, (__int64)v12);
  v14 = (__int64 **)gpqForegroundPrev;
  v15 = 0xFFFFFFFFLL;
  v16 = (__int64 **)gpqForeground;
  if ( (a3 & 0x20) == 0 )
  {
    if ( gpqForeground )
    {
      v7 = *(_DWORD *)(gpqForeground + 372LL);
      v8 = *(_DWORD *)(gpqForeground + 376LL);
    }
    if ( gpqForegroundPrev )
    {
      v9 = *(_DWORD *)(gpqForegroundPrev + 372LL);
      v13 = *(unsigned int *)(gpqForegroundPrev + 376LL);
    }
    else
    {
      v13 = 0LL;
    }
    if ( gbEnforceUIPI && v7 <= v9 && (v7 != v9 || v8 != (_DWORD)v13 && v8 != -1 && (_DWORD)v13 != -1) )
    {
      ClearKeyboardToggleStates(v13, 0xFFFFFFFFLL);
      UpdateKeyStateFlag();
    }
  }
  if ( gpqForeground )
  {
    if ( gpqForeground != gpqForegroundPrev )
    {
      if ( *(_QWORD *)(gpqForeground + 72LL) )
      {
        v13 = HIDWORD(gpdwCPUserPreferencesMask);
        if ( (v13 & 0x80u) == 0LL )
        {
          xxxApplyGlobalInputSettings(0);
          v14 = (__int64 **)gpqForegroundPrev;
          v16 = (__int64 **)gpqForeground;
        }
      }
    }
  }
  v17 = *v14;
  if ( *v16 != *v14 )
  {
    if ( v17 )
    {
      v15 = v17[9];
      if ( v15 )
      {
        xxxWindowEvent(0x80000003, (__int64 *)v15, 0, 0, 49);
        v16 = (__int64 **)gpqForeground;
      }
    }
    if ( (a3 & 8) == 0 )
    {
      v15 = (__int64)*v16;
      if ( *v16 )
      {
        v15 = *(_QWORD *)(v15 + 72);
        if ( v15 )
        {
          v41 = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 392LL);
          if ( v41 )
            v42 = *(_QWORD *)(v41 + 40);
          else
            LODWORD(v42) = 0;
          xxxWindowEvent(0x80000002, (__int64 *)v15, v42, 0, 33);
        }
      }
    }
    v18 = a2;
    if ( a2 )
    {
      xxxCancelTracking(v13, v15);
      zzzClipCursorEx(0LL, 0LL, v19, v20);
      zzzLockWindowUpdate2(0LL);
      xxxMakeWindowForegroundWithState(0LL, 0LL);
    }
    v21 = 0LL;
    if ( v10 && (*(_DWORD *)(v10 + 440) & 1) == 0 )
      v21 = *(_QWORD *)(v10 + 384);
    v22 = 0LL;
    if ( a2 )
      v22 = *(_QWORD *)(a2 + 384);
    v23 = 0LL;
    if ( v21 && v21 != v22 )
    {
      v24 = (LARGE_INTEGER *)AllocQEntry(v21);
      if ( !v24 )
        goto LABEL_124;
      v25 = 0;
      if ( a1 && (unsigned int)CoreWindowProp::IsComponent((struct tagWND *)a1) )
        v25 = CoreWindowProp::IsHostThreadOf((struct tagTHREADINFO *)v10, (struct tagWND *)a1) != 0;
      v26 = LogicalQmsgCursorPos(0LL, v21);
      if ( gptiForeground )
        ThreadId = PsGetThreadId((PETHREAD)*gptiForeground);
      else
        ThreadId = 0LL;
      StoreQMessage(v24, 0LL, 0, (LARGE_INTEGER)ThreadId, 0LL, 0, 0LL, 5u, (LARGE_INTEGER)v25, 0, v52, v26, 0LL, 0LL);
      if ( v10 )
      {
        v24[12].QuadPart = v10;
        SetWakeBit(v10, 0x2040u);
      }
      if ( *(_QWORD *)(v21 + 80) )
      {
        if ( v10 && (unsigned int)IsThreadHung((_QWORD *)v10, 0) )
        {
          v55 = *(_QWORD *)(v21 + 80);
          v46 = v55;
          v54 = *(_QWORD *)(v53 + 368);
          *(_QWORD *)(v53 + 368) = &v54;
          ++*(_DWORD *)(v46 + 8);
          xxxRedrawHungWindowFrame(*(_QWORD *)(v21 + 80));
          ThreadUnlock1(v48, v47);
        }
        else
        {
          SetHungFlag(*(struct tagWND **)(v21 + 80), 0x310u);
        }
      }
      v18 = a2;
      v23 = 0LL;
    }
    v28 = 0LL;
    if ( QuadPart && (*(_DWORD *)(QuadPart + 440) & 1) == 0 )
      v28 = *(_QWORD *)(QuadPart + 384);
    v29 = 0LL;
    if ( v18 )
      v29 = *(_QWORD *)(v18 + 384);
    if ( !v28 )
    {
LABEL_75:
      v36 = 0LL;
      if ( v10 && (*(_DWORD *)(v10 + 440) & 1) == 0 )
        v36 = *(_QWORD *)(v10 + 384);
      v37 = 0LL;
      if ( v18 )
        v37 = *(_QWORD *)(v18 + 384);
      if ( v36 && v36 == v37 )
      {
        if ( a1 )
          v40 = (unsigned int)PsGetThreadId(*(PETHREAD *)a1[2].QuadPart);
        else
          v40 = 0;
        xxxDeactivate(v18, v40, 0);
      }
      goto LABEL_82;
    }
    if ( v28 == v29 || (v23 = (LARGE_INTEGER *)AllocQEntry(v28)) != 0LL )
    {
      v30 = RemoveEventMessage((struct tagQ *)v28, 5u, 0xFFFFFFFF);
      if ( v28 == v29 )
      {
        if ( a1 == *(LARGE_INTEGER **)(v29 + 80) )
        {
          if ( a1 )
            v45 = a1->QuadPart;
          else
            v45 = 0LL;
          xxxSendMessage((struct tagWND *)a1, 0x86u, 1uLL, v45);
          xxxUpdateTray((struct tagWND *)a1);
          if ( (a3 & 4) == 0 )
            xxxSetWindowPosAndBand((struct tagWND *)a1, 0, 0, 0, 0, 0, 3, 0);
        }
        else if ( (a3 & 1) == 0 )
        {
          if ( v10 )
            PsGetThreadId(*(PETHREAD *)v10);
          v38 = xxxActivateThisWindow((struct tagWND *)a1);
          if ( v38 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
            zzzActiveCursorTracking(a1);
          goto LABEL_83;
        }
      }
      else
      {
        if ( (v29 || (a3 & 2) != 0) && a1 )
          v31 = *a1;
        else
          v31.QuadPart = 0LL;
        if ( v30 )
          *(_DWORD *)(v28 + 332) |= 0x8000u;
        v32 = (a3 >> 4) & 1;
        if ( (a3 & 4) != 0 )
          v32 |= 2u;
        v33 = LogicalQmsgCursorPos(0LL, v28);
        if ( (a3 & 1) != 0 )
        {
          v35.QuadPart = 0LL;
        }
        else
        {
          if ( v10 )
            v34 = (unsigned int)PsGetThreadId(*(PETHREAD *)v10);
          else
            v34 = 0;
          v35.QuadPart = v34;
        }
        StoreQMessage(v23, 0LL, v32, v35, v31, 0, 0LL, 6u, (LARGE_INTEGER)a4, 0, v52, v33, 0LL, 0LL);
        v23[12].QuadPart = QuadPart;
        SetWakeBit(QuadPart, 0x2040u);
        if ( *(_QWORD *)(v28 + 80) )
        {
          v43 = IsThreadHung((_QWORD *)QuadPart, 0);
          v44 = *(_QWORD *)(v28 + 80);
          if ( v43 )
          {
            v55 = *(_QWORD *)(v28 + 80);
            v54 = *(_QWORD *)(v53 + 368);
            *(_QWORD *)(v53 + 368) = &v54;
            ++*(_DWORD *)(v44 + 8);
            xxxRedrawHungWindowFrame(*(_QWORD *)(v28 + 80));
            ThreadUnlock1(v50, v49);
          }
          else
          {
            SetHungFlag((struct tagWND *)v44, 0x310u);
          }
        }
        v18 = a2;
      }
      goto LABEL_75;
    }
LABEL_124:
    v38 = 0;
    goto LABEL_83;
  }
  v18 = a2;
LABEL_82:
  v38 = 1;
LABEL_83:
  if ( QuadPart )
    PopAndFreeW32ThreadLock((__int64)v56);
  if ( v10 )
    PopAndFreeW32ThreadLock((__int64)v57);
  if ( v18 )
    PopAndFreeW32ThreadLock((__int64)v58);
  return v38;
}
