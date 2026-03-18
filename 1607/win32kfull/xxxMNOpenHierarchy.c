/*
 * XREFs of xxxMNOpenHierarchy @ 0x1C0140574
 * Callers:
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     xxxMNButtonUp @ 0x1C013ECEC (xxxMNButtonUp.c)
 *     xxxMNButtonDown @ 0x1C013ED74 (xxxMNButtonDown.c)
 *     xxxMNKeyDown @ 0x1C020F844 (xxxMNKeyDown.c)
 *     xxxMNKeyFilter @ 0x1C02354DC (xxxMNKeyFilter.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005425C (safe_cast_fnid_to_PMENUWND.c)
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C005E728 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     MNIspItemValid @ 0x1C006B8A0 (MNIspItemValid.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     MNIsUAHMenu @ 0x1C006F6BC (MNIsUAHMenu.c)
 *     xxxInheritWindowMonitor @ 0x1C00712C4 (xxxInheritWindowMonitor.c)
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     xxxSetWindowPos @ 0x1C00A5850 (xxxSetWindowPos.c)
 *     _GetAsyncKeyState @ 0x1C00A98E8 (_GetAsyncKeyState.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00B2504 (xxxEnableChildWindowDpiMessageX.c)
 *     MNClearCachedPopupSizes @ 0x1C00B83FC (MNClearCachedPopupSizes.c)
 *     MNRefreshUAHCachedSizes @ 0x1C00B8470 (MNRefreshUAHCachedSizes.c)
 *     FindTimer @ 0x1C00ECDEC (FindTimer.c)
 *     PlayEventSound @ 0x1C010F740 (PlayEventSound.c)
 *     xxxMNCloseHierarchy @ 0x1C013CBF0 (xxxMNCloseHierarchy.c)
 *     ?MNGetPopupBoundsRect@@YAXPEAUtagPOPUPMENU@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0140258 (-MNGetPopupBoundsRect@@YAXPEAUtagPOPUPMENU@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     LockPopupMenu @ 0x1C0142D1C (LockPopupMenu.c)
 *     xxxUserModeCallback @ 0x1C020E1A4 (xxxUserModeCallback.c)
 *     ?xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C020E760 (-xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z.c)
 */

