/*
 * XREFs of xxxTrackPopupMenuEx @ 0x1C0134F0C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     NtUserTrackPopupMenuEx @ 0x1C01345C0 (NtUserTrackPopupMenuEx.c)
 *     xxxDoScrollMenu @ 0x1C023395C (xxxDoScrollMenu.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0041E08 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     _IsTopLevelWindow @ 0x1C0056918 (_IsTopLevelWindow.c)
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C006CD18 (xxxInheritWindowMonitor.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00747C4 (zzzSetWindowCompositionCloak.c)
 *     xxxSetWindowPosAndBand @ 0x1C0074F6C (xxxSetWindowPosAndBand.c)
 *     _MonitorFromPoint @ 0x1C0077F10 (_MonitorFromPoint.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     IsWindowShellCloaked @ 0x1C008B18C (IsWindowShellCloaked.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C0092C74 (xxxEnableChildWindowDpiMessageX.c)
 *     _GetKeyState @ 0x1C00936A0 (_GetKeyState.c)
 *     MNClearCachedPopupSizes @ 0x1C00C683C (MNClearCachedPopupSizes.c)
 *     SubtractRect @ 0x1C00EE448 (SubtractRect.c)
 *     PlayEventSound @ 0x1C00F0C20 (PlayEventSound.c)
 *     FindTimer @ 0x1C00F646C (FindTimer.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C010F49C (IsWindowBroadcastingDpiToChildrenX.c)
 *     MNAllocMenuState @ 0x1C0134728 (MNAllocMenuState.c)
 *     xxxMNStartMenu @ 0x1C01347DC (xxxMNStartMenu.c)
 *     FindBestPos @ 0x1C0134B7C (FindBestPos.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01377A4 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxMNEndMenuState @ 0x1C01377F0 (xxxMNEndMenuState.c)
 *     xxxMNLoop @ 0x1C0137990 (xxxMNLoop.c)
 *     LockPopupMenu @ 0x1C0138B8C (LockPopupMenu.c)
 *     MNAnimate @ 0x1C01393FC (MNAnimate.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0139460 (safe_cast_fnid_to_PMENUWND.c)
 *     xxxMNReleaseCapture @ 0x1C01395FC (xxxMNReleaseCapture.c)
 *     IsChildWindowDpiMessageEnabledX @ 0x1C01E57D4 (IsChildWindowDpiMessageEnabledX.c)
 *     xxxUserModeCallback @ 0x1C02154C0 (xxxUserModeCallback.c)
 */

