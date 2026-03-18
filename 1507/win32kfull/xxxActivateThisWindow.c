/*
 * XREFs of xxxActivateThisWindow @ 0x1C007F264
 * Callers:
 *     xxxActivateWindow @ 0x1C0044954 (xxxActivateWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     xxxSetFocus @ 0x1C0046624 (xxxSetFocus.c)
 *     xxxProcessEventMessage @ 0x1C0071E4C (xxxProcessEventMessage.c)
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     xxxMNEndMenuStateInternal @ 0x1C010B390 (xxxMNEndMenuStateInternal.c)
 *     xxxMNCloseHierarchy @ 0x1C010CC10 (xxxMNCloseHierarchy.c)
 *     xxxActiveWindowTracking @ 0x1C01E27EC (xxxActiveWindowTracking.c)
 * Callees:
 *     LockW32Thread @ 0x1C00464F8 (LockW32Thread.c)
 *     xxxSendFocusMessages @ 0x1C0046914 (xxxSendFocusMessages.c)
 *     SetForegroundPriority @ 0x1C0046FC0 (SetForegroundPriority.c)
 *     xxxCallHook @ 0x1C004A204 (xxxCallHook.c)
 *     xxxSendNotifyMessage @ 0x1C004DCF0 (xxxSendNotifyMessage.c)
 *     IsVisible @ 0x1C0057870 (IsVisible.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     _GetTopLevelWindow @ 0x1C0062200 (_GetTopLevelWindow.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     xxxInternalEnumWindow @ 0x1C007E7F8 (xxxInternalEnumWindow.c)
 *     xxxUpdateTray @ 0x1C007FA48 (xxxUpdateTray.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C007FBFC (xxxMakeWindowForegroundWithState.c)
 *     ?RemoveEventMessage@@YAHPEAUtagQ@@KK@Z @ 0x1C0080090 (-RemoveEventMessage@@YAHPEAUtagQ@@KK@Z.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C0080104 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0080E4C (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     GetNonChildAncestor @ 0x1C0081140 (GetNonChildAncestor.c)
 *     xxxSetWindowPos @ 0x1C00848B8 (xxxSetWindowPos.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C022615C (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     ?SetFocusDirection@CoreWindowProp@@SAHPEAUtagWND@@W4FOCUSDIRECTION@@@Z @ 0x1C0226214 (-SetFocusDirection@CoreWindowProp@@SAHPEAUtagWND@@W4FOCUSDIRECTION@@@Z.c)
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
  char v20; // r15
  struct tagWND *v21; // rcx
  int v22; // r12d
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  struct tagWND *v27; // rcx
  __int64 v28; // r9
  __int64 v29; // rcx
  unsigned __int16 v30; // ax
  __int64 v31; // r9
  __int64 v32; // rcx
  unsigned __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 NonChildAncestor; // rax
  char v40; // al
  unsigned __int64 v41; // r13
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r15
  struct _KTHREAD *v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 Prop; // rax
  int v52; // eax
  struct tagWND *Host; // rax
  __int64 TopLevelWindow; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // [rsp+40h] [rbp-89h] BYREF
  unsigned int ThreadId; // [rsp+48h] [rbp-81h]
  unsigned int v60; // [rsp+4Ch] [rbp-7Dh]
  int v61; // [rsp+50h] [rbp-79h]
  int v62; // [rsp+54h] [rbp-75h]
  __int64 v63; // [rsp+58h] [rbp-71h] BYREF
  __int64 v64; // [rsp+60h] [rbp-69h]
  int v65; // [rsp+70h] [rbp-59h] BYREF
  __int64 v66; // [rsp+78h] [rbp-51h]
  __int64 v67; // [rsp+80h] [rbp-49h] BYREF
  __int64 v68; // [rsp+88h] [rbp-41h]
  _QWORD v69[3]; // [rsp+98h] [rbp-31h] BYREF
  _QWORD v70[3]; // [rsp+B0h] [rbp-19h] BYREF
  _BYTE v71[88]; // [rsp+C8h] [rbp-1h] BYREF
  BOOL v72; // [rsp+130h] [rbp+67h]
  int v74; // [rsp+140h] [rbp+77h]

  v4 = 0;
  v74 = a3 & 1;
  v61 = a3 & 2;
  v72 = 0;
  if ( a4 > 0
    && ((Prop = GetProp((__int64)a1, CoreWindowProp::s_atom, 1LL)) != 0 && *(_DWORD *)(Prop + 16)
     || (unsigned int)CoreWindowProp::IsComponent(a1)) )
  {
    v72 = 1;
  }
  v7 = a3 & 4;
  v62 = v7;
  if ( !a1 )
    return 0LL;
  if ( a1 == (struct tagWND *)GetDesktopWindow((__int64)a1) )
    return 0LL;
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 17LL) & 1) != 0 )
    return 0LL;
  v9 = *(_QWORD *)(gptiCurrent + 392LL);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 392LL) != v9 )
    return 0LL;
  v10 = *(struct tagWND **)(v9 + 80);
  if ( a1 == v10 || (*((_BYTE *)a1 + 42) & 0x10) != 0 )
  {
    *(_DWORD *)(v9 + 332) &= ~0x8000u;
    if ( (*(_DWORD *)(gpsi + 7292LL) & 1) != 0 && xxxSendMessage(a1, 0x30Fu, 0LL, 0LL) )
      xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x310u, *(_QWORD *)a1, 0LL, 1);
    goto LABEL_72;
  }
  v65 = v8;
  if ( v10 )
    v66 = *(_QWORD *)v10;
  else
    v66 = 0LL;
  if ( ((*(_BYTE *)(gptiCurrent + 608LL) | *(_BYTE *)(*(_QWORD *)(gptiCurrent + 424LL) + 24LL)) & 0x40) != 0
    && (unsigned int)xxxCallHook(5, *(_QWORD *)a1, (__int64)&v65, 5u) )
  {
    return 0LL;
  }
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 332LL) &= ~0x8000u;
  v11 = *(_QWORD *)(gptiCurrent + 392LL);
  v12 = v11 + 80;
  v13 = *(_QWORD *)(v11 + 80);
  if ( v13 && *(char *)(v13 + 43) < 0 )
    v13 = 0LL;
  else
    v12 = v11 + 88;
  HMAssignmentLock(v12, v13);
  v14 = *(_QWORD *)(gptiCurrent + 392LL);
  v15 = *(_QWORD *)(v14 + 80);
  if ( v15 )
  {
    if ( v14 == gpqForeground )
      gpqForegroundPrev = *(_QWORD *)(gptiCurrent + 392LL);
    v67 = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = &v67;
    v68 = v15;
    v40 = *(_BYTE *)(v15 + 55);
    ++*(_DWORD *)(v15 + 8);
    v41 = (unsigned __int8)(v40 & 0x20) << 16;
    if ( !xxxSendMessage((struct tagWND *)v15, 0x86u, v41, *(_QWORD *)a1) )
    {
      ThreadUnlock1(v43, v42);
      return 0LL;
    }
    xxxSendMessage((struct tagWND *)v15, 6u, v41, *(_QWORD *)a1);
    ThreadUnlock1(v45, v44);
    v7 = v62;
  }
  v16 = *(_QWORD *)(gptiCurrent + 392LL);
  v17 = *(struct tagWND **)(v16 + 80);
  if ( v10 == v17
    && *(struct tagWND **)(v16 + 88) == v17
    && (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 17LL) & 1) == 0
    && *(_QWORD *)(*((_QWORD *)a1 + 2) + 392LL) == v16 )
  {
    if ( !v17 )
      *(_DWORD *)(v16 + 332) &= ~0x800u;
    HMAssignmentLock(*(_QWORD *)(gptiCurrent + 392LL) + 80LL, a1);
    SetOrClrWF(1, a1, 0x210u, 1);
    xxxWindowEvent(3u, (__int64 *)a1, 0, 0, 1);
    RemoveEventMessage(*(struct tagQ **)(gptiCurrent + 392LL), 6u, 5u);
    xxxMakeWindowForegroundWithState(0LL, 0LL);
    v18 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 88LL);
    v69[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v69;
    v69[1] = v18;
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
      if ( (a1 != (struct tagWND *)i || v18 && (v52 = IsVisible(v18)) == 0)
        && (!v7 || gpqForeground == *(_QWORD *)(gptiCurrent + 392LL)) )
      {
        v20 = 3;
        if ( a1 == (struct tagWND *)i )
          v20 = 19;
        xxxSetWindowPos((_DWORD)a1, 0, 0, 0, 0, 0, v20);
        if ( (unsigned int)CoreWindowProp::IsComponent(a1) )
        {
          Host = CoreWindowProp::GetHost(v21);
          if ( Host )
          {
            TopLevelWindow = GetTopLevelWindow((__int64)Host);
            *(_DWORD *)(*(_QWORD *)(TopLevelWindow + 16) + 448LL) |= 0x20u;
            v70[0] = *(_QWORD *)(gptiCurrent + 376LL);
            *(_QWORD *)(gptiCurrent + 376LL) = v70;
            v70[1] = TopLevelWindow;
            ++*(_DWORD *)(TopLevelWindow + 8);
            xxxSetWindowPos(TopLevelWindow, 0, 0, 0, 0, 0, 3);
            ThreadUnlock1(v56, v55);
          }
        }
        if ( (v20 & 0x10) == 0 )
          TraceLoggingProcessUsageDataAggregationHelper(a1);
      }
    }
    v22 = 0;
    if ( (*(_DWORD *)(gptiCurrent + 448LL) & 0x200) != 0 )
      goto LABEL_42;
    if ( v18 )
    {
      v46 = *(_QWORD *)(v18 + 16);
      if ( v46 == *((_QWORD *)a1 + 2) )
      {
LABEL_42:
        if ( (*((_BYTE *)a1 + 40) & 0x40) != 0 )
          SetOrClrWF(1, a1, 0x101u, 1);
        if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 17LL) & 1) == 0 )
        {
          v26 = *((_QWORD *)a1 + 13);
          v27 = a1;
          while ( v26 )
          {
            v27 = (struct tagWND *)v26;
            v26 = *(_QWORD *)(v26 + 104);
          }
          HMAssignmentLock((char *)v27 + 240, a1);
        }
        v28 = 0LL;
        if ( v18 )
          v28 = *(_QWORD *)v18;
        v29 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 80LL);
        if ( v29 )
          v30 = *(_BYTE *)(v29 + 55) & 0x20;
        else
          v30 = 0;
        xxxSendMessage(a1, 0x86u, (*(_QWORD *)(*((_QWORD *)a1 + 2) + 392LL) == gpqForeground) | (v30 << 16), v28);
        if ( v72 )
          CoreWindowProp::SetFocusDirection(a1, (unsigned int)a4);
        v31 = 0LL;
        v32 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 80LL);
        if ( v32 )
        {
          if ( v18 )
            v31 = *(_QWORD *)v18;
          v33 = (unsigned __int16)((v74 != 0) + 1) | ((unsigned __int8)(*(_BYTE *)(v32 + 55) & 0x20) << 16);
        }
        else
        {
          if ( v18 )
            v31 = *(_QWORD *)v18;
          v33 = (unsigned __int16)((v74 != 0) + 1);
        }
        xxxSendMessage(a1, 6u, v33, v31);
        if ( v72 )
          CoreWindowProp::SetFocusDirection(a1, 0LL);
        xxxUpdateTray(a1);
        ThreadUnlock1(v35, v34);
        SetOrClrWF(0, a1, 0x101u, 1);
        v37 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 80LL);
        v67 = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = &v67;
        v68 = v37;
        if ( v37 )
          ++*(_DWORD *)(v37 + 8);
        if ( v61 )
        {
          v37 = *(_QWORD *)(gptiCurrent + 392LL);
          if ( (*(_DWORD *)(v37 + 332) & 0x800) == 0 )
          {
            NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(v37 + 72));
            if ( v36 != NonChildAncestor )
            {
              if ( v36 && (*(_BYTE *)(v36 + 55) & 0x20) != 0 )
                v36 = 0LL;
              xxxSendFocusMessages(gptiCurrent, (_QWORD *)v36, a4);
            }
          }
        }
        ThreadUnlock1(v37, v36);
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 332LL) |= 0x40u;
        if ( gppiScreenSaver )
        {
          if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL) != gppiScreenSaver )
          {
            UpdateLastInput(
              (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
             * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
              6LL);
            *(_DWORD *)(gppiScreenSaver + 12LL) &= ~0x400000u;
            v57 = *(_QWORD *)(gppiScreenSaver + 304LL);
            if ( v57 )
              SetForegroundPriority(v57, 1);
          }
        }
        else if ( *(_QWORD *)(gptiCurrent + 416LL) == grpdeskRitInput && !gbBlockSendInputResets )
        {
          UpdateLastInput(
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
            6LL);
        }
        if ( v22 )
          *(_DWORD *)(gptiCurrent + 448LL) &= ~0x200u;
LABEL_72:
        SetOrClrWF(0, a1, 0x210u, 1);
        LOBYTE(v4) = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 80LL) == (_QWORD)a1;
        return v4;
      }
      *(_DWORD *)(v46 + 448) |= 0x200u;
      v47 = (struct _KTHREAD *)*gptiCurrent;
      v58 = v46;
      v60 &= 0xFFFFFFFC;
      ThreadId = (unsigned int)PsGetThreadId(v47);
      LockW32Thread(v46, (__int64)v71);
      v48 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 24) + 8LL) + 16LL) + 96LL);
      v63 = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = &v63;
      v64 = v48;
      if ( v48 )
        ++*(_DWORD *)(v48 + 8);
      xxxInternalEnumWindow(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 24) + 8LL) + 16LL) + 96LL),
        (__int64 (__fastcall *)(__int64, __int64))xxxActivateApp,
        (__int64)&v58,
        2);
      ThreadUnlock1(v50, v49);
      *(_DWORD *)(v46 + 448) &= ~0x200u;
      PopAndFreeW32ThreadLock(v71);
    }
    *(_DWORD *)(gptiCurrent + 448LL) |= 0x200u;
    v22 = 1;
    v58 = *((_QWORD *)a1 + 2);
    ThreadId = a2;
    v60 = v60 & 0xFFFFFFFC | 1;
    v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 8LL) + 16LL) + 96LL);
    v63 = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = &v63;
    v64 = v23;
    if ( v23 )
      ++*(_DWORD *)(v23 + 8);
    xxxInternalEnumWindow(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 8LL) + 16LL) + 96LL),
      (__int64 (__fastcall *)(__int64, __int64))xxxActivateApp,
      (__int64)&v58,
      2);
    ThreadUnlock1(v25, v24);
    goto LABEL_42;
  }
  return 0LL;
}