__int64 __fastcall xxxMNOpenHierarchy(struct tagPOPUPMENU *a1, __int64 a2)
{
  __int64 *v2; // r8
  unsigned int v4; // ecx
  __int64 v6; // r12
  signed int v7; // edi
  int v8; // esi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r15d
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r14
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 CurrentProcessWin32Process; // rax
  bool v40; // zf
  char v41; // al
  _DWORD *Window; // rdi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rsi
  __int64 v48; // rsi
  __int64 v49; // rdx
  int v50; // ecx
  __int64 v51; // rdx
  __int64 *v52; // r15
  __int64 v53; // rdx
  int v54; // ecx
  int v55; // ecx
  int v56; // ecx
  int v57; // ecx
  int v58; // ecx
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rcx
  int v63; // edx
  unsigned int v64; // ecx
  unsigned int v65; // r9d
  __int64 v66; // r8
  __int64 v67; // rdx
  __int16 v68; // ax
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  int v72; // r14d
  __int64 v73; // rdx
  unsigned __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rdx
  __int64 v85; // r8
  __int64 v86; // r9
  int v87; // ecx
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rdx
  __int64 v96; // r8
  __int64 v97; // r9
  int v98; // ecx
  _DWORD *v99; // rcx
  int v100; // r15d
  __int64 v101; // rdx
  unsigned __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rdx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rdx
  __int64 v113; // r8
  __int64 v114; // r9
  int v115; // ecx
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // rdx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // rdx
  __int64 v124; // r8
  __int64 v125; // r9
  int v126; // ecx
  int *v127; // rdx
  int v128; // eax
  struct tagITEM *v129; // rdx
  int v130; // r8d
  LONG v131; // r14d
  int v132; // edx
  int v133; // r12d
  int v134; // r13d
  __int64 v135; // rcx
  int v136; // edx
  int v137; // r14d
  LONG v138; // r15d
  LONG v139; // r14d
  __int64 v140; // rdx
  unsigned __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r9
  char CurrentThreadDpiAwarenessContext; // al
  __int64 v145; // r9
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // r8
  __int64 v149; // r9
  __int64 v150; // rdx
  __int64 v151; // r8
  __int64 v152; // r9
  __int64 v153; // rax
  __int64 v154; // rdx
  __int64 v155; // r8
  int v156; // ecx
  _DWORD *v157; // rcx
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // rdx
  __int64 v162; // r8
  __int64 v163; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v165; // rdx
  __int64 v166; // r8
  int v167; // ecx
  unsigned int v168; // eax
  int v169; // ecx
  int v170; // r9d
  struct tagWND **v171; // rcx
  struct tagWND *v172; // r8
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // rdx
  __int64 v176; // rcx
  __int64 v177; // r8
  __int64 v178; // r9
  __int64 *v179; // rdx
  int v180; // r8d
  __int64 v181; // rdx
  __int64 v182; // rcx
  __int64 v183; // rdx
  __int64 v184; // rcx
  unsigned __int64 v185; // r8
  __int64 v186; // rdx
  __int64 v187; // rcx
  int v188; // [rsp+90h] [rbp-80h] BYREF
  struct tagITEM *v189; // [rsp+98h] [rbp-78h]
  __int64 v190; // [rsp+A0h] [rbp-70h] BYREF
  struct tagWND *v191; // [rsp+A8h] [rbp-68h]
  unsigned __int64 v192; // [rsp+B8h] [rbp-58h]
  int v193[4]; // [rsp+C0h] [rbp-50h] BYREF
  int v194[2]; // [rsp+D0h] [rbp-40h] BYREF
  LONG v195; // [rsp+D8h] [rbp-38h]
  int v196; // [rsp+DCh] [rbp-34h]
  struct tagRECT v197; // [rsp+E0h] [rbp-30h] BYREF
  struct tagMONITOR *v198; // [rsp+F0h] [rbp-20h] BYREF
  struct tagWND **v199; // [rsp+F8h] [rbp-18h]
  __int64 v200; // [rsp+100h] [rbp-10h] BYREF
  __int64 v201; // [rsp+108h] [rbp-8h]
  _QWORD v202[3]; // [rsp+110h] [rbp+0h] BYREF
  _QWORD v203[3]; // [rsp+128h] [rbp+18h] BYREF
  __int128 v204; // [rsp+140h] [rbp+30h]
  __int128 v205; // [rsp+150h] [rbp+40h]
  __int128 v206; // [rsp+160h] [rbp+50h]
  __int128 v207; // [rsp+170h] [rbp+60h]
  __int128 v208; // [rsp+180h] [rbp+70h]
  __int128 v209; // [rsp+190h] [rbp+80h]
  __int128 v210; // [rsp+1A0h] [rbp+90h]
  __int128 v211; // [rsp+1B0h] [rbp+A0h]
  __int128 v212; // [rsp+1C0h] [rbp+B0h]
  __int64 v213; // [rsp+1D0h] [rbp+C0h]
  int v215; // [rsp+240h] [rbp+130h]
  int v216; // [rsp+248h] [rbp+138h] BYREF

  v2 = (__int64 *)gptiCurrent;
  v192 = 0LL;
  v4 = *((_DWORD *)a1 + 20);
  v6 = 0LL;
  v7 = 0;
  v201 = gptiCurrent;
  v8 = 0;
  if ( v4 == -1 || v4 >= *(_DWORD *)(*((_QWORD *)a1 + 5) + 52LL) )
    return 0LL;
  if ( (*(_DWORD *)a1 & 0x20) == 0 )
    goto LABEL_7;
  if ( (*(_DWORD *)a1 & 0x4000) == 0 )
    return 0LL;
  xxxMNCloseHierarchy((unsigned int *)a1, a2);
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
  if ( (*(_DWORD *)a1 & 0x800) != 0 )
  {
    v18 = 0;
  }
  else
  {
    v13 = *v2;
    v14 = *((_QWORD *)a1 + 1);
    v190 = *(_QWORD *)(*v2 + 368);
    *(_QWORD *)(v13 + 368) = &v190;
    v191 = (struct tagWND *)v14;
    if ( v14 )
      ++*(_DWORD *)(v14 + 8);
    v15 = *((unsigned __int16 *)a1 + 40) | (((*(unsigned __int8 *)a1 >> 2) & 1) << 16);
    v192 = **(_QWORD **)(v12 + 16);
    xxxSendMessage(*((struct tagWND **)a1 + 1), 0x117u, v192, v15);
    ThreadUnlock1(v17, v16);
    v2 = (__int64 *)gptiCurrent;
    v18 = 1;
  }
  if ( (*(_DWORD *)(a2 + 8) & 4) == 0 )
  {
    v6 = -1LL;
    goto LABEL_168;
  }
  v19 = *((_QWORD *)a1 + 5);
  v20 = *((unsigned int *)a1 + 20);
  if ( (unsigned int)v20 < *(_DWORD *)(v19 + 52) )
  {
    v21 = *(_QWORD *)(v19 + 80) + 152 * v20;
    v189 = (struct tagITEM *)v21;
    if ( (*(_DWORD *)(v21 + 4) & 3) == 0 )
    {
      v22 = *(_QWORD *)(v21 + 16);
      if ( v22 )
      {
        if ( *(_DWORD *)(v22 + 52) )
        {
          v23 = *(_OWORD *)(v21 + 16);
          v204 = *(_OWORD *)v21;
          v24 = *(_OWORD *)(v21 + 32);
          v205 = v23;
          v25 = *(_OWORD *)(v21 + 48);
          v206 = v24;
          v26 = *(_OWORD *)(v21 + 64);
          v207 = v25;
          v27 = *(_OWORD *)(v21 + 80);
          v208 = v26;
          v28 = *(_OWORD *)(v21 + 96);
          v209 = v27;
          v210 = v28;
          v29 = *(_OWORD *)(v21 + 128);
          v30 = *(_QWORD *)(v21 + 144);
          v211 = *(_OWORD *)(v21 + 112);
          v212 = v29;
          v213 = v30;
          v31 = *v2;
          v32 = v205;
          v202[0] = *(_QWORD *)(*v2 + 368);
          *(_QWORD *)(v31 + 368) = v202;
          v202[1] = v32;
          if ( v32 )
            ++*(_DWORD *)(v32 + 8);
          v33 = *v2;
          v34 = *((_QWORD *)a1 + 1);
          v190 = *(_QWORD *)(*v2 + 368);
          *(_QWORD *)(v33 + 368) = &v190;
          v191 = (struct tagWND *)v34;
          if ( v34 )
            ++*(_DWORD *)(v34 + 8);
          v35 = *((_QWORD *)a1 + 2);
          if ( (*(_DWORD *)(v35 + 352) & 0xF) == 2 )
          {
            v36 = ValidateHmonitor(*(_QWORD *)(v35 + 344));
            v7 = *(_DWORD *)(v36 + 28);
            v8 = *(_DWORD *)(v36 + 32);
          }
          if ( !PsGetCurrentProcessWin32Process(v35, v34)
            || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v38, v37),
                v40 = (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) == 0,
                v41 = 1,
                v40) )
          {
            v41 = 0;
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
                     *((_QWORD *)a1 + 1),
                     0LL,
                     *(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL),
                     v32,
                     0,
                     0xA00u,
                     v41,
                     0LL);
          ThreadUnlock1(v44, v43);
          if ( !Window )
            goto LABEL_167;
          v47 = safe_cast_fnid_to_PMENUWND((__int64)Window);
          if ( !v47 || (SetOrClrWF(0, Window, 0x408u, 1), (v48 = *(_QWORD *)(v47 + 360)) == 0) )
          {
            xxxDestroyWindow(Window);
LABEL_167:
            ThreadUnlock1(v46, v45);
            v2 = (__int64 *)gptiCurrent;
            goto LABEL_168;
          }
          v49 = *((_QWORD *)a1 + 8);
          v50 = *(_DWORD *)v48 | 0x10000;
          *(_DWORD *)v48 = v50;
          if ( v49 )
          {
            *(_QWORD *)(v48 + 72) = *(_QWORD *)(v49 + 72);
            *(_DWORD *)v48 = v50 | 0x20000000;
            *(_QWORD *)(v49 + 72) = v48;
          }
          SetOrClrWF((*(_BYTE *)(*((_QWORD *)a1 + 2) + 50LL) & 0x40) != 0, Window, 0xA40u, 1);
          v51 = *((_QWORD *)a1 + 1);
          v199 = (struct tagWND **)(v48 + 8);
          HMAssignmentLock(v48 + 8, v51);
          v52 = (__int64 *)(v48 + 40);
          LockPopupMenu(v48, v48 + 40, v32);
          HMAssignmentLock((char *)a1 + 24, Window);
          v53 = *((_QWORD *)a1 + 2);
          *((_DWORD *)a1 + 21) = *((_DWORD *)a1 + 20);
          HMAssignmentLock(v48 + 32, v53);
          *(_QWORD *)(v48 + 64) = *((_QWORD *)a1 + 8);
          v54 = *(_DWORD *)v48 ^ (*(_DWORD *)v48 ^ *(_DWORD *)a1) & 2;
          *(_DWORD *)v48 = v54;
          v55 = (*(_DWORD *)a1 ^ v54) & 4 ^ v54;
          *(_DWORD *)v48 = v55;
          v56 = (*(_DWORD *)a1 ^ v55) & 0x800 ^ v55 | 0x200000;
          *(_DWORD *)v48 = v56;
          v57 = (*(_DWORD *)a1 ^ v56) & 0x400000 ^ v56;
          *(_DWORD *)v48 = v57;
          v58 = (*(_DWORD *)a1 ^ v57) & 0x10 ^ v57;
          *(_DWORD *)v48 = v58;
          *(_DWORD *)v48 = *(_DWORD *)a1 ^ (*(_DWORD *)a1 ^ v58) & 0x7FFFFFFF;
          v59 = *(_QWORD *)(v48 + 40);
          if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
            *(_DWORD *)(v59 + 40) |= 4u;
          else
            *(_DWORD *)(v59 + 40) &= ~4u;
          v60 = *v52;
          *(_DWORD *)v48 &= ~0x1000u;
          if ( (unsigned int)MNIsUAHMenu(v60) && (*(_DWORD *)(v61 + 40) & 1) != 0 )
            MNRefreshUAHCachedSizes(v61);
          v203[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v203;
          v203[1] = Window;
          ++Window[2];
          if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)Window + 2) + 376LL) + 768LL) & 0x80000) != 0
            || (v62 = *((_QWORD *)a1 + 2), (*(_DWORD *)(v62 + 352) & 0xF) == 2)
            && ((v63 = *(_DWORD *)(v62 + 288), v63 < 0) || (*(_DWORD *)a1 & 6) != 0 && (v63 & 0x40000000) != 0) )
          {
            v64 = 0;
            v65 = *(_DWORD *)(*v52 + 52);
            if ( v65 )
            {
              v66 = *(_QWORD *)(*v52 + 80);
              while ( 1 )
              {
                v67 = 152LL * v64;
                if ( (*(_DWORD *)(v67 + v66) & 0x100) != 0 || *(_QWORD *)(v67 + v66 + 104) == -1LL )
                  break;
                if ( ++v64 >= v65 )
                  goto LABEL_57;
              }
            }
            else
            {
LABEL_57:
              xxxEnableChildWindowDpiMessageX((struct tagWND *)Window);
            }
          }
          if ( (Window[72] & 0x10000000) != 0 )
          {
            v68 = *((_WORD *)Window + 178);
          }
          else if ( (Window[88] & 0xF) == 0
                 && (v69 = *(_QWORD *)(*((_QWORD *)Window + 2) + 408LL)) != 0
                 && (*(_DWORD *)(*(_QWORD *)(v69 + 8) + 244LL) & 1) != 0 )
          {
            v68 = 96;
          }
          else
          {
            v68 = *(_WORD *)(gpsi + 8678LL);
          }
          if ( v68 != *(_WORD *)(*v52 + 68) )
          {
            *(_WORD *)(*v52 + 68) = v68;
            MNClearCachedPopupSizes(*v52);
          }
          v72 = xxxSendMessage((struct tagWND *)Window, 0x1E2u, 1uLL, 0LL);
          if ( !v72 || (v71 = *((_QWORD *)a1 + 5)) == 0 || !MNIspItemValid(v71, (__int64)v189) )
          {
            if ( ThreadUnlock1(v71, v70) )
              xxxDestroyWindow(Window);
            HMAssignmentUnlock((char *)a1 + 24);
            v18 = 0;
            goto LABEL_167;
          }
          if ( (unsigned int)IsDPIAbsoluteSysMet(7uLL) )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v74, v73, v75, v76) & 0xF) != 0 )
              goto LABEL_72;
          }
          else if ( !IsDPIDWMSysMet(v74)
                 || (W32GetCurrentThreadDpiAwarenessContext(v89, v88, v90, v91) & 0xF) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v92, v93, v94) + 408)
                   ? (v98 = 0)
                   : (v98 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                  (__int64)KeGetCurrentThread(),
                                                                  v95,
                                                                  v96,
                                                                  v97)
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                     !v98) )
          {
LABEL_72:
            if ( IsDPIDWMSysMet(7uLL)
              && (W32GetCurrentThreadDpiAwarenessContext(v78, v77, v79, v80) & 0xF) == 1
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v81, v82, v83) + 408)
                ? (v87 = 0)
                : (v87 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v84,
                                                               v85,
                                                               v86)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  v87) )
            {
              v99 = (_DWORD *)(gpsi + 2684LL);
            }
            else
            {
              v99 = (_DWORD *)(gpsi + 1908LL);
            }
