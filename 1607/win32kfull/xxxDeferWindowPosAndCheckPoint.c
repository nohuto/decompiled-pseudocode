/*
 * XREFs of xxxDeferWindowPosAndCheckPoint @ 0x1C00AC04C
 * Callers:
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00ABD4C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01CF26C (xxxRestoreMonitorsAndWindowsRects.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _DeferWindowPos @ 0x1C00A6664 (_DeferWindowPos.c)
 *     FindOldMonitor @ 0x1C00AC84C (FindOldMonitor.c)
 *     ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00AC918 (-NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     IsValidMonitor @ 0x1C00ACDA8 (IsValidMonitor.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@0@Z @ 0x1C01CD3A4 (-FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@0@Z.c)
 *     ?_ShouldMaximizeWindow@@YAHPEAUtagWND@@@Z @ 0x1C01CDFF0 (-_ShouldMaximizeWindow@@YAHPEAUtagWND@@@Z.c)
 *     EvaluateArrangeState @ 0x1C020257C (EvaluateArrangeState.c)
 *     MigrateRectMonitors @ 0x1C0202620 (MigrateRectMonitors.c)
 *     xxxEvaluateDestRectForMonitorMigration @ 0x1C0203C4C (xxxEvaluateDestRectForMonitorMigration.c)
 *     xxxInitializeMoveSizeData @ 0x1C0203F8C (xxxInitializeMoveSizeData.c)
 */

__int64 __fastcall xxxDeferWindowPosAndCheckPoint(
        __int64 a1,
        __int64 a2,
        struct tagMONITORRECTS *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        int a6,
        char a7)
{
  __int64 v9; // r13
  int v10; // edi
  int v11; // r12d
  int v12; // ecx
  int v13; // eax
  unsigned __int16 v14; // si
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // ecx
  _WORD *v41; // rcx
  unsigned __int16 v42; // cx
  __int64 v43; // rdx
  unsigned __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  int v57; // ecx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  int v68; // ecx
  _WORD *v69; // rcx
  __int64 Prop; // rax
  __int64 v71; // rsi
  int OldMonitor; // eax
  __int64 v73; // r13
  struct tagMONITOR *NewMonitor; // r15
  __int64 v75; // rcx
  __int128 v76; // xmm1
  _DWORD *v77; // rax
  __int128 v78; // xmm0
  __int128 v79; // xmm1
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  unsigned int v82; // ecx
  int v83; // eax
  int v84; // ecx
  int v85; // eax
  __int64 v86; // rsi
  struct tagMONITOR *v87; // r9
  __int64 v88; // rcx
  _DWORD *v89; // rax
  __int128 v90; // xmm1
  __int128 v91; // xmm0
  int v92; // eax
  int v93; // eax
  __int128 v94; // xmm1
  __int128 v95; // xmm0
  __int128 v96; // xmm1
  _DWORD *v97; // r8
  _QWORD *v98; // r10
  _DWORD *v99; // rcx
  _QWORD *v100; // rdx
  BOOL v101; // edx
  __int64 v102; // rdx
  __int64 v103; // rcx
  int v104; // edx
  struct tagWND *v105; // rcx
  struct tagMONITOR *v106; // r8
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  int v111; // [rsp+50h] [rbp-B0h]
  int v113; // [rsp+68h] [rbp-98h]
  _QWORD v115[3]; // [rsp+78h] [rbp-88h] BYREF
  struct tagRECT v116; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v117[148]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v118; // [rsp+2F0h] [rbp+1F0h] BYREF
  int v119[80]; // [rsp+300h] [rbp+200h] BYREF

  v9 = a1;
  memset(v117, 0, 0x248uLL);
  v111 = 0;
  v10 = 1;
  v116 = 0LL;
  if ( (dword_1C0321804 & 1) == 0 || (*(_BYTE *)(a2 + 289) & 3) == 0 )
  {
    v11 = (*(unsigned __int8 *)(a2 + 44) >> 5) & 2;
    goto LABEL_42;
  }
  v11 = 3;
  v111 = EvaluateArrangeState(a2);
  memset(v119, 0, sizeof(v119));
  v12 = *(_DWORD *)(a2 + 112);
  v13 = *(_DWORD *)(a2 + 120) - v12;
  *(_QWORD *)v119 = a2;
  v14 = v12 + v13 / 2;
  if ( v111 != 3 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v44, v43, v45, v46) & 0xF) != 0 )
        goto LABEL_24;
    }
    else if ( !IsDPIDWMSysMet(v44)
           || (W32GetCurrentThreadDpiAwarenessContext(v59, v58, v60, v61) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v62, v63, v64) + 408)
             ? (v68 = 0)
             : (v68 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v65,
                                                            v66,
                                                            v67)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v68) )
    {
LABEL_24:
      if ( IsDPIDWMSysMet(6uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v48, v47, v49, v50) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v51, v52, v53) + 408)
          ? (v57 = 0)
          : (v57 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v54,
                                                         v55,
                                                         v56)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v57) )
      {
        v69 = (_WORD *)(gpsi + 2680LL);
      }
      else
      {
        v69 = (_WORD *)(gpsi + 1904LL);
      }
      goto LABEL_39;
    }
    v69 = (_WORD *)(gpsi + 2292LL);
