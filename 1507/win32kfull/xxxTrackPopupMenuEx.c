/*
 * XREFs of xxxTrackPopupMenuEx @ 0x1C0108A2C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     NtUserTrackPopupMenuEx @ 0x1C0107510 (NtUserTrackPopupMenuEx.c)
 *     xxxDoScrollMenu @ 0x1C023352C (xxxDoScrollMenu.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     _GetKeyState @ 0x1C0041BD0 (_GetKeyState.c)
 *     IsWindowShellCloaked @ 0x1C0043140 (IsWindowShellCloaked.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     xxxInheritWindowMonitor @ 0x1C005BED4 (xxxInheritWindowMonitor.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C00665B0 (_IsTopLevelWindow.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     FindTimer @ 0x1C0079B7C (FindTimer.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C007C5B0 (xxxEnableChildWindowDpiMessageX.c)
 *     _MonitorFromPoint @ 0x1C0082CA0 (_MonitorFromPoint.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00848E8 (zzzSetWindowCompositionCloak.c)
 *     xxxSetWindowPosAndBand @ 0x1C00850A0 (xxxSetWindowPosAndBand.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 *     SubtractRect @ 0x1C008B93C (SubtractRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00918C4 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     PlayEventSound @ 0x1C00EBE10 (PlayEventSound.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C01001C4 (IsWindowBroadcastingDpiToChildrenX.c)
 *     MNAllocMenuState @ 0x1C0107674 (MNAllocMenuState.c)
 *     xxxMNStartMenu @ 0x1C0107794 (xxxMNStartMenu.c)
 *     MNClearCachedPopupSizes @ 0x1C0107D70 (MNClearCachedPopupSizes.c)
 *     FindBestPos @ 0x1C010869C (FindBestPos.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C010B2AC (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxMNEndMenuState @ 0x1C010B2F0 (xxxMNEndMenuState.c)
 *     xxxMNLoop @ 0x1C010B494 (xxxMNLoop.c)
 *     LockPopupMenu @ 0x1C010CEB4 (LockPopupMenu.c)
 *     MNAnimate @ 0x1C010D98C (MNAnimate.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C010D9F0 (safe_cast_fnid_to_PMENUWND.c)
 *     xxxMNReleaseCapture @ 0x1C010DB8C (xxxMNReleaseCapture.c)
 *     IsChildWindowDpiMessageEnabledX @ 0x1C01E5344 (IsChildWindowDpiMessageEnabledX.c)
 *     xxxUserModeCallback @ 0x1C0215618 (xxxUserModeCallback.c)
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
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 CurrentProcessWin32Process; // rax
  char v18; // dl
  _DWORD *Window; // rax
  __int64 v20; // r15
  __int64 v21; // r14
  struct tagMENUSTATE *v22; // rdi
  unsigned __int8 *v23; // r14
  int v24; // eax
  unsigned __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  _DWORD *v28; // rcx
  int v29; // eax
  _QWORD *v30; // rax
  int v31; // r9d
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int16 v35; // ax
  unsigned __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  _DWORD *v39; // rcx
  unsigned __int16 v40; // ebx^2
  unsigned __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // r8
  _DWORD *v45; // rdx
  unsigned __int64 v46; // rbx
  struct tagRECT *v47; // r13
  __int64 v48; // rax
  BOOL v49; // eax
  __int64 p_bottom; // r8
  int v51; // edx
  __int64 v52; // rdx
  int BestPos; // ebx
  _QWORD *v54; // r13
  __int64 *v55; // rdx
  int v56; // r8d
  __int64 v57; // rdx
  __int64 v58; // rcx
  unsigned int v59; // ebx
  int v60; // r14d
  int v62; // ecx
  __int64 v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rbx
  __int64 v67; // rax
  int v68; // eax
  __int64 v69; // rcx
  __int64 v70; // rcx
  int v72; // ecx
  unsigned int v73; // r9d
  unsigned int v74; // ecx
  __int64 v75; // r8
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rcx
  int v80; // ecx
  __int64 v81; // rcx
  __int64 v82; // rcx
  int v84; // ecx
  __int64 *v85; // rdx
  int v86; // [rsp+98h] [rbp-59h]
  int v87; // [rsp+98h] [rbp-59h]
  int v88; // [rsp+9Ch] [rbp-55h]
  int v89; // [rsp+A0h] [rbp-51h]
  int v90; // [rsp+A0h] [rbp-51h]
  int v91; // [rsp+A8h] [rbp-49h]
  _QWORD *v92; // [rsp+B0h] [rbp-41h]
  __int64 v93; // [rsp+C0h] [rbp-31h] BYREF
  __int64 v94[2]; // [rsp+C8h] [rbp-29h] BYREF
  _QWORD v95[3]; // [rsp+D8h] [rbp-19h] BYREF
  _QWORD v96[9]; // [rsp+F0h] [rbp-1h] BYREF

  v6 = 0LL;
  v7 = 0;
  v92 = 0LL;
  v8 = 0;
  v9 = a2;
  if ( a6 )
  {
    if ( *(_DWORD *)a6 != 20 )
      goto LABEL_105;
    *(_OWORD *)v94 = *(_OWORD *)(a6 + 4);
  }
  if ( gptiCurrent != *(_QWORD *)(a5 + 16) )
  {
LABEL_105:
    v62 = 87;
LABEL_107:
    UserSetLastError(v62);
    return 0LL;
  }
  v11 = *(__int64 **)(gptiCurrent + 536LL);
  v12 = 1;
  if ( !v11 )
    goto LABEL_4;
  if ( (a2 & 1) == 0 )
  {
    v62 = 1446;
    goto LABEL_107;
  }
  v63 = *v11;
  v64 = *(_QWORD *)(*v11 + 8);
  if ( (v11[1] & 4) == 0 || (*(_DWORD *)v63 & 0x8000) != 0 || !v64 || v64 != a5 || v11[4] != *(_QWORD *)(v64 + 16) )
    return 0LL;
  MNAnimate(v11, 0LL);
  v65 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(v63 + 56));
  if ( v65 )
    v66 = *(_QWORD *)(v65 + 376);
  else
    v66 = 0LL;
  if ( v66 && (*(_DWORD *)v66 & 0x2000) != 0 )
  {
    FindTimer(*(_QWORD *)(v66 + 16), 65534LL, 0, 1, 0LL);
    *(_DWORD *)v66 &= ~0x2000u;
  }
  v6 = 0LL;
  if ( (v11[1] & 0x100) == 0 )
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 332LL) &= ~0x100000u;
LABEL_4:
  if ( (v9 & 2) != 0 )
    v86 = (unsigned __int16)GetKeyState(2u) >> 15;
  else
    v86 = (unsigned __int16)GetKeyState(1u) >> 15;
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x4000) != 0 )
  {
    v67 = MonitorFromPoint(__SPAIR64__(a4, a3), 2LL, v15);
    v7 = *(_DWORD *)(v67 + 28);
    v8 = *(_DWORD *)(v67 + 32);
  }
  v18 = 0;
  if ( PsGetCurrentProcessWin32Process(v14) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
    if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
      v18 = 1;
  }
  Window = xxxCreateWindowEx(
             385,
             (wchar_t *)0x8000,
             (char **)0x8000,
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
             v18,
             0LL);
  v20 = (__int64)Window;
  if ( !Window )
    return 0LL;
  v21 = safe_cast_fnid_to_PMENUWND(Window);
  if ( !v21 )
  {
    xxxDestroyWindow(v20);
    return 0LL;
  }
  v95[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v95;
  v95[1] = v20;
  ++*(_DWORD *)(v20 + 8);
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(gptiCurrent) + 776) & 0x4000) != 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 776LL) & 0x200000) != 0
      || (!(unsigned int)IsTopLevelWindow(a5)
        ? (v68 = IsChildWindowDpiMessageEnabledX(a5))
        : (v68 = IsWindowBroadcastingDpiToChildrenX(a5)),
          v68) )
    {
      *(_DWORD *)(v20 + 364) = 1;
    }
  }
  if ( (*(_DWORD *)(a1 + 40) & 0x40000000) == 0 )
    xxxInheritWindowMonitor((struct tagWND *)v20, a5, 1);
  v22 = 0LL;
  if ( (*(_DWORD *)(a1 + 40) & 0x40000000) == 0
    && (unsigned int)IsWindowShellCloaked(v20, 1)
    && !(unsigned int)IsWindowShellCloaked(a5, 0) )
  {
    zzzSetWindowCompositionCloak(v20, 0LL, 0);
  }
  if ( (((v9 & 0x8000) == 0) & (unsigned __int8)~(*(_BYTE *)(a5 + 50) >> 6)) == 0 )
    SetOrClrWF(1, (_DWORD *)v20, 0xA40u, 1);
  SetOrClrWF(0, (_DWORD *)v20, 0x408u, 1);
  v23 = *(unsigned __int8 **)(v21 + 376);
  if ( !v23 )
    goto LABEL_134;
  HMAssignmentLock(v23 + 8, a5);
  LockPopupMenu(v23, v23 + 40, a1);
  HMAssignmentLock(v23 + 56, v20);
  v24 = *(_DWORD *)v23 | 0x10008;
  *((_QWORD *)v23 + 8) = v23;
  v87 = v86 & 1;
  *(_DWORD *)v23 = (v24 & 0xFFFFFDFF | (v87 << 9)) ^ ((unsigned __int8)v24 ^ (((v9 & 2) != 0) << 6)) & 0x40;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x28uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v69) + 776) & 0x4000) == 0 )
    {
LABEL_144:
      v28 = (_DWORD *)(gpsi + 2428LL);
      goto LABEL_25;
    }
  }
  else if ( IsDPIDWMSysMet(v25)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v70) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                      + 260LL) & 1 )
  {
    goto LABEL_144;
  }
  if ( IsDPIDWMSysMet(0x28uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v72 = 0)
      : (v72 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v72) )
  {
    v28 = (_DWORD *)(gpsi + 2816LL);
  }
  else
  {
    v28 = (_DWORD *)(gpsi + 2040LL);
  }
LABEL_25:
  if ( *v28 || (*(_DWORD *)(a1 + 40) & 0x20) != 0 )
    *(_DWORD *)v23 |= 0x10u;
  v29 = *(_DWORD *)v23 ^ (*(_DWORD *)v23 ^ ((unsigned __int8)v9 >> 7 << 11)) & 0x800;
  *(_DWORD *)v23 = v29;
  v88 = v9 & 0x100;
  if ( (v9 & 0x100) != 0 )
    *(_DWORD *)v23 = v29 | 0x100;
  *(_DWORD *)v23 ^= (*(_DWORD *)v23 ^ (4 * ((v9 >> 9) & 1))) & 4;
  v30 = MNAllocMenuState(v23);
  v92 = v30;
  v6 = (__int64)v30;
  if ( !v30 )
  {
LABEL_134:
    v9 |= 0x80u;
LABEL_218:
    xxxWindowEvent(5u, (__int64 *)a5, 0, 0, 0);
    xxxMNReleaseCapture(v6);
    if ( (v9 & 0x80u) == 0 )
      xxxSendMessage((struct tagWND *)a5, 0x212u, ((v9 >> 9) & 1) == 0, 0LL);
    v54 = v92;
    v60 = 1;
    v59 = 0;
    goto LABEL_93;
  }
  if ( gptiCurrent == v30[4] )
  {
    ++*((_DWORD *)v30 + 10);
    v22 = (struct tagMENUSTATE *)v30;
  }
  if ( (*(_DWORD *)v23 & 0x800) == 0 )
    xxxSendMessage((struct tagWND *)a5, 0x211u, ((unsigned __int8)~*v23 >> 2) & 1, 0LL);
  if ( !xxxMNStartMenu(v23, v6, -1) )
    goto LABEL_223;
  if ( (*(_DWORD *)(v6 + 8) & 0x400) != 0 )
  {
    v93 = *(_QWORD *)v20;
    xxxUserModeCallback(99, (unsigned int)&v93, 8, v31);
  }
  if ( (*(_DWORD *)v23 & 0x800) == 0 )
  {
    v32 = *((_QWORD *)v23 + 1);
    v96[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v96;
    v96[1] = v32;
    if ( v32 )
      ++*(_DWORD *)(v32 + 8);
    xxxSendMessage(*((struct tagWND **)v23 + 1), 0x117u, *(_QWORD *)a1, ((*v23 >> 2) & 1u) << 16);
    ThreadUnlock1(v34, v33);
    *(_DWORD *)v23 |= 0x200000u;
  }
  if ( *(_DWORD *)(v20 + 364) == 1 )
  {
    v73 = *(_DWORD *)(a1 + 52);
    v74 = 0;
    if ( v73 )
    {
      v75 = *(_QWORD *)(a1 + 80);
      while ( 1 )
      {
        v76 = 152LL * v74;
        if ( (*(_DWORD *)(v76 + v75) & 0x100) != 0 || *(_QWORD *)(v76 + v75 + 104) == -1LL )
          break;
        if ( ++v74 >= v73 )
          goto LABEL_42;
      }
      xxxEnableChildWindowDpiMessageX((struct tagWND *)v20, 0);
    }
  }
LABEL_42:
  if ( (*(_DWORD *)(v20 + 288) & 0x10000000) != 0 )
  {
    v35 = *(_WORD *)(v20 + 360);
  }
  else if ( *(_DWORD *)(v20 + 344) )
  {
    v35 = *(_WORD *)(gpsi + 7286LL);
  }
  else
  {
    v35 = 96;
  }
  if ( v35 != *(_WORD *)(a1 + 68) )
  {
    *(_WORD *)(a1 + 68) = v35;
    MNClearCachedPopupSizes(a1);
  }
  v89 = xxxSendMessage((struct tagWND *)v20, 0x1E2u, 1uLL, 0LL);
  if ( !v89 )
  {
LABEL_223:
    if ( (*(_DWORD *)(v6 + 8) & 0x100) == 0 && gpqForeground == *(_QWORD *)(gptiCurrent + 392LL) )
    {
      v85 = *(__int64 **)(gpqForeground + 72LL);
      if ( v85 )
        xxxWindowEvent(0x80000005, v85, 0, 1, 33);
    }
    goto LABEL_218;
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
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v77) + 776) & 0x4000) == 0 )
    {
LABEL_171:
      v39 = (_DWORD *)(gpsi + 2296LL);
      goto LABEL_54;
    }
  }
  else if ( IsDPIDWMSysMet(v36)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v78) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                      + 260LL) & 1 )
  {
    goto LABEL_171;
  }
  if ( IsDPIDWMSysMet(7uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v80 = 0)
      : (v80 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v80) )
  {
    v39 = (_DWORD *)(gpsi + 2684LL);
  }
  else
  {
    v39 = (_DWORD *)(gpsi + 1908LL);
  }
LABEL_54:
  v40 = HIWORD(v89);
  v90 = (unsigned __int16)v89 + 2 * *v39;
  if ( (unsigned int)IsDPIAbsoluteSysMet(8uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v41) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v81) + 776) & 0x4000) == 0 )
    {
LABEL_187:
      v45 = (_DWORD *)(gpsi + 2300LL);
      goto LABEL_58;
    }
  }
  else if ( IsDPIDWMSysMet(v41)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v42) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v82) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                      + 260LL) & 1 )
  {
    goto LABEL_187;
  }
  if ( IsDPIDWMSysMet(8uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v43) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v84 = 0)
      : (v84 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v84) )
  {
    v45 = (_DWORD *)(gpsi + 2688LL);
  }
  else
  {
    v45 = (_DWORD *)(gpsi + 1912LL);
  }
LABEL_58:
  v91 = v40 + 2 * *v45;
  v93 = __PAIR64__(a4, a3);
  v46 = __PAIR64__(a4, a3);
  v47 = (struct tagRECT *)MonitorFromPoint(__SPAIR64__(a4, a3), 2LL, v44);
  if ( ((*(_BYTE *)(a5 + 50) >> 6) & ((v9 & 4) == 0)) != 0 )
    v9 ^= 8u;
  if ( (v9 & 8) != 0 )
  {
    a3 -= v90;
    *(_DWORD *)v23 = *(_DWORD *)v23 & 0xF07FFFFF | 0x1000000;
  }
  else if ( (v9 & 4) != 0 )
  {
    a3 += v90 / -2;
  }
  else
  {
    *(_DWORD *)v23 ^= (*(_DWORD *)v23 ^ ((((*(_DWORD *)v23 & 0x10) != 0) + 1) << 23)) & 0xF800000;
  }
  if ( (v9 & 0x20) != 0 )
  {
    *(_DWORD *)v23 |= 0x4000000u;
    a4 -= v91;
  }
  else if ( (v9 & 0x10) != 0 )
  {
    a4 += v91 / -2;
  }
  else
  {
    *(_DWORD *)v23 |= 0x2000000u;
  }
  if ( (v9 & 0x3C00) != 0 )
    *(_DWORD *)v23 = *(_DWORD *)v23 & 0xF07FFFFF | ((v9 & 0x3C00) << 13);
  v48 = *((_QWORD *)v23 + 2);
  if ( a6 )
  {
    if ( *(_DWORD *)(v48 + 304) == 1 )
LABEL_79:
      *(_DWORD *)v23 |= 0x80000000;
  }
  else
  {
    if ( *(_DWORD *)(v48 + 304) == 1 )
    {
      v49 = IsRectEmptyInl(v47 + 32);
      v51 = *(_DWORD *)(v20 + 344);
      if ( v49 )
      {
        if ( v51 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
        {
          if ( v51 == 1 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 416LL) + 8LL) + 260LL) & 1) != 0 )
            p_bottom = (__int64)&v47[3].bottom;
          else
            p_bottom = (__int64)&v47[1].bottom;
        }
        else
        {
          p_bottom = (__int64)&v47[2].bottom;
        }
      }
      else if ( v51 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
      {
        if ( v51 == 1 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 416LL) + 8LL) + 260LL) & 1) != 0 )
          p_bottom = (__int64)&v47[34];
      }
      else
      {
        p_bottom = (__int64)&v47[33];
      }
      if ( v51 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
      {
        if ( v51 != 1
          || (v52 = (__int64)&v47[3].bottom,
              (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0) )
        {
          v52 = (__int64)&v47[1].bottom;
        }
      }
      else
      {
        v52 = (__int64)&v47[2].bottom;
      }
      SubtractRect((__int64)v94, v52, p_bottom);
      goto LABEL_79;
    }
    *(_DWORD *)v23 &= ~0x80000000;
    v94[0] = 0LL;
    v94[1] = 0LL;
  }
  BestPos = FindBestPos(a3, a4, v90, v91, (struct tagRECT *)v94, v9, (unsigned int *)v23, v47, v46);
  if ( ((*(_BYTE *)(a5 + 50) >> 6) & ((*(_DWORD *)v23 & 0x1800000) != 0)) != 0 )
    *(_DWORD *)v23 ^= 0x1800000u;
  if ( (*(_DWORD *)v23 & 0xF800000) != 0 && (v9 & 0x4000) == 0 )
    *(_DWORD *)v23 |= 0x8000000u;
  PlayEventSound(5u);
  v54 = v92;
  xxxSetWindowPosAndBand(
    (struct tagWND *)v20,
    (((*((_DWORD *)v92 + 2) >> 8) & 1) != 0) - 1LL,
    (__int16)BestPos,
    SHIWORD(BestPos),
    0,
    0,
    (((*((_DWORD *)v92 + 2) >> 8) & 1) == 0 ? 0x10 : 0) | 0x241,
    0);
  if ( (v92[1] & 0x100) == 0 )
  {
    if ( gpqForeground )
    {
      v55 = *(__int64 **)(gpqForeground + 72LL);
      if ( v55 )
      {
        if ( gpqForeground == *(_QWORD *)(gptiCurrent + 392LL) )
        {
          v56 = gptiCurrent != v55[2] ? 0x10 : 0;
          if ( v55[2] == gptiCurrent )
            v55 = (__int64 *)v20;
          xxxWindowEvent(0x80000004, v55, 0, 1, v56 | 0x21);
        }
      }
    }
  }
  xxxWindowEvent(6u, (__int64 *)v20, -4, 0, 0);
  *((_DWORD *)v92 + 2) = v92[1] & 0xFFFFFFF7 | (8 * v87);
  v59 = xxxMNLoop(v23, v92, 0LL, 0LL);
  if ( (v92[1] & 0x100) == 0 )
  {
    v60 = v88;
LABEL_93:
    if ( ThreadUnlock1(v58, v57) && *(char *)(v20 + 43) >= 0 )
      xxxDestroyWindow(v20);
    if ( v54 )
      xxxMNEndMenuState(v54);
    goto LABEL_98;
  }
  ThreadUnlock1(v58, v57);
  v60 = v88;
LABEL_98:
  if ( v60 )
    v12 = v59;
  if ( v22 )
    xxxUnlockMenuStateInternal(v22, 0);
  return v12;
}