__int64 __fastcall xxxTrackPopupMenuEx(__int64 a1, unsigned int a2, LONG a3, LONG a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  signed int v7; // r14d
  signed int v8; // r15d
  unsigned int v9; // r12d
  __int64 *v11; // rdi
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 CurrentProcessWin32Process; // rax
  char v17; // dl
  __int64 Window; // rax
  __int64 v19; // r15
  __int64 v20; // r14
  struct tagMENUSTATE *v21; // rdi
  unsigned __int8 *v22; // r14
  int v23; // eax
  unsigned __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  _DWORD *v27; // rcx
  int v28; // eax
  _QWORD *v29; // rax
  int v30; // r9d
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int16 v34; // ax
  unsigned __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  _DWORD *v38; // rcx
  unsigned __int16 v39; // ebx^2
  unsigned __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  _DWORD *v43; // rdx
  unsigned __int64 v44; // rbx
  struct tagRECT *v45; // r13
  __int64 v46; // rax
  BOOL v47; // eax
  int *p_bottom; // r8
  int v49; // edx
  int *v50; // rdx
  int BestPos; // ebx
  _QWORD *v52; // r13
  __int64 *v53; // rdx
  int v54; // r8d
  __int64 v55; // rdx
  __int64 v56; // rcx
  unsigned int v57; // ebx
  int v58; // r14d
  int v60; // ecx
  __int64 v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rbx
  __int64 v65; // rax
  int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // rcx
  int v70; // ecx
  unsigned int v71; // r9d
  unsigned int v72; // ecx
  __int64 v73; // r8
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rcx
  int v78; // ecx
  __int64 v79; // rcx
  __int64 v80; // rcx
  int v82; // ecx
  __int64 *v83; // rdx
  int v84; // [rsp+98h] [rbp-59h]
  int v85; // [rsp+98h] [rbp-59h]
  int v86; // [rsp+9Ch] [rbp-55h]
  int v87; // [rsp+A0h] [rbp-51h]
  int v88; // [rsp+A0h] [rbp-51h]
  int v89; // [rsp+A8h] [rbp-49h]
  _QWORD *v90; // [rsp+B0h] [rbp-41h]
  __int64 v91; // [rsp+C0h] [rbp-31h] BYREF
  __int64 v92[2]; // [rsp+C8h] [rbp-29h] BYREF
  _QWORD v93[3]; // [rsp+D8h] [rbp-19h] BYREF
  _QWORD v94[9]; // [rsp+F0h] [rbp-1h] BYREF

  v6 = 0LL;
  v7 = 0;
  v90 = 0LL;
  v8 = 0;
  v9 = a2;
  if ( a6 )
  {
    if ( *(_DWORD *)a6 != 20 )
      goto LABEL_105;
    *(_OWORD *)v92 = *(_OWORD *)(a6 + 4);
  }
  if ( gptiCurrent != *(_QWORD *)(a5 + 16) )
  {
LABEL_105:
    v60 = 87;
LABEL_107:
    UserSetLastError(v60);
    return 0LL;
  }
  v11 = *(__int64 **)(gptiCurrent + 528LL);
  v12 = 1;
  if ( !v11 )
    goto LABEL_4;
  if ( (a2 & 1) == 0 )
  {
    v60 = 1446;
    goto LABEL_107;
  }
  v61 = *v11;
  v62 = *(_QWORD *)(*v11 + 8);
  if ( (v11[1] & 4) == 0 || (*(_DWORD *)v61 & 0x8000) != 0 || !v62 || v62 != a5 || v11[4] != *(_QWORD *)(v62 + 16) )
    return 0LL;
  MNAnimate(v11, 0LL);
  v63 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(v61 + 56));
  if ( v63 )
    v64 = *(_QWORD *)(v63 + 376);
  else
    v64 = 0LL;
  if ( v64 && (*(_DWORD *)v64 & 0x2000) != 0 )
  {
    FindTimer(*(_QWORD *)(v64 + 16), 65534LL, 0, 1, 0LL);
    *(_DWORD *)v64 &= ~0x2000u;
  }
  v6 = 0LL;
  if ( (v11[1] & 0x100) == 0 )
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 332LL) &= ~0x100000u;
LABEL_4:
  if ( (v9 & 2) != 0 )
    v84 = (unsigned __int16)GetKeyState(2u) >> 15;
  else
    v84 = (unsigned __int16)GetKeyState(1u) >> 15;
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x4000) != 0 )
  {
    v65 = MonitorFromPoint(__PAIR64__(a4, a3), 2u);
    v7 = *(_DWORD *)(v65 + 28);
    v8 = *(_DWORD *)(v65 + 32);
  }
  v17 = 0;
  if ( PsGetCurrentProcessWin32Process(v14) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
    if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
      v17 = 1;
  }
  Window = xxxCreateWindowEx(
             385,
             0x8000uLL,
             0x8000LL,
             0LL,
             0x80800000,
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
             v17,
             0LL);
  v19 = Window;
  if ( !Window )
    return 0LL;
  v20 = safe_cast_fnid_to_PMENUWND(Window);
  if ( !v20 )
  {
    xxxDestroyWindow((_QWORD *)v19);
    return 0LL;
  }
  v93[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v93;
  v93[1] = v19;
  ++*(_DWORD *)(v19 + 8);
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(gptiCurrent) + 776) & 0x4000) != 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 776LL) & 0x200000) != 0
      || (!(unsigned int)IsTopLevelWindow(a5)
        ? (v66 = IsChildWindowDpiMessageEnabledX(a5))
        : (v66 = IsWindowBroadcastingDpiToChildrenX(a5)),
          v66) )
    {
      *(_DWORD *)(v19 + 364) = 1;
    }
  }
  if ( (*(_DWORD *)(a1 + 40) & 0x40000000) == 0 )
    xxxInheritWindowMonitor((struct tagWND *)v19, a5, 1);
  v21 = 0LL;
  if ( (*(_DWORD *)(a1 + 40) & 0x40000000) == 0
    && (unsigned int)IsWindowShellCloaked(v19, 1)
    && !(unsigned int)IsWindowShellCloaked(a5, 0) )
  {
    zzzSetWindowCompositionCloak(v19, 0LL, 0);
  }
  if ( (((v9 & 0x8000) == 0) & (unsigned __int8)~(*(_BYTE *)(a5 + 50) >> 6)) == 0 )
    SetOrClrWF(1, (_DWORD *)v19, 0xA40u, 1);
  SetOrClrWF(0, (_DWORD *)v19, 0x408u, 1);
  v22 = *(unsigned __int8 **)(v20 + 376);
  if ( !v22 )
    goto LABEL_134;
  HMAssignmentLock(v22 + 8, a5);
  LockPopupMenu(v22, v22 + 40, a1);
  HMAssignmentLock(v22 + 56, v19);
  v23 = *(_DWORD *)v22 | 0x10008;
  *((_QWORD *)v22 + 8) = v22;
  v85 = v84 & 1;
  *(_DWORD *)v22 = (v23 & 0xFFFFFDFF | (v85 << 9)) ^ ((unsigned __int8)v23 ^ (((v9 & 2) != 0) << 6)) & 0x40;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x28uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v67) + 776) & 0x4000) == 0 )
    {
LABEL_144:
      v27 = (_DWORD *)(gpsi + 2428LL);
      goto LABEL_25;
    }
  }
  else if ( IsDPIDWMSysMet(v24)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v68) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_144;
  }
  if ( IsDPIDWMSysMet(0x28uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v70 = 0)
      : (v70 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v70) )
  {
    v27 = (_DWORD *)(gpsi + 2816LL);
  }
  else
  {
    v27 = (_DWORD *)(gpsi + 2040LL);
  }