LABEL_39:
    v42 = *v69 + *(_WORD *)(a2 + 116) + 1;
    goto LABEL_40;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(4uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v16, v15, v17, v18) & 0xF) != 0 )
      goto LABEL_6;
  }
  else if ( !IsDPIDWMSysMet(v16)
         || (W32GetCurrentThreadDpiAwarenessContext(v31, v30, v32, v33) & 0xF) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v35, v36) + 408)
           ? (v40 = 0)
           : (v40 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v37,
                                                          v38,
                                                          v39)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v40) )
  {
LABEL_6:
    if ( IsDPIDWMSysMet(4uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v20, v19, v21, v22) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25) + 408)
        ? (v29 = 0)
        : (v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v26,
                                                       v27,
                                                       v28)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v29) )
    {
      v41 = (_WORD *)(gpsi + 2672LL);
    }
    else
    {
      v41 = (_WORD *)(gpsi + 1896LL);
    }
    goto LABEL_21;
  }
  v41 = (_WORD *)(gpsi + 2284LL);
LABEL_21:
  v42 = *v41 + *(_WORD *)(a2 + 116) - 1;
LABEL_40:
  v119[45] = v119[45] & 0xFFFC7FFF | 0x30000;
  xxxInitializeMoveSizeData(a2, v119, 9LL, v14 | (v42 << 16), 11);
