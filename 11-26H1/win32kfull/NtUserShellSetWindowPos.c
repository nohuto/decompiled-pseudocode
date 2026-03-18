/*
 * XREFs of NtUserShellSetWindowPos @ 0x1402BF280
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400326CC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x140046B68 (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z @ 0x1401A21F0 (-RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z.c)
 *     ValidateHwndIAM @ 0x1401A2C8C (ValidateHwndIAM.c)
 *     IAMThreadAccessGranted @ 0x1401A2EB0 (IAMThreadAccessGranted.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?IsGhostWindowClass@@YA_NPEBUtagWND@@@Z @ 0x1401A690C (-IsGhostWindowClass@@YA_NPEBUtagWND@@@Z.c)
 *     ??$ReadFromUser@UtagRECT@@@UmpDetail@@YA?AUtagRECT@@PEBU1@@Z @ 0x1402512A4 (--$ReadFromUser@UtagRECT@@@UmpDetail@@YA-AUtagRECT@@PEBU1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdqd @ 0x1402C2510 (WPP_RECORDER_AND_TRACE_SF_qdqd.c)
 *     ?PositionWindowAsyncOld@ShellWindowPos@@YA?AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@AEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1402DB62C (-PositionWindowAsyncOld@ShellWindowPos@@YA-AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__.c)
 *     ?ShellSetWindowPosAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUHWND__@@PEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1402DBD50 (-ShellSetWindowPosAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUHWND__@@PEBUtagRECT@@W4_SHELLSETWINDO.c)
 *     ?ReserveSystemOperationDataSlot@WindowActions@@YA_NPEAUtagWND@@@Z @ 0x1402E2E58 (-ReserveSystemOperationDataSlot@WindowActions@@YA_NPEAUtagWND@@@Z.c)
 */

__int64 __fastcall NtUserShellSetWindowPos(__int64 a1, __int64 a2, void *a3, unsigned int a4, int a5, int a6)
{
  __int64 v8; // r12
  char v10; // si
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // edi
  bool v17; // bl
  __int64 v18; // rax
  int v19; // edx
  int v20; // r8d
  int v21; // ecx
  bool v22; // bl
  int v23; // edx
  int v24; // r8d
  __int64 v25; // r9
  bool v26; // bl
  __int64 UserSessionState; // rax
  int v28; // r8d
  int v29; // edx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r13
  bool v34; // bl
  __int64 v35; // rax
  int v36; // edx
  int v37; // r8d
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rax
  bool v46; // bl
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  bool v50; // bl
  __int64 v51; // rax
  int v52; // r8d
  int v53; // edx
  __int64 v54; // rdx
  bool v55; // bl
  __int64 v56; // rax
  int v57; // edx
  int v58; // r8d
  struct tagWND *v59; // rdx
  __int64 v60; // rdx
  int v61; // ecx
  bool v62; // bl
  __int64 v63; // rax
  int v64; // edx
  int v65; // r8d
  char v66; // al
  char v67; // r12
  __int64 v68; // rax
  int v69; // edx
  int v70; // r8d
  __int64 v71; // rdx
  bool v72; // bl
  __int64 v73; // rax
  int v74; // r8d
  int v75; // edx
  __int64 v76; // rdx
  int v77; // eax
  __int64 v78; // rcx
  __int16 v80; // [rsp+30h] [rbp-A8h]
  __int16 v81; // [rsp+30h] [rbp-A8h]
  __int16 v82; // [rsp+30h] [rbp-A8h]
  __int16 v83; // [rsp+30h] [rbp-A8h]
  __int16 v84; // [rsp+30h] [rbp-A8h]
  __int16 v85; // [rsp+30h] [rbp-A8h]
  char v86; // [rsp+40h] [rbp-98h]
  char v87; // [rsp+40h] [rbp-98h]
  char v88; // [rsp+40h] [rbp-98h]
  char v89; // [rsp+60h] [rbp-78h]
  bool v90; // [rsp+61h] [rbp-77h]
  unsigned int v91; // [rsp+64h] [rbp-74h]
  __int128 v93; // [rsp+90h] [rbp-48h] BYREF
  _BYTE v94[16]; // [rsp+A0h] [rbp-38h] BYREF

  v91 = a4;
  v8 = a2;
  v10 = 1;
  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v94);
  v93 = 0LL;
  v12 = PtiCurrent(v11);
  LOBYTE(v13) = IAMThreadAccessGranted(v12);
  v16 = 0;
  if ( v13 )
  {
    if ( (a5 & 0xFFFFFFC0) != 0 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v10 = 0;
      }
      v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v25 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v14) + 69152);
      v86 = a5;
      v81 = 61;
      goto LABEL_20;
    }
    if ( a4 > 3 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v10 = 0;
      }
      v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
        LOBYTE(v28) = v26;
        LOBYTE(v29) = v10;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v29,
          v28,
          *(_QWORD *)(UserSessionState + 69152),
          3,
          4,
          62,
          (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids,
          a4);
      }
      goto LABEL_21;
    }
    if ( (W32GetCurrentThreadDpiAwarenessContext(v15) & 0xF) != 2 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v10 = 0;
      }
      v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_10;
      v18 = W32GetUserSessionState(WPP_GLOBAL_Control, v30);
      v80 = 63;
      goto LABEL_9;
    }
    v31 = ValidateHwndIAM(a1);
    v33 = v31;
    if ( !v31 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v10 = 0;
      }
      v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v35 = W32GetUserSessionState(WPP_GLOBAL_Control, v32);
      v87 = a1;
      v82 = 64;
      goto LABEL_46;
    }
    if ( !IsTopLevelWindow(v31) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v10 = 0;
      }
      v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v35 = W32GetUserSessionState(WPP_GLOBAL_Control, v38);
      v87 = a1;
      v82 = 65;
      goto LABEL_46;
    }
    if ( *(struct tagTHREADINFO **)(v33 + 16) == PtiCurrent(v39) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v10 = 0;
      }
      v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v35 = W32GetUserSessionState(WPP_GLOBAL_Control, v40);
      v87 = a1;
      v82 = 66;
      goto LABEL_46;
    }
    if ( v8 )
    {
      v41 = ValidateHwndIAM(v8);
      if ( !v41 )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v10 = 0;
        }
        v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_21;
        v35 = W32GetUserSessionState(WPP_GLOBAL_Control, v42);
        v87 = v8;
        v82 = 67;
