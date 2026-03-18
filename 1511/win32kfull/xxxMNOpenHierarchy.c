/*
 * XREFs of xxxMNOpenHierarchy @ 0x1C0133768
 * Callers:
 *     xxxMNButtonDown @ 0x1C0133690 (xxxMNButtonDown.c)
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     xxxMNButtonUp @ 0x1C013849C (xxxMNButtonUp.c)
 *     xxxMNKeyDown @ 0x1C0216CA8 (xxxMNKeyDown.c)
 *     xxxMNKeyFilter @ 0x1C023DB04 (xxxMNKeyFilter.c)
 * Callees:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     IntersectRect @ 0x1C006B798 (IntersectRect.c)
 *     xxxInheritWindowMonitor @ 0x1C006CD18 (xxxInheritWindowMonitor.c)
 *     MNIspItemValid @ 0x1C006EE3C (MNIspItemValid.c)
 *     MNIsUAHMenu @ 0x1C00707A8 (MNIsUAHMenu.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     xxxSetWindowPos @ 0x1C0075840 (xxxSetWindowPos.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C0092C74 (xxxEnableChildWindowDpiMessageX.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00964A8 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     MNClearCachedPopupSizes @ 0x1C00C683C (MNClearCachedPopupSizes.c)
 *     MNRefreshUAHCachedSizes @ 0x1C00C68B0 (MNRefreshUAHCachedSizes.c)
 *     _GetAsyncKeyState @ 0x1C00EB660 (_GetAsyncKeyState.c)
 *     PlayEventSound @ 0x1C00F0C20 (PlayEventSound.c)
 *     FindTimer @ 0x1C00F646C (FindTimer.c)
 *     ?MNGetPopupBoundsRect@@YAXPEAUtagPOPUPMENU@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0133580 (-MNGetPopupBoundsRect@@YAXPEAUtagPOPUPMENU@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     xxxMNCloseHierarchy @ 0x1C0138900 (xxxMNCloseHierarchy.c)
 *     LockPopupMenu @ 0x1C0138B8C (LockPopupMenu.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0139460 (safe_cast_fnid_to_PMENUWND.c)
 *     xxxUserModeCallback @ 0x1C02154C0 (xxxUserModeCallback.c)
 *     ?xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0215A84 (-xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z.c)
 */