LABEL_25:
  if ( *v27 || (*(_DWORD *)(a1 + 40) & 0x20) != 0 )
    *(_DWORD *)v22 |= 0x10u;
  v28 = *(_DWORD *)v22 ^ (*(_DWORD *)v22 ^ ((unsigned __int8)v9 >> 7 << 11)) & 0x800;
  *(_DWORD *)v22 = v28;
  v86 = v9 & 0x100;
  if ( (v9 & 0x100) != 0 )
    *(_DWORD *)v22 = v28 | 0x100;
  *(_DWORD *)v22 ^= (*(_DWORD *)v22 ^ (4 * ((v9 >> 9) & 1))) & 4;
  v29 = MNAllocMenuState(v22);
  v90 = v29;
  v6 = (__int64)v29;
  if ( !v29 )
  {
LABEL_134:
    v9 |= 0x80u;
LABEL_218:
    xxxWindowEvent(5u, (__int64 *)a5, 0, 0, 0);
    xxxMNReleaseCapture(v6);
    if ( (v9 & 0x80u) == 0 )
      xxxSendMessage((struct tagWND *)a5, 0x212u, ((v9 >> 9) & 1) == 0, 0LL);
    v52 = v90;
    v58 = 1;
    v57 = 0;
    goto LABEL_93;
  }
  if ( gptiCurrent == v29[4] )
  {
    ++*((_DWORD *)v29 + 10);
    v21 = (struct tagMENUSTATE *)v29;
  }
  if ( (*(_DWORD *)v22 & 0x800) == 0 )
    xxxSendMessage((struct tagWND *)a5, 0x211u, ((unsigned __int8)~*v22 >> 2) & 1, 0LL);
  if ( !xxxMNStartMenu(v22, v6, -1) )
    goto LABEL_223;
  if ( (*(_DWORD *)(v6 + 8) & 0x400) != 0 )
  {
    v91 = *(_QWORD *)v19;
    xxxUserModeCallback(99, (unsigned int)&v91, 8, v30);
  }
  if ( (*(_DWORD *)v22 & 0x800) == 0 )
  {
    v31 = *((_QWORD *)v22 + 1);
    v94[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v94;
    v94[1] = v31;
    if ( v31 )
      ++*(_DWORD *)(v31 + 8);
    xxxSendMessage(*((struct tagWND **)v22 + 1), 0x117u, *(_QWORD *)a1, ((*v22 >> 2) & 1u) << 16);
    ThreadUnlock1(v33, v32);
    *(_DWORD *)v22 |= 0x200000u;
  }
  if ( *(_DWORD *)(v19 + 364) == 1 )
  {
    v71 = *(_DWORD *)(a1 + 52);
    v72 = 0;
    if ( v71 )
    {
      v73 = *(_QWORD *)(a1 + 80);
      while ( 1 )
      {
        v74 = 152LL * v72;
        if ( (*(_DWORD *)(v74 + v73) & 0x100) != 0 || *(_QWORD *)(v74 + v73 + 104) == -1LL )
          break;
        if ( ++v72 >= v71 )
          goto LABEL_42;
      }
      xxxEnableChildWindowDpiMessageX((struct tagWND *)v19, 0);
    }
  }
LABEL_42:
  if ( (*(_DWORD *)(v19 + 288) & 0x10000000) != 0 )
  {
    v34 = *(_WORD *)(v19 + 360);
  }
  else if ( *(_DWORD *)(v19 + 344) )
  {
    v34 = *(_WORD *)(gpsi + 7286LL);
  }
  else
  {
    v34 = 96;
  }
  if ( v34 != *(_WORD *)(a1 + 68) )
  {
    *(_WORD *)(a1 + 68) = v34;
    MNClearCachedPopupSizes(a1);
  }
  v87 = xxxSendMessage((struct tagWND *)v19, 0x1E2u, 1uLL, 0LL);
  if ( !v87 )
  {
LABEL_223:
    if ( (*(_DWORD *)(v6 + 8) & 0x100) == 0 && gpqForeground == *(_QWORD *)(gptiCurrent + 384LL) )
    {
      v83 = *(__int64 **)(gpqForeground + 72LL);
      if ( v83 )
        xxxWindowEvent(0x80000005, v83, 0, 1, 33);
    }
    goto LABEL_218;
  }
  if ( (glinp[4] & 1) != 0 )
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
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v75) + 776) & 0x4000) == 0 )
    {
LABEL_171:
      v38 = (_DWORD *)(gpsi + 2296LL);
      goto LABEL_54;
    }
  }
  else if ( IsDPIDWMSysMet(v35)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v76) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_171;
  }
  if ( IsDPIDWMSysMet(7uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v78 = 0)
      : (v78 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v78) )
  {
    v38 = (_DWORD *)(gpsi + 2684LL);
  }
  else
  {
    v38 = (_DWORD *)(gpsi + 1908LL);
  }