LABEL_87:
            v100 = (unsigned __int16)v72 + 2 * *v99;
            v215 = v100;
            if ( (unsigned int)IsDPIAbsoluteSysMet(8uLL) )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext(v102, v101, v103, v104) & 0xF) != 0 )
                goto LABEL_89;
            }
            else if ( !IsDPIDWMSysMet(v102)
                   || (W32GetCurrentThreadDpiAwarenessContext(v117, v116, v118, v119) & 0xF) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v120, v121, v122) + 408)
                     ? (v126 = 0)
                     : (v126 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                     (__int64)KeGetCurrentThread(),
                                                                     v123,
                                                                     v124,
                                                                     v125)
                                                                 + 408)
                                                     + 8LL)
                                         + 244LL) & 1),
                       !v126) )
            {
LABEL_89:
              if ( IsDPIDWMSysMet(8uLL)
                && (W32GetCurrentThreadDpiAwarenessContext(v106, v105, v107, v108) & 0xF) == 1
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v109, v110, v111) + 408)
                  ? (v115 = 0)
                  : (v115 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                  (__int64)KeGetCurrentThread(),
                                                                  v112,
                                                                  v113,
                                                                  v114)
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                    v115) )
              {
                v127 = (int *)(gpsi + 2688LL);
              }
              else
              {
                v127 = (int *)(gpsi + 1912LL);
              }
