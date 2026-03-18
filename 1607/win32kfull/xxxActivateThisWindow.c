/*
 * XREFs of xxxActivateThisWindow @ 0x1C009BBAC
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 *     xxxSetFocus @ 0x1C00A8300 (xxxSetFocus.c)
 *     xxxActivateWindow @ 0x1C00AB2EC (xxxActivateWindow.c)
 *     xxxMNCloseHierarchy @ 0x1C013CBF0 (xxxMNCloseHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     xxxMNEndMenuStateInternal @ 0x1C0141310 (xxxMNEndMenuStateInternal.c)
 *     xxxActiveWindowTracking @ 0x1C01D8EBC (xxxActiveWindowTracking.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     PopW32ThreadLock @ 0x1C006FA40 (PopW32ThreadLock.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     _GetTopLevelWindow @ 0x1C0075DF0 (_GetTopLevelWindow.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     xxxInternalEnumWindow @ 0x1C0099400 (xxxInternalEnumWindow.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0099824 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C0099858 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     xxxUpdateTray @ 0x1C009C3D0 (xxxUpdateTray.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C009C580 (xxxMakeWindowForegroundWithState.c)
 *     ?RemoveEventMessage@@YAHPEAUtagQ@@KK@Z @ 0x1C009C734 (-RemoveEventMessage@@YAHPEAUtagQ@@KK@Z.c)
 *     LockW32Thread @ 0x1C009E9CC (LockW32Thread.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 *     xxxSetWindowPos @ 0x1C00A5850 (xxxSetWindowPos.c)
 *     SetForegroundPriority @ 0x1C00A8060 (SetForegroundPriority.c)
 *     xxxSendFocusMessages @ 0x1C00A85CC (xxxSendFocusMessages.c)
 *     GetNonChildAncestor @ 0x1C00A8D2C (GetNonChildAncestor.c)
 *     xxxSendNotifyMessage @ 0x1C00AA4C0 (xxxSendNotifyMessage.c)
 *     IsVisible @ 0x1C00AE7B0 (IsVisible.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C02262CC (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     ?SetFocusDirection@CoreWindowProp@@SAHPEAUtagWND@@W4FOCUSDIRECTION@@@Z @ 0x1C022639C (-SetFocusDirection@CoreWindowProp@@SAHPEAUtagWND@@W4FOCUSDIRECTION@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxActivateThisWindow(struct tagWND *a1, unsigned int a2, char a3, int a4)
{
  unsigned int v4; // ebx
  int v7; // r13d
  __int64 v8; // r10
  int v9; // r11d
  __int64 v10; // rcx
  struct tagWND *v11; // r15
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // rdx
  struct tagWND *v18; // r8
  __int64 v19; // r14
  __int64 i; // r8
  char v21; // r15
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
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  char v43; // al
  unsigned __int64 v44; // r13
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r15
  struct _KTHREAD *v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 Prop; // rax
  int v58; // eax
  struct tagWND *Host; // rax
  __int64 TopLevelWindow; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int ThreadId; // [rsp+48h] [rbp-B8h]
  unsigned int v66; // [rsp+4Ch] [rbp-B4h]
  int v67; // [rsp+50h] [rbp-B0h]
  int v68; // [rsp+54h] [rbp-ACh]
  int v69; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v70; // [rsp+60h] [rbp-A0h]
  __int64 v71; // [rsp+68h] [rbp-98h] BYREF
  __int64 v72; // [rsp+70h] [rbp-90h]
  __int64 v73; // [rsp+80h] [rbp-80h] BYREF
  __int64 v74; // [rsp+88h] [rbp-78h]
  _QWORD v75[3]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v76[3]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v77[24]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v78[12]; // [rsp+E0h] [rbp-20h] BYREF
  int v79; // [rsp+150h] [rbp+50h]
  BOOL v81; // [rsp+160h] [rbp+60h]

  v4 = 0;
  v79 = a3 & 1;
  v68 = a3 & 2;
  v81 = 0;
  if ( a4 > 0
    && ((Prop = GetProp((__int64)a1, CoreWindowProp::s_atom, 1LL)) != 0 && *(_DWORD *)(Prop + 16)
     || (unsigned int)CoreWindowProp::IsComponent(a1)) )
  {
    v81 = 1;
  }
  v7 = a3 & 4;
  v67 = v7;
  if ( !a1 )
    return 0LL;
  v64 = *(_QWORD *)a1;
  if ( a1 == (struct tagWND *)GetDesktopWindow((__int64)a1) )
    return 0LL;
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v8 + gSharedInfo[1] + 17LL) & 1) != 0 )
    return 0LL;
  v10 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL) != v10 )
    return 0LL;
  v11 = *(struct tagWND **)(v10 + 88);
  if ( a1 == v11 || (*((_BYTE *)a1 + 42) & 0x10) != 0 )
  {
    *(_DWORD *)(v10 + 340) &= ~0x8000u;
    if ( (*(_DWORD *)(gpsi + 8684LL) & 1) != 0 && xxxSendMessage(a1, 0x30Fu, 0LL, 0LL) )
      xxxSendNotifyMessage(-1LL, 784LL, *(_QWORD *)a1, 0LL, 1);
    goto LABEL_73;
  }
  v69 = v9;
  if ( v11 )
    v70 = *(_QWORD *)v11;
  else
    v70 = 0LL;
  if ( ((*(_BYTE *)(gptiCurrent + 600LL) | *(_BYTE *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x40) != 0
    && (unsigned int)xxxCallHook(5LL, v8, &v69, 5LL) )
  {
    return 0LL;
  }
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL) &= ~0x8000u;
  v12 = *(_QWORD *)(gptiCurrent + 384LL);
  v13 = v12 + 88;
  v14 = *(_QWORD *)(v12 + 88);
  if ( v14 && *(char *)(v14 + 43) < 0 )
    v14 = 0LL;
  else
    v13 = v12 + 96;
  HMAssignmentLock(v13, v14);
  v15 = *(_QWORD *)(gptiCurrent + 384LL);
  v16 = *(_QWORD *)(v15 + 88);
  if ( v16 )
  {
    if ( v15 == gpqForeground )
      gpqForegroundPrev = *(_QWORD *)(gptiCurrent + 384LL);
    v73 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v73;
    v74 = v16;
    v43 = *(_BYTE *)(v16 + 55);
    ++*(_DWORD *)(v16 + 8);
    v44 = (unsigned __int8)(v43 & 0x20) << 16;
    if ( !xxxSendMessage((struct tagWND *)v16, 0x86u, v44, *(_QWORD *)a1) )
    {
      ThreadUnlock1(v46, v45);
      return 0LL;
    }
    xxxSendMessage((struct tagWND *)v16, 6u, v44, *(_QWORD *)a1);
    ThreadUnlock1(v48, v47);
    v7 = v67;
  }
  v17 = *(_QWORD *)(gptiCurrent + 384LL);
  v18 = *(struct tagWND **)(v17 + 88);
  if ( *(struct tagWND **)(v17 + 96) == v18
    && v11 == v18
    && (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 17LL) & 1) == 0
    && *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL) == v17 )
  {
    if ( !v18 )
      *(_DWORD *)(v17 + 340) &= ~0x800u;
    HMAssignmentLock(*(_QWORD *)(gptiCurrent + 384LL) + 88LL, a1);
    SetOrClrWF(1, a1, 0x210u, 1);
    PushW32ThreadLock(v64, v78, ClearWFBeingActivated);
    xxxWindowEvent(3u, (__int64 *)a1, 0, 0, 1);
    RemoveEventMessage(*(struct tagQ **)(gptiCurrent + 384LL), 6u, 5u);
    xxxMakeWindowForegroundWithState(0LL, 0LL);
    v19 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 96LL);
    v75[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v75;
    v75[1] = v19;
    if ( v19 )
      ++*(_DWORD *)(v19 + 8);
    if ( (*(_DWORD *)(gpsi + 8684LL) & 1) != 0 && xxxSendMessage(a1, 0x30Fu, 0LL, 0LL) )
      xxxSendNotifyMessage(-1LL, 784LL, *(_QWORD *)a1, 0LL, 1);
    if ( (a3 & 8) == 0 && (*((_BYTE *)a1 + 55) & 0x40) == 0 )
    {
      for ( i = *(_QWORD *)(GetDesktopWindow((__int64)a1) + 96);
            i && (*(_BYTE *)(i + 55) & 0x10) == 0;
            i = *(_QWORD *)(i + 72) )
      {
        ;
      }
      if ( (a1 != (struct tagWND *)i || v19 && (v58 = IsVisible(v19)) == 0)
        && (!v7 || gpqForeground == *(_QWORD *)(gptiCurrent + 384LL)) )
      {
        v21 = 3;
        if ( a1 == (struct tagWND *)i )
          v21 = 19;
        xxxSetWindowPos((_DWORD)a1, 0, 0, 0, 0, 0, v21);
        if ( (unsigned int)CoreWindowProp::IsComponent(a1) )
        {
          Host = CoreWindowProp::GetHost(a1);
          if ( Host )
          {
            TopLevelWindow = GetTopLevelWindow((__int64)Host);
            *(_DWORD *)(*(_QWORD *)(TopLevelWindow + 16) + 440LL) |= 0x20u;
            v76[0] = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = v76;
            v76[1] = TopLevelWindow;
            ++*(_DWORD *)(TopLevelWindow + 8);
            xxxSetWindowPos(TopLevelWindow, 0, 0, 0, 0, 0, 3);
            ThreadUnlock1(v62, v61);
          }
        }
        if ( (v21 & 0x10) == 0 )
          TraceLoggingProcessUsageDataAggregationHelper(a1);
      }
    }
    v22 = 0;
    if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x200) != 0 )
      goto LABEL_42;
    if ( v19 )
    {
      v49 = *(_QWORD *)(v19 + 16);
      if ( v49 == *((_QWORD *)a1 + 2) )
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
        if ( v19 )
          v28 = *(_QWORD *)v19;
        v29 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
        if ( v29 )
          v30 = *(_BYTE *)(v29 + 55) & 0x20;
        else
          v30 = 0;
        xxxSendMessage(a1, 0x86u, (*(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL) == gpqForeground) | (v30 << 16), v28);
        if ( v81 )
          CoreWindowProp::SetFocusDirection(a1, (unsigned int)a4);
        v31 = 0LL;
        v32 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
        if ( v32 )
        {
          if ( v19 )
            v31 = *(_QWORD *)v19;
          v33 = (unsigned __int16)((v79 != 0) + 1) | ((unsigned __int8)(*(_BYTE *)(v32 + 55) & 0x20) << 16);
        }
        else
        {
          if ( v19 )
            v31 = *(_QWORD *)v19;
          v33 = (unsigned __int16)((v79 != 0) + 1);
        }
        xxxSendMessage(a1, 6u, v33, v31);
        if ( v81 )
          CoreWindowProp::SetFocusDirection(a1, 0LL);
        xxxUpdateTray(a1);
        ThreadUnlock1(v35, v34);
        SetOrClrWF(0, a1, 0x101u, 1);
        v37 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
        v73 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v73;
        v74 = v37;
        if ( v37 )
          ++*(_DWORD *)(v37 + 8);
        if ( v68 )
        {
          v37 = *(_QWORD *)(gptiCurrent + 384LL);
          if ( (*(_DWORD *)(v37 + 340) & 0x800) == 0 )
          {
            NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(v37 + 80));
            if ( v36 != NonChildAncestor )
            {
              if ( v36 && (*(_BYTE *)(v36 + 55) & 0x20) != 0 )
                v36 = 0LL;
              xxxSendFocusMessages(gptiCurrent, v36, (unsigned int)a4);
            }
          }
        }
        ThreadUnlock1(v37, v36);
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL) |= 0x40u;
        if ( gppiScreenSaver )
        {
          if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL) != gppiScreenSaver )
          {
            UpdateLastInput(
              (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
             * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
              6LL);
            *(_DWORD *)(gppiScreenSaver + 12LL) &= ~0x400000u;
            v63 = *(_QWORD *)(gppiScreenSaver + 296LL);
            if ( v63 )
              SetForegroundPriority(v63, 1LL);
          }
        }
        else if ( *(_QWORD *)(gptiCurrent + 408LL) == grpdeskRitInput && !gbBlockSendInputResets )
        {
          UpdateLastInput(
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
            6LL);
        }
        if ( v22 )
          *(_DWORD *)(gptiCurrent + 440LL) &= ~0x200u;
        SetOrClrWF(0, a1, 0x210u, 1);
        PopW32ThreadLock(v78, v39, v40, v41);
LABEL_73:
        LOBYTE(v4) = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL) == (_QWORD)a1;
        return v4;
      }
      *(_DWORD *)(v49 + 440) |= 0x200u;
      v50 = (struct _KTHREAD *)*gptiCurrent;
      v64 = v49;
      v66 &= 0xFFFFFFFC;
      ThreadId = (unsigned int)PsGetThreadId(v50);
      LockW32Thread(v49, v77);
      v51 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 24) + 8LL) + 16LL) + 96LL);
      v71 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v71;
      v72 = v51;
      if ( v51 )
        ++*(_DWORD *)(v51 + 8);
      xxxInternalEnumWindow(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 24) + 8LL) + 16LL) + 96LL),
        xxxActivateApp,
        (__int64)&v64,
        2u);
      ThreadUnlock1(v53, v52);
      *(_DWORD *)(v49 + 440) &= ~0x200u;
      PopAndFreeW32ThreadLock((__int64)v77, v54, v55, v56);
    }
    *(_DWORD *)(gptiCurrent + 440LL) |= 0x200u;
    v22 = 1;
    v64 = *((_QWORD *)a1 + 2);
    ThreadId = a2;
    v66 = v66 & 0xFFFFFFFC | 1;
    v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL) + 16LL) + 96LL);
    v71 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v71;
    v72 = v23;
    if ( v23 )
      ++*(_DWORD *)(v23 + 8);
    xxxInternalEnumWindow(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL) + 16LL) + 96LL),
      xxxActivateApp,
      (__int64)&v64,
      2u);
    ThreadUnlock1(v25, v24);
    goto LABEL_42;
  }
  return 0LL;
}