__int64 __fastcall xxxMNOpenHierarchy(struct tagPOPUPMENU *a1, __int64 a2)
{
  __int64 *v2; // r8
  unsigned int v4; // ecx
  __int64 v6; // r12
  signed int v7; // edi
  signed int v8; // esi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // rax
  __int128 v22; // xmm1
  __int64 v23; // rax
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int64 v30; // rcx
  __int64 v31; // r15
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 CurrentProcessWin32Process; // rax
  bool v38; // zf
  char v39; // al
  __int64 Window; // rdi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rsi
  __int64 v46; // rsi
  __int64 v47; // rdx
  int v48; // ecx
  __int64 v49; // rdx
  __int64 *v50; // r14
  __int64 v51; // rdx
  int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  int v55; // ecx
  int v56; // ecx
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rcx
  unsigned int v60; // r9d
  __int64 v61; // rax
  unsigned int v62; // ecx
  unsigned int v63; // r8d
  __int64 v64; // r9
  __int64 v65; // rdx
  __int16 v66; // ax
  __int64 v67; // rdx
  __int64 v68; // rcx
  int v69; // r14d
  unsigned __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rcx
  int v73; // ecx
  __int64 v74; // rcx
  __int64 v75; // rcx
  int v76; // ecx
  _DWORD *v77; // rcx
  int v78; // r15d
  unsigned __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // rcx
  int v82; // ecx
  __int64 v83; // rcx
  __int64 v84; // rcx
  int v85; // ecx
  int *v86; // rdx
  int v87; // eax
  int v88; // r8d
  LONG v89; // r14d
  int v90; // edx
  int v91; // r12d
  int v92; // r13d
  __int64 v93; // rcx
  int v94; // edx
  int v95; // r14d
  LONG v96; // r15d
  LONG v97; // r14d
  unsigned __int64 v98; // rcx
  __int64 v99; // rcx
  __int64 v100; // rax
  int v101; // r9d
  __int64 v102; // rcx
  __int64 v103; // rcx
  __int64 v104; // rax
  int v105; // ecx
  _DWORD *v106; // rcx
  __int64 v107; // rcx
  __int64 ThreadWin32Thread; // rax
  int v109; // ecx
  unsigned int v110; // eax
  int v111; // ecx
  int v112; // r9d
  struct tagWND **v113; // rcx
  struct tagWND *v114; // r8
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 *v117; // rdx
  int v118; // ecx
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // rdx
  __int64 v122; // rcx
  unsigned __int64 v123; // r8
  __int64 v124; // rdx
  __int64 v125; // rcx
  int v126; // [rsp+20h] [rbp-F0h]
  int v127; // [rsp+90h] [rbp-80h] BYREF
  __int64 v128; // [rsp+98h] [rbp-78h] BYREF
  struct tagWND *v129; // [rsp+A0h] [rbp-70h]
  int v130[4]; // [rsp+B0h] [rbp-60h] BYREF
  int v131[2]; // [rsp+C0h] [rbp-50h] BYREF
  LONG v132; // [rsp+C8h] [rbp-48h]
  int v133; // [rsp+CCh] [rbp-44h]
  unsigned __int64 v134; // [rsp+D0h] [rbp-40h]
  struct tagRECT v135; // [rsp+D8h] [rbp-38h] BYREF
  __int64 v136; // [rsp+E8h] [rbp-28h]
  struct tagMONITOR *v137; // [rsp+F0h] [rbp-20h] BYREF
  _DWORD *v138; // [rsp+F8h] [rbp-18h]
  __int64 v139; // [rsp+100h] [rbp-10h] BYREF
  struct tagWND **v140; // [rsp+108h] [rbp-8h]
  _QWORD v141[3]; // [rsp+110h] [rbp+0h] BYREF
  _QWORD v142[3]; // [rsp+128h] [rbp+18h] BYREF
  __int128 v143; // [rsp+140h] [rbp+30h]
  __int128 v144; // [rsp+150h] [rbp+40h]
  __int128 v145; // [rsp+160h] [rbp+50h]
  __int128 v146; // [rsp+170h] [rbp+60h]
  __int128 v147; // [rsp+180h] [rbp+70h]
  __int128 v148; // [rsp+190h] [rbp+80h]
  __int128 v149; // [rsp+1A0h] [rbp+90h]
  __int128 v150; // [rsp+1B0h] [rbp+A0h]
  __int128 v151; // [rsp+1C0h] [rbp+B0h]
  __int64 v152; // [rsp+1D0h] [rbp+C0h]
  int v153; // [rsp+230h] [rbp+120h]
  int v155; // [rsp+240h] [rbp+130h]
  int v156; // [rsp+248h] [rbp+138h] BYREF

  v2 = (__int64 *)gptiCurrent;
  v153 = 0;
  v4 = *((_DWORD *)a1 + 20);
  v134 = 0LL;
  v6 = 0LL;
  v136 = gptiCurrent;
  v7 = 0;
  v8 = 0;
  if ( v4 == -1 || v4 >= *(_DWORD *)(*((_QWORD *)a1 + 5) + 52LL) )
    return 0LL;
  if ( (*(_DWORD *)a1 & 0x20) == 0 )
    goto LABEL_7;
  if ( (*(_DWORD *)a1 & 0x4000) == 0 )
    return 0LL;
  xxxMNCloseHierarchy(a1);
  v2 = (__int64 *)gptiCurrent;
LABEL_7:
  if ( (*(_DWORD *)a1 & 0x2000) != 0 )
  {
    FindTimer(*((_QWORD *)a1 + 2), 65534LL, 0, 1, 0LL);
    *(_DWORD *)a1 &= ~0x2000u;
    v2 = (__int64 *)gptiCurrent;
  }
  v10 = *((unsigned int *)a1 + 20);
  v11 = *((_QWORD *)a1 + 5);
  if ( (_DWORD)v10 == -1 || (unsigned int)v10 >= *(_DWORD *)(v11 + 52) )
    v12 = 0LL;
  else
    v12 = *(_QWORD *)(v11 + 80) + 152 * v10;
  if ( !v12 || !*(_QWORD *)(v12 + 16) )
    return v6;
  if ( (*(_DWORD *)a1 & 0x800) == 0 )
  {
    v13 = *v2;
    v14 = *((_QWORD *)a1 + 1);
    v128 = *(_QWORD *)(*v2 + 368);
    *(_QWORD *)(v13 + 368) = &v128;
    v129 = (struct tagWND *)v14;
    if ( v14 )
      ++*(_DWORD *)(v14 + 8);
    v15 = *((unsigned __int16 *)a1 + 40) | (((*(unsigned __int8 *)a1 >> 2) & 1) << 16);
    v134 = **(_QWORD **)(v12 + 16);
    xxxSendMessage(*((struct tagWND **)a1 + 1), 0x117u, v134, v15);
    ThreadUnlock1(v17, v16);
    v2 = (__int64 *)gptiCurrent;
    v153 = 1;
  }
  if ( (*(_DWORD *)(a2 + 8) & 4) == 0 )
  {
    v6 = -1LL;
    goto LABEL_169;
  }
  v18 = *((_QWORD *)a1 + 5);
  v19 = *((unsigned int *)a1 + 20);
  if ( (unsigned int)v19 < *(_DWORD *)(v18 + 52) )
  {
    v20 = *(_QWORD *)(v18 + 80) + 152 * v19;
    v138 = (_DWORD *)v20;
    if ( (*(_DWORD *)(v20 + 4) & 3) == 0 )
    {
      v21 = *(_QWORD *)(v20 + 16);
      if ( v21 )
      {
        if ( *(_DWORD *)(v21 + 52) )
        {
          v22 = *(_OWORD *)(v20 + 16);
          v143 = *(_OWORD *)v20;
          v23 = *(_QWORD *)(v20 + 144);
          v24 = *(_OWORD *)(v20 + 32);
          v144 = v22;
          v25 = *(_OWORD *)(v20 + 48);
          v145 = v24;
          v26 = *(_OWORD *)(v20 + 64);
          v146 = v25;
          v27 = *(_OWORD *)(v20 + 80);
          v147 = v26;
          v28 = *(_OWORD *)(v20 + 96);
          v148 = v27;
          v29 = *(_OWORD *)(v20 + 128);
          v149 = v28;
          v150 = *(_OWORD *)(v20 + 112);
          v151 = v29;
          v152 = v23;
          v30 = *v2;
          v31 = v144;
          v141[0] = *(_QWORD *)(*v2 + 368);
          *(_QWORD *)(v30 + 368) = v141;
          v141[1] = v31;
          if ( v31 )
            ++*(_DWORD *)(v31 + 8);
          v32 = *v2;
          v33 = *((_QWORD *)a1 + 1);
          v128 = *(_QWORD *)(*v2 + 368);
          *(_QWORD *)(v32 + 368) = &v128;
          v129 = (struct tagWND *)v33;
          if ( v33 )
            ++*(_DWORD *)(v33 + 8);
          v34 = *((_QWORD *)a1 + 2);
          if ( *(_DWORD *)(v34 + 344) == 2 )
          {
            v35 = ValidateHmonitor(*(_QWORD *)(v34 + 352));
            v7 = *(_DWORD *)(v35 + 28);
            v8 = *(_DWORD *)(v35 + 32);
          }
          if ( !PsGetCurrentProcessWin32Process(v34)
            || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v36),
                v38 = (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) == 0,
                v39 = 1,
                v38) )
          {
            v39 = 0;
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
                     *((_QWORD *)a1 + 1),
                     0LL,
                     *(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL),
                     v31,
                     0,
                     0xA00u,
                     v39,
                     0LL);
          ThreadUnlock1(v42, v41);
          if ( !Window )
            goto LABEL_168;
          v45 = safe_cast_fnid_to_PMENUWND(Window);
          if ( !v45 || (SetOrClrWF(0, (_DWORD *)Window, 0x408u, 1), (v46 = *(_QWORD *)(v45 + 376)) == 0) )
          {
            xxxDestroyWindow((_QWORD *)Window);
LABEL_168:
            ThreadUnlock1(v44, v43);
            v2 = (__int64 *)gptiCurrent;
            goto LABEL_169;
          }
          v47 = *((_QWORD *)a1 + 8);
          v48 = *(_DWORD *)v46 | 0x10000;
          *(_DWORD *)v46 = v48;
          if ( v47 )
          {
            *(_QWORD *)(v46 + 72) = *(_QWORD *)(v47 + 72);
            *(_DWORD *)v46 = v48 | 0x20000000;
            *(_QWORD *)(v47 + 72) = v46;
          }
          SetOrClrWF((*(_BYTE *)(*((_QWORD *)a1 + 2) + 50LL) & 0x40) != 0, (_DWORD *)Window, 0xA40u, 1);
          v49 = *((_QWORD *)a1 + 1);
          v140 = (struct tagWND **)(v46 + 8);
          HMAssignmentLock(v46 + 8, v49);
          v50 = (__int64 *)(v46 + 40);
          LockPopupMenu(v46, v46 + 40, v31);
          HMAssignmentLock((char *)a1 + 24, Window);
          v51 = *((_QWORD *)a1 + 2);
          *((_DWORD *)a1 + 21) = *((_DWORD *)a1 + 20);
          HMAssignmentLock(v46 + 32, v51);
          *(_QWORD *)(v46 + 64) = *((_QWORD *)a1 + 8);
          v153 = 0;
          v52 = *(_DWORD *)v46 ^ (*(_DWORD *)v46 ^ *(_DWORD *)a1) & 2;
          *(_DWORD *)v46 = v52;
          v53 = (*(_DWORD *)a1 ^ v52) & 4 ^ v52;
          *(_DWORD *)v46 = v53;
          v54 = (*(_DWORD *)a1 ^ v53) & 0x800 ^ v53 | 0x200000;
          *(_DWORD *)v46 = v54;
          v55 = (*(_DWORD *)a1 ^ v54) & 0x400000 ^ v54;
          *(_DWORD *)v46 = v55;
          v56 = (*(_DWORD *)a1 ^ v55) & 0x10 ^ v55;
          *(_DWORD *)v46 = v56;
          *(_DWORD *)v46 = *(_DWORD *)a1 ^ (*(_DWORD *)a1 ^ v56) & 0x7FFFFFFF;
          v57 = *(_QWORD *)(v46 + 40);
          if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
            *(_DWORD *)(v57 + 40) |= 4u;
          else
            *(_DWORD *)(v57 + 40) &= ~4u;
          v58 = *v50;
          *(_DWORD *)v46 &= ~0x1000u;
          if ( (unsigned int)MNIsUAHMenu(v58) && (*(_DWORD *)(v59 + 40) & 1) != 0 )
          {
            MNRefreshUAHCachedSizes(v59);
            v60 = 0;
          }
          v142[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v142;
          v142[1] = Window;
          ++*(_DWORD *)(Window + 8);
          if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(Window + 16) + 376LL) + 776LL) & 0x200000) != 0
            || (v61 = *((_QWORD *)a1 + 2), *(_DWORD *)(v61 + 344) == 2) && *(_DWORD *)(v61 + 364) == 1 )
          {
            v62 = v60;
            v63 = *(_DWORD *)(*v50 + 52);
            if ( v63 )
            {
              v64 = *(_QWORD *)(*v50 + 80);
              while ( 1 )
              {
                v65 = 152LL * v62;
                if ( (*(_DWORD *)(v65 + v64) & 0x100) != 0 || *(_QWORD *)(v65 + v64 + 104) == -1LL )
                  break;
                if ( ++v62 >= v63 )
                  goto LABEL_54;
              }
            }
            else
            {
LABEL_54:
              xxxEnableChildWindowDpiMessageX((struct tagWND *)Window, 1);
            }
          }
          if ( (*(_DWORD *)(Window + 288) & 0x10000000) != 0 )
          {
            v66 = *(_WORD *)(Window + 360);
          }
          else if ( *(_DWORD *)(Window + 344) )
          {
            v66 = *(_WORD *)(gpsi + 7286LL);
          }
          else
          {
            v66 = 96;
          }
          if ( v66 != *(_WORD *)(*v50 + 68) )
          {
            *(_WORD *)(*v50 + 68) = v66;
            MNClearCachedPopupSizes(*v50);
          }
          v69 = xxxSendMessage((struct tagWND *)Window, 0x1E2u, 1uLL, 0LL);
          if ( !v69 || (v68 = *((_QWORD *)a1 + 5)) == 0 || !MNIspItemValid(v68, v20) )
          {
            if ( ThreadUnlock1(v68, v67) )
              xxxDestroyWindow((_QWORD *)Window);
            HMAssignmentUnlock((char *)a1 + 24);
            goto LABEL_168;
          }
          if ( (unsigned int)IsDPIAbsoluteSysMet(7uLL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v70) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v71) + 776) & 0x4000) != 0 )
            {
              goto LABEL_68;
            }
          }
          else if ( !IsDPIDWMSysMet(v70)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v74) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v75) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                   ? (v76 = 0)
                   : (v76 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                     !v76) )
          {
LABEL_68:
            if ( IsDPIDWMSysMet(7uLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v72) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v73 = 0)
                : (v73 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  v73) )
            {
              v77 = (_DWORD *)(gpsi + 2684LL);
            }
            else
            {
              v77 = (_DWORD *)(gpsi + 1908LL);
            }
