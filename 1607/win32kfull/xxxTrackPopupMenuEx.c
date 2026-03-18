/*
 * XREFs of xxxTrackPopupMenuEx @ 0x1C013BE70
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     NtUserTrackPopupMenuEx @ 0x1C013B4F0 (NtUserTrackPopupMenuEx.c)
 *     xxxDoScrollMenu @ 0x1C022C4CC (xxxDoScrollMenu.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0035534 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005425C (safe_cast_fnid_to_PMENUWND.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     xxxInheritWindowMonitor @ 0x1C00712C4 (xxxInheritWindowMonitor.c)
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     _IsTopLevelWindow @ 0x1C00725F0 (_IsTopLevelWindow.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _GetKeyState @ 0x1C0095870 (_GetKeyState.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00A5D80 (zzzSetWindowCompositionCloak.c)
 *     xxxSetWindowPosAndBand @ 0x1C00A652C (xxxSetWindowPosAndBand.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _MonitorFromPoint @ 0x1C00AEF70 (_MonitorFromPoint.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00B2504 (xxxEnableChildWindowDpiMessageX.c)
 *     MNClearCachedPopupSizes @ 0x1C00B83FC (MNClearCachedPopupSizes.c)
 *     IsWindowShellCloaked @ 0x1C00DC56C (IsWindowShellCloaked.c)
 *     FindTimer @ 0x1C00ECDEC (FindTimer.c)
 *     PlayEventSound @ 0x1C010F740 (PlayEventSound.c)
 *     SubtractRect @ 0x1C0113BD0 (SubtractRect.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C011DD14 (IsWindowBroadcastingDpiToChildrenX.c)
 *     MNAllocMenuState @ 0x1C013B658 (MNAllocMenuState.c)
 *     xxxMNStartMenu @ 0x1C013B778 (xxxMNStartMenu.c)
 *     FindBestPos @ 0x1C013BA14 (FindBestPos.c)
 *     MNAnimate @ 0x1C013F880 (MNAnimate.c)
 *     xxxMNReleaseCapture @ 0x1C01404F0 (xxxMNReleaseCapture.c)
 *     xxxMNLoop @ 0x1C0141414 (xxxMNLoop.c)
 *     xxxMNEndMenuState @ 0x1C0142C80 (xxxMNEndMenuState.c)
 *     LockPopupMenu @ 0x1C0142D1C (LockPopupMenu.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0142EC4 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     IsChildWindowDpiMessageEnabledX @ 0x1C01DC0C0 (IsChildWindowDpiMessageEnabledX.c)
 *     IsNonClientDpiScalingEnabledX @ 0x1C01DC110 (IsNonClientDpiScalingEnabledX.c)
 *     xxxUserModeCallback @ 0x1C020E1A4 (xxxUserModeCallback.c)
 */