LABEL_104:
              v128 = *v127;
              v129 = v189;
              *(_DWORD *)a1 |= 0x20u;
              *(_DWORD *)v48 ^= (*(_DWORD *)v48 ^ (xxxMNPositionHierarchy(
                                                     a1,
                                                     v129,
                                                     v100,
                                                     HIWORD(v72) + 2 * v128,
                                                     &v216,
                                                     &v188,
                                                     &v198) << 23)) & 0xF800000;
              if ( (*(_DWORD *)a1 & 1) != 0 && (GetAsyncKeyState(1u) & 0x8000u) != 0LL )
              {
                v130 = v188 - Window[29];
                v131 = v216;
                v132 = v216 - Window[28];
                v133 = DWORD2(v208);
                v134 = v209;
                v193[0] = v216;
                v193[2] = v132 + Window[30];
                v193[1] = v130 + Window[29];
                v193[3] = v130 + Window[31];
                v135 = *((_QWORD *)a1 + 2);
                v197 = 0LL;
                v136 = *(_DWORD *)(v135 + 116) + HIDWORD(v208);
                v194[0] = DWORD2(v208) + *(_DWORD *)(v135 + 112);
                v194[1] = v136;
                v196 = v136 + DWORD1(v209);
                v195 = v194[0] + v209;
                MNGetPopupBoundsRect(a1, (const struct tagRECT *)v198, &v197, 0);
                if ( (unsigned int)IntersectRect(v193, v193, v194) )
                {
                  v137 = *(_DWORD *)(*((_QWORD *)a1 + 2) + 112LL);
                  v138 = v100 + v133 + v137 + v134;
                  if ( v138 > v197.right )
                    v138 = 0;
                  v139 = v133 + v137 - v215;
                  if ( v139 < v197.left )
                    v139 = 0;
                  if ( (unsigned int)IsDPIAbsoluteSysMet(0x28uLL) )
                  {
                    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v141, v140, v142, v143);
                    LODWORD(v145) = 0;
                    if ( (CurrentThreadDpiAwarenessContext & 0xF) != 0 )
                      goto LABEL_121;
                  }
                  else if ( !IsDPIDWMSysMet(v141)
                         || (W32GetCurrentThreadDpiAwarenessContext(v147, v146, v148, v149) & 0xF) != 0
                         || ((v153 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v150, v151, v152),
                              LODWORD(v145) = 0,
                              !*(_QWORD *)(v153 + 408))
                           ? (v156 = 0)
                           : (v156 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                           (__int64)KeGetCurrentThread(),
                                                                           v154,
                                                                           v155,
                                                                           0LL)
                                                                       + 408)
                                                           + 8LL)
                                               + 244LL) & 1,
                              LODWORD(v145) = 0),
                             !v156) )
                  {
LABEL_121:
                    if ( IsDPIDWMSysMet(0x28uLL) )
                    {
                      if ( (W32GetCurrentThreadDpiAwarenessContext(v159, v158, v160, v145) & 0xF) == 1 )
                      {
                        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v161, v162, v163);
                        LODWORD(v145) = 0;
                        if ( *(_QWORD *)(ThreadWin32Thread + 408) )
                        {
                          v167 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                       (__int64)KeGetCurrentThread(),
                                                                       v165,
                                                                       v166,
                                                                       0LL)
                                                                   + 408)
                                                       + 8LL)
                                           + 244LL) & 1;
                          LODWORD(v145) = 0;
                        }
                        else
                        {
                          v167 = 0;
                        }
                        if ( v167 )
                        {
                          v157 = (_DWORD *)(gpsi + 2816LL);
                          goto LABEL_130;
                        }
                      }
                      else
                      {
                        LODWORD(v145) = 0;
                      }
                    }
                    v157 = (_DWORD *)(gpsi + 2040LL);
                    goto LABEL_130;
                  }
                  v157 = (_DWORD *)(gpsi + 2428LL);
