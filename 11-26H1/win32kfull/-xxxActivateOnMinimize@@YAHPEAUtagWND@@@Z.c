/*
 * XREFs of ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x14019EDB0
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxMinimizeHungWindow @ 0x140292240 (xxxMinimizeHungWindow.c)
 * Callees:
 *     GetThreadDesktopWindow @ 0x140009BD0 (GetThreadDesktopWindow.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140047DD0 (-IsWindowCloaked@@YA_NPEBUtagWND@@@Z.c)
 *     GetLastTopMostWindow @ 0x140048390 (GetLastTopMostWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14018E9F0 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x14019F168 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?ForceForegroundChangeOnMinimize@@YA_NPEAUtagWND@@0@Z @ 0x14019FCC8 (-ForceForegroundChangeOnMinimize@@YA_NPEAUtagWND@@0@Z.c)
 *     SkipWindowOnMonitor @ 0x1401A0B80 (SkipWindowOnMonitor.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall xxxActivateOnMinimize(struct tagWND *a1)
{
  int v2; // r15d
  struct tagTHREADINFO *v3; // r13
  BOOL v4; // ebp
  __int64 LastTopMostWindow; // rax
  int v6; // r14d
  const struct tagWND *v7; // rbx
  __int64 ThreadDesktopWindow; // rax
  const struct tagWND *v9; // rsi
  const struct tagWND *v10; // rdi
  __int64 v11; // r8
  __int64 v13; // r8
  char v14; // r9
  unsigned int v15; // r15d
  bool v16; // bp
  bool v17; // r14
  __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  bool v23; // di
  bool v24; // bp
  char ThreadId; // bl
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 UserSessionState; // rax
  int v29; // r8d
  int v30; // edx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-38h] BYREF

  v2 = 0;
  v3 = PtiCurrent((__int64)a1);
  v4 = *(_QWORD *)(*((_QWORD *)v3 + 58) + 136LL) != 0LL;
  if ( *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) != 1 )
  {
    v6 = 0;
    goto LABEL_5;
  }
  LastTopMostWindow = GetLastTopMostWindow((__int64)a1);
  v6 = 1;
  if ( !LastTopMostWindow )
  {
LABEL_5:
    ThreadDesktopWindow = *((_QWORD *)a1 + 13);
    goto LABEL_6;
  }
  v7 = *(const struct tagWND **)(LastTopMostWindow + 88);
  while ( 1 )
  {
    v9 = v4 ? *(const struct tagWND **)(*((_QWORD *)v3 + 58) + 136LL) : v7;
    v10 = 0LL;
    while ( v9 )
    {
      if ( (*(_BYTE *)(_HMPheFromObject(v9) + 25) & 1) == 0 )
      {
        v11 = *((_QWORD *)v9 + 5);
        if ( (*(_BYTE *)(v11 + 27) & 8) == 0
          && (*(_BYTE *)(v11 + 31) & 0x18) == 0x10
          && !IsWindowCloaked(v9)
          && (v14 & 0x20) == 0
          && (!v6 || *(_DWORD *)(v13 + 236) == 1)
          && !(unsigned int)SkipWindowOnMonitor(v9) )
        {
          if ( *(char *)(*((_QWORD *)v9 + 5) + 24LL) >= 0 )
            goto LABEL_30;
          if ( !v10 )
            v10 = v9;
        }
      }
      if ( v4 )
      {
        v4 = 0;
        v9 = v7;
      }
      else
      {
        v9 = (const struct tagWND *)*((_QWORD *)v9 + 11);
      }
    }
    if ( v2 )
      break;
    v2 = 1;
    if ( v7 )
    {
      ThreadDesktopWindow = *((_QWORD *)v7 + 13);
      goto LABEL_6;
    }
    ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
    if ( ThreadDesktopWindow )
LABEL_6:
      v7 = *(const struct tagWND **)(ThreadDesktopWindow + 112);
    else
      v7 = 0LL;
  }
  v9 = v10;
  if ( !v10 )
    return 0LL;
LABEL_30:
  v15 = 3;
  Win32HM_LockIntoThread<0>((__int64)v3, (__int64)v9, BugCheckParameter3);
  if ( ForceForegroundChangeOnMinimize(a1, v9) )
  {
    v15 = 7;
    v23 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v24 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v23 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      ThreadId = (unsigned __int8)PsGetThreadId(*(PETHREAD *)v3);
      UserSessionState = W32GetUserSessionState(v27, v26);
      LOBYTE(v29) = v24;
      LOBYTE(v30) = v23;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v30,
        v29,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        2,
        10,
        (__int64)&WPP_c2c1bc94dfb934c622fe5c54a621ad61_Traceguids,
        ThreadId);
    }
  }
  v16 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v16 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v18 = *(_QWORD *)a1;
    v19 = *(_QWORD *)v9;
    v20 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v21) = v17;
    LOBYTE(v22) = v16;
    WPP_RECORDER_AND_TRACE_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v22,
      v21,
      *(_QWORD *)(v20 + 69152),
      4,
      2,
      11,
      (__int64)&WPP_c2c1bc94dfb934c622fe5c54a621ad61_Traceguids,
      v19,
      v18);
  }
  xxxSetForegroundWindowWithOptions(v9, v15, 0LL, 0LL);
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  return 1LL;
}