__int64 __fastcall xxxTrackPopupMenuEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  signed int v7; // r14d
  int v8; // r15d
  unsigned int v9; // r12d
  __int64 *v11; // rdi
  unsigned int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 CurrentProcessWin32Process; // rax
  char v22; // dl
  _DWORD *Window; // rax
  __int64 v24; // r15
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r14
  struct tagMENUSTATE *v29; // rdi
  unsigned __int8 *v30; // r14
  int v31; // eax
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  _DWORD *v44; // rcx
  int v45; // eax
  HDC v46; // rax
  __int64 v47; // r9
  int v48; // r9d
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int16 v52; // ax
  __int64 v53; // rdx
  unsigned __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  _DWORD *v65; // rcx
  unsigned __int16 v66; // ebx^2
  __int64 v67; // rdx
  unsigned __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  _DWORD *v79; // rdx
  unsigned __int64 v80; // rbx
  struct tagRECT *v81; // r13
  __int64 v82; // rax
  int *p_bottom; // r8
  int v84; // edx
  __int64 v85; // rax
  __int64 v86; // rax
  int *v87; // rdx
  int BestPos; // ebx
  HDC v89; // r13
  __int64 *v90; // rdx
  int v91; // r8d
  __int64 v92; // rdx
  __int64 v93; // rcx
  unsigned int v94; // ebx
  int v95; // r14d
  __int64 v97; // rcx
  __int64 v98; // rbx
  __int64 v99; // rdx
  __int64 v100; // rax
  __int64 v101; // rbx
  __int64 v102; // rax
  int v103; // eax
  __int64 v104; // rdx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rdx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v111; // rdx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rdx
  __int64 v115; // r8
  __int64 v116; // r9
  int v117; // ecx
  unsigned int v118; // r9d
  unsigned int v119; // ecx
  __int64 v120; // r8
  __int64 v121; // rdx
  __int64 v122; // rax
  __int64 v123; // rdx
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // rdx
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 v130; // rdx
  __int64 v131; // r8
  __int64 v132; // r9
  __int64 v133; // rdx
  __int64 v134; // r8
  __int64 v135; // r9
  int v136; // ecx
  __int64 v137; // rdx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rdx
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 v144; // rdx
  __int64 v145; // r8
  __int64 v146; // r9
  __int64 v147; // rdx
  __int64 v148; // r8
  __int64 v149; // r9
  int v150; // ecx
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 *v155; // rdx
  int v156; // [rsp+98h] [rbp-59h]
  int v157; // [rsp+98h] [rbp-59h]
  int v158; // [rsp+9Ch] [rbp-55h]
  int v159; // [rsp+A0h] [rbp-51h]
  int v160; // [rsp+A0h] [rbp-51h]
  int v161; // [rsp+A8h] [rbp-49h]
  HDC v162; // [rsp+B0h] [rbp-41h]
  __int64 v163; // [rsp+C0h] [rbp-31h] BYREF
  __int64 v164[2]; // [rsp+C8h] [rbp-29h] BYREF
  _QWORD v165[3]; // [rsp+D8h] [rbp-19h] BYREF
  _QWORD v166[9]; // [rsp+F0h] [rbp-1h] BYREF
  LONG v167; // [rsp+158h] [rbp+67h]
  LONG v168; // [rsp+160h] [rbp+6Fh]

  v168 = a4;
  v167 = a3;
  v6 = 0LL;
  v7 = 0;
  v162 = 0LL;
  v8 = 0;
  v9 = a2;
  if ( a6 )
  {
    if ( *(_DWORD *)a6 != 20 )
      goto LABEL_107;
    *(_OWORD *)v164 = *(_OWORD *)(a6 + 4);
  }
  if ( gptiCurrent != *(_QWORD *)(a5 + 16) )
  {
LABEL_107:
    v97 = 87LL;
LABEL_109:
    UserSetLastError(v97);
    return 0LL;
  }
  v11 = *(__int64 **)(gptiCurrent + 528LL);
  v12 = 1;
  if ( !v11 )
    goto LABEL_4;
  if ( (a2 & 1) == 0 )
  {
    v97 = 1446LL;
    goto LABEL_109;
  }
  v98 = *v11;
  v99 = *(_QWORD *)(*v11 + 8);
  if ( (v11[1] & 4) == 0 || (*(_DWORD *)v98 & 0x8000) != 0 || !v99 || v99 != a5 || v11[4] != *(_QWORD *)(v99 + 16) )
    return 0LL;
  MNAnimate(v11, 0LL);
  v100 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(v98 + 56));
  if ( v100 )
    v101 = *(_QWORD *)(v100 + 360);
  else
    v101 = 0LL;
  if ( v101 && (*(_DWORD *)v101 & 0x2000) != 0 )
  {
    FindTimer(*(_QWORD *)(v101 + 16), 65534LL, 0, 1, 0LL);
    *(_DWORD *)v101 &= ~0x2000u;
  }
  v6 = 0LL;
  if ( (v11[1] & 0x100) == 0 )
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL) &= ~0x100000u;
LABEL_4:
  if ( (v9 & 2) != 0 )
    v156 = (unsigned __int16)GetKeyState(2u, a2, a3, a4) >> 15;
  else
    v156 = (unsigned __int16)GetKeyState(1u, a2, a3, a4) >> 15;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v14, v13, v15, v16) & 0xF) == 2 )
  {
    v102 = MonitorFromPoint(__PAIR64__(v168, v167), 2u);
    v7 = *(_DWORD *)(v102 + 28);
    v8 = *(_DWORD *)(v102 + 32);
  }
  v22 = 0;
  if ( PsGetCurrentProcessWin32Process(v18, v17) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20, v19);
    if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
      v22 = 1;
  }
  Window = xxxCreateWindowEx(
             385,
             (wchar_t *)0x8000,
             0x8000LL,
             0LL,
             -2139095040,
             v7,
             v8,
             100,
             100,
             a5 & -(__int64)((*(_DWORD *)(a1 + 40) & 0x40000000) != 0),
             0LL,
             *(_QWORD *)(a5 + 56),
             0LL,
             *(_DWORD *)(a5 + 304),
             0xA00u,
             v22,
             0LL);
  v24 = (__int64)Window;
  if ( !Window )
    return 0LL;
  v28 = safe_cast_fnid_to_PMENUWND((__int64)Window);
  if ( !v28 )
  {
    xxxDestroyWindow((_QWORD *)v24);
    return 0LL;
  }
  v165[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v165;
  v165[1] = v24;
  ++*(_DWORD *)(v24 + 8);
  if ( (W32GetCurrentThreadDpiAwarenessContext(gptiCurrent, v25, v26, v27) & 0xF) == 2 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 768LL) & 0x80000) != 0
      || ((v9 & 0x200) == 0
        ? (!(unsigned int)IsTopLevelWindow(a5)
         ? (v103 = IsChildWindowDpiMessageEnabledX(a5))
         : (v103 = IsWindowBroadcastingDpiToChildrenX(a5)))
        : (v103 = IsNonClientDpiScalingEnabledX(a5)),
          v103) )
    {
      xxxEnableChildWindowDpiMessageX((struct tagWND *)v24);
    }
  }
  else if ( (*(_DWORD *)(a1 + 40) & 0x40000000) == 0 )
  {
    xxxInheritWindowMonitor((struct tagWND *)v24, (struct tagWND *)a5, 1, 0);
  }
  v29 = 0LL;
  if ( (*(_DWORD *)(a1 + 40) & 0x40000000) == 0
    && (unsigned int)IsWindowShellCloaked(v24, 1)
    && !(unsigned int)IsWindowShellCloaked(a5, 0) )
  {
    zzzSetWindowCompositionCloak(v24, 0LL, 0);
  }
  if ( (((v9 & 0x8000) == 0) & (unsigned __int8)~(*(_BYTE *)(a5 + 50) >> 6)) == 0 )
    SetOrClrWF(1, (_DWORD *)v24, 0xA40u, 1);
  SetOrClrWF(0, (_DWORD *)v24, 0x408u, 1);
  v30 = *(unsigned __int8 **)(v28 + 360);
  if ( !v30 )
    goto LABEL_138;
  HMAssignmentLock(v30 + 8, a5);
  LockPopupMenu(v30, v30 + 40, a1);
  HMAssignmentLock(v30 + 56, v24);
  v31 = *(_DWORD *)v30 | 0x10008;
  *((_QWORD *)v30 + 8) = v30;
  v157 = v156 & 1;
  *(_DWORD *)v30 = (v31 & 0xFFFFFDFF | (v157 << 9)) ^ ((unsigned __int8)v31 ^ (((v9 & 2) != 0) << 6)) & 0x40;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x28uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v33, v32, v34, v35) & 0xF) == 0 )
    {
LABEL_146:
      v44 = (_DWORD *)(gpsi + 2428LL);
      goto LABEL_25;
    }
  }
  else if ( IsDPIDWMSysMet(v33)
         && (W32GetCurrentThreadDpiAwarenessContext(v37, v36, v38, v39) & 0xF) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v104, v105, v106) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v107, v108, v109)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_146;
  }
  if ( IsDPIDWMSysMet(0x28uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v41, v40, v42, v43) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v111, v112, v113) + 408)
      ? (v117 = 0)
      : (v117 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v114,
                                                      v115,
                                                      v116)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
        v117) )
  {
    v44 = (_DWORD *)(gpsi + 2816LL);
  }
  else
  {
    v44 = (_DWORD *)(gpsi + 2040LL);
  }