LABEL_46:
        LOBYTE(v37) = v34;
        LOBYTE(v36) = v10;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v36,
          v37,
          *(_QWORD *)(v35 + 69152),
          3,
          4,
          v82,
          (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids,
          v87);
        goto LABEL_21;
      }
      v43 = *(_QWORD *)(v41 + 40);
      v44 = *(unsigned int *)(v43 + 236);
      v45 = *(_QWORD *)(v33 + 40);
      if ( *(_DWORD *)(v45 + 236) != (_DWORD)v44 )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v10 = 0;
        }
        v46 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v47 = W32GetUserSessionState(WPP_GLOBAL_Control, v44);
          LOBYTE(v48) = v46;
          LOBYTE(v49) = v10;
          WPP_RECORDER_AND_TRACE_SF_qdqd(*((_QWORD *)WPP_GLOBAL_Control + 3), v49, v48, *(_QWORD *)(v47 + 69152));
        }
        goto LABEL_10;
      }
      if ( ((*(_BYTE *)(v43 + 24) ^ *(_BYTE *)(v45 + 24)) & 8) != 0 )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v10 = 0;
        }
        v50 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v51 = W32GetUserSessionState(WPP_GLOBAL_Control, v44);
          LOBYTE(v52) = v50;
          LOBYTE(v53) = v10;
          WPP_RECORDER_AND_TRACE_SF_qdqd(*((_QWORD *)WPP_GLOBAL_Control + 3), v53, v52, *(_QWORD *)(v51 + 69152));
        }
        goto LABEL_21;
      }
    }
    if ( IsHungWindow((const struct tagTHREADINFO **)v33) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v10 = 0;
      }
      v55 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_97;
      v56 = W32GetUserSessionState(WPP_GLOBAL_Control, v54);
      v88 = a1;
      v83 = 70;
LABEL_96:
      LOBYTE(v58) = v55;
      LOBYTE(v57) = v10;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v57,
        v58,
        *(_QWORD *)(v56 + 69152),
        3,
        4,
        v83,
        (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids,
        v88);
