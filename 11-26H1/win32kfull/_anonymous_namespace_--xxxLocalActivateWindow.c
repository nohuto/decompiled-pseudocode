/*
 * XREFs of _anonymous_namespace_::xxxLocalActivateWindow @ 0x140193984
 * Callers:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x14012B3C8 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x140191B8C (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x14019F168 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x140271A30 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x140271C80 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x14029D8E8 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     xxxSendNotifyMessage @ 0x140044970 (xxxSendNotifyMessage.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     IsVisible @ 0x140128400 (IsVisible.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x14012A150 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     ??0Win32RawLockedW32Thread@@QEAA@PEAU_W32THREAD@@@Z @ 0x140153F80 (--0Win32RawLockedW32Thread@@QEAA@PEAU_W32THREAD@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x140153FF4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x1401665A0 (-UnlockWorker@-$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     GetNonChildAncestor @ 0x14017A1F0 (GetNonChildAncestor.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x140191A34 (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1401A1A20 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     ??$ManualLock@X@?$Win32RawLockedItemBase@G$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEAX@Z@Z @ 0x1401DABA8 (--$ManualLock@X@-$Win32RawLockedItemBase@G$1-Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEA.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAU_HEAD@@@Z @ 0x1401F1D14 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     _anonymous_namespace_::xxxUpdateTray @ 0x1401FD9F8 (_anonymous_namespace_--xxxUpdateTray.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x140203E2C (_anonymous_namespace_--RemoveEventMessage.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1402060B0 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@X$0A@$0A@$00$00@@AEAAX_N0@Z @ 0x14020DB9C (-UnlockWorker@-$Win32RawLockedItemBase@X$0A@$0A@$00$00@@AEAAX_N0@Z.c)
 *     ?xxxInterceptActivate@WindowActions@@YAXPEAUtagWND@@_N1@Z @ 0x1402688C8 (-xxxInterceptActivate@WindowActions@@YAXPEAUtagWND@@_N1@Z.c)
 *     _anonymous_namespace_::OnForegroundWindowChanged @ 0x14026D3B8 (_anonymous_namespace_--OnForegroundWindowChanged.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     DwmAsyncNotifyForegroundChange @ 0x1402957B0 (DwmAsyncNotifyForegroundChange.c)
 */