LABEL_25:
  if ( *v44 || (*(_DWORD *)(a1 + 40) & 0x20) != 0 )
    *(_DWORD *)v30 |= 0x10u;
  v45 = *(_DWORD *)v30 ^ (*(_DWORD *)v30 ^ ((unsigned __int8)v9 >> 7 << 11)) & 0x800;
  *(_DWORD *)v30 = v45;
  v158 = v9 & 0x100;
  if ( (v9 & 0x100) != 0 )
    *(_DWORD *)v30 = v45 | 0x100;
  *(_DWORD *)v30 ^= (*(_DWORD *)v30 ^ (4 * ((v9 >> 9) & 1))) & 4;
  v46 = MNAllocMenuState(v30);
  v162 = v46;
  v6 = (__int64)v46;
  if ( !v46 )
  {
LABEL_138:
    v9 |= 0x80u;
LABEL_222:
    xxxWindowEvent(5u, (__int64 *)a5, 0, 0, 0);
    xxxMNReleaseCapture(v6);
    if ( (v9 & 0x80u) == 0 )
      xxxSendMessage((struct tagWND *)a5, 0x212u, ((v9 >> 9) & 1) == 0, 0LL);
    v89 = v162;
    v95 = 1;
    v94 = 0;
    goto LABEL_95;
  }
  if ( gptiCurrent == *((_QWORD *)v46 + 4) )
  {
    ++*((_DWORD *)v46 + 10);
    v29 = (struct tagMENUSTATE *)v46;
  }
  if ( (*(_DWORD *)v30 & 0x800) == 0 )
    xxxSendMessage((struct tagWND *)a5, 0x211u, ((unsigned __int8)~*v30 >> 2) & 1, 0LL);
  if ( !xxxMNStartMenu(v30, v6, 0xFFFFFFFFLL, v47) )
    goto LABEL_227;
  if ( (*(_DWORD *)(v6 + 8) & 0x400) != 0 )
  {
    v163 = *(_QWORD *)v24;
    xxxUserModeCallback(100, (unsigned int)&v163, 8, v48);
  }
  if ( (*(_DWORD *)v30 & 0x800) == 0 )
  {
    v49 = *((_QWORD *)v30 + 1);
    v166[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v166;
    v166[1] = v49;
    if ( v49 )
      ++*(_DWORD *)(v49 + 8);
    xxxSendMessage(*((struct tagWND **)v30 + 1), 0x117u, *(_QWORD *)a1, ((*v30 >> 2) & 1u) << 16);
    ThreadUnlock1(v51, v50);
    *(_DWORD *)v30 |= 0x200000u;
  }
  if ( *(int *)(v24 + 288) < 0 )
  {
    v118 = *(_DWORD *)(a1 + 52);
    v119 = 0;
    if ( v118 )
    {
      v120 = *(_QWORD *)(a1 + 80);
      while ( 1 )
      {
        v121 = 152LL * v119;
        if ( (*(_DWORD *)(v121 + v120) & 0x100) != 0 || *(_QWORD *)(v121 + v120 + 104) == -1LL )
          break;
        if ( ++v119 >= v118 )
          goto LABEL_42;
      }
      xxxEnableChildWindowDpiMessageX((struct tagWND *)v24);
    }
  }
LABEL_42:
  if ( (*(_DWORD *)(v24 + 288) & 0x10000000) != 0 )
  {
    v52 = *(_WORD *)(v24 + 356);
  }
  else if ( (*(_DWORD *)(v24 + 352) & 0xF) == 0
         && (v122 = *(_QWORD *)(*(_QWORD *)(v24 + 16) + 408LL)) != 0
         && (*(_DWORD *)(*(_QWORD *)(v122 + 8) + 244LL) & 1) != 0 )
  {
    v52 = 96;
  }
  else
  {
    v52 = *(_WORD *)(gpsi + 8678LL);
  }
  if ( v52 != *(_WORD *)(a1 + 68) )
  {
    *(_WORD *)(a1 + 68) = v52;
    MNClearCachedPopupSizes(a1);
  }
  v159 = xxxSendMessage((struct tagWND *)v24, 0x1E2u, 1uLL, 0LL);
  if ( !v159 )
  {
LABEL_227:
    if ( (*(_DWORD *)(v6 + 8) & 0x100) == 0 && gpqForeground == *(_QWORD *)(gptiCurrent + 384LL) )
    {
      v155 = *(__int64 **)(gpqForeground + 80LL);
      if ( v155 )
        xxxWindowEvent(0x80000005, v155, 0, 1, 33);
    }
    goto LABEL_222;
  }
  if ( (glinp[7] & 0x100000000LL) != 0 )
  {
    *(_DWORD *)(v6 + 8) |= 0x20u;
    *(_DWORD *)(a1 + 40) |= 4u;
  }
  else
  {
    *(_DWORD *)(a1 + 40) &= ~4u;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(7uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v54, v53, v55, v56) & 0xF) == 0 )
    {
LABEL_173:
      v65 = (_DWORD *)(gpsi + 2296LL);
      goto LABEL_54;
    }
  }
  else if ( IsDPIDWMSysMet(v54)
         && (W32GetCurrentThreadDpiAwarenessContext(v58, v57, v59, v60) & 0xF) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v123, v124, v125) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v126, v127, v128)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_173;
  }
  if ( IsDPIDWMSysMet(7uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v62, v61, v63, v64) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v130, v131, v132) + 408)
      ? (v136 = 0)
      : (v136 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v133,
                                                      v134,
                                                      v135)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
        v136) )
  {
    v65 = (_DWORD *)(gpsi + 2684LL);
  }
  else
  {
    v65 = (_DWORD *)(gpsi + 1908LL);
  }