LABEL_84:
            v78 = (unsigned __int16)v69 + 2 * *v77;
            v155 = v78;
            if ( (unsigned int)IsDPIAbsoluteSysMet(8uLL) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v79) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v80) + 776) & 0x4000) != 0 )
              {
                goto LABEL_87;
              }
            }
            else if ( !IsDPIDWMSysMet(v79)
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v83) + 776) & 0x2000) != 0
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v84) + 776) & 0x4000) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                     ? (v85 = 0)
                     : (v85 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                + 408)
                                                    + 8LL)
                                        + 244LL) & 1),
                       !v85) )
            {
LABEL_87:
              if ( IsDPIDWMSysMet(8uLL)
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v81) + 776) & 0x2000) != 0
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  ? (v82 = 0)
                  : (v82 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                    v82) )
              {
                v86 = (int *)(gpsi + 2688LL);
              }
              else
              {
                v86 = (int *)(gpsi + 1912LL);
              }
LABEL_103:
              v87 = *v86;
              *(_DWORD *)a1 |= 0x20u;
              *(_DWORD *)v46 ^= (*(_DWORD *)v46 ^ (xxxMNPositionHierarchy(
                                                     a1,
                                                     (struct tagITEM *)v20,
                                                     v78,
                                                     HIWORD(v69) + 2 * v87,
                                                     &v156,
                                                     &v127,
                                                     &v137) << 23)) & 0xF800000;
              if ( (*(_DWORD *)a1 & 1) != 0 && (GetAsyncKeyState(1u) & 0x8000u) != 0LL )
              {
                v88 = v127 - *(_DWORD *)(Window + 116);
                v89 = v156;
                v90 = v156 - *(_DWORD *)(Window + 112);
                v91 = DWORD2(v147);
                v92 = v148;
                v130[0] = v156;
                v130[2] = v90 + *(_DWORD *)(Window + 120);
                v130[1] = v88 + *(_DWORD *)(Window + 116);
                v130[3] = v88 + *(_DWORD *)(Window + 124);
                v93 = *((_QWORD *)a1 + 2);
                v135 = 0LL;
                v94 = *(_DWORD *)(v93 + 116) + HIDWORD(v147);
                v131[0] = DWORD2(v147) + *(_DWORD *)(v93 + 112);
                v131[1] = v94;
                v133 = v94 + DWORD1(v148);
                v132 = v131[0] + v148;
                MNGetPopupBoundsRect(a1, (const struct tagRECT *)v137, &v135, 0);
                if ( (unsigned int)IntersectRect(v130, v130, v131) )
                {
                  v95 = *(_DWORD *)(*((_QWORD *)a1 + 2) + 112LL);
                  v96 = v78 + v91 + v95 + v92;
                  if ( v96 > v135.right )
                    v96 = 0;
                  v97 = v91 + v95 - v155;
                  if ( v97 < v135.left )
                    v97 = 0;
                  if ( (unsigned int)IsDPIAbsoluteSysMet(0x28uLL) )
                  {
                    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v98) + 776) & 0x2000) != 0 )
                      goto LABEL_122;
                    v100 = PsGetCurrentProcessWin32Process(v99);
                    v101 = 0;
                    if ( (*(_DWORD *)(v100 + 776) & 0x4000) != 0 )
                      goto LABEL_122;
                  }
                  else if ( !IsDPIDWMSysMet(v98)
                         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v102) + 776) & 0x2000) != 0
                         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v103) + 776) & 0x4000) != 0
                         || ((v104 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread()),
                              v101 = 0,
                              !*(_QWORD *)(v104 + 408))
                           ? (v105 = 0)
                           : (v105 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                       + 408)
                                                           + 8LL)
                                               + 244LL) & 1,
                              v101 = 0),
                             !v105) )
                  {
LABEL_122:
                    if ( IsDPIDWMSysMet(0x28uLL) )
                    {
                      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v107) + 776) & 0x2000) != 0 )
                      {
                        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                        v101 = 0;
                        if ( *(_QWORD *)(ThreadWin32Thread + 408) )
                        {
                          v109 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                   + 408)
                                                       + 8LL)
                                           + 244LL) & 1;
                          v101 = 0;
                        }
                        else
                        {
                          v109 = 0;
                        }
                        if ( v109 )
                        {
                          v106 = (_DWORD *)(gpsi + 2816LL);
                          goto LABEL_131;
                        }
                      }
                      else
                      {
                        v101 = 0;
                      }
                    }
                    v106 = (_DWORD *)(gpsi + 2040LL);
                    goto LABEL_131;
                  }
                  v106 = (_DWORD *)(gpsi + 2428LL);