bool __fastcall anonymous_namespace_::xxxLocalActivateWindow(struct tagWND *a1, int a2, __int16 a3)
{
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // r13
  __int64 v7; // r14
  char v8; // r15
  bool v9; // r8
  BOOL v10; // r9d
  unsigned __int8 v11; // r10
  __int64 v13; // rcx
  bool v14; // di
  struct tagWND *v15; // rdx
  struct tagWND *v16; // r12
  struct MOVESIZEDATA **v17; // rdx
  __int64 v18; // rax
  tagQ *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct tagWND *v23; // r15
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbx
  char v28; // r15
  __int64 v29; // rcx
  struct tagWND *v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r12
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  struct tagWND *i; // rbx
  int v41; // eax
  int v42; // ebx
  int v43; // r15d
  __int64 v44; // rbx
  struct _KTHREAD *v45; // rcx
  char v46; // r13
  struct tagWND *j; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 NonChildAncestor; // rax
  __int64 v51; // r9
  ULONG_PTR *v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rdx
  struct MOVESIZEDATA *v71; // rcx
  bool v72; // r12
  __int64 UserSessionState; // rax
  int v74; // edx
  int v75; // r8d
  struct tagWND *v76; // r12
  struct MOVESIZEDATA *v77; // rcx
  bool v78; // r13
  __int64 v79; // rbx
  __int64 v80; // rax
  int v81; // r8d
  int v82; // edx
  __int64 v83; // r9
  const char *v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rcx
  void *v89; // rax
  __int16 v90; // [rsp+30h] [rbp-89h]
  char v91; // [rsp+40h] [rbp-79h]
  __int128 v92; // [rsp+50h] [rbp-69h] BYREF
  int v93; // [rsp+60h] [rbp-59h]
  int v94; // [rsp+64h] [rbp-55h]
  int v95; // [rsp+68h] [rbp-51h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+70h] [rbp-49h] BYREF
  __int64 v97; // [rsp+80h] [rbp-39h]
  __int64 v98[2]; // [rsp+88h] [rbp-31h] BYREF
  ULONG_PTR v99[2]; // [rsp+98h] [rbp-21h] BYREF
  ULONG_PTR v100[3]; // [rsp+A8h] [rbp-11h] BYREF
  ULONG_PTR BugCheckParameter3[10]; // [rsp+C0h] [rbp+7h] BYREF
  int v104; // [rsp+138h] [rbp+7Fh]

  v97 = -1LL;
  v100[2] = 0LL;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v5 = PtiCurrent((__int64)a1);
  v6 = *(_QWORD *)a1;
  v7 = (__int64)v5;
  v8 = 1;
  v95 = a3 & 0x80;
  v94 = a3 & 1;
  v93 = a3 & 4;
  v104 = a3 & 2;
  if ( a1 == (struct tagWND *)GetDesktopWindow((__int64)a1) )
    return 0;
  v13 = *((_QWORD *)a1 + 5);
  v14 = 0;
  if ( *(char *)(v13 + 19) < 0 )
  {
    Win32RawLockedItemBase<void,0,0,1,1>::UnlockWorker((ULONG_PTR)BugCheckParameter2);
    return 0;
  }
  v15 = *(struct tagWND **)(v7 + 464);
  if ( *(struct tagWND **)(*((_QWORD *)a1 + 2) + 464LL) == v15 )
  {
    if ( (a3 & 0x100) == 0 && (*((_DWORD *)a1 + 96) & 0x10) != 0 )
    {
      LOBYTE(v15) = v10;
      WindowActions::xxxInterceptActivate(a1, v15, v9, v10);
      v14 = 1;
      goto LABEL_119;
    }
    v16 = (struct tagWND *)*((_QWORD *)v15 + 16);
    v17 = &WPP_GLOBAL_Control;
    if ( a1 == v16 )
    {
      if ( (*(_BYTE *)(v13 + 18) & 0x10) == 0 )
      {
        v71 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || ((unsigned __int8)*((_DWORD *)WPP_GLOBAL_Control + 11) & v11) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
        {
          v8 = 0;
        }
        v72 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v8 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_99;
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
        v91 = v6;
        v90 = 14;
        goto LABEL_98;
      }
    }
    else if ( (*(_BYTE *)(v13 + 18) & 0x10) == 0 )
    {
      v18 = *(_QWORD *)(v7 + 496);
      v98[0] = v10;
      v98[1] = v6;
      if ( ((*(_BYTE *)(v7 + 712) | *(_BYTE *)(*(_QWORD *)v18 + 16LL)) & 0x40) != 0
        && (unsigned int)xxxCallHook(5LL, v6, (__int64)v98, 5) )
      {
        goto LABEL_119;
      }
      *(_DWORD *)(*(_QWORD *)(v7 + 464) + 436LL) &= ~0x8000u;
      v19 = *(tagQ **)(v7 + 464);
      v20 = *((_QWORD *)v19 + 16);
      if ( v20 && *(char *)(*(_QWORD *)(v20 + 40) + 19LL) < 0 )
      {
        tagQ::SetActiveWindow(v19, 0LL);
      }
      else
      {
        *((_QWORD *)&v92 + 1) = *((_QWORD *)v19 + 16);
        *(_QWORD *)&v92 = (char *)v19 + 136;
        HMAssignmentLock(&v92, 0LL);
      }
      v23 = *(struct tagWND **)(*(_QWORD *)(v7 + 464) + 128LL);
      if ( v23 )
      {
        v24 = W32GetUserSessionState(v22, v21);
        v27 = *(_QWORD *)(v7 + 464);
        if ( v27 == *(_QWORD *)(v24 + 18928) )
          *(_QWORD *)(W32GetUserSessionState(v26, v25) + 18936) = v27;
        Win32HM_LockIntoThread<0>(v7, (__int64)v23, BugCheckParameter3);
        if ( !(unsigned __int8)anonymous_namespace_::xxxSendNCActivateMessage(v23) )
        {
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
          goto LABEL_119;
        }
        SetOrClrWF(1, a1, 0x210u, 1);
        Win32RawLockedItemBase<unsigned short,&void Win32FreePool(void *),1,1,1>::ManualLock<void>(
          (ULONG_PTR)BugCheckParameter2,
          v6);
        xxxSendMessage(v23, 6u);
        v28 = 1;
        SetOrClrWF(0, a1, 0x210u, 1);
        Win32RawLockedItemBase<void,0,0,1,1>::UnlockWorker((ULONG_PTR)BugCheckParameter2);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
      }
      else
      {
        v28 = 1;
      }
      v29 = *(_QWORD *)(v7 + 464);
      v30 = *(struct tagWND **)(v29 + 128);
      if ( *(struct tagWND **)(v29 + 136) != v30
        || v16 != v30
        || *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0
        || *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) != v29 )
      {
        goto LABEL_119;
      }
      if ( !v30 )
        *(_DWORD *)(v29 + 436) &= ~0x800u;
      tagQ::SetActiveWindow(*(tagQ **)(v7 + 464), a1);
      v33 = W32GetUserSessionState(v32, v31);
      v34 = *(_QWORD *)(v7 + 464);
      if ( v34 == *(_QWORD *)(v33 + 18928) )
        anonymous_namespace_::OnForegroundWindowChanged(*(_QWORD *)(v34 + 136), a1);
      SetOrClrWF(1, a1, 0x210u, 1);
      Win32RawLockedItemBase<unsigned short,&void Win32FreePool(void *),1,1,1>::ManualLock<void>(
        (ULONG_PTR)BugCheckParameter2,
        v6);
      xxxWindowEvent(3u, a1, 0, 0, 1);
      anonymous_namespace_::RemoveEventMessage(*(_QWORD *)(v7 + 464), 6LL, 5LL);
      v35 = *(_QWORD *)(*(_QWORD *)(v7 + 464) + 136LL);
      Win32HM_LockIntoThread<1>(v7, v35, (__int64 *)v99);
      v39 = *(_QWORD *)(W32GetUserSessionState(v37, v36) + 19904);
      if ( (*(_DWORD *)(v39 + 7004) & 1) != 0 && xxxSendMessage(a1, 0x30Fu) )
        xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x310u, v6, 0LL, 1);
      if ( !v104 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0 )
      {
        for ( i = *(struct tagWND **)(GetDesktopWindow((__int64)a1) + 112);
              i && (*(_BYTE *)(*((_QWORD *)i + 5) + 31LL) & 0x10) == 0;
              i = (struct tagWND *)*((_QWORD *)i + 11) )
        {
          ;
        }
        if ( a1 != i || v35 && !(unsigned int)IsVisible(v35) )
        {
          if ( !v93 || (v39 = *(_QWORD *)(W32GetUserSessionState(v39, v38) + 18928), v39 == *(_QWORD *)(v7 + 464)) )
          {
            v41 = 19;
            if ( a1 != i )
              v41 = 3;
            v42 = v41 | 0x1000000;
            if ( (a3 & 0x100) == 0 )
              v42 = v41;
            xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, v42);
            if ( (v42 & 0x10) == 0 )
              TraceLoggingProcessUsageDataAggregationHelper(a1);
          }
        }
      }
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 520), 0, 0) & 0x200) != 0
        || v35 && *(_QWORD *)(v35 + 16) == *((_QWORD *)a1 + 2) )
      {
        v46 = 0;
      }
      else
      {
        v43 = 0;
        if ( v35 )
        {
          v44 = *(_QWORD *)(v35 + 16);
          _InterlockedOr((volatile signed __int32 *)(v44 + 520), 0x200u);
          v45 = *(struct _KTHREAD **)v7;
          *(_QWORD *)&v92 = v44;
          *((_QWORD *)&v92 + 1) = (unsigned int)PsGetThreadId(v45);
          Win32RawLockedW32Thread::Win32RawLockedW32Thread((Win32RawLockedW32Thread *)v100, (struct _W32THREAD *)v44);
          xxxSendActivateAppMessage((const struct tagAAS *)&v92);
          _InterlockedAnd((volatile signed __int32 *)(v44 + 520), 0xFFFFFDFF);
          Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)v100, 1);
          v43 = HIDWORD(v92);
        }
        _InterlockedOr((volatile signed __int32 *)(v7 + 520), 0x200u);
        *(_QWORD *)&v92 = *((_QWORD *)a1 + 2);
        DWORD2(v92) = a2;
        v46 = 1;
        HIDWORD(v92) = v43 & 0xFFFFFFFC | 1;
        xxxSendActivateAppMessage((const struct tagAAS *)&v92);
        v28 = 1;
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) != 0 )
        SetOrClrWF(1, a1, 0x101u, 1);
      if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
      {
        for ( j = a1; *((_QWORD *)j + 15); j = (struct tagWND *)*((_QWORD *)j + 15) )
          ;
        v92 = *(_OWORD *)LockPointer(v100, (char *)j + 200, a1);
        HMAssignmentLock(&v92, 0LL);
      }
      W32GetUserSessionState(v39, v38);
      anonymous_namespace_::xxxSendNCActivateMessage(a1);
      xxxSendMessage(a1, 6u);
      anonymous_namespace_::xxxUpdateTray(a1);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v99);
      SetOrClrWF(0, a1, 0x101u, 1);
      if ( v95 )
      {
        v49 = *(_QWORD *)(v7 + 464);
        if ( (*(_DWORD *)(v49 + 436) & 0x800) == 0 )
        {
          NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(v49 + 120));
          if ( v51 != NonChildAncestor )
          {
            v52 = 0LL;
            if ( v51 && (*(_BYTE *)(*(_QWORD *)(v51 + 40) + 31LL) & 0x20) == 0 )
              v52 = (ULONG_PTR *)v51;
            Win32HM_LockIntoThread<1>(v7, v51, (__int64 *)v99);
            anonymous_namespace_::xxxSendFocusMessages(v7, v52);
            Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v99);
          }
        }
      }
      *(_DWORD *)(*(_QWORD *)(v7 + 464) + 436LL) |= 0x40u;
      if ( *(_QWORD *)(W32GetUserSessionState(v49, v48) + 62816) )
      {
        v61 = *(_QWORD *)(W32GetUserSessionState(v54, v53) + 62816);
        if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) != v61 )
        {
          v62 = W32GetUserSessionState(v61, v60);
          CInputGlobals::UpdateLastInputTime(
            *(_QWORD *)(v62 + 3056),
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
            8LL);
          v65 = *(_QWORD *)(W32GetUserSessionState(v64, v63) + 62816);
          *(_DWORD *)(v65 + 12) &= ~0x400000u;
          v68 = *(_QWORD *)(W32GetUserSessionState(v65, v66) + 62816);
          if ( *(_QWORD *)(v68 + 336) )
          {
            v69 = W32GetUserSessionState(v68, v67);
            ForegroundBoost::SetForegroundPriority(*(_QWORD *)(*(_QWORD *)(v69 + 62816) + 336LL), 1LL, 8LL);
          }
        }
      }
      else
      {
        v56 = *(_QWORD *)(W32GetUserSessionState(v54, v53) + 19176);
        if ( *(_QWORD *)(v7 + 488) == v56 && !*(_DWORD *)(W32GetUserSessionState(v56, v55) + 19112) )
        {
          v59 = W32GetUserSessionState(v58, v57);
          CInputGlobals::UpdateLastInputTime(
            *(_QWORD *)(v59 + 3056),
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
            8LL);
        }
      }
      if ( v46 )
        _InterlockedAnd((volatile signed __int32 *)(v7 + 520), 0xFFFFFDFF);
      SetOrClrWF(0, a1, 0x210u, 1);
      Win32RawLockedItemBase<void,0,0,1,1>::UnlockWorker((ULONG_PTR)BugCheckParameter2);
