/*
 * XREFs of ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402C65EC
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14005DE80 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     _MonitorFromRect @ 0x14002FC00 (_MonitorFromRect.c)
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x1400305B4 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 *     ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x140032708 (-SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ @ 0x14019CCC8 (--1-$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ.c)
 *     ??1DwmNotifyMoveReason@@QEAA@XZ @ 0x14025A64C (--1DwmNotifyMoveReason@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x14025F6A4 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     ?xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x14025FAE8 (-xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     ?xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402638F4 (-xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x140268C0C (-MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?KeepCheckpointLeftRightAligned@@YA_NPEBUMOVESIZEDATA@@@Z @ 0x1402C47F0 (-KeepCheckpointLeftRightAligned@@YA_NPEBUMOVESIZEDATA@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddddD @ 0x1402C85E0 (WPP_RECORDER_AND_TRACE_SF_ddddddD.c)
 *     ?MarkWindowAsArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402E805C (-MarkWindowAsArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall xxxCommitMoveSizeOld(struct tagWND *this, struct MOVESIZEDATA *a2)
{
  struct MOVESIZEDATA *v4; // rdx
  char v5; // bl
  bool v6; // di
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  __int64 DesktopWindow; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 Prop; // rax
  __int64 v15; // rdx
  struct MOVESIZEDATA *v16; // rcx
  char v17; // al
  __int64 v18; // rax
  __int64 v19; // rdx
  char v20; // di
  __int64 v21; // rax
  int v22; // edx
  int v23; // r8d
  __int64 v24; // rax
  __int64 v25; // rcx
  struct tagWND *v26; // rdi
  char v27; // al
  __int64 v28; // rax
  struct tagTHREADINFO *v29; // rax
  struct tagMONITOR *v30; // r8
  unsigned int v31; // ecx
  __int64 v32; // rcx
  __int64 v33; // rdx
  struct MOVESIZEDATA *v34; // rcx
  char v35; // bl
  bool v36; // di
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  int v40; // r8d
  bool v41; // zf
  struct tagWND *v42; // rdx
  char v43; // di
  __int64 v44; // rax
  int v45; // edx
  int v46; // r8d
  __int64 v47; // rax
  char v48; // di
  __int64 v49; // rax
  int v50; // edx
  int v51; // r8d
  __int64 v52; // rcx
  int v53; // ecx
  int v54; // eax
  char v55; // al
  int v56; // r14d
  int v57; // edi
  int v58; // esi
  int v59; // ebx
  __int64 v60; // rax
  int v61; // r8d
  int v62; // edx
  __int64 v63; // rdx
  char v64; // al
  _DWORD *v65; // rcx
  int v66; // r14d
  int v67; // edi
  int v68; // esi
  int v69; // ebx
  __int64 v70; // rax
  int v71; // [rsp+20h] [rbp-A9h]
  int v72; // [rsp+28h] [rbp-A1h]
  int v73; // [rsp+30h] [rbp-99h]
  int v74; // [rsp+38h] [rbp-91h]
  __int64 v75; // [rsp+40h] [rbp-89h]
  __int64 v76; // [rsp+48h] [rbp-81h]
  __int64 v77; // [rsp+50h] [rbp-79h]
  __int64 v78; // [rsp+58h] [rbp-71h]
  __int64 v79; // [rsp+60h] [rbp-69h]
  __int64 v80; // [rsp+68h] [rbp-61h]
  char v81; // [rsp+80h] [rbp-49h]
  bool v82; // [rsp+80h] [rbp-49h]
  char v83; // [rsp+80h] [rbp-49h]
  bool v84; // [rsp+80h] [rbp-49h]
  bool v85; // [rsp+80h] [rbp-49h]
  char v86; // [rsp+80h] [rbp-49h]
  char v87; // [rsp+80h] [rbp-49h]
  char v88; // [rsp+81h] [rbp-48h]
  char v89; // [rsp+81h] [rbp-48h]
  char v90; // [rsp+81h] [rbp-48h]
  char v91; // [rsp+81h] [rbp-48h]
  int v92; // [rsp+88h] [rbp-41h]
  struct tagWND *v93; // [rsp+88h] [rbp-41h]
  int v94; // [rsp+88h] [rbp-41h]
  int v95; // [rsp+90h] [rbp-39h]
  CHECKPOINT *v96; // [rsp+90h] [rbp-39h]
  CHECKPOINT *v97; // [rsp+90h] [rbp-39h]
  struct tagRECT v98; // [rsp+98h] [rbp-31h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+A8h] [rbp-21h] BYREF
  __int16 v100; // [rsp+B0h] [rbp-19h]
  struct tagMONITOR *v101; // [rsp+B8h] [rbp-11h] BYREF
  __int128 v102; // [rsp+C0h] [rbp-9h]
  int v103; // [rsp+D0h] [rbp+7h]
  char v104; // [rsp+D4h] [rbp+Bh]
  __int128 v105; // [rsp+D8h] [rbp+Fh]

  v4 = (struct MOVESIZEDATA *)*((unsigned int *)a2 + 50);
  LODWORD(v4) = (unsigned int)v4 | 0x1000000;
  *((_DWORD *)a2 + 50) = (_DWORD)v4;
  if ( (char)v4 < 0 && (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 1) != 0 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v5 = 0;
    }
    v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v4);
      LOBYTE(v8) = v6;
      LOBYTE(v9) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v9,
        v8,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        1,
        59,
        (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids);
    }
    return;
  }
  if ( (*((_DWORD *)this + 96) & 0x10) != 0 )
  {
    WindowActions::xxxInterceptCommitMoveSize(a2, v4);
    return;
  }
  v95 = 0;
  v98.left = 0;
  DesktopWindow = GetDesktopWindow((__int64)this);
  if ( *(_QWORD *)(v12 + 104) != DesktopWindow )
    goto LABEL_67;
  if ( *((_DWORD *)a2 + 44) != 9
    || *((_DWORD *)a2 + 62)
    || (v11 & 0x10000000) != 0
    || (v92 = 1, v12 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL), (*(_BYTE *)(v12 + 30) & 1) == 0) )
  {
    v92 = 0;
  }
  v13 = W32GetUserSessionState(v12, v11);
  Prop = GetProp((__int64)this, *(unsigned __int16 *)(v13 + 41374), 1u);
  v96 = (CHECKPOINT *)Prop;
  if ( Prop )
  {
    v98 = *(struct tagRECT *)(Prop + 20);
    if ( *(_QWORD *)&v98.left != *((_QWORD *)a2 + 19) || *(_QWORD *)&v98.right != *((_QWORD *)a2 + 20) )
    {
      v98 = *(struct tagRECT *)((char *)a2 + 152);
      v16 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v17 = 0;
      }
      v88 = v17;
      v81 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v17 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        v18 = W32GetUserSessionState(v16, v15);
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v88,
          v81,
          *(_QWORD *)(v18 + 69152),
          4u,
          1u,
          0x3Cu,
          (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids);
      }
    }
    if ( KeepCheckpointLeftRightAligned(a2) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v20 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v20 = 0;
      }
      v82 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v20 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v21 = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
        LOBYTE(v22) = v20;
        LOBYTE(v23) = v82;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v22,
          v23,
          *(_QWORD *)(v21 + 69152),
          4,
          1,
          61,
          (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids);
      }
      v98.left = *((_DWORD *)a2 + 6);
      v98.right = *((_DWORD *)a2 + 8);
    }
    CHECKPOINT::SetNormalRect(v96, this, &v98, 0);
    v24 = MonitorFromRect(&v98.left, 2LL, *(_DWORD *)(*((_QWORD *)this + 5) + 288LL));
    *(_QWORD *)&v98.left = v24;
    if ( v92 )
    {
      v26 = (struct tagWND *)*((_QWORD *)a2 + 30);
      v97 = v26;
    }
    else
    {
      v26 = (struct tagWND *)MonitorFromRect((__int32 *)a2 + 6, 2LL, *(_DWORD *)(*((_QWORD *)this + 5) + 288LL));
      v97 = v26;
      v24 = *(_QWORD *)&v98.left;
    }
    if ( (struct tagWND *)v24 != v26 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (v25 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v25 & 1) == 0)
        || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v27 = 0;
      }
      v89 = v27;
      LOBYTE(v25) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      v83 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v27 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v28 = W32GetUserSessionState(v25, WPP_GLOBAL_Control);
        WPP_RECORDER_AND_TRACE_SF_dddd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v89,
          v83,
          *(_QWORD *)(v28 + 69152),
          4u,
          1u,
          0x3Eu,
          (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids);
        v26 = v97;
      }
      v29 = PtiCurrent(v25);
      Win32HM_LockIntoThread<1>((__int64)v29, (__int64)v26, (__int64 *)&BugCheckParameter3);
      AdvancedWindowPos::xxxMigrateCheckpoint(this, v26, v30);
      Win32HMThreadLockBase<tagKL,1,0>::~Win32HMThreadLockBase<tagKL,1,0>(&BugCheckParameter3);
    }
  }
  v31 = *((_DWORD *)a2 + 50);
  if ( ((v31 ^ (v31 >> 1)) & 0x10000000) != 0 || (v31 & 0x4000) != 0 )
  {
    v95 = 1;
  }
  else
  {
    v32 = *((_QWORD *)this + 5);
    v95 = 0;
    if ( *((_QWORD *)a2 + 3) != *(_QWORD *)(v32 + 88) || *((_QWORD *)a2 + 4) != *(_QWORD *)(v32 + 96) )
    {
      v98.left = 1;
      goto LABEL_56;
    }
  }
  v98.left = 0;
LABEL_56:
  if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
    MakeArrangedStateObservable(a2);
  if ( v92 )
  {
    v34 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v35 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v35 = 0;
    }
    v36 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v35 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v37 = W32GetUserSessionState(WPP_GLOBAL_Control, v33);
      LOBYTE(v38) = v36;
      LOBYTE(v39) = v35;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v39,
        v38,
        *(_QWORD *)(v37 + 69152),
        4,
        1,
        63,
        (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids);
    }
    v40 = *(_DWORD *)(W32GetUserSessionState(v34, v33) + 66792) & 0x10000 | 6;
    v101 = (struct tagMONITOR *)*((_QWORD *)a2 + 30);
    v102 = 0LL;
    v103 = 0;
    v104 = 0;
    v105 = 0LL;
    xxxMinMaximizeEx((__int64)this, 3u, v40, &v101);
    *((_DWORD *)a2 + 50) |= 0x800000u;
    return;
  }
LABEL_67:
  v41 = (*((_DWORD *)a2 + 50) & 0x10000000) == 0;
  v42 = (struct tagWND *)*((_QWORD *)a2 + 2);
  v93 = v42;
  BugCheckParameter3 = (ULONG_PTR)v42;
  v100 = 0;
  if ( !v41 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v43 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v43 = 0;
    }
    v84 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v43 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v44 = W32GetUserSessionState(WPP_GLOBAL_Control, v42);
      LOBYTE(v45) = v43;
      LOBYTE(v46) = v84;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v45,
        v46,
        *(_QWORD *)(v44 + 69152),
        4,
        1,
        64,
        (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids);
      v42 = v93;
    }
    *((_DWORD *)v42 + 95) |= 0x200000u;
    LOBYTE(v100) = 1;
    AdvancedWindowPos::MarkWindowAsArranged(this, v42);
  }
  if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 1) != 0 )
  {
    v47 = W32GetUserSessionState(v12, v42);
    if ( GetProp((__int64)this, *(unsigned __int16 *)(v47 + 41374), 1u) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v48 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v48 = 0;
      }
      v85 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v48 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v49 = W32GetUserSessionState(WPP_GLOBAL_Control, v42);
        LOBYTE(v50) = v48;
        LOBYTE(v51) = v85;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v50,
          v51,
          *(_QWORD *)(v49 + 69152),
          4,
          1,
          65,
          (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids);
      }
      *(_DWORD *)(*((_QWORD *)a2 + 2) + 380LL) &= ~0x4000000u;
      v52 = *((_QWORD *)a2 + 2);
      v102 = (unsigned __int64)a2 + 24;
      v101 = 0LL;
      v103 = 0;
      v104 = 0;
      v105 = 0LL;
      xxxMinMaximizeEx(v52, 9u, 12, &v101);
      MakeArrangedStateObservable(a2);
    }
  }
  v53 = *((_DWORD *)a2 + 44);
  v54 = 516;
  v94 = 516;
  if ( v53 == 9 && !v98.left || v53 == 10 )
  {
    if ( !v95 )
      v54 = 517;
    v94 = v54;
  }
  *((_DWORD *)a2 + 50) |= 0x800000u;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (LOBYTE(v42) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v42) = 0;
  }
  v86 = (char)v42;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v55 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v55 = 0;
  }
  v90 = v55;
  if ( (_BYTE)v42 || v55 )
  {
    v56 = *((_DWORD *)a2 + 7);
    v57 = *((_DWORD *)a2 + 9);
    v58 = *((_DWORD *)a2 + 6);
    v59 = *((_DWORD *)a2 + 8);
    v60 = W32GetUserSessionState(WPP_GLOBAL_Control, v42);
    LOBYTE(v61) = v90;
    LOBYTE(v62) = v86;
    WPP_RECORDER_AND_TRACE_SF_ddddddD(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v62,
      v61,
      *(_QWORD *)(v60 + 69152),
      v71,
      v72,
      v73,
      v74,
      v58,
      v56,
      v59,
      v57,
      v59 - v58,
      v57 - v56,
      v94);
  }
  xxxSetWindowPos(
    this,
    0LL,
    *((unsigned int *)a2 + 6),
    *((unsigned int *)a2 + 7),
    *((_DWORD *)a2 + 8) - *((_DWORD *)a2 + 6),
    *((_DWORD *)a2 + 9) - *((_DWORD *)a2 + 7),
    v94);
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v64 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v64 = 0;
  }
  v87 = v64;
  v91 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v64 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v65 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 40LL);
    v66 = v65[23];
    v67 = v65[25];
    v68 = v65[22];
    v69 = v65[24];
    v70 = W32GetUserSessionState(v65, v63);
    LODWORD(v80) = v67 - v66;
    LODWORD(v79) = v69 - v68;
    LODWORD(v78) = v67;
    LODWORD(v77) = v69;
    LODWORD(v76) = v66;
    LODWORD(v75) = v68;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v87,
      v91,
      *(_QWORD *)(v70 + 69152),
      4u,
      1u,
      0x43u,
      (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
      v75,
      v76,
      v77,
      v78,
      v79,
      v80);
  }
  if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 0x20) != 0 )
    CHECKPOINT::Restore(this, (const struct tagRECT *)((char *)a2 + 24));
  DwmNotifyMoveReason::~DwmNotifyMoveReason((DwmNotifyMoveReason *)&BugCheckParameter3);
}
