/*
 * XREFs of ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x14012B3C8
 * Callers:
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x140043168 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     NtUserSetFocus @ 0x14012B310 (NtUserSetFocus.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x14015E3EC (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z @ 0x1402E1990 (-xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x14008A600 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x140153FF4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x14019328C (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140193984 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x1402422E4 (-IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 *     ?IsComponentThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x14024233C (-IsComponentThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1402719BC (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 */

struct tagWND *__fastcall xxxSetFocus(struct tagWND *a1)
{
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rsi
  char *v5; // rbx
  struct tagWND *i; // r14
  char v7; // cl
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagWND *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // rbp
  __int64 v17; // rcx
  _QWORD *v18; // rax
  struct MOVESIZEDATA *v20; // rcx
  char v21; // bl
  bool v22; // bp
  __int64 v23; // rdx
  char v24; // bl
  bool v25; // bp
  __int64 v26; // r8
  __int64 *v27; // rcx
  int v28; // ecx
  char v29; // bp
  bool v30; // r12
  __int64 v31; // rbx
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  __int64 v35; // r8
  __int64 *v36; // rcx
  __int64 UserSessionState; // rax
  int v38; // r8d
  int v39; // edx
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-28h] BYREF

  v2 = PtiCurrent((__int64)a1);
  v3 = 0LL;
  v4 = (__int64)v2;
  v5 = (char *)v2 + 464;
  if ( a1 )
  {
    if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) != *(_QWORD *)v5
      && !CoreWindowProp::IsHostThreadOf(v2, a1)
      && !(unsigned int)CoreWindowProp::IsComponentThreadOf((const struct tagTHREADINFO *)v4, a1) )
    {
      v28 = 5;
LABEL_44:
      UserSetLastError(v28);
      return 0LL;
    }
    for ( i = a1; i; i = (struct tagWND *)*((_QWORD *)i + 13) )
    {
      v7 = *(_BYTE *)(*((_QWORD *)i + 5) + 31LL);
      if ( (v7 & 0x28) != 0 )
      {
        v28 = 87;
        goto LABEL_44;
      }
      if ( (v7 & 0xC0) != 0x40 )
        break;
    }
    Win32HM_LockIntoThread<1>(v4, (__int64)i, (__int64 *)BugCheckParameter3);
    v10 = *(struct tagWND **)(*(_QWORD *)(v4 + 464) + 120LL);
    if ( a1 == v10 )
      goto LABEL_12;
    v11 = *(_QWORD *)(v4 + 496);
    v12 = (unsigned int)(*(_DWORD *)(v4 + 712) | *(_DWORD *)(*(_QWORD *)v11 + 16LL));
    if ( ((*(_BYTE *)(v4 + 712) | *(_BYTE *)(*(_QWORD *)v11 + 16LL)) & 0x40) != 0 )
    {
      v26 = 0LL;
      if ( v10 )
        v26 = *(_QWORD *)v10;
      if ( (unsigned int)xxxCallHook(9LL, *(_QWORD *)a1, v26, 5) )
      {
        UserSetLastError(5);
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
        return 0LL;
      }
    }
    if ( i == *(struct tagWND **)(*(_QWORD *)(v4 + 464) + 128LL) )
    {
LABEL_11:
      v10 = *(struct tagWND **)(*(_QWORD *)(v4 + 464) + 120LL);
      Win32HM_ExchangeThreadLock<1>((__int64)v10, (__int64)BugCheckParameter3);
      anonymous_namespace_::xxxSendFocusMessages(v4, a1);
LABEL_12:
      v13 = *(_QWORD *)(*(_QWORD *)(v4 + 464) + 120LL);
      if ( v13 )
        v14 = *(_QWORD *)(v13 + 16);
      else
        v14 = v4;
      v15 = *(_QWORD *)(v14 + 472);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 40);
        if ( *(_QWORD *)(W32GetUserSessionState(v9, v8) + 14256) != v16 )
        {
          v18 = *(_QWORD **)(v4 + 496);
          if ( ((*(_DWORD *)(v4 + 712) | *(_DWORD *)(*v18 + 16LL)) & 0x800) != 0 )
          {
            *(_QWORD *)(W32GetUserSessionState(v17, *v18) + 14256) = v16;
            xxxCallHook(8LL, 0LL, v16, 10);
          }
        }
      }
      if ( v10 )
        v3 = *(_QWORD *)v10;
      v3 = HMValidateHandleNoSecure(v3, 1);
      goto LABEL_21;
    }
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v21 = 0;
    }
    v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v21 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
      LOBYTE(v38) = v22;
      LOBYTE(v39) = v21;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v39,
        v38,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        2,
        92,
        (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
    }
    if ( *(_QWORD *)(v4 + 464) == *(_QWORD *)(W32GetUserSessionState(v20, v12) + 18928) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v24 = 0;
      }
      v25 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v24 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v40 = W32GetUserSessionState(WPP_GLOBAL_Control, v23);
        LOBYTE(v41) = v25;
        LOBYTE(v42) = v24;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v42,
          v41,
          *(_QWORD *)(v40 + 69152),
          4,
          2,
          93,
          (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v29 = 0;
      }
      v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v29 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v31 = *(_QWORD *)i;
        v32 = W32GetUserSessionState(WPP_GLOBAL_Control, v23);
        LOBYTE(v33) = v30;
        LOBYTE(v34) = v29;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v34,
          v33,
          *(_QWORD *)(v32 + 69152),
          4,
          2,
          94,
          (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids,
          v31);
      }
      if ( (unsigned __int8)anonymous_namespace_::FAllowForegroundActivate(i)
        && !(unsigned __int8)xxxForceForegroundWindowNoRestoreFocus(i, 8LL) )
      {
        goto LABEL_33;
      }
    }
    if ( i == *(struct tagWND **)(*(_QWORD *)(v4 + 464) + 128LL)
      || (unsigned __int8)anonymous_namespace_::xxxLocalActivateWindow(i) )
    {
      goto LABEL_11;
    }
LABEL_33:
    UserSetLastError(87);
LABEL_21:
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
    return (struct tagWND *)v3;
  }
  if ( ((*((_BYTE *)v2 + 712) | *(_BYTE *)(**((_QWORD **)v2 + 62) + 16LL)) & 0x40) != 0 )
  {
    v35 = 0LL;
    v36 = *(__int64 **)(*(_QWORD *)v5 + 120LL);
    if ( v36 )
      v35 = *v36;
    if ( (unsigned int)xxxCallHook(9LL, 0LL, v35, 5) )
      return 0LL;
  }
  v27 = *(__int64 **)(*(_QWORD *)v5 + 120LL);
  if ( v27 )
    v3 = *v27;
  anonymous_namespace_::xxxSendFocusMessages(v4, 0LL);
  return (struct tagWND *)HMValidateHandleNoSecure(v3, 1);
}