LABEL_97:
      v21 = 5023;
      goto LABEL_11;
    }
    if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline()
      && (*(_DWORD *)(v33 + 384) & 0x10) != 0
      && !WindowActions::ReserveSystemOperationDataSlot((WindowActions *)v33, v59) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v10 = 0;
      }
      v55 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_97;
      v56 = W32GetUserSessionState(WPP_GLOBAL_Control, v59);
      v88 = a1;
      v83 = 71;
      goto LABEL_96;
    }
    if ( IsGhostWindowClass((const struct tagWND *)v33, (__int64)v59) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v10 = 0;
      }
      v55 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_97;
      v56 = W32GetUserSessionState(WPP_GLOBAL_Control, v60);
      v88 = a1;
      v83 = 72;
      goto LABEL_96;
    }
    v61 = a5 & 0x10;
    if ( (a5 & 0x10) != 0 && v8 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v10 = 0;
      }
      v62 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v63 = W32GetUserSessionState(WPP_GLOBAL_Control, v60);
      v84 = 73;
      goto LABEL_125;
    }
    v66 = 0;
    v89 = 0;
    if ( a3 )
    {
      v93 = *UmpDetail::ReadFromUser<tagRECT>(&v93, a3);
      v66 = 1;
      v89 = 1;
      v61 = a5 & 0x10;
    }
    if ( v66 )
      goto LABEL_159;
    if ( (a5 & 0xC) != 0 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v10 = 0;
      }
      v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v25 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v60) + 69152);
      v86 = a5;
      v81 = 75;
LABEL_20:
      LOBYTE(v24) = v22;
      LOBYTE(v23) = v10;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v23,
        v24,
        v25,
        3,
        4,
        v81,
        (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids,
        v86);
LABEL_21:
      v21 = 87;
      goto LABEL_11;
    }
    if ( v91 != 3 )
    {
LABEL_159:
      if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( (a5 & 0x10) != 0 && !RunForegroundAccessCheck(v33, 3LL) )
        {
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
          {
            v10 = 0;
          }
          v72 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v73 = W32GetUserSessionState(WPP_GLOBAL_Control, v71);
            LOBYTE(v74) = v72;
            LOBYTE(v75) = v10;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v75,
              v74,
              *(_QWORD *)(v73 + 69152),
              3,
              4,
              80,
              (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids);
          }
          goto LABEL_97;
        }
        ShellWindowPos::ShellSetWindowPosAsync(v33, v8, (unsigned __int64)&v93 & -(__int64)(v89 != 0), v91, a5, a6);
      }
      else
      {
        v77 = ShellWindowPos::PositionWindowAsyncOld(v33, v8, &v93, v91, a5, a6) - 2;
        if ( !v77 )
        {
          v21 = 14;
          goto LABEL_11;
        }
        if ( v77 == 1 )
          goto LABEL_97;
      }
      v16 = 1;
      goto LABEL_190;
    }
    if ( v61 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v67 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v67 = 0;
      }
      v90 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v67 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_156;
      v68 = W32GetUserSessionState(WPP_GLOBAL_Control, v60);
      v85 = 76;
    }
    else
    {
      if ( !v8 )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v10 = 0;
        }
        v62 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_21;
        v63 = W32GetUserSessionState(WPP_GLOBAL_Control, v60);
        v84 = 78;
        goto LABEL_125;
      }
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v67 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v67 = 0;
      }
      v90 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v67 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      {
LABEL_156:
        if ( (*(_BYTE *)(*(_QWORD *)(v33 + 40) + 31LL) & 0x20) != 0 )
        {
          v91 = 0;
LABEL_158:
          v8 = a2;
          goto LABEL_159;
        }
        if ( IsArranged((const struct tagWND *)v33) )
          goto LABEL_158;
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v10 = 0;
        }
        v62 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_21;
        v63 = W32GetUserSessionState(WPP_GLOBAL_Control, v76);
        v84 = 79;
LABEL_125:
        LOBYTE(v65) = v62;
        LOBYTE(v64) = v10;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v64,
          v65,
          *(_QWORD *)(v63 + 69152),
          3,
          4,
          v84,
          (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids);
        goto LABEL_21;
      }
      v68 = W32GetUserSessionState(WPP_GLOBAL_Control, v60);
      v85 = 77;
    }
    LOBYTE(v70) = v90;
    LOBYTE(v69) = v67;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v69,
      v70,
      *(_QWORD *)(v68 + 69152),
      4,
      4,
      v85,
      (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids);
    goto LABEL_156;
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
  {
    v10 = 0;
  }
  v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    goto LABEL_10;
  v18 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
  v80 = 60;
LABEL_9:
  LOBYTE(v20) = v17;
  LOBYTE(v19) = v10;
  WPP_RECORDER_AND_TRACE_SF_(
    *((_QWORD *)WPP_GLOBAL_Control + 3),
    v19,
    v20,
    *(_QWORD *)(v18 + 69152),
    3,
    4,
    v80,
    (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids);
LABEL_10:
  v21 = 5;
LABEL_11:
  UserSetLastError(v21);
LABEL_190:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v94);
  UserSessionSwitchLeaveCrit(v78);
  return v16;
}
