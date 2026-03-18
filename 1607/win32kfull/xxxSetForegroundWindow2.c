/*
 * XREFs of xxxSetForegroundWindow2 @ 0x1C009D654
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 *     xxxSwitchDesktop @ 0x1C0095924 (xxxSwitchDesktop.c)
 *     xxxSetThreadDesktop @ 0x1C0099B20 (xxxSetThreadDesktop.c)
 *     xxxKeyEvent @ 0x1C00A2818 (xxxKeyEvent.c)
 *     xxxDoHotKeyStuff @ 0x1C00A3680 (xxxDoHotKeyStuff.c)
 *     xxxSetFocus @ 0x1C00A8300 (xxxSetFocus.c)
 *     xxxSetForegroundWindow @ 0x1C00A8FB4 (xxxSetForegroundWindow.c)
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 *     xxxButtonEvent @ 0x1C00DDEA4 (xxxButtonEvent.c)
 *     xxxSetForegroundCheckNoActivate @ 0x1C01CAC88 (xxxSetForegroundCheckNoActivate.c)
 *     xxxActiveWindowTracking @ 0x1C01D8EBC (xxxActiveWindowTracking.c)
 *     xxxNextWindow @ 0x1C01F8858 (xxxNextWindow.c)
 *     NtUserNavigateFocus @ 0x1C0218120 (NtUserNavigateFocus.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     IsThreadHung @ 0x1C00596C4 (IsThreadHung.c)
 *     SetWakeBit @ 0x1C005B6A0 (SetWakeBit.c)
 *     LogicalQmsgCursorPos @ 0x1C005C314 (LogicalQmsgCursorPos.c)
 *     AllocQEntry @ 0x1C005C498 (AllocQEntry.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     StoreQMessage @ 0x1C0080C10 (StoreQMessage.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     ClearKeyboardToggleStates @ 0x1C0095094 (ClearKeyboardToggleStates.c)
 *     zzzClipCursorEx @ 0x1C0097C50 (zzzClipCursorEx.c)
 *     xxxDeactivate @ 0x1C0098E24 (xxxDeactivate.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0099824 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     xxxActivateThisWindow @ 0x1C009BBAC (xxxActivateThisWindow.c)
 *     xxxUpdateTray @ 0x1C009C3D0 (xxxUpdateTray.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C009C580 (xxxMakeWindowForegroundWithState.c)
 *     ?RemoveEventMessage@@YAHPEAUtagQ@@KK@Z @ 0x1C009C734 (-RemoveEventMessage@@YAHPEAUtagQ@@KK@Z.c)
 *     LockW32Thread @ 0x1C009E9CC (LockW32Thread.c)
 *     xxxSetWindowPosAndBand @ 0x1C00A652C (xxxSetWindowPosAndBand.c)
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C00A7D88 (xxxSetForegroundThreadWithWindowHint.c)
 *     xxxApplyGlobalInputSettings @ 0x1C00A89E0 (xxxApplyGlobalInputSettings.c)
 *     SetNewForegroundQueue @ 0x1C00DC330 (SetNewForegroundQueue.c)
 *     xxxCancelTracking @ 0x1C0109250 (xxxCancelTracking.c)
 *     ?UpdateKeyStateFlag@@YAXXZ @ 0x1C010E710 (-UpdateKeyStateFlag@@YAXXZ.c)
 *     zzzLockWindowUpdate2 @ 0x1C0121EF4 (zzzLockWindowUpdate2.c)
 *     SetHungFlag @ 0x1C012635C (SetHungFlag.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C01282BC (IsWindowUnderActiveLockScreen.c)
 *     xxxRedrawHungWindowFrame @ 0x1C0152ED0 (xxxRedrawHungWindowFrame.c)
 *     zzzActiveCursorTracking @ 0x1C01D9000 (zzzActiveCursorTracking.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0226358 (-IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetForegroundWindow2(LARGE_INTEGER *a1, __int64 a2, unsigned __int8 a3, unsigned int a4)
{
  int v4; // r13d
  char v5; // r11
  __int64 v6; // r10
  unsigned int v8; // r15d
  unsigned int v9; // r12d
  __int64 v10; // rsi
  LARGE_INTEGER v11; // rcx
  struct tagWND *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // r14
  __int64 v17; // rdx
  __int64 *v18; // rbx
  __int64 v19; // rax
  int v20; // r12d
  __int64 v21; // r15
  __int64 v22; // r14
  __int64 v23; // rax
  LARGE_INTEGER *v24; // r13
  LARGE_INTEGER *v25; // r13
  BOOL v26; // r15d
  struct tagPOINT v27; // rbx
  HANDLE ThreadId; // r9
  __int64 v29; // r14
  __int64 v30; // rbx
  int v31; // eax
  LARGE_INTEGER v32; // r12
  DWORD v33; // r15d
  struct tagPOINT v34; // rbx
  unsigned int v35; // eax
  LARGE_INTEGER v36; // r9
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned int v40; // ebx
  int v42; // r12d
  unsigned int v43; // eax
  unsigned int v44; // eax
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // r9
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 QuadPart; // [rsp+88h] [rbp-80h]
  DWORD v56[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v57; // [rsp+98h] [rbp-70h]
  __int64 v58; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v59; // [rsp+A8h] [rbp-60h]
  _BYTE v60[24]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v61[24]; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v62[96]; // [rsp+E8h] [rbp-20h] BYREF

  v4 = 0;
  v56[0] = 0;
  v5 = 1;
  v56[1] = 4;
  v6 = a2;
  v57 = gptiCurrent;
  v8 = 0;
  v9 = 0;
  if ( a1
    && (a1[3].QuadPart != grpdeskRitInput
     || (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)a1->LowPart + gSharedInfo[1] + 17LL) & 1) != 0
     || (unsigned int)IsWindowUnderActiveLockScreen(a1)) )
  {
    return 0LL;
  }
  if ( v6 )
  {
    LockW32Thread(v6, v62);
    v5 = 1;
  }
  gppiLockSFW = 0LL;
  v10 = gptiForeground;
  if ( !gptiForeground || ((unsigned __int8)*(_DWORD *)(gptiForeground + 440LL) & (unsigned __int8)v5) != 0 )
    v10 = 0LL;
  else
    LockW32Thread(gptiForeground, v61);
  gpqForegroundPrev = gpqForeground;
  if ( a1 )
  {
    QuadPart = a1[2].QuadPart;
    SetNewForegroundQueue(*(_QWORD *)(QuadPart + 384));
    LockW32Thread(QuadPart, v60);
    v11 = a1[2];
    v12 = (struct tagWND *)a1;
  }
  else
  {
    QuadPart = 0LL;
    SetNewForegroundQueue(0LL);
    v12 = 0LL;
    v11.QuadPart = 0LL;
  }
  ((void (__fastcall *)(_QWORD, _QWORD))xxxSetForegroundThreadWithWindowHint)((LARGE_INTEGER)v11.QuadPart, v12);
  v16 = (__int64 *)gpqForegroundPrev;
  v17 = 0xFFFFFFFFLL;
  v18 = (__int64 *)gpqForeground;
  if ( (a3 & 0x20) == 0 )
  {
    if ( gpqForeground )
    {
      v8 = *(_DWORD *)(gpqForeground + 380LL);
      v4 = *(_DWORD *)(gpqForeground + 384LL);
    }
    if ( gpqForegroundPrev )
    {
      v9 = *(_DWORD *)(gpqForegroundPrev + 380LL);
      v13 = *(unsigned int *)(gpqForegroundPrev + 384LL);
    }
    else
    {
      v13 = 0LL;
    }
    if ( gbEnforceUIPI && v8 <= v9 && (v8 != v9 || v4 != (_DWORD)v13 && v4 != -1 && (_DWORD)v13 != -1) )
    {
      ClearKeyboardToggleStates();
      UpdateKeyStateFlag();
    }
  }
  if ( gpqForeground )
  {
    if ( gpqForeground != gpqForegroundPrev )
    {
      if ( *(_QWORD *)(gpqForeground + 80LL) )
      {
        v13 = HIDWORD(gpdwCPUserPreferencesMask);
        if ( (v13 & 0x80u) == 0LL )
        {
          xxxApplyGlobalInputSettings(0LL);
          v16 = (__int64 *)gpqForegroundPrev;
          v18 = (__int64 *)gpqForeground;
        }
      }
    }
  }
  v19 = *v16;
  if ( *v18 != *v16 )
  {
    if ( v19 )
    {
      v17 = *(_QWORD *)(v19 + 80);
      if ( v17 )
      {
        xxxWindowEvent(0x80000003, (__int64 *)v17, 0, 0, 49);
        v18 = (__int64 *)gpqForeground;
      }
    }
    v20 = a3 & 8;
    if ( (a3 & 8) == 0 )
    {
      v17 = *v18;
      if ( *v18 )
      {
        v17 = *(_QWORD *)(v17 + 80);
        if ( v17 )
        {
          v47 = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 392LL);
          if ( v47 )
            v48 = *(_QWORD *)(v47 + 40);
          else
            LODWORD(v48) = 0;
          xxxWindowEvent(0x80000002, (__int64 *)v17, v48, 0, 33);
        }
      }
    }
    v21 = a2;
    if ( a2 )
    {
      xxxCancelTracking(v13, v17);
      zzzClipCursorEx(0LL, 0);
      zzzLockWindowUpdate2(0LL);
      xxxMakeWindowForegroundWithState(0LL, 0);
    }
    v22 = 0LL;
    if ( v10 && (*(_DWORD *)(v10 + 440) & 1) == 0 )
      v22 = *(_QWORD *)(v10 + 384);
    v23 = 0LL;
    if ( a2 )
      v23 = *(_QWORD *)(a2 + 384);
    v24 = 0LL;
    if ( v22 && v22 != v23 )
    {
      v25 = (LARGE_INTEGER *)AllocQEntry(v22);
      if ( !v25 )
        goto LABEL_127;
      v26 = 0;
      if ( a1 && (unsigned int)CoreWindowProp::IsComponent((struct tagWND *)a1) )
        v26 = CoreWindowProp::IsHostThreadOf((struct tagTHREADINFO *)v10, (struct tagWND *)a1) != 0;
      v27 = LogicalQmsgCursorPos(0LL, v22, v14);
      if ( gptiForeground )
        ThreadId = PsGetThreadId((PETHREAD)*gptiForeground);
      else
        ThreadId = 0LL;
      StoreQMessage(
        v25,
        0LL,
        0,
        (LARGE_INTEGER)ThreadId,
        0LL,
        0,
        0LL,
        5u,
        (LARGE_INTEGER)v26,
        0,
        v56,
        *(_QWORD *)&v27,
        0LL,
        0LL);
      if ( v10 )
      {
        v25[13].QuadPart = v10;
        SetWakeBit(v10, 8256LL, v14);
      }
      if ( *(_QWORD *)(v22 + 88) )
      {
        if ( v10 && (unsigned int)IsThreadHung((_QWORD *)v10, 0) )
        {
          v59 = *(_QWORD *)(v22 + 88);
          v50 = v59;
          v58 = *(_QWORD *)(v57 + 368);
          *(_QWORD *)(v57 + 368) = &v58;
          ++*(_DWORD *)(v50 + 8);
          xxxRedrawHungWindowFrame(*(_QWORD *)(v22 + 88));
          ThreadUnlock1(v52, v51);
        }
        else
        {
          SetHungFlag(*(struct tagWND **)(v22 + 88));
        }
      }
      v21 = a2;
      v20 = a3 & 8;
      v24 = 0LL;
    }
    v29 = 0LL;
    if ( QuadPart && (*(_DWORD *)(QuadPart + 440) & 1) == 0 )
      v29 = *(_QWORD *)(QuadPart + 384);
    v30 = 0LL;
    if ( v21 )
      v30 = *(_QWORD *)(v21 + 384);
    if ( !v29 )
    {
LABEL_75:
      v38 = 0LL;
      if ( v10 && (*(_DWORD *)(v10 + 440) & 1) == 0 )
        v38 = *(_QWORD *)(v10 + 384);
      v39 = 0LL;
      if ( v21 )
        v39 = *(_QWORD *)(v21 + 384);
      if ( v38 && v38 == v39 )
      {
        if ( a1 )
          v44 = (unsigned int)PsGetThreadId(*(PETHREAD *)a1[2].QuadPart);
        else
          v44 = 0;
        xxxDeactivate(v21, v44, 0LL, v15);
      }
      goto LABEL_82;
    }
    if ( v29 == v30 || (v24 = (LARGE_INTEGER *)AllocQEntry(v29)) != 0LL )
    {
      v31 = RemoveEventMessage((struct tagQ *)v29, 5, -1);
      if ( v29 == v30 )
      {
        if ( a1 == *(LARGE_INTEGER **)(v30 + 88) )
        {
          if ( a1 )
            v49 = a1->QuadPart;
          else
            v49 = 0LL;
          xxxSendMessage((struct tagWND *)a1, 0x86u, 1uLL, v49);
          xxxUpdateTray((struct tagWND *)a1);
          if ( (a3 & 4) == 0 )
            xxxSetWindowPosAndBand((struct tagWND *)a1, 0, 0, 3, 0);
        }
        else if ( (a3 & 1) == 0 )
        {
          v42 = -v20;
          if ( v10 )
            v43 = (unsigned int)PsGetThreadId(*(PETHREAD *)v10);
          else
            v43 = 0;
          v40 = xxxActivateThisWindow((struct tagWND *)a1, v43, v42 == 0 ? 2 : 0, 0);
          if ( v40 )
          {
            v17 = (unsigned int)gpdwCPUserPreferencesMask;
            if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
              zzzActiveCursorTracking(a1);
          }
          goto LABEL_83;
        }
      }
      else
      {
        if ( (v30 || (a3 & 2) != 0) && a1 )
          v32 = *a1;
        else
          v32.QuadPart = 0LL;
        if ( v31 )
          *(_DWORD *)(v29 + 340) |= 0x8000u;
        v33 = (a3 >> 4) & 1;
        if ( (a3 & 4) != 0 )
          v33 |= 2u;
        v34 = LogicalQmsgCursorPos(0LL, v29, v14);
        if ( (a3 & 1) != 0 )
        {
          v36.QuadPart = 0LL;
        }
        else
        {
          if ( v10 )
            v35 = (unsigned int)PsGetThreadId(*(PETHREAD *)v10);
          else
            v35 = 0;
          v36.QuadPart = v35;
        }
        StoreQMessage(v24, 0LL, v33, v36, v32, 0, 0LL, 6u, (LARGE_INTEGER)a4, 0, v56, *(_QWORD *)&v34, 0LL, 0LL);
        v24[13].QuadPart = QuadPart;
        SetWakeBit(QuadPart, 8256LL, v37);
        if ( *(_QWORD *)(v29 + 88) )
        {
          v45 = IsThreadHung((_QWORD *)QuadPart, 0);
          v46 = *(_QWORD *)(v29 + 88);
          if ( v45 )
          {
            v59 = *(_QWORD *)(v29 + 88);
            v58 = *(_QWORD *)(v57 + 368);
            *(_QWORD *)(v57 + 368) = &v58;
            ++*(_DWORD *)(v46 + 8);
            xxxRedrawHungWindowFrame(*(_QWORD *)(v29 + 88));
            ThreadUnlock1(v54, v53);
          }
          else
          {
            SetHungFlag((struct tagWND *)v46);
          }
        }
        v21 = a2;
      }
      goto LABEL_75;
    }
LABEL_127:
    v40 = 0;
    goto LABEL_83;
  }
  v21 = a2;
LABEL_82:
  v40 = 1;
LABEL_83:
  if ( QuadPart )
    PopAndFreeW32ThreadLock((__int64)v60, v17, v14, v15);
  if ( v10 )
    PopAndFreeW32ThreadLock((__int64)v61, v17, v14, v15);
  if ( v21 )
    PopAndFreeW32ThreadLock((__int64)v62, v17, v14, v15);
  return v40;
}
