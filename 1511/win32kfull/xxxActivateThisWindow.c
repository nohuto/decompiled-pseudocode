/*
 * XREFs of xxxActivateThisWindow @ 0x1C008E8B8
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 *     xxxSetFocus @ 0x1C0080BD4 (xxxSetFocus.c)
 *     xxxActivateWindow @ 0x1C008CA64 (xxxActivateWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C008D958 (xxxSetForegroundWindow2.c)
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     xxxMNEndMenuStateInternal @ 0x1C0137890 (xxxMNEndMenuStateInternal.c)
 *     xxxMNCloseHierarchy @ 0x1C0138900 (xxxMNCloseHierarchy.c)
 *     xxxActiveWindowTracking @ 0x1C01E2C7C (xxxActiveWindowTracking.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C004FBD0 (_GetTopLevelWindow.c)
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0064370 (PopAndFreeW32ThreadLock.c)
 *     xxxSetWindowPos @ 0x1C0075840 (xxxSetWindowPos.c)
 *     xxxSendNotifyMessage @ 0x1C0078B80 (xxxSendNotifyMessage.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     xxxSendFocusMessages @ 0x1C0080EB8 (xxxSendFocusMessages.c)
 *     SetForegroundPriority @ 0x1C0081580 (SetForegroundPriority.c)
 *     xxxCallHook @ 0x1C00843C8 (xxxCallHook.c)
 *     LockW32Thread @ 0x1C008E0B4 (LockW32Thread.c)
 *     xxxUpdateTray @ 0x1C008F0B0 (xxxUpdateTray.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C008F264 (xxxMakeWindowForegroundWithState.c)
 *     ?RemoveEventMessage@@YAHPEAUtagQ@@KK@Z @ 0x1C008F6F8 (-RemoveEventMessage@@YAHPEAUtagQ@@KK@Z.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C008F76C (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C008F830 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     GetNonChildAncestor @ 0x1C00905C8 (GetNonChildAncestor.c)
 *     xxxInternalEnumWindow @ 0x1C0090834 (xxxInternalEnumWindow.c)
 *     IsVisible @ 0x1C00CBE50 (IsVisible.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C022651C (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     ?SetFocusDirection@CoreWindowProp@@SAHPEAUtagWND@@W4FOCUSDIRECTION@@@Z @ 0x1C0226680 (-SetFocusDirection@CoreWindowProp@@SAHPEAUtagWND@@W4FOCUSDIRECTION@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxActivateThisWindow(struct tagWND *a1, unsigned int a2, char a3, int a4)
{
  unsigned int v4; // ebx
  int v7; // r13d
  int v8; // r10d
  __int64 v9; // rcx
  struct tagWND *v10; // r15
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rdx
  struct tagWND *v17; // r8
  __int64 v18; // r14
  __int64 i; // r8
  int v20; // r15d
  int v21; // r12d
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  struct tagWND *v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rcx
  unsigned __int16 v29; // ax
  __int64 v30; // r9
  __int64 v31; // rcx
  unsigned __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 NonChildAncestor; // rax
  char v39; // al
  unsigned __int64 v40; // r13
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r15
  struct _KTHREAD *v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 Prop; // rax
  struct tagWND *Host; // rax
  __int64 TopLevelWindow; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // [rsp+40h] [rbp-89h] BYREF
  unsigned int ThreadId; // [rsp+48h] [rbp-81h]
  unsigned int v58; // [rsp+4Ch] [rbp-7Dh]
  int v59; // [rsp+50h] [rbp-79h]
  int v60; // [rsp+54h] [rbp-75h]
  __int64 v61; // [rsp+58h] [rbp-71h] BYREF
  __int64 v62; // [rsp+60h] [rbp-69h]
  int v63; // [rsp+70h] [rbp-59h] BYREF
  __int64 v64; // [rsp+78h] [rbp-51h]
  __int64 v65; // [rsp+80h] [rbp-49h] BYREF
  __int64 v66; // [rsp+88h] [rbp-41h]
  _QWORD v67[3]; // [rsp+98h] [rbp-31h] BYREF
  _QWORD v68[3]; // [rsp+B0h] [rbp-19h] BYREF
  _QWORD v69[11]; // [rsp+C8h] [rbp-1h] BYREF
  BOOL v70; // [rsp+130h] [rbp+67h]
  int v72; // [rsp+140h] [rbp+77h]

  v4 = 0;
  v72 = a3 & 1;
  v59 = a3 & 2;
  v70 = 0;
  if ( a4 > 0
    && ((Prop = GetProp((__int64)a1, CoreWindowProp::s_atom, 1LL)) != 0 && *(_DWORD *)(Prop + 16)
     || (unsigned int)CoreWindowProp::IsComponent(a1)) )
  {
    v70 = 1;
  }
  v7 = a3 & 4;
  v60 = v7;
  if ( !a1 )
    return 0LL;
  if ( a1 == (struct tagWND *)GetDesktopWindow((__int64)a1) )
    return 0LL;
  if ( (*(_BYTE *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)a1
                 + *((_QWORD *)&gSharedInfo + 1)
                 + 17LL) & 1) != 0 )
    return 0LL;
  v9 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL) != v9 )
    return 0LL;
  v10 = *(struct tagWND **)(v9 + 80);
  if ( a1 == v10 || (*((_BYTE *)a1 + 42) & 0x10) != 0 )
  {
    *(_DWORD *)(v9 + 332) &= ~0x8000u;
    if ( (*(_DWORD *)(gpsi + 7292LL) & 1) != 0 && xxxSendMessage(a1, 0x30Fu, 0LL, 0LL) )
      xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x310u, *(_QWORD *)a1, 0LL, 1);
    goto LABEL_72;
  }
  v63 = v8;
  if ( v10 )
    v64 = *(_QWORD *)v10;
  else
    v64 = 0LL;
  if ( ((*(_BYTE *)(gptiCurrent + 600LL) | *(_BYTE *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x40) != 0
    && (unsigned int)xxxCallHook(5u, *(_QWORD *)a1, (__int64)&v63, 5u) )
  {
    return 0LL;
  }
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 332LL) &= ~0x8000u;
  v11 = *(_QWORD *)(gptiCurrent + 384LL);
  v12 = v11 + 80;
  v13 = *(_QWORD *)(v11 + 80);
  if ( v13 && *(char *)(v13 + 43) < 0 )
    v13 = 0LL;
  else
    v12 = v11 + 88;
  HMAssignmentLock(v12, v13);
  v14 = *(_QWORD *)(gptiCurrent + 384LL);
  v15 = *(_QWORD *)(v14 + 80);
  if ( v15 )
  {
    if ( v14 == gpqForeground )
      gpqForegroundPrev = *(_QWORD *)(gptiCurrent + 384LL);
    v65 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v65;
    v66 = v15;
    v39 = *(_BYTE *)(v15 + 55);
    ++*(_DWORD *)(v15 + 8);
    v40 = (unsigned __int8)(v39 & 0x20) << 16;
    if ( !xxxSendMessage((struct tagWND *)v15, 0x86u, v40, *(_QWORD *)a1) )
    {
      ThreadUnlock1(v42, v41);
      return 0LL;
    }
    xxxSendMessage((struct tagWND *)v15, 6u, v40, *(_QWORD *)a1);
    ThreadUnlock1(v44, v43);
    v7 = v60;
  }
  v16 = *(_QWORD *)(gptiCurrent + 384LL);
  v17 = *(struct tagWND **)(v16 + 80);
  if ( v10 == v17
    && *(struct tagWND **)(v16 + 88) == v17
    && (*(_BYTE *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)a1
                 + *((_QWORD *)&gSharedInfo + 1)
                 + 17LL) & 1) == 0
    && *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL) == v16 )
  {
    if ( !v17 )
      *(_DWORD *)(v16 + 332) &= ~0x800u;
    HMAssignmentLock(*(_QWORD *)(gptiCurrent + 384LL) + 80LL, a1);
    SetOrClrWF(1, a1, 0x210u, 1);
    xxxWindowEvent(3u, (__int64 *)a1, 0, 0, 1);
    RemoveEventMessage(*(struct tagQ **)(gptiCurrent + 384LL), 6u, 5u);
    xxxMakeWindowForegroundWithState(0LL, 0LL);
    v18 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
    v67[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v67;
    v67[1] = v18;
    if ( v18 )
      ++*(_DWORD *)(v18 + 8);
    if ( (*(_DWORD *)(gpsi + 7292LL) & 1) != 0 && xxxSendMessage(a1, 0x30Fu, 0LL, 0LL) )
      xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x310u, *(_QWORD *)a1, 0LL, 1);
    if ( (a3 & 8) == 0 && (*((_BYTE *)a1 + 55) & 0x40) == 0 )
    {
      for ( i = *(_QWORD *)(GetDesktopWindow((__int64)a1) + 96);
            i && (*(_BYTE *)(i + 55) & 0x10) == 0;
            i = *(_QWORD *)(i + 72) )
      {
        ;
      }
      if ( (a1 != (struct tagWND *)i || v18 && !(unsigned int)IsVisible(v18))
        && (!v7 || gpqForeground == *(_QWORD *)(gptiCurrent + 384LL)) )
      {
        v20 = 3;
        if ( a1 == (struct tagWND *)i )
          v20 = 19;
        xxxSetWindowPos(a1, 0, 0, 0, 0, 0, v20);
        if ( (unsigned int)CoreWindowProp::IsComponent(a1) )
        {
          Host = CoreWindowProp::GetHost(a1);
          if ( Host )
          {
            TopLevelWindow = GetTopLevelWindow((__int64)Host);
            *(_DWORD *)(*(_QWORD *)(TopLevelWindow + 16) + 440LL) |= 0x20u;
            v68[0] = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = v68;
            v68[1] = TopLevelWindow;
            ++*(_DWORD *)(TopLevelWindow + 8);
            xxxSetWindowPos((struct tagWND *)TopLevelWindow, 0, 0, 0, 0, 0, 3);
            ThreadUnlock1(v54, v53);
          }
        }
        if ( (v20 & 0x10) == 0 )
          TraceLoggingProcessUsageDataAggregationHelper(a1);
      }
    }
    v21 = 0;
    if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x200) != 0 )
      goto LABEL_42;
    if ( v18 )
    {
      v45 = *(_QWORD *)(v18 + 16);
      if ( v45 == *((_QWORD *)a1 + 2) )
      {
LABEL_42:
        if ( (*((_BYTE *)a1 + 40) & 0x40) != 0 )
          SetOrClrWF(1, a1, 0x101u, 1);
        if ( (*(_BYTE *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)a1
                       + *((_QWORD *)&gSharedInfo + 1)
                       + 17LL) & 1) == 0 )
        {
          v25 = *((_QWORD *)a1 + 13);
          v26 = a1;
          while ( v25 )
          {
            v26 = (struct tagWND *)v25;
            v25 = *(_QWORD *)(v25 + 104);
          }
          HMAssignmentLock((char *)v26 + 240, a1);
        }
        v27 = 0LL;
        if ( v18 )
          v27 = *(_QWORD *)v18;
        v28 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL);
        if ( v28 )
          v29 = *(_BYTE *)(v28 + 55) & 0x20;
        else
          v29 = 0;
        xxxSendMessage(a1, 0x86u, (*(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL) == gpqForeground) | (v29 << 16), v27);
        if ( v70 )
          CoreWindowProp::SetFocusDirection(a1, (unsigned int)a4);
        v30 = 0LL;
        v31 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL);
        if ( v31 )
        {
          if ( v18 )
            v30 = *(_QWORD *)v18;
          v32 = (unsigned __int16)((v72 != 0) + 1) | ((unsigned __int8)(*(_BYTE *)(v31 + 55) & 0x20) << 16);
        }
        else
        {
          if ( v18 )
            v30 = *(_QWORD *)v18;
          v32 = (unsigned __int16)((v72 != 0) + 1);
        }
        xxxSendMessage(a1, 6u, v32, v30);
        if ( v70 )
          CoreWindowProp::SetFocusDirection(a1, 0LL);
        xxxUpdateTray(a1);
        ThreadUnlock1(v34, v33);
        SetOrClrWF(0, a1, 0x101u, 1);
        v36 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL);
        v65 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v65;
        v66 = v36;
        if ( v36 )
          ++*(_DWORD *)(v36 + 8);
        if ( v59 )
        {
          v36 = *(_QWORD *)(gptiCurrent + 384LL);
          if ( (*(_DWORD *)(v36 + 332) & 0x800) == 0 )
          {
            NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(v36 + 72));
            if ( v35 != NonChildAncestor )
            {
              if ( v35 && (*(_BYTE *)(v35 + 55) & 0x20) != 0 )
                v35 = 0LL;
              xxxSendFocusMessages(gptiCurrent, (__int64 *)v35, a4);
            }
          }
        }
        ThreadUnlock1(v36, v35);
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 332LL) |= 0x40u;
        if ( gppiScreenSaver )
        {
          if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL) != gppiScreenSaver )
          {
            UpdateLastInput((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24, 6LL);
            *(_DWORD *)(gppiScreenSaver + 12LL) &= ~0x400000u;
            v55 = *(_QWORD *)(gppiScreenSaver + 304LL);
            if ( v55 )
              SetForegroundPriority(v55, 1);
          }
        }
        else if ( *(_QWORD *)(gptiCurrent + 408LL) == grpdeskRitInput && !gbBlockSendInputResets )
        {
          UpdateLastInput((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24, 6LL);
        }
        if ( v21 )
          *(_DWORD *)(gptiCurrent + 440LL) &= ~0x200u;
LABEL_72:
        SetOrClrWF(0, a1, 0x210u, 1);
        LOBYTE(v4) = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL) == (_QWORD)a1;
        return v4;
      }
      *(_DWORD *)(v45 + 440) |= 0x200u;
      v46 = (struct _KTHREAD *)*gptiCurrent;
      v56 = v45;
      v58 &= 0xFFFFFFFC;
      ThreadId = (unsigned int)PsGetThreadId(v46);
      LockW32Thread(v45, v69);
      v47 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 24) + 8LL) + 16LL) + 96LL);
      v61 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v61;
      v62 = v47;
      if ( v47 )
        ++*(_DWORD *)(v47 + 8);
      xxxInternalEnumWindow(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 24) + 8LL) + 16LL) + 96LL),
        xxxActivateApp,
        &v56,
        2LL);
      ThreadUnlock1(v49, v48);
      *(_DWORD *)(v45 + 440) &= ~0x200u;
      PopAndFreeW32ThreadLock((__int64)v69);
    }
    *(_DWORD *)(gptiCurrent + 440LL) |= 0x200u;
    v21 = 1;
    v56 = *((_QWORD *)a1 + 2);
    ThreadId = a2;
    v58 = v58 & 0xFFFFFFFC | 1;
    v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL) + 16LL) + 96LL);
    v61 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v61;
    v62 = v22;
    if ( v22 )
      ++*(_DWORD *)(v22 + 8);
    xxxInternalEnumWindow(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL) + 16LL) + 96LL),
      xxxActivateApp,
      &v56,
      2LL);
    ThreadUnlock1(v24, v23);
    goto LABEL_42;
  }
  return 0LL;
}