LABEL_42:
  Prop = GetProp(a2, (unsigned __int16)atomCheckpointProp, 1LL);
  v71 = Prop;
  if ( Prop )
  {
    if ( a5 )
    {
      *(_DWORD *)(Prop + 32) &= ~8u;
      OldMonitor = FindOldMonitor(a5, a3, *(unsigned int *)(a2 + 352));
      if ( OldMonitor != -1 )
      {
        if ( v11 == 3 )
        {
          v73 = 112LL * OldMonitor;
          NewMonitor = *(struct tagMONITOR **)((char *)a3 + v73 + 112);
          if ( !NewMonitor || !(unsigned int)IsValidMonitor(*(_QWORD *)((char *)a3 + v73 + 112)) )
          {
            NewMonitor = FindNewMonitor(
                           (struct tagRECT *)((char *)a3 + v73 + 8),
                           (struct tagRECT *)((char *)a3 + v73 + 24));
            if ( !NewMonitor )
              NewMonitor = *(struct tagMONITOR **)(GetDispInfo(v75) + 88);
          }
          v76 = *(_OWORD *)((char *)a3 + v73 + 24);
          v77 = v117;
          if ( (a7 & 1) != 0 )
            LODWORD(v77) = v119[52];
          *(_OWORD *)&v117[7] = *(_OWORD *)((char *)a3 + v73 + 8);
          v113 = (int)v77;
          v78 = *(_OWORD *)((char *)a3 + v73 + 40);
          *(_OWORD *)&v117[19] = v76;
          v79 = *(_OWORD *)((char *)a3 + v73 + 56);
          *(_OWORD *)&v117[11] = v78;
          v80 = *(_OWORD *)((char *)a3 + v73 + 72);
          *(_OWORD *)&v117[23] = v79;
          v81 = *(_OWORD *)((char *)a3 + v73 + 88);
          *(_OWORD *)&v117[15] = v80;
          *(_OWORD *)&v117[27] = v81;
          if ( (unsigned int)MigrateRectMonitors(
                               a2,
                               (_DWORD)a5,
                               (_DWORD)v77,
                               (unsigned int)&v118,
                               (__int64)NewMonitor,
                               0LL,
                               (__int64)v119,
                               0) )
            *(_OWORD *)v71 = v118;
          if ( (*(_BYTE *)(a2 + 55) & 0x20) != 0
            && ((v82 = *(_DWORD *)(v71 + 32), (v83 = (v82 >> 5) & 1) != 0) || (v82 & 0x40) != 0) )
          {
            if ( v83 && (v82 & 0x40) != 0 )
            {
              v84 = 9;
            }
            else if ( (v82 & 0x40) != 0 )
            {
              v84 = 11;
            }
            else
            {
              v84 = 9;
              if ( v83 )
                v84 = 13;
            }
            v9 = a1;
            if ( (unsigned int)MigrateRectMonitors(
                                 a2,
                                 (int)v71 + 36,
                                 v113,
                                 (unsigned int)&v118,
                                 (__int64)NewMonitor,
                                 0LL,
                                 (__int64)v119,
                                 v84) )
              *(_OWORD *)(v71 + 36) = v118;
            else
              *(_DWORD *)(v71 + 32) &= 0xFFFFFF9F;
          }
          else
          {
            v9 = a1;
          }
        }
        else
        {
          NormalizeRect((struct tagWND *)a2, a5, (struct tagRECT *)v71, a3, OldMonitor, v11, 0);
        }
      }
    }
  }
  v85 = FindOldMonitor(a4, a3, *(unsigned int *)(a2 + 352));
  if ( v85 != -1 )
  {
    if ( v11 == 3 )
    {
      v86 = 112LL * v85;
      if ( !*(_QWORD *)((char *)a3 + v86 + 112) || !(unsigned int)IsValidMonitor(*((_QWORD *)a3 + 14 * v85 + 14)) )
      {
        v87 = FindNewMonitor((struct tagRECT *)((char *)a3 + v86 + 8), (struct tagRECT *)((char *)a3 + v86 + 24));
        if ( !v87 )
          v87 = *(struct tagMONITOR **)(GetDispInfo(v88) + 88);
      }
      v89 = v117;
      v90 = *(_OWORD *)((char *)a3 + v86 + 24);
      if ( (a7 & 1) != 0 )
        v89 = *(_DWORD **)&v119[52];
      *(_OWORD *)&v117[7] = *(_OWORD *)((char *)a3 + v86 + 8);
      *(_QWORD *)&v119[52] = v89;
      v91 = *(_OWORD *)((char *)a3 + v86 + 40);
      v92 = *(_DWORD *)(a2 + 352);
      *(_OWORD *)&v117[19] = v90;
      v93 = v92 & 0xF;
      v94 = *(_OWORD *)((char *)a3 + v86 + 56);
      *(_OWORD *)&v117[11] = v91;
      v95 = *(_OWORD *)((char *)a3 + v86 + 72);
      *(_OWORD *)&v117[23] = v94;
      v96 = *(_OWORD *)((char *)a3 + v86 + 88);
      *(_OWORD *)&v117[15] = v95;
      *(_OWORD *)&v117[27] = v96;
      if ( v93 == 2 )
      {
        v97 = &v117[7];
        v98 = (_QWORD *)((char *)v87 + 28);
        v99 = &v117[19];
        v100 = (_QWORD *)((char *)v87 + 76);
      }
      else if ( v93 == 1 )
      {
        v97 = &v117[15];
        v98 = (_QWORD *)((char *)v87 + 60);
        v99 = &v117[27];
        v100 = (_QWORD *)((char *)v87 + 108);
      }
      else
      {
        v97 = &v117[11];
        v98 = (_QWORD *)((char *)v87 + 44);
        v99 = &v117[23];
        v100 = (_QWORD *)((char *)v87 + 92);
      }
      v101 = *(_QWORD *)v97 == *v98
          && *((_QWORD *)v97 + 1) == v98[1]
          && *(_QWORD *)v99 == *v100
          && *((_QWORD *)v99 + 1) == v100[1];
      v115[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v115;
      v115[1] = v87;
      if ( v87 )
        ++*((_DWORD *)v87 + 2);
      if ( (unsigned int)xxxEvaluateDestRectForMonitorMigration(v111, (unsigned int)v119, a2, (_DWORD)v87, v101) )
      {
        a6 |= 0x100000u;
        v116 = *(struct tagRECT *)&v119[6];
      }
      else
      {
        v10 = 0;
      }
      ThreadUnlock1(v103, v102);
    }
    else
    {
      if ( (unsigned int)_ShouldMaximizeWindow((struct tagWND *)a2) )
        v11 = 1;
      v106 = NormalizeRect(v105, &v116, a4, a3, v104, v11, 0);
      if ( (*(_BYTE *)(a2 + 45) & 8) == 0 )
        return DeferWindowPos(v9, a2, 0LL, v116.left, v116.top, v116.right - v116.left, v116.bottom - v116.top, a6, 0);
      if ( (*(_DWORD *)(a2 + 352) & 0xF) == 0
        && (v107 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 408LL)) != 0
        && (*(_DWORD *)(*(_QWORD *)(v107 + 8) + 244LL) & 1) != 0 )
      {
        v108 = *((_QWORD *)v106 + 17);
      }
      else if ( (*(_DWORD *)(a2 + 352) & 0xF) == 1
             && (v109 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 408LL)) != 0
             && (*(_DWORD *)(*(_QWORD *)(v109 + 8) + 244LL) & 1) != 0 )
      {
        v108 = *((_QWORD *)v106 + 18);
      }
      else
      {
        v108 = *((_QWORD *)v106 + 16);
      }
      *(_QWORD *)(a2 + 200) = v108;
    }
    if ( v10 )
      return DeferWindowPos(v9, a2, 0LL, v116.left, v116.top, v116.right - v116.left, v116.bottom - v116.top, a6, 0);
  }
  return v9;
}
