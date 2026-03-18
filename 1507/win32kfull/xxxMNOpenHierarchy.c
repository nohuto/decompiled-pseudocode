/*
 * XREFs of xxxMNOpenHierarchy @ 0x1C01066B8
 * Callers:
 *     xxxMNButtonDown @ 0x1C01065E0 (xxxMNButtonDown.c)
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     xxxMNButtonUp @ 0x1C010C7B0 (xxxMNButtonUp.c)
 *     xxxMNKeyDown @ 0x1C0216E44 (xxxMNKeyDown.c)
 *     xxxMNKeyFilter @ 0x1C023D934 (xxxMNKeyFilter.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     _GetAsyncKeyState @ 0x1C00411FC (_GetAsyncKeyState.c)
 *     MNIspItemValid @ 0x1C0054FCC (MNIspItemValid.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     xxxInheritWindowMonitor @ 0x1C005BED4 (xxxInheritWindowMonitor.c)
 *     MNIsUAHMenu @ 0x1C005E724 (MNIsUAHMenu.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     FindTimer @ 0x1C0079B7C (FindTimer.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C007C5B0 (xxxEnableChildWindowDpiMessageX.c)
 *     xxxSetWindowPos @ 0x1C00848B8 (xxxSetWindowPos.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 *     IntersectRect @ 0x1C008E444 (IntersectRect.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00DF658 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     PlayEventSound @ 0x1C00EBE10 (PlayEventSound.c)
 *     ?MNGetPopupBoundsRect@@YAXPEAUtagPOPUPMENU@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C01064D0 (-MNGetPopupBoundsRect@@YAXPEAUtagPOPUPMENU@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     MNClearCachedPopupSizes @ 0x1C0107D70 (MNClearCachedPopupSizes.c)
 *     MNRefreshUAHCachedSizes @ 0x1C0107DE4 (MNRefreshUAHCachedSizes.c)
 *     xxxMNCloseHierarchy @ 0x1C010CC10 (xxxMNCloseHierarchy.c)
 *     LockPopupMenu @ 0x1C010CEB4 (LockPopupMenu.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C010D9F0 (safe_cast_fnid_to_PMENUWND.c)
 *     xxxUserModeCallback @ 0x1C0215618 (xxxUserModeCallback.c)
 *     ?xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0215C20 (-xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z.c)
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
  _DWORD *Window; // rdi
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
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rax
  unsigned int v64; // ecx
  __int16 v65; // ax
  __int64 v66; // rdx
  __int64 v67; // rcx
  int v68; // r14d
  unsigned __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rcx
  int v72; // ecx
  __int64 v73; // rcx
  __int64 v74; // rcx
  int v75; // ecx
  _DWORD *v76; // rcx
  int v77; // r15d
  unsigned __int64 v78; // rcx
  __int64 v79; // rcx
  __int64 v80; // rcx
  int v81; // ecx
  __int64 v82; // rcx
  __int64 v83; // rcx
  int v84; // ecx
  int *v85; // rdx
  int v86; // eax
  int v87; // r8d
  LONG v88; // r14d
  int v89; // edx
  int v90; // r12d
  int v91; // r13d
  __int64 v92; // rcx
  int v93; // edx
  int v94; // r14d
  LONG v95; // r15d
  LONG v96; // r14d
  unsigned __int64 v97; // rcx
  __int64 v98; // rcx
  __int64 v99; // rax
  int v100; // r9d
  __int64 v101; // rcx
  __int64 v102; // rcx
  __int64 v103; // rax
  int v104; // ecx
  _DWORD *v105; // rcx
  __int64 v106; // rcx
  __int64 ThreadWin32Thread; // rax
  int v108; // ecx
  unsigned int v109; // eax
  int v110; // ecx
  int v111; // r9d
  struct tagWND **v112; // rcx
  struct tagWND *v113; // r8
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 *v116; // rdx
  int v117; // ecx
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rdx
  __int64 v121; // rcx
  unsigned __int64 v122; // r8
  __int64 v123; // rdx
  __int64 v124; // rcx
  int v125; // [rsp+20h] [rbp-F0h]
  int v126; // [rsp+90h] [rbp-80h] BYREF
  __int64 v127; // [rsp+98h] [rbp-78h] BYREF
  struct tagWND *v128; // [rsp+A0h] [rbp-70h]
  int v129[4]; // [rsp+B0h] [rbp-60h] BYREF
  int v130[2]; // [rsp+C0h] [rbp-50h] BYREF
  LONG v131; // [rsp+C8h] [rbp-48h]
  int v132; // [rsp+CCh] [rbp-44h]
  unsigned __int64 v133; // [rsp+D0h] [rbp-40h]
  struct tagRECT v134; // [rsp+D8h] [rbp-38h] BYREF
  __int64 v135; // [rsp+E8h] [rbp-28h]
  struct tagMONITOR *v136; // [rsp+F0h] [rbp-20h] BYREF
  _DWORD *v137; // [rsp+F8h] [rbp-18h]
  __int64 v138; // [rsp+100h] [rbp-10h] BYREF
  struct tagWND **v139; // [rsp+108h] [rbp-8h]
  _QWORD v140[3]; // [rsp+110h] [rbp+0h] BYREF
  _QWORD v141[3]; // [rsp+128h] [rbp+18h] BYREF
  __int128 v142; // [rsp+140h] [rbp+30h]
  __int128 v143; // [rsp+150h] [rbp+40h]
  __int128 v144; // [rsp+160h] [rbp+50h]
  __int128 v145; // [rsp+170h] [rbp+60h]
  __int128 v146; // [rsp+180h] [rbp+70h]
  __int128 v147; // [rsp+190h] [rbp+80h]
  __int128 v148; // [rsp+1A0h] [rbp+90h]
  __int128 v149; // [rsp+1B0h] [rbp+A0h]
  __int128 v150; // [rsp+1C0h] [rbp+B0h]
  __int64 v151; // [rsp+1D0h] [rbp+C0h]
  int v152; // [rsp+230h] [rbp+120h]
  int v154; // [rsp+240h] [rbp+130h]
  int v155; // [rsp+248h] [rbp+138h] BYREF

  v2 = (__int64 *)gptiCurrent;
  v152 = 0;
  v4 = *((_DWORD *)a1 + 20);
  v133 = 0LL;
  v6 = 0LL;
  v135 = gptiCurrent;
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
    v127 = *(_QWORD *)(*v2 + 376);
    *(_QWORD *)(v13 + 376) = &v127;
    v128 = (struct tagWND *)v14;
    if ( v14 )
      ++*(_DWORD *)(v14 + 8);
    v15 = *((unsigned __int16 *)a1 + 40) | (((*(unsigned __int8 *)a1 >> 2) & 1) << 16);
    v133 = **(_QWORD **)(v12 + 16);
    xxxSendMessage(*((struct tagWND **)a1 + 1), 0x117u, v133, v15);
    ThreadUnlock1(v17, v16);
    v2 = (__int64 *)gptiCurrent;
    v152 = 1;
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
    v137 = (_DWORD *)v20;
    if ( (*(_DWORD *)(v20 + 4) & 3) == 0 )
    {
      v21 = *(_QWORD *)(v20 + 16);
      if ( v21 )
      {
        if ( *(_DWORD *)(v21 + 52) )
        {
          v22 = *(_OWORD *)(v20 + 16);
          v142 = *(_OWORD *)v20;
          v23 = *(_QWORD *)(v20 + 144);
          v24 = *(_OWORD *)(v20 + 32);
          v143 = v22;
          v25 = *(_OWORD *)(v20 + 48);
          v144 = v24;
          v26 = *(_OWORD *)(v20 + 64);
          v145 = v25;
          v27 = *(_OWORD *)(v20 + 80);
          v146 = v26;
          v28 = *(_OWORD *)(v20 + 96);
          v147 = v27;
          v29 = *(_OWORD *)(v20 + 128);
          v148 = v28;
          v149 = *(_OWORD *)(v20 + 112);
          v150 = v29;
          v151 = v23;
          v30 = *v2;
          v31 = v143;
          v140[0] = *(_QWORD *)(*v2 + 376);
          *(_QWORD *)(v30 + 376) = v140;
          v140[1] = v31;
          if ( v31 )
            ++*(_DWORD *)(v31 + 8);
          v32 = *v2;
          v33 = *((_QWORD *)a1 + 1);
          v127 = *(_QWORD *)(*v2 + 376);
          *(_QWORD *)(v32 + 376) = &v127;
          v128 = (struct tagWND *)v33;
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
                     (wchar_t *)0x8000,
                     (char **)0x8000,
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
          if ( !v45 || (SetOrClrWF(0, Window, 0x408u, 1), (v46 = *(_QWORD *)(v45 + 376)) == 0) )
          {
            xxxDestroyWindow((__int64)Window);
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
          SetOrClrWF((*(_BYTE *)(*((_QWORD *)a1 + 2) + 50LL) & 0x40) != 0, Window, 0xA40u, 1);
          v49 = *((_QWORD *)a1 + 1);
          v139 = (struct tagWND **)(v46 + 8);
          HMAssignmentLock(v46 + 8, v49);
          v50 = (__int64 *)(v46 + 40);
          LockPopupMenu(v46, v46 + 40, v31);
          HMAssignmentLock((char *)a1 + 24, Window);
          v51 = *((_QWORD *)a1 + 2);
          *((_DWORD *)a1 + 21) = *((_DWORD *)a1 + 20);
          HMAssignmentLock(v46 + 32, v51);
          *(_QWORD *)(v46 + 64) = *((_QWORD *)a1 + 8);
          v152 = 0;
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
          if ( (unsigned int)MNIsUAHMenu(v58) && (*(_DWORD *)(v60 + 40) & 1) != 0 )
          {
            MNRefreshUAHCachedSizes();
            v62 = 0LL;
          }
          v141[0] = *(_QWORD *)(gptiCurrent + 376LL);
          *(_QWORD *)(gptiCurrent + 376LL) = v141;
          v141[1] = Window;
          ++Window[2];
          if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)Window + 2) + 384LL) + 776LL) & 0x200000) != 0
            || (v63 = *((_QWORD *)a1 + 2), *(_DWORD *)(v63 + 344) == 2) && *(_DWORD *)(v63 + 364) == 1 )
          {
            v64 = v62;
            v61 = *(unsigned int *)(*v50 + 52);
            if ( (_DWORD)v61 )
            {
              v62 = *(_QWORD *)(*v50 + 80);
              while ( 1 )
              {
                v59 = 152LL * v64;
                if ( (*(_DWORD *)(v59 + v62) & 0x100) != 0 || *(_QWORD *)(v59 + v62 + 104) == -1LL )
                  break;
                if ( ++v64 >= (unsigned int)v61 )
                  goto LABEL_54;
              }
            }
            else
            {
LABEL_54:
              xxxEnableChildWindowDpiMessageX((struct tagWND *)Window, 1);
            }
          }
          if ( (Window[72] & 0x10000000) != 0 )
          {
            v65 = *((_WORD *)Window + 180);
          }
          else if ( Window[86] )
          {
            v59 = gpsi;
            v65 = *(_WORD *)(gpsi + 7286LL);
          }
          else
          {
            v65 = 96;
          }
          if ( v65 != *(_WORD *)(*v50 + 68) )
          {
            *(_WORD *)(*v50 + 68) = v65;
            MNClearCachedPopupSizes(*v50, v59, v61, v62);
          }
          v68 = xxxSendMessage((struct tagWND *)Window, 0x1E2u, 1uLL, 0LL);
          if ( !v68 || (v67 = *((_QWORD *)a1 + 5)) == 0 || !MNIspItemValid(v67, v20) )
          {
            if ( ThreadUnlock1(v67, v66) )
              xxxDestroyWindow((__int64)Window);
            HMAssignmentUnlock((char *)a1 + 24);
            goto LABEL_168;
          }
          if ( (unsigned int)IsDPIAbsoluteSysMet(7uLL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v69) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v70) + 776) & 0x4000) != 0 )
            {
              goto LABEL_68;
            }
          }
          else if ( !IsDPIDWMSysMet(v69)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v73) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v74) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                   ? (v75 = 0)
                   : (v75 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 416)
                                                  + 8LL)
                                      + 260LL) & 1),
                     !v75) )
          {
LABEL_68:
            if ( IsDPIDWMSysMet(7uLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v71) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v72 = 0)
                : (v72 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                  v72) )
            {
              v76 = (_DWORD *)(gpsi + 2684LL);
            }
            else
            {
              v76 = (_DWORD *)(gpsi + 1908LL);
            }
LABEL_84:
            v77 = (unsigned __int16)v68 + 2 * *v76;
            v154 = v77;
            if ( (unsigned int)IsDPIAbsoluteSysMet(8uLL) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v78) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v79) + 776) & 0x4000) != 0 )
              {
                goto LABEL_87;
              }
            }
            else if ( !IsDPIDWMSysMet(v78)
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v82) + 776) & 0x2000) != 0
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v83) + 776) & 0x4000) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                     ? (v84 = 0)
                     : (v84 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                + 416)
                                                    + 8LL)
                                        + 260LL) & 1),
                       !v84) )
            {
LABEL_87:
              if ( IsDPIDWMSysMet(8uLL)
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v80) + 776) & 0x2000) != 0
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                  ? (v81 = 0)
                  : (v81 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 416)
                                                 + 8LL)
                                     + 260LL) & 1),
                    v81) )
              {
                v85 = (int *)(gpsi + 2688LL);
              }
              else
              {
                v85 = (int *)(gpsi + 1912LL);
              }
LABEL_103:
              v86 = *v85;
              *(_DWORD *)a1 |= 0x20u;
              *(_DWORD *)v46 ^= (*(_DWORD *)v46 ^ (xxxMNPositionHierarchy(
                                                     a1,
                                                     (struct tagITEM *)v20,
                                                     v77,
                                                     HIWORD(v68) + 2 * v86,
                                                     &v155,
                                                     &v126,
                                                     &v136) << 23)) & 0xF800000;
              if ( (*(_DWORD *)a1 & 1) != 0 && (GetAsyncKeyState(1u) & 0x8000u) != 0LL )
              {
                v87 = v126 - Window[29];
                v88 = v155;
                v89 = v155 - Window[28];
                v90 = DWORD2(v146);
                v91 = v147;
                v129[0] = v155;
                v129[2] = v89 + Window[30];
                v129[1] = v87 + Window[29];
                v129[3] = v87 + Window[31];
                v92 = *((_QWORD *)a1 + 2);
                v134 = 0LL;
                v93 = *(_DWORD *)(v92 + 116) + HIDWORD(v146);
                v130[0] = DWORD2(v146) + *(_DWORD *)(v92 + 112);
                v130[1] = v93;
                v132 = v93 + DWORD1(v147);
                v131 = v130[0] + v147;
                MNGetPopupBoundsRect(a1, (const struct tagRECT *)v136, &v134, 0);
                if ( (unsigned int)IntersectRect(v129, v129, v130) )
                {
                  v94 = *(_DWORD *)(*((_QWORD *)a1 + 2) + 112LL);
                  v95 = v77 + v90 + v94 + v91;
                  if ( v95 > v134.right )
                    v95 = 0;
                  v96 = v90 + v94 - v154;
                  if ( v96 < v134.left )
                    v96 = 0;
                  if ( (unsigned int)IsDPIAbsoluteSysMet(0x28uLL) )
                  {
                    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v97) + 776) & 0x2000) != 0 )
                      goto LABEL_122;
                    v99 = PsGetCurrentProcessWin32Process(v98);
                    v100 = 0;
                    if ( (*(_DWORD *)(v99 + 776) & 0x4000) != 0 )
                      goto LABEL_122;
                  }
                  else if ( !IsDPIDWMSysMet(v97)
                         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v101) + 776) & 0x2000) != 0
                         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v102) + 776) & 0x4000) != 0
                         || ((v103 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread()),
                              v100 = 0,
                              !*(_QWORD *)(v103 + 416))
                           ? (v104 = 0)
                           : (v104 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                       + 416)
                                                           + 8LL)
                                               + 260LL) & 1,
                              v100 = 0),
                             !v104) )
                  {
LABEL_122:
                    if ( IsDPIDWMSysMet(0x28uLL) )
                    {
                      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v106) + 776) & 0x2000) != 0 )
                      {
                        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                        v100 = 0;
                        if ( *(_QWORD *)(ThreadWin32Thread + 416) )
                        {
                          v108 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                   + 416)
                                                       + 8LL)
                                           + 260LL) & 1;
                          v100 = 0;
                        }
                        else
                        {
                          v108 = 0;
                        }
                        if ( v108 )
                        {
                          v105 = (_DWORD *)(gpsi + 2816LL);
                          goto LABEL_131;
                        }
                      }
                      else
                      {
                        v100 = 0;
                      }
                    }
                    v105 = (_DWORD *)(gpsi + 2040LL);
                    goto LABEL_131;
                  }
                  v105 = (_DWORD *)(gpsi + 2428LL);
LABEL_131:
                  if ( (*v105 != v100 || (*v137 & 0x2000) != 0) && v96 || !v95 )
                  {
                    v88 = v90 + *(_DWORD *)(*((_QWORD *)a1 + 2) + 112LL) - v154;
                    v109 = *(_DWORD *)v46 & 0xF07FFFFF | 0x1000000;
                  }
                  else
                  {
                    v88 = v90 + v91 + *(_DWORD *)(*((_QWORD *)a1 + 2) + 112LL);
                    v109 = *(_DWORD *)v46 & 0xF07FFFFF | 0x800000;
                  }
                  *(_DWORD *)v46 = v109;
                  if ( v88 <= v134.left )
                  {
                    v88 = v131;
                    *(_DWORD *)v46 = v109 & 0xF07FFFFF | 0x1000000;
                  }
                }
              }
              else
              {
                v88 = v155;
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
                v110 = *(_DWORD *)v46 | 0x8000000;
                *(_DWORD *)v46 = v110;
                if ( (v110 & 0xF800000) == 0x1000000 )
                  *(_DWORD *)v46 = v110 | 0x10;
              }
              HMAssignmentLock(*((_QWORD *)a1 + 8) + 56LL, Window);
              v112 = v139;
              v113 = *v139;
              if ( *v139 )
              {
                v127 = *(_QWORD *)(gptiCurrent + 376LL);
                *(_QWORD *)(gptiCurrent + 376LL) = &v127;
                v128 = v113;
                ++*((_DWORD *)v113 + 2);
                xxxInternalUpdateWindow(*v112, 1u);
                ThreadUnlock1(v115, v114);
              }
              if ( (*(_DWORD *)(a2 + 8) & 0x400) != 0 )
              {
                v138 = *(_QWORD *)Window;
                xxxUserModeCallback(99, (unsigned int)&v138, 8, v111, v125);
              }
              PlayEventSound(5u);
              if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 776LL) & 0x4000) != 0 )
                Window[86] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 344LL);
              xxxSetWindowPos(
                (struct tagWND *)Window,
                (((*(_DWORD *)(a2 + 8) >> 8) & 1) != 0) - 1LL,
                (unsigned int)v88,
                (unsigned int)v126,
                0,
                0,
                (((*(_DWORD *)(a2 + 8) >> 8) & 1) == 0 ? 0x10 : 0) | 0x41);
              xxxInheritWindowMonitor((struct tagWND *)Window, *((_QWORD *)a1 + 2), 1);
              if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
              {
                if ( gpqForeground )
                {
                  v116 = *(__int64 **)(gpqForeground + 72LL);
                  if ( v116 )
                  {
                    if ( gpqForeground == *(_QWORD *)(v135 + 392) )
                    {
                      v117 = v135 != v116[2] ? 0x10 : 0;
                      if ( v116[2] == v135 )
                        v116 = (__int64 *)Window;
                      xxxWindowEvent(0x80000004, v116, 0, 1, v117 | 0x21);
                    }
                  }
                }
              }
              xxxWindowEvent(6u, (__int64 *)Window, -4, 0, 0);
              if ( *(_DWORD *)(a2 + 20) == 1 )
                xxxSendMessage((struct tagWND *)Window, 0x1E5u, 0LL, 0LL);
              xxxInternalUpdateWindow((struct tagWND *)Window, 1u);
              v6 = (__int64)Window;
              ThreadUnlock1(v119, v118);
              goto LABEL_168;
            }
            v85 = (int *)(gpsi + 2300LL);
            goto LABEL_103;
          }
          v76 = (_DWORD *)(gpsi + 2296LL);
          goto LABEL_84;
        }
      }
    }
  }
LABEL_169:
  if ( v152 )
  {
    v120 = *((_QWORD *)a1 + 1);
    if ( v120 )
    {
      v121 = *v2;
      v122 = v133;
      v127 = *(_QWORD *)(v121 + 376);
      *(_QWORD *)(v121 + 376) = &v127;
      v128 = (struct tagWND *)v120;
      ++*(_DWORD *)(v120 + 8);
      xxxSendMessage(*((struct tagWND **)a1 + 1), 0x125u, v122, (unsigned __int16)((*(_BYTE *)a1 & 4) << 11) << 16);
      ThreadUnlock1(v124, v123);
    }
  }
  return v6;
}