LABEL_104:
      v76 = *(struct tagWND **)(*(_QWORD *)(v7 + 464) + 128LL);
      v77 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v28 = 0;
      }
      v78 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v28 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v79 = *(_QWORD *)a1;
        v80 = W32GetUserSessionState(WPP_GLOBAL_Control, v70);
        LOBYTE(v81) = v78;
        LOBYTE(v82) = v28;
        v83 = *(_QWORD *)(v80 + 69152);
        v84 = "Activated";
        if ( v76 != a1 )
          v84 = "Not Active";
        WPP_RECORDER_AND_TRACE_SF_qs(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v82,
          v81,
          v83,
          4,
          2,
          15,
          (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids,
          v79,
          (__int64)v84);
      }
      if ( v76 == a1 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 0x10) == 0 )
      {
        v86 = *(_QWORD *)(W32GetUserSessionState(v77, v70) + 19176);
        if ( (*(_DWORD *)(v86 + 48) & 0x400) != 0 )
        {
          v88 = *(_QWORD *)(W32GetUserSessionState(v86, v85) + 18928);
          if ( *(_QWORD *)(v7 + 464) == v88 )
          {
            v89 = (void *)ReferenceDwmApiPort(v88, v87);
            DwmAsyncNotifyForegroundChange(v89);
          }
        }
      }
      v14 = v76 == a1;
      goto LABEL_119;
    }
    v71 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || ((unsigned __int8)*((_DWORD *)WPP_GLOBAL_Control + 11) & v11) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v8 = 0;
    }
    v72 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_99;
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
    v91 = v6;
    v90 = 13;
LABEL_98:
    LOBYTE(v75) = v72;
    LOBYTE(v74) = v8;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v74,
      v75,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      2,
      v90,
      (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids,
      v91);
LABEL_99:
    *(_DWORD *)(*(_QWORD *)(v7 + 464) + 436LL) &= ~0x8000u;
    v28 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v71, v17) + 19904) + 7004LL) & 1) != 0
      && xxxSendMessage(a1, 0x30Fu) )
    {
      if ( !v6 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 913LL);
      xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x310u, v6, 0LL, 1);
    }
    goto LABEL_104;
  }
LABEL_119:
  Win32RawLockedItemBase<void,0,0,1,1>::UnlockWorker((ULONG_PTR)BugCheckParameter2);
  return v14;
}
