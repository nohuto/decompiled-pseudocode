/*
 * XREFs of NtUserApplyWindowAction @ 0x1402AF630
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IAMThreadAccessGranted @ 0x1401A2EB0 (IAMThreadAccessGranted.c)
 *     ??0CDisableILCheckAuto@@QEAA@XZ @ 0x1401BEF8C (--0CDisableILCheckAuto@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     Feature_3836693817__private_IsEnabledDeviceUsageNoInline @ 0x1402AF0EC (Feature_3836693817__private_IsEnabledDeviceUsageNoInline.c)
 *     ?RemoveLastSystemOperationData@WindowActions@@YAXPEAUtagWND@@@Z @ 0x1402E2C88 (-RemoveLastSystemOperationData@WindowActions@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z @ 0x1402E474C (-xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z @ 0x1402E510C (-xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall NtUserApplyWindowAction(WindowActions *this, void *Src)
{
  const struct tagTHREADINFO *v4; // rbx
  __int64 v5; // rcx
  struct _WINDOW_ACTION *v6; // r8
  int v7; // edi
  unsigned int v8; // eax
  __int64 v9; // rcx
  int v10; // ecx
  __int64 v11; // rdx
  bool v12; // si
  bool v13; // bl
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  int v17; // eax
  char v18; // si
  char v19; // r12
  __int64 v20; // rdx
  WindowActions *v21; // r14
  bool v22; // bl
  int v23; // edx
  __int64 v24; // r9
  int v25; // r8d
  __int64 v26; // rdx
  bool v27; // r15
  __int64 v28; // rbx
  const struct tagTHREADINFO *v29; // rax
  bool v30; // zf
  bool v31; // bl
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  bool v35; // r12
  int v36; // r15d
  struct tagWND *v37; // rdx
  struct _WINDOW_ACTION *v38; // r9
  struct tagWND *v39; // rdx
  int v40; // ebx
  struct tagWND *v41; // rdx
  struct _WINDOW_ACTION *v42; // r9
  unsigned int v43; // ebx
  struct tagWND *v44; // rdx
  __int16 v46; // [rsp+30h] [rbp-128h]
  char v47; // [rsp+40h] [rbp-118h]
  ULONG_PTR BugCheckParameter3; // [rsp+60h] [rbp-F8h] BYREF
  char v49; // [rsp+68h] [rbp-F0h]
  _OWORD v50[6]; // [rsp+70h] [rbp-E8h] BYREF
  struct HWND__ v51[4]; // [rsp+D0h] [rbp-88h] BYREF
  __int128 v52; // [rsp+E0h] [rbp-78h]
  __int128 v53; // [rsp+F0h] [rbp-68h]
  __int128 v54; // [rsp+100h] [rbp-58h]
  __int128 v55; // [rsp+110h] [rbp-48h]
  __int128 v56; // [rsp+120h] [rbp-38h]

  v4 = (const struct tagTHREADINFO *)EnterCrit(0LL, 0LL);
  memset_0(v51, 0, 0x60uLL);
  memset_0(v50, 0, sizeof(v50));
  RtlCopyFromUser(v50, Src, 0x60uLL);
  *(_OWORD *)&v51[0].unused = v50[0];
  v52 = v50[1];
  v53 = v50[2];
  v54 = v50[3];
  v55 = v50[4];
  v56 = v50[5];
  v7 = 0;
  if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
  {
    v8 = WindowActions::xxxApplyAction(this, v51, v6);
    if ( v8 )
    {
      v10 = v8;
LABEL_4:
      UserSetLastError(v10);
      goto LABEL_61;
    }
LABEL_5:
    v7 = 1;
    goto LABEL_61;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(v5) & 0xF) != 2 )
  {
    v12 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v11);
      LOBYTE(v15) = v13;
      LOBYTE(v16) = v12;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v15,
        *(_QWORD *)(UserSessionState + 69152),
        3,
        4,
        98,
        (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids);
    }
    v10 = 5023;
    goto LABEL_4;
  }
  LOBYTE(v17) = IAMThreadAccessGranted(v4);
  if ( v17 )
  {
    v18 = 1;
    v19 = 1;
    CDisableILCheckAuto::CDisableILCheckAuto((CDisableILCheckAuto *)&BugCheckParameter3);
    v21 = (WindowActions *)ValidateHwnd(this);
    if ( v49 )
      *(_BYTE *)(BugCheckParameter3 + 1708) = 1;
  }
  else
  {
    v19 = 0;
    v21 = (WindowActions *)ValidateHwnd(this);
    v18 = 1;
  }
  if ( !v21 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v18 = 0;
    }
    v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v18 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_29;
    v24 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v20) + 69152);
    v47 = (char)this;
    v46 = 99;
    LOBYTE(v25) = v22;
LABEL_28:
    LOBYTE(v23) = v18;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v23,
      v25,
      v24,
      3,
      4,
      v46,
      (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids,
      v47);
LABEL_29:
    v10 = 87;
    goto LABEL_4;
  }
  if ( !IsTopLevelWindow((__int64)v21) )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v18 = 0;
    }
    v27 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v18 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_29;
    v28 = *(_QWORD *)v21;
    v24 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v26) + 69152);
    v47 = v28;
    v46 = 100;
    LOBYTE(v25) = v27;
    goto LABEL_28;
  }
  v29 = (const struct tagTHREADINFO *)*((_QWORD *)v21 + 2);
  v30 = v29 == v4;
  if ( v29 != v4 )
  {
    if ( !v19 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v18 = 0;
      }
      v31 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v18 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v32 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v26);
        LOBYTE(v33) = v31;
        LOBYTE(v34) = v18;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v34,
          v33,
          *(_QWORD *)(v32 + 69152),
          3,
          4,
          101,
          (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids);
      }
      v10 = 5;
      goto LABEL_4;
    }
    v30 = v29 == v4;
  }
  v35 = v30;
  v36 = v51[0].unused & 0x400;
  if ( !(unsigned int)Feature_3836693817__private_IsEnabledDeviceUsageNoInline() )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(&BugCheckParameter3, (__int64)v4, (__int64)v21);
    LOBYTE(v41) = v35;
    v43 = WindowActions::xxxApplyActionOld(v21, v41, (bool)v51, v42);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(&BugCheckParameter3);
    if ( v43 )
    {
      if ( !v36 && (v51[0].unused & 0x400) != 0 )
        WindowActions::RemoveLastSystemOperationData(v21, v44);
      v10 = v43;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(&BugCheckParameter3, (__int64)v4, (__int64)v21);
  LOBYTE(v37) = v35;
  v40 = WindowActions::xxxApplyActionOld(v21, v37, (bool)v51, v38);
  if ( !v40 )
  {
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(&BugCheckParameter3);
    goto LABEL_5;
  }
  if ( !v36 && (v51[0].unused & 0x400) != 0 )
    WindowActions::RemoveLastSystemOperationData(v21, v39);
  UserSetLastError(v40);
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(&BugCheckParameter3);
LABEL_61:
  UserSessionSwitchLeaveCrit(v9);
  return v7;
}