LABEL_54:
  v66 = HIWORD(v159);
  v160 = (unsigned __int16)v159 + 2 * *v65;
  if ( (unsigned int)IsDPIAbsoluteSysMet(8uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v68, v67, v69, v70) & 0xF) == 0 )
    {
LABEL_187:
      v79 = (_DWORD *)(gpsi + 2300LL);
      goto LABEL_58;
    }
  }
  else if ( IsDPIDWMSysMet(v68)
         && (W32GetCurrentThreadDpiAwarenessContext(v72, v71, v73, v74) & 0xF) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v137, v138, v139) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v140, v141, v142)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_187;
  }
  if ( IsDPIDWMSysMet(8uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v76, v75, v77, v78) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v144, v145, v146) + 408)
      ? (v150 = 0)
      : (v150 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v147,
                                                      v148,
                                                      v149)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
        v150) )
  {
    v79 = (_DWORD *)(gpsi + 2688LL);
  }
  else
  {
    v79 = (_DWORD *)(gpsi + 1912LL);
  }
LABEL_58:
  v161 = v66 + 2 * *v79;
  v163 = __PAIR64__(v168, v167);
  v80 = __PAIR64__(v168, v167);
  v81 = (struct tagRECT *)MonitorFromPoint(__PAIR64__(v168, v167), 2u);
  if ( (((v9 & 4) == 0) & (*(_BYTE *)(a5 + 50) >> 6)) != 0 )
    v9 ^= 8u;
  if ( (v9 & 8) != 0 )
  {
    v167 -= v160;
    *(_DWORD *)v30 = *(_DWORD *)v30 & 0xF07FFFFF | 0x1000000;
  }
  else if ( (v9 & 4) != 0 )
  {
    v167 += v160 / -2;
  }
  else
  {
    *(_DWORD *)v30 ^= (*(_DWORD *)v30 ^ ((((*(_DWORD *)v30 & 0x10) != 0) + 1) << 23)) & 0xF800000;
  }
  if ( (v9 & 0x20) != 0 )
  {
    *(_DWORD *)v30 |= 0x4000000u;
    v168 -= v161;
  }
  else if ( (v9 & 0x10) != 0 )
  {
    v168 += v161 / -2;
  }
  else
  {
    *(_DWORD *)v30 |= 0x2000000u;
  }
  if ( (v9 & 0x3C00) != 0 )
    *(_DWORD *)v30 = ((v9 & 0x3C00) << 13) | *(_DWORD *)v30 & 0xF07FFFFF;
  v82 = *((_QWORD *)v30 + 2);
  if ( a6 )
  {
    if ( *(_DWORD *)(v82 + 304) == 1 )
LABEL_81:
      *(_DWORD *)v30 |= 0x80000000;
  }
  else
  {
    if ( *(_DWORD *)(v82 + 304) == 1 )
    {
      if ( IsRectEmptyInl(v81 + 32) )
      {
        v84 = *(_DWORD *)(v24 + 352) & 0xF;
        if ( !v84
          && (v151 = *(_QWORD *)(*(_QWORD *)(v24 + 16) + 408LL)) != 0
          && (*(_DWORD *)(*(_QWORD *)(v151 + 8) + 244LL) & 1) != 0 )
        {
          p_bottom = &v81[2].bottom;
        }
        else if ( v84 == 1
               && (v152 = *(_QWORD *)(*(_QWORD *)(v24 + 16) + 408LL)) != 0
               && (*(_DWORD *)(*(_QWORD *)(v152 + 8) + 244LL) & 1) != 0 )
        {
          p_bottom = &v81[3].bottom;
        }
        else
        {
          p_bottom = &v81[1].bottom;
        }
      }
      else
      {
        v84 = *(_DWORD *)(v24 + 352) & 0xF;
        if ( !v84
          && (v153 = *(_QWORD *)(*(_QWORD *)(v24 + 16) + 408LL)) != 0
          && (*(_DWORD *)(*(_QWORD *)(v153 + 8) + 244LL) & 1) != 0 )
        {
          p_bottom = &v81[33].left;
        }
        else if ( v84 == 1 )
        {
          v85 = *(_QWORD *)(*(_QWORD *)(v24 + 16) + 408LL);
          if ( v85 )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(v85 + 8) + 244LL) & 1) != 0 )
              p_bottom = &v81[34].left;
          }
        }
      }
      if ( !v84
        && (v154 = *(_QWORD *)(*(_QWORD *)(v24 + 16) + 408LL)) != 0
        && (*(_DWORD *)(*(_QWORD *)(v154 + 8) + 244LL) & 1) != 0 )
      {
        v87 = &v81[2].bottom;
      }
      else if ( v84 != 1
             || (v86 = *(_QWORD *)(*(_QWORD *)(v24 + 16) + 408LL)) == 0
             || (v87 = &v81[3].bottom, (*(_DWORD *)(*(_QWORD *)(v86 + 8) + 244LL) & 1) == 0) )
      {
        v87 = &v81[1].bottom;
      }
      SubtractRect((__int64)v164, v87, p_bottom);
      goto LABEL_81;
    }
    *(_DWORD *)v30 &= ~0x80000000;
    v164[0] = 0LL;
    v164[1] = 0LL;
  }
  BestPos = FindBestPos(v167, v168, v160, v161, (struct tagRECT *)v164, v9, (unsigned int *)v30, v81, v80);
  if ( ((*(_BYTE *)(a5 + 50) >> 6) & ((*(_DWORD *)v30 & 0x1800000) != 0)) != 0 )
    *(_DWORD *)v30 ^= 0x1800000u;
  if ( (*(_DWORD *)v30 & 0xF800000) != 0 && (v9 & 0x4000) == 0 )
    *(_DWORD *)v30 |= 0x8000000u;
  PlayEventSound(5u);
  v89 = v162;
  xxxSetWindowPosAndBand(
    (struct tagWND *)v24,
    (((*((_DWORD *)v162 + 2) >> 8) & 1) != 0) - 1,
    (__int16)BestPos,
    SHIWORD(BestPos),
    0,
    0,
    (((*((_DWORD *)v162 + 2) >> 8) & 1) == 0 ? 0x10 : 0) | 0x241,
    0);
  if ( ((_DWORD)v162[2] & 0x100) == 0 )
  {
    if ( gpqForeground )
    {
      v90 = *(__int64 **)(gpqForeground + 80LL);
      if ( v90 )
      {
        if ( gpqForeground == *(_QWORD *)(gptiCurrent + 384LL) )
        {
          v91 = gptiCurrent != v90[2] ? 0x10 : 0;
          if ( v90[2] == gptiCurrent )
            v90 = (__int64 *)v24;
          xxxWindowEvent(0x80000004, v90, 0, 1, v91 | 0x21);
        }
      }
    }
  }
  xxxWindowEvent(6u, (__int64 *)v24, -4, 0, 0);
  *((_DWORD *)v162 + 2) = (8 * v157) | (_DWORD)v162[2] & 0xFFFFFFF7;
  v94 = xxxMNLoop(v30, v162, 0LL, 0LL);
  if ( ((_DWORD)v162[2] & 0x100) == 0 )
  {
    v95 = v158;
LABEL_95:
    if ( ThreadUnlock1(v93, v92) && *(char *)(v24 + 43) >= 0 )
      xxxDestroyWindow((_QWORD *)v24);
    if ( v89 )
      xxxMNEndMenuState(v89);
    goto LABEL_100;
  }
  ThreadUnlock1(v93, v92);
  v95 = v158;
LABEL_100:
  if ( v95 )
    v12 = v94;
  if ( v29 )
    xxxUnlockMenuStateInternal(v29, 0);
  return v12;
}