LABEL_54:
  v39 = HIWORD(v87);
  v88 = (unsigned __int16)v87 + 2 * *v38;
  if ( (unsigned int)IsDPIAbsoluteSysMet(8uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v79) + 776) & 0x4000) == 0 )
    {
LABEL_187:
      v43 = (_DWORD *)(gpsi + 2300LL);
      goto LABEL_58;
    }
  }
  else if ( IsDPIDWMSysMet(v40)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v41) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v80) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_187;
  }
  if ( IsDPIDWMSysMet(8uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v42) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v82 = 0)
      : (v82 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v82) )
  {
    v43 = (_DWORD *)(gpsi + 2688LL);
  }
  else
  {
    v43 = (_DWORD *)(gpsi + 1912LL);
  }
LABEL_58:
  v89 = v39 + 2 * *v43;
  v91 = __PAIR64__(a4, a3);
  v44 = __PAIR64__(a4, a3);
  v45 = (struct tagRECT *)MonitorFromPoint(__PAIR64__(a4, a3), 2u);
  if ( ((*(_BYTE *)(a5 + 50) >> 6) & ((v9 & 4) == 0)) != 0 )
    v9 ^= 8u;
  if ( (v9 & 8) != 0 )
  {
    a3 -= v88;
    *(_DWORD *)v22 = *(_DWORD *)v22 & 0xF07FFFFF | 0x1000000;
  }
  else if ( (v9 & 4) != 0 )
  {
    a3 += v88 / -2;
  }
  else
  {
    *(_DWORD *)v22 ^= (*(_DWORD *)v22 ^ ((((*(_DWORD *)v22 & 0x10) != 0) + 1) << 23)) & 0xF800000;
  }
  if ( (v9 & 0x20) != 0 )
  {
    *(_DWORD *)v22 |= 0x4000000u;
    a4 -= v89;
  }
  else if ( (v9 & 0x10) != 0 )
  {
    a4 += v89 / -2;
  }
  else
  {
    *(_DWORD *)v22 |= 0x2000000u;
  }
  if ( (v9 & 0x3C00) != 0 )
    *(_DWORD *)v22 = *(_DWORD *)v22 & 0xF07FFFFF | ((v9 & 0x3C00) << 13);
  v46 = *((_QWORD *)v22 + 2);
  if ( a6 )
  {
    if ( *(_DWORD *)(v46 + 304) == 1 )
LABEL_79:
      *(_DWORD *)v22 |= 0x80000000;
  }
  else
  {
    if ( *(_DWORD *)(v46 + 304) == 1 )
    {
      v47 = IsRectEmptyInl(v45 + 32);
      v49 = *(_DWORD *)(v19 + 344);
      if ( v47 )
      {
        if ( v49 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0 )
        {
          if ( v49 == 1 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 408LL) + 8LL) + 244LL) & 1) != 0 )
            p_bottom = &v45[3].bottom;
          else
            p_bottom = &v45[1].bottom;
        }
        else
        {
          p_bottom = &v45[2].bottom;
        }
      }
      else if ( v49 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0 )
      {
        if ( v49 == 1 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 408LL) + 8LL) + 244LL) & 1) != 0 )
          p_bottom = &v45[34].left;
      }
      else
      {
        p_bottom = &v45[33].left;
      }
      if ( v49 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0 )
      {
        if ( v49 != 1
          || (v50 = &v45[3].bottom,
              (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0) )
        {
          v50 = &v45[1].bottom;
        }
      }
      else
      {
        v50 = &v45[2].bottom;
      }
      SubtractRect((__int64)v92, v50, p_bottom);
      goto LABEL_79;
    }
    *(_DWORD *)v22 &= ~0x80000000;
    v92[0] = 0LL;
    v92[1] = 0LL;
  }
  BestPos = FindBestPos(a3, a4, v88, v89, (struct tagRECT *)v92, v9, (unsigned int *)v22, v45, v44);
  if ( ((*(_BYTE *)(a5 + 50) >> 6) & ((*(_DWORD *)v22 & 0x1800000) != 0)) != 0 )
    *(_DWORD *)v22 ^= 0x1800000u;
  if ( (*(_DWORD *)v22 & 0xF800000) != 0 && (v9 & 0x4000) == 0 )
    *(_DWORD *)v22 |= 0x8000000u;
  PlayEventSound(5u);
  v52 = v90;
  xxxSetWindowPosAndBand(
    (struct tagWND *)v19,
    (((*((_DWORD *)v90 + 2) >> 8) & 1) != 0) - 1,
    (__int16)BestPos,
    SHIWORD(BestPos),
    0,
    0,
    (((*((_DWORD *)v90 + 2) >> 8) & 1) == 0 ? 0x10 : 0) | 0x241,
    0);
  if ( (v90[1] & 0x100) == 0 )
  {
    if ( gpqForeground )
    {
      v53 = *(__int64 **)(gpqForeground + 72LL);
      if ( v53 )
      {
        if ( gpqForeground == *(_QWORD *)(gptiCurrent + 384LL) )
        {
          v54 = gptiCurrent != v53[2] ? 0x10 : 0;
          if ( v53[2] == gptiCurrent )
            v53 = (__int64 *)v19;
          xxxWindowEvent(0x80000004, v53, 0, 1, v54 | 0x21);
        }
      }
    }
  }
  xxxWindowEvent(6u, (__int64 *)v19, -4, 0, 0);
  *((_DWORD *)v90 + 2) = v90[1] & 0xFFFFFFF7 | (8 * v85);
  v57 = xxxMNLoop(v22, v90, 0LL, 0LL);
  if ( (v90[1] & 0x100) == 0 )
  {
    v58 = v86;
LABEL_93:
    if ( ThreadUnlock1(v56, v55) && *(char *)(v19 + 43) >= 0 )
      xxxDestroyWindow((_QWORD *)v19);
    if ( v52 )
      xxxMNEndMenuState(v52);
    goto LABEL_98;
  }
  ThreadUnlock1(v56, v55);
  v58 = v86;
LABEL_98:
  if ( v58 )
    v12 = v57;
  if ( v21 )
    xxxUnlockMenuStateInternal(v21, 0);
  return v12;
}
