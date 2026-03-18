/*
 * XREFs of ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x140154578
 * Callers:
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x140153FF4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     xxxSetModernAppWindow @ 0x1401C9464 (xxxSetModernAppWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x140271C80 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxClearForegroundThread @ 0x14029DC60 (xxxClearForegroundThread.c)
 * Callees:
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsCurrentSessionServiceSession @ 0x1400FC60C (IsCurrentSessionServiceSession.c)
 *     Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline @ 0x140155058 (Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ @ 0x14019CCC8 (--1-$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?GetShellSpecialWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@W4SHELL_SPECIAL_WINDOW@@@Z @ 0x140219320 (-GetShellSpecialWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@W4SHELL_SPECIAL_WIND.c)
 *     Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline @ 0x14028C23C (Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline.c)
 *     zzzDelegateInputFocusLostWindowEvent @ 0x1402A667C (zzzDelegateInputFocusLostWindowEvent.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall xxxSetForegroundThreadWithWindowHint(struct tagTHREADINFO *a1, struct tagWND *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r12
  unsigned int ThreadId; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 KeyboardDelegationTargetQ; // rax
  __int64 v31; // rcx
  struct MOVESIZEDATA *v32; // rcx
  char v33; // bl
  bool v34; // r14
  char v35; // bp
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  char v39; // si
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdx
  struct MOVESIZEDATA *v54; // rcx
  __int64 v55; // rsi
  __int64 ShellSpecialWindow; // rax
  char v57; // bl
  bool v58; // di
  __int64 v59; // rax
  int v60; // r8d
  int v61; // edx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rbx
  __int64 v70; // rdx
  __int64 v71; // rcx
  struct tagTHREADINFO *v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v83; // [rsp+60h] [rbp-58h]

  if ( a1 == *(struct tagTHREADINFO **)(W32GetUserSessionState(a1, a2) + 18944) )
    return;
  if ( !a1 )
  {
    v6 = 0;
    goto LABEL_7;
  }
  if ( !*(_QWORD *)(W32GetUserSessionState(v5, v4) + 18944)
    || *((_QWORD *)a1 + 57) != *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 18944) + 456LL) )
  {
    v6 = *(_DWORD *)(*((_QWORD *)a1 + 57) + 56LL);
LABEL_7:
    if ( *(_QWORD *)(W32GetUserSessionState(v5, v4) + 18944) )
      v9 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v8, v7) + 18944) + 456LL) + 56LL);
    else
      v9 = 0LL;
    EtwTraceFocusedProcessChange(v9, v6);
    UserSessionState = W32GetUserSessionState(v11, v10);
    CitProcessForegroundChange(a1, a2, *(_QWORD *)(UserSessionState + 18944));
    if ( a1 )
      ForegroundBoost::SetForegroundPriority(a1, 1LL, 8LL);
    if ( *(_QWORD *)(W32GetUserSessionState(v14, v13) + 18944) )
    {
      v15 = W32GetUserSessionState(v5, v4);
      ForegroundBoost::SetForegroundPriority(*(_QWORD *)(v15 + 18944), 0LL, 8LL);
    }
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v5, v4) + 18944) )
  {
    v17 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 18944);
    v18 = *(_QWORD *)(v17 + 472);
  }
  else
  {
    v18 = 0LL;
  }
  if ( a1 )
    ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)a1);
  else
    ThreadId = 0;
  if ( *(_QWORD *)(W32GetUserSessionState(v17, v16) + 18944) )
  {
    v22 = W32GetUserSessionState(v21, v20);
    v23 = (unsigned int)PsGetThreadId(**(PETHREAD **)(v22 + 18944));
  }
  else
  {
    v23 = 0;
  }
  EtwTraceFocusChange(v23, ThreadId);
  if ( *(_QWORD *)(W32GetUserSessionState(v25, v24) + 18944) )
  {
    if ( !a1
      || (v27 = *(_QWORD *)(W32GetUserSessionState(v27, v26) + 18944), *(_QWORD *)(v27 + 456) != *((_QWORD *)a1 + 57)) )
    {
      v28 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v27 = *(_QWORD *)(W32GetUserSessionState(0xFFFFF78000000004uLL, v26) + 18944);
      *(_DWORD *)(*(_QWORD *)(v27 + 456) + 1068LL) = v28;
    }
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v27, v26) + 18944) )
  {
    KeyboardDelegationTargetQ = GetKeyboardDelegationTargetQ();
    if ( KeyboardDelegationTargetQ )
    {
      v31 = *(_QWORD *)(KeyboardDelegationTargetQ + 120);
      if ( v31 )
        zzzDelegateInputFocusLostWindowEvent(v31, 14LL);
    }
    DisableDelegation();
  }
  v32 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v33 = 0;
  }
  v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v33 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    if ( a1 )
      v35 = (unsigned __int8)PsGetThreadId(*(PETHREAD *)a1);
    else
      v35 = 0;
    if ( *(_QWORD *)(W32GetUserSessionState(v32, v29) + 18944) )
    {
      v38 = W32GetUserSessionState(v37, v36);
      v39 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(v38 + 18944));
    }
    else
    {
      v39 = 0;
    }
    v40 = W32GetUserSessionState(v37, v36);
    LOBYTE(v41) = v34;
    LOBYTE(v42) = v33;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v42,
      v41,
      *(_QWORD *)(v40 + 69152),
      4,
      2,
      111,
      (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids,
      v39,
      v35);
  }
  *(_QWORD *)(W32GetUserSessionState(v32, v29) + 18944) = a1;
  if ( a1
    && (v43 = *(_QWORD *)(W32GetUserSessionState(v44, v43) + 63544),
        v44 = *(unsigned int *)(*((_QWORD *)a1 + 57) + 56LL),
        v44 == v43) )
  {
    v45 = W32GetUserSessionState(v44, v43);
    *(_DWORD *)(v45 + 14700) |= 2u;
  }
  else
  {
    v46 = W32GetUserSessionState(v44, v43);
    *(_DWORD *)(v46 + 14700) &= ~2u;
  }
  if ( !IsCurrentSessionServiceSession() )
  {
    *(_OWORD *)BugCheckParameter3 = 0LL;
    v83 = 0LL;
    if ( *(_QWORD *)(W32GetUserSessionState(v48, v47) + 18944) )
    {
      LODWORD(BugCheckParameter3[0]) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v50, v49) + 18944)
                                                             + 456LL)
                                                 + 56LL);
      v52 = W32GetUserSessionState(LODWORD(BugCheckParameter3[0]), v51);
      HIDWORD(BugCheckParameter3[0]) = (unsigned int)PsGetThreadId(**(PETHREAD **)(v52 + 18944));
      if ( a2 )
        *(_QWORD *)&v83 = *(_QWORD *)a2;
      else
        *(_QWORD *)&v83 = 0LL;
    }
    SendMessageTo(2LL, BugCheckParameter3, 32LL);
  }
  if ( (unsigned int)Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( a1 )
    {
      v55 = W32GetUserSessionState(v54, v53);
      if ( *(_DWORD *)(v55 + 14040) == 1 )
      {
        ShellSpecialWindow = ShellWindowManagement::GetShellSpecialWindow(*((_QWORD *)a1 + 61), 1LL);
        if ( ShellSpecialWindow )
        {
          if ( *(struct tagTHREADINFO **)(ShellSpecialWindow + 16) == a1 )
          {
            v54 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
              || (v57 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v57 = 0;
            }
            v58 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v57 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v59 = W32GetUserSessionState(WPP_GLOBAL_Control, v53);
              LOBYTE(v60) = v58;
              LOBYTE(v61) = v57;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v61,
                v60,
                *(_QWORD *)(v59 + 69152),
                4,
                6,
                112,
                (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
            }
            *(_DWORD *)(v55 + 14040) = 2;
          }
        }
      }
    }
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v54, v53) + 18944) )
  {
    v65 = *(_QWORD *)(W32GetUserSessionState(v63, v62) + 18944);
    if ( *(_QWORD *)(v65 + 472) )
    {
      v67 = *(unsigned int *)(W32GetUserSessionState(v65, v64) + 66800);
      if ( (v67 & 0x80u) != 0LL
        || !*(_QWORD *)(W32GetUserSessionState(v67, v66) + 14232)
        || (v69 = *(_QWORD *)(W32GetUserSessionState(v67, v68) + 14232),
            v67 = *(_QWORD *)(W32GetUserSessionState(v71, v70) + 18944),
            v69 == *(_QWORD *)(v67 + 472)) )
      {
        v72 = PtiCurrent(v67);
        Win32HM_LockIntoThread<1>((__int64)v72, v18, (__int64 *)BugCheckParameter3);
        v75 = W32GetUserSessionState(v74, v73);
        xxxChangeForegroundKeyboardTable(v18, *(_QWORD *)(*(_QWORD *)(v75 + 18944) + 472LL), 0LL);
        Win32HMThreadLockBase<tagKL,1,0>::~Win32HMThreadLockBase<tagKL,1,0>((ULONG_PTR)BugCheckParameter3);
      }
    }
  }
  if ( !(unsigned int)Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline() )
  {
    v78 = W32GetUserSessionState(v77, v76);
    *(_OWORD *)(v78 + 14456) = 0LL;
    *(_OWORD *)(v78 + 14472) = 0LL;
    v81 = W32GetUserSessionState(v80, v79);
    ++*(_DWORD *)(*(_QWORD *)(v81 + 19904) + 6988LL);
  }
}
