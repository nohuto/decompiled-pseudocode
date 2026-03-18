/*
 * XREFs of xxxSetForegroundWindow2 @ 0x1C0045D90
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 *     xxxMinMaximizeEx @ 0x1C003E778 (xxxMinMaximizeEx.c)
 *     xxxSwitchDesktop @ 0x1C0041C84 (xxxSwitchDesktop.c)
 *     xxxSetForegroundWindow @ 0x1C00450B0 (xxxSetForegroundWindow.c)
 *     xxxSetFocus @ 0x1C0046624 (xxxSetFocus.c)
 *     xxxKeyEvent @ 0x1C00485C0 (xxxKeyEvent.c)
 *     xxxDoHotKeyStuff @ 0x1C0049418 (xxxDoHotKeyStuff.c)
 *     xxxButtonEvent @ 0x1C004BA34 (xxxButtonEvent.c)
 *     xxxProcessEventMessage @ 0x1C0071E4C (xxxProcessEventMessage.c)
 *     xxxSetThreadDesktop @ 0x1C007EA90 (xxxSetThreadDesktop.c)
 *     xxxSetForegroundCheckNoActivate @ 0x1C01D13A0 (xxxSetForegroundCheckNoActivate.c)
 *     xxxActiveWindowTracking @ 0x1C01E27EC (xxxActiveWindowTracking.c)
 *     xxxNextWindow @ 0x1C02011B0 (xxxNextWindow.c)
 *     NtUserNavigateFocus @ 0x1C021E6F0 (NtUserNavigateFocus.c)
 * Callees:
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0009784 (-IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     zzzClipCursorEx @ 0x1C003D634 (zzzClipCursorEx.c)
 *     ClearKeyboardToggleStates @ 0x1C00413F0 (ClearKeyboardToggleStates.c)
 *     ?UpdateKeyStateFlag@@YAXXZ @ 0x1C0042860 (-UpdateKeyStateFlag@@YAXXZ.c)
 *     SetHungFlag @ 0x1C00448B4 (SetHungFlag.c)
 *     xxxCancelTracking @ 0x1C0044D18 (xxxCancelTracking.c)
 *     zzzLockWindowUpdate2 @ 0x1C0044DC8 (zzzLockWindowUpdate2.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C0045D40 (IsWindowUnderActiveLockScreen.c)
 *     LockW32Thread @ 0x1C00464F8 (LockW32Thread.c)
 *     xxxApplyGlobalInputSettings @ 0x1C0046CF8 (xxxApplyGlobalInputSettings.c)
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C0046D80 (xxxSetForegroundThreadWithWindowHint.c)
 *     SetNewForegroundQueue @ 0x1C0047320 (SetNewForegroundQueue.c)
 *     AllocQEntry @ 0x1C0067C50 (AllocQEntry.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     StoreQMessage @ 0x1C00707A0 (StoreQMessage.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     xxxDeactivate @ 0x1C007D9B8 (xxxDeactivate.c)
 *     xxxActivateThisWindow @ 0x1C007F264 (xxxActivateThisWindow.c)
 *     xxxUpdateTray @ 0x1C007FA48 (xxxUpdateTray.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C007FBFC (xxxMakeWindowForegroundWithState.c)
 *     ?RemoveEventMessage@@YAHPEAUtagQ@@KK@Z @ 0x1C0080090 (-RemoveEventMessage@@YAHPEAUtagQ@@KK@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0080E4C (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     xxxSetWindowPosAndBand @ 0x1C00850A0 (xxxSetWindowPosAndBand.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 *     IsThreadHung @ 0x1C008CD94 (IsThreadHung.c)
 *     LogicalQmsgCursorPos @ 0x1C008E59C (LogicalQmsgCursorPos.c)
 *     SetWakeBit @ 0x1C00904B0 (SetWakeBit.c)
 *     xxxRedrawHungWindowFrame @ 0x1C0117688 (xxxRedrawHungWindowFrame.c)
 *     zzzActiveCursorTracking @ 0x1C01E2930 (zzzActiveCursorTracking.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetForegroundWindow2(struct tagWND *a1, __int64 a2, __int64 a3, unsigned int a4)
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
  __int64 *v14; // r14
  __int64 v15; // rdx
  __int64 *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // r13
  BOOL v23; // r15d
  __int64 v24; // rbx
  unsigned int ThreadId; // r9d
  __int64 v26; // r14
  __int64 v27; // rbx
  int v28; // eax
  __int64 v29; // r12
  int v30; // r15d
  __int64 v31; // rbx
  unsigned int v32; // eax
  unsigned int v33; // r9d
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned int v36; // ebx
  unsigned int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // [rsp+80h] [rbp-88h]
  _DWORD v49[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v50; // [rsp+98h] [rbp-70h]
  __int64 v51; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-60h]
  _BYTE v53[24]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v54[24]; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v55[96]; // [rsp+E8h] [rbp-20h] BYREF
  unsigned __int8 v57; // [rsp+168h] [rbp+60h]

  v57 = a3;
  v49[0] = 0;
  v4 = 1;
  v5 = a2;
  v49[1] = 4;
  v7 = 0;
  v50 = gptiCurrent;
  v8 = 0;
  v9 = 0;
  if ( a1
    && (*((_QWORD *)a1 + 3) != grpdeskRitInput
     || (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 17LL) & 1) != 0
     || (unsigned int)IsWindowUnderActiveLockScreen((__int64)a1, a2, a3)) )
  {
    return 0LL;
  }
  if ( v5 )
  {
    LockW32Thread(v5, v55);
    v4 = 1;
  }
  gppiLockSFW = 0LL;
  v10 = gptiForeground;
  if ( !gptiForeground || ((unsigned __int8)*(_DWORD *)(gptiForeground + 448LL) & (unsigned __int8)v4) != 0 )
    v10 = 0LL;
  else
    LockW32Thread(gptiForeground, v54);
  gpqForegroundPrev = gpqForeground;
  if ( a1 )
  {
    v48 = *((_QWORD *)a1 + 2);
    SetNewForegroundQueue(*(_QWORD *)(v48 + 392));
    LockW32Thread(v48, v53);
    v11 = *((_QWORD *)a1 + 2);
    v12 = a1;
  }
  else
  {
    v48 = 0LL;
    SetNewForegroundQueue(0LL);
    v12 = 0LL;
    v11 = 0LL;
  }
  xxxSetForegroundThreadWithWindowHint(v11, v12);
  v14 = (__int64 *)gpqForegroundPrev;
  v15 = 0xFFFFFFFFLL;
  v16 = (__int64 *)gpqForeground;
  if ( (v57 & 0x20) == 0 )
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
      ClearKeyboardToggleStates();
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
          xxxApplyGlobalInputSettings(0LL);
          v14 = (__int64 *)gpqForegroundPrev;
          v16 = (__int64 *)gpqForeground;
        }
      }
    }
  }
  v17 = *v14;
  if ( *v16 != *v14 )
  {
    if ( v17 )
    {
      v15 = *(_QWORD *)(v17 + 72);
      if ( v15 )
      {
        xxxWindowEvent(-2147483645, v15, 0, 0, 49);
        v16 = (__int64 *)gpqForeground;
      }
    }
    if ( (v57 & 8) == 0 )
    {
      v15 = *v16;
      if ( *v16 )
      {
        v15 = *(_QWORD *)(v15 + 72);
        if ( v15 )
        {
          v39 = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 400LL);
          if ( v39 )
            v40 = *(_QWORD *)(v39 + 40);
          else
            LODWORD(v40) = 0;
          xxxWindowEvent(-2147483646, v15, v40, 0, 33);
        }
      }
    }
    v18 = a2;
    if ( a2 )
    {
      xxxCancelTracking(v13, v15);
      zzzClipCursorEx(0LL, 0);
      zzzLockWindowUpdate2(0LL, 1);
      xxxMakeWindowForegroundWithState(0LL, 0LL);
    }
    v19 = 0LL;
    if ( v10 && (*(_DWORD *)(v10 + 448) & 1) == 0 )
      v19 = *(_QWORD *)(v10 + 392);
    v20 = 0LL;
    if ( a2 )
      v20 = *(_QWORD *)(a2 + 392);
    v21 = 0LL;
    if ( v19 && v19 != v20 )
    {
      v22 = AllocQEntry(v19);
      if ( !v22 )
        goto LABEL_125;
      v23 = 0;
      if ( a1 && (unsigned int)CoreWindowProp::IsComponent(a1) )
        v23 = CoreWindowProp::IsHostThreadOf((struct tagTHREADINFO *)v10, a1) != 0;
      v24 = LogicalQmsgCursorPos(0LL, v19);
      if ( gptiForeground )
        ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*gptiForeground);
      else
        ThreadId = 0;
      StoreQMessage(v22, 0, 0, ThreadId, 0LL, 0, 0, 5, v23, 0, (__int64)v49, v24, 0LL, 0LL);
      if ( v10 )
      {
        *(_QWORD *)(v22 + 96) = v10;
        SetWakeBit(v10, 8256LL);
      }
      if ( *(_QWORD *)(v19 + 80) )
      {
        if ( v10 && (unsigned int)IsThreadHung(v10, 0LL) )
        {
          v52 = *(_QWORD *)(v19 + 80);
          v43 = v52;
          v51 = *(_QWORD *)(v50 + 376);
          *(_QWORD *)(v50 + 376) = &v51;
          ++*(_DWORD *)(v43 + 8);
          xxxRedrawHungWindowFrame(*(_QWORD *)(v19 + 80));
          ThreadUnlock1(v45, v44);
        }
        else
        {
          SetHungFlag(*(struct tagWND **)(v19 + 80), 0x310u);
        }
      }
      v18 = a2;
      v21 = 0LL;
    }
    v26 = 0LL;
    if ( v48 && (*(_DWORD *)(v48 + 448) & 1) == 0 )
      v26 = *(_QWORD *)(v48 + 392);
    v27 = 0LL;
    if ( v18 )
      v27 = *(_QWORD *)(v18 + 392);
    if ( !v26 )
    {
LABEL_75:
      v34 = 0LL;
      if ( v10 && (*(_DWORD *)(v10 + 448) & 1) == 0 )
        v34 = *(_QWORD *)(v10 + 392);
      v35 = 0LL;
      if ( v18 )
        v35 = *(_QWORD *)(v18 + 392);
      if ( v34 && v34 == v35 )
      {
        if ( a1 )
          v38 = (unsigned int)PsGetThreadId(**((PETHREAD **)a1 + 2));
        else
          v38 = 0;
        xxxDeactivate(v18, v38, 0LL);
      }
      goto LABEL_82;
    }
    if ( v26 == v27 || (v21 = AllocQEntry(v26)) != 0 )
    {
      v28 = RemoveEventMessage((struct tagQ *)v26, 5u, 0xFFFFFFFF);
      if ( v26 == v27 )
      {
        if ( a1 == *(struct tagWND **)(v27 + 80) )
        {
          xxxSendMessage(a1, 134LL, 1LL);
          xxxUpdateTray(a1);
          if ( (v57 & 4) == 0 )
            xxxSetWindowPosAndBand(a1, 0, 0, 3, 0);
        }
        else if ( (v57 & 1) == 0 )
        {
          if ( v10 )
            PsGetThreadId(*(PETHREAD *)v10);
          v36 = xxxActivateThisWindow(a1);
          if ( v36 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
            zzzActiveCursorTracking(a1);
          goto LABEL_83;
        }
      }
      else
      {
        if ( (v27 || (v57 & 2) != 0) && a1 )
          v29 = *(_QWORD *)a1;
        else
          v29 = 0LL;
        if ( v28 )
          *(_DWORD *)(v26 + 332) |= 0x8000u;
        v30 = (v57 >> 4) & 1;
        if ( (v57 & 4) != 0 )
          v30 |= 2u;
        v31 = LogicalQmsgCursorPos(0LL, v26);
        if ( (v57 & 1) != 0 )
        {
          v33 = 0;
        }
        else
        {
          if ( v10 )
            v32 = (unsigned int)PsGetThreadId(*(PETHREAD *)v10);
          else
            v32 = 0;
          v33 = v32;
        }
        StoreQMessage(v21, 0, v30, v33, v29, 0, 0, 6, a4, 0, (__int64)v49, v31, 0LL, 0LL);
        *(_QWORD *)(v21 + 96) = v48;
        SetWakeBit(v48, 8256LL);
        if ( *(_QWORD *)(v26 + 80) )
        {
          v41 = IsThreadHung(v48, 0LL);
          v42 = *(_QWORD *)(v26 + 80);
          if ( v41 )
          {
            v52 = *(_QWORD *)(v26 + 80);
            v51 = *(_QWORD *)(v50 + 376);
            *(_QWORD *)(v50 + 376) = &v51;
            ++*(_DWORD *)(v42 + 8);
            xxxRedrawHungWindowFrame(*(_QWORD *)(v26 + 80));
            ThreadUnlock1(v47, v46);
          }
          else
          {
            SetHungFlag((struct tagWND *)v42, 0x310u);
          }
        }
        v18 = a2;
      }
      goto LABEL_75;
    }
LABEL_125:
    v36 = 0;
    goto LABEL_83;
  }
  v18 = a2;
LABEL_82:
  v36 = 1;
LABEL_83:
  if ( v48 )
    PopAndFreeW32ThreadLock(v53);
  if ( v10 )
    PopAndFreeW32ThreadLock(v54);
  if ( v18 )
    PopAndFreeW32ThreadLock(v55);
  return v36;
}