LABEL_130:
                  if ( (*v157 != (_DWORD)v145 || (*(_DWORD *)v189 & 0x2000) != 0) && v139 || !v138 )
                  {
                    v131 = v133 + *(_DWORD *)(*((_QWORD *)a1 + 2) + 112LL) - v215;
                    v168 = *(_DWORD *)v48 & 0xF07FFFFF | 0x1000000;
                  }
                  else
                  {
                    v131 = v133 + v134 + *(_DWORD *)(*((_QWORD *)a1 + 2) + 112LL);
                    v168 = *(_DWORD *)v48 & 0xF07FFFFF | 0x800000;
                  }
                  *(_DWORD *)v48 = v168;
                  if ( v131 <= v197.left )
                  {
                    v131 = v195;
                    *(_DWORD *)v48 = v168 & 0xF07FFFFF | 0x1000000;
                  }
                }
              }
              else
              {
                v131 = v216;
              }
              if ( (*(_DWORD *)a1 & 1) != 0 )
              {
                if ( (*(_DWORD *)a1 & 0x400) == 0 )
                  *(_DWORD *)v48 |= 0x8000000u;
                if ( (*(_DWORD *)a1 & 0x10) != 0 || (*(_DWORD *)v48 & 0xF800000) == 0x1000000 )
                  *(_DWORD *)v48 |= 0x10u;
                *(_DWORD *)a1 |= 0x400u;
              }
              else
              {
                v169 = *(_DWORD *)v48 | 0x8000000;
                *(_DWORD *)v48 = v169;
                if ( (v169 & 0xF800000) == 0x1000000 )
                  *(_DWORD *)v48 = v169 | 0x10;
              }
              HMAssignmentLock(*((_QWORD *)a1 + 8) + 56LL, Window);
              v171 = v199;
              v172 = *v199;
              if ( *v199 )
              {
                v190 = *(_QWORD *)(gptiCurrent + 368LL);
                *(_QWORD *)(gptiCurrent + 368LL) = &v190;
                v191 = v172;
                ++*((_DWORD *)v172 + 2);
                xxxInternalUpdateWindow(*v171, 1u);
                ThreadUnlock1(v174, v173);
              }
              if ( (*(_DWORD *)(a2 + 8) & 0x400) != 0 )
              {
                v200 = *(_QWORD *)Window;
                xxxUserModeCallback(100, (unsigned int)&v200, 8, v170);
              }
              PlayEventSound(5u);
              if ( (W32GetCurrentThreadDpiAwarenessContext(v176, v175, v177, v178) & 0xF) == 2 )
                Window[88] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 352LL);
              xxxSetWindowPos(
                (struct tagWND *)Window,
                (((*(_DWORD *)(a2 + 8) >> 8) & 1) != 0) - 1LL,
                (unsigned int)v131,
                (unsigned int)v188,
                0,
                0,
                (((*(_DWORD *)(a2 + 8) >> 8) & 1) == 0 ? 0x10 : 0) | 0x41);
              xxxInheritWindowMonitor((struct tagWND *)Window, *((struct tagWND **)a1 + 2), 1, 1);
              if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
              {
                if ( gpqForeground )
                {
                  v179 = *(__int64 **)(gpqForeground + 80LL);
                  if ( v179 )
                  {
                    if ( gpqForeground == *(_QWORD *)(v201 + 384) )
                    {
                      v180 = v201 != v179[2] ? 0x10 : 0;
                      if ( v179[2] == v201 )
                        v179 = (__int64 *)Window;
                      xxxWindowEvent(0x80000004, v179, 0, 1, v180 | 0x21);
                    }
                  }
                }
              }
              xxxWindowEvent(6u, (__int64 *)Window, -4, 0, 0);
              if ( *(_DWORD *)(a2 + 20) == 1 )
                xxxSendMessage((struct tagWND *)Window, 0x1E5u, 0LL, 0LL);
              xxxInternalUpdateWindow((struct tagWND *)Window, 1u);
              v6 = (__int64)Window;
              ThreadUnlock1(v182, v181);
              v18 = 0;
              goto LABEL_167;
            }
            v127 = (int *)(gpsi + 2300LL);
            goto LABEL_104;
          }
          v99 = (_DWORD *)(gpsi + 2296LL);
          goto LABEL_87;
        }
      }
    }
  }
LABEL_168:
  if ( v18 )
  {
    v183 = *((_QWORD *)a1 + 1);
    if ( v183 )
    {
      v184 = *v2;
      v185 = v192;
      v190 = *(_QWORD *)(v184 + 368);
      *(_QWORD *)(v184 + 368) = &v190;
      v191 = (struct tagWND *)v183;
      ++*(_DWORD *)(v183 + 8);
      xxxSendMessage(*((struct tagWND **)a1 + 1), 0x125u, v185, (unsigned __int16)((*(_BYTE *)a1 & 4) << 11) << 16);
      ThreadUnlock1(v187, v186);
    }
  }
  return v6;
}