LABEL_131:
                  if ( (*v106 != v101 || (*v138 & 0x2000) != 0) && v97 || !v96 )
                  {
                    v89 = v91 + *(_DWORD *)(*((_QWORD *)a1 + 2) + 112LL) - v155;
                    v110 = *(_DWORD *)v46 & 0xF07FFFFF | 0x1000000;
                  }
                  else
                  {
                    v89 = v91 + v92 + *(_DWORD *)(*((_QWORD *)a1 + 2) + 112LL);
                    v110 = *(_DWORD *)v46 & 0xF07FFFFF | 0x800000;
                  }
                  *(_DWORD *)v46 = v110;
                  if ( v89 <= v135.left )
                  {
                    v89 = v132;
                    *(_DWORD *)v46 = v110 & 0xF07FFFFF | 0x1000000;
                  }
                }
              }
              else
              {
                v89 = v156;
              }
              if ( (*(_DWORD *)a1 & 1) != 0 )
              {
                if ( (*(_DWORD *)a1 & 0x400) == 0 )
                  *(_DWORD *)v46 |= 0x8000000u;
                if ( (*(_DWORD *)a1 & 0x10) != 0 || (*(_DWORD *)v46 & 0xF800000) == 0x1000000 )
                  *(_DWORD *)v46 |= 0x10u;
                *(_DWORD *)a1 |= 0x400u;
              }
              else
              {
                v111 = *(_DWORD *)v46 | 0x8000000;
                *(_DWORD *)v46 = v111;
                if ( (v111 & 0xF800000) == 0x1000000 )
                  *(_DWORD *)v46 = v111 | 0x10;
              }
              HMAssignmentLock(*((_QWORD *)a1 + 8) + 56LL, Window);
              v113 = v140;
              v114 = *v140;
              if ( *v140 )
              {
                v128 = *(_QWORD *)(gptiCurrent + 368LL);
                *(_QWORD *)(gptiCurrent + 368LL) = &v128;
                v129 = v114;
                ++*((_DWORD *)v114 + 2);
                xxxInternalUpdateWindow(*v113, 1u);
                ThreadUnlock1(v116, v115);
              }
              if ( (*(_DWORD *)(a2 + 8) & 0x400) != 0 )
              {
                v139 = *(_QWORD *)Window;
                xxxUserModeCallback(99, (unsigned int)&v139, 8, v112, v126);
              }
              PlayEventSound(5u);
              if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 776LL) & 0x4000) != 0 )
                *(_DWORD *)(Window + 344) = *(_DWORD *)(*((_QWORD *)a1 + 2) + 344LL);
              xxxSetWindowPos(
                (struct tagWND *)Window,
                (((*(_DWORD *)(a2 + 8) >> 8) & 1) != 0) - 1,
                v89,
                v127,
                0,
                0,
                (((*(_DWORD *)(a2 + 8) >> 8) & 1) == 0 ? 0x10 : 0) | 0x241);
              xxxInheritWindowMonitor((struct tagWND *)Window, *((_QWORD *)a1 + 2), 1);
              if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
              {
                if ( gpqForeground )
                {
                  v117 = *(__int64 **)(gpqForeground + 72LL);
                  if ( v117 )
                  {
                    if ( gpqForeground == *(_QWORD *)(v136 + 384) )
                    {
                      v118 = v136 != v117[2] ? 0x10 : 0;
                      if ( v117[2] == v136 )
                        v117 = (__int64 *)Window;
                      xxxWindowEvent(0x80000004, v117, 0, 1, v118 | 0x21);
                    }
                  }
                }
              }
              xxxWindowEvent(6u, (__int64 *)Window, -4, 0, 0);
              if ( *(_DWORD *)(a2 + 20) == 1 )
                xxxSendMessage((struct tagWND *)Window, 0x1E5u, 0LL, 0LL);
              xxxInternalUpdateWindow((struct tagWND *)Window, 1u);
              v6 = Window;
              ThreadUnlock1(v120, v119);
              goto LABEL_168;
            }
            v86 = (int *)(gpsi + 2300LL);
            goto LABEL_103;
          }
          v77 = (_DWORD *)(gpsi + 2296LL);
          goto LABEL_84;
        }
      }
    }
  }
LABEL_169:
  if ( v153 )
  {
    v121 = *((_QWORD *)a1 + 1);
    if ( v121 )
    {
      v122 = *v2;
      v123 = v134;
      v128 = *(_QWORD *)(v122 + 368);
      *(_QWORD *)(v122 + 368) = &v128;
      v129 = (struct tagWND *)v121;
      ++*(_DWORD *)(v121 + 8);
      xxxSendMessage(*((struct tagWND **)a1 + 1), 0x125u, v123, (unsigned __int16)((*(_BYTE *)a1 & 4) << 11) << 16);
      ThreadUnlock1(v125, v124);
    }
  }
  return v6;
}
