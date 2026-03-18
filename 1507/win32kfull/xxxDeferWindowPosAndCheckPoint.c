/*
 * XREFs of xxxDeferWindowPosAndCheckPoint @ 0x1C0045A88
 * Callers:
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C0045678 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01D6784 (xxxRestoreMonitorsAndWindowsRects.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C004444C (-NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     IsValidMonitor @ 0x1C00447E8 (IsValidMonitor.c)
 *     FindOldMonitor @ 0x1C0045C6C (FindOldMonitor.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     _DeferWindowPos @ 0x1C00851D8 (_DeferWindowPos.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@0@Z @ 0x1C01D4960 (-FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@0@Z.c)
 *     EvaluateArrangeState @ 0x1C020AF20 (EvaluateArrangeState.c)
 *     MigrateRectMonitors @ 0x1C020AF84 (MigrateRectMonitors.c)
 *     xxxEvaluateDestRectForMonitorMigration @ 0x1C020C370 (xxxEvaluateDestRectForMonitorMigration.c)
 *     xxxInitializeMoveSizeData @ 0x1C020C6A4 (xxxInitializeMoveSizeData.c)
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
  int v9; // edi
  int v10; // r15d
  __int64 Prop; // rax
  __int64 v12; // r14
  char v13; // r13
  int v14; // eax
  struct tagMONITOR *v16; // r8
  int OldMonitor; // eax
  int v18; // eax
  unsigned __int16 v19; // r13
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // ecx
  _WORD *v27; // rcx
  unsigned __int16 v28; // cx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // ecx
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // ecx
  _WORD *v36; // rcx
  __int64 v37; // r13
  struct tagMONITOR *NewMonitor; // r12
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  _QWORD *v42; // rcx
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  unsigned int v48; // ecx
  int v49; // eax
  int v50; // ecx
  __int64 v51; // r14
  __int64 v52; // r9
  struct tagMONITOR *v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  _QWORD *v57; // rax
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  int v60; // eax
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  char *v64; // rdx
  _QWORD *v65; // r8
  char *v66; // r10
  _QWORD *v67; // r11
  __int64 v68; // rcx
  __int64 v69; // rcx
  int v70; // edx
  __int64 v71; // rdx
  __int64 v72; // rcx
  int v73; // ecx
  __int64 v74; // r8
  _DWORD *v75; // r8
  int v76; // eax
  __int64 v77; // rax
  int v78; // [rsp+50h] [rbp-B0h]
  int v81; // [rsp+70h] [rbp-90h]
  _QWORD v82[3]; // [rsp+78h] [rbp-88h] BYREF
  struct tagRECT v83; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v84[74]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v85; // [rsp+2F0h] [rbp+1F0h] BYREF
  _QWORD v86[40]; // [rsp+300h] [rbp+200h] BYREF

  memset(v84, 0, 584);
  v78 = 0;
  v9 = 1;
  v83 = 0LL;
  if ( (dword_1C031B11C & 1) != 0 && (*(_BYTE *)(a2 + 289) & 3) != 0 )
  {
    v10 = 3;
    v78 = EvaluateArrangeState(a2);
    memset(v86, 0, sizeof(v86));
    v18 = *(_DWORD *)(a2 + 120) - *(_DWORD *)(a2 + 112);
    v86[0] = a2;
    v19 = *(_WORD *)(a2 + 112) + v18 / 2;
    if ( v78 == 3 )
    {
      if ( (unsigned int)IsDPIAbsoluteSysMet(4LL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x4000) != 0 )
        {
          goto LABEL_20;
        }
      }
      else if ( !(unsigned int)IsDPIDWMSysMet(v20)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v26 = 0)
               : (v26 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                 !v26) )
      {
LABEL_20:
        if ( (unsigned int)IsDPIDWMSysMet(4LL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v23 = 0)
            : (v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              v23) )
        {
          v27 = (_WORD *)(gpsi + 2672LL);
        }
        else
        {
          v27 = (_WORD *)(gpsi + 1896LL);
        }
        goto LABEL_36;
      }
      v27 = (_WORD *)(gpsi + 2284LL);
LABEL_36:
      v28 = *v27 + *(_WORD *)(a2 + 116) - 1;
LABEL_57:
      HIDWORD(v86[22]) = HIDWORD(v86[22]) & 0xFFFC7FFF | 0x30000;
      xxxInitializeMoveSizeData(a2, v86, 9LL, v19 | (v28 << 16), 11);
      goto LABEL_4;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(6LL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x4000) != 0 )
      {
        goto LABEL_40;
      }
    }
    else if ( !(unsigned int)IsDPIDWMSysMet(v29)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v35 = 0)
             : (v35 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v35) )
    {
LABEL_40:
      if ( (unsigned int)IsDPIDWMSysMet(6LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v32 = 0)
          : (v32 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v32) )
      {
        v36 = (_WORD *)(gpsi + 2680LL);
      }
      else
      {
        v36 = (_WORD *)(gpsi + 1904LL);
      }
      goto LABEL_56;
    }
    v36 = (_WORD *)(gpsi + 2292LL);
LABEL_56:
    v28 = *v36 + *(_WORD *)(a2 + 116) + 1;
    goto LABEL_57;
  }
  v10 = (*(unsigned __int8 *)(a2 + 44) >> 5) & 2;
LABEL_4:
  Prop = GetProp(a2, (unsigned __int16)atomCheckpointProp, 1LL);
  v12 = Prop;
  if ( !Prop )
    goto LABEL_5;
  if ( !a5 )
    goto LABEL_5;
  *(_DWORD *)(Prop + 32) &= ~8u;
  OldMonitor = FindOldMonitor(a5, a3, *(unsigned int *)(a2 + 344));
  if ( OldMonitor == -1 )
    goto LABEL_5;
  if ( v10 != 3 )
  {
    NormalizeRect((struct tagWND *)a2, a5, (struct tagRECT *)v12, a3, OldMonitor, v10, 0);
LABEL_5:
    v13 = a7;
    goto LABEL_6;
  }
  v37 = 112LL * OldMonitor;
  NewMonitor = *(struct tagMONITOR **)((char *)a3 + v37 + 112);
  if ( !NewMonitor || !(unsigned int)IsValidMonitor(*(_QWORD *)((char *)a3 + v37 + 112)) )
  {
    NewMonitor = FindNewMonitor((struct tagRECT *)((char *)a3 + v37 + 8), (struct tagRECT *)((char *)a3 + v37 + 24));
    if ( !NewMonitor )
      NewMonitor = *(struct tagMONITOR **)(GetDispInfo(v40, v39, v41) + 88);
  }
  v42 = v84;
  v43 = *(_OWORD *)((char *)a3 + v37 + 24);
  *(_OWORD *)((char *)&v84[3] + 4) = *(_OWORD *)((char *)a3 + v37 + 8);
  v44 = *(_OWORD *)((char *)a3 + v37 + 40);
  *(_OWORD *)((char *)&v84[9] + 4) = v43;
  v45 = *(_OWORD *)((char *)a3 + v37 + 56);
  *(_OWORD *)((char *)&v84[5] + 4) = v44;
  v46 = *(_OWORD *)((char *)a3 + v37 + 72);
  *(_OWORD *)((char *)&v84[11] + 4) = v45;
  v47 = *(_OWORD *)((char *)a3 + v37 + 88);
  v13 = a7;
  if ( (a7 & 1) != 0 )
    LODWORD(v42) = v86[26];
  v81 = (int)v42;
  *(_OWORD *)((char *)&v84[7] + 4) = v46;
  *(_OWORD *)((char *)&v84[13] + 4) = v47;
  if ( (unsigned int)MigrateRectMonitors(
                       a2,
                       (_DWORD)a5,
                       (_DWORD)v42,
                       (unsigned int)&v85,
                       (__int64)NewMonitor,
                       0LL,
                       (__int64)v86,
                       0) )
    *(_OWORD *)v12 = v85;
  if ( (*(_BYTE *)(a2 + 55) & 0x20) != 0 )
  {
    v48 = *(_DWORD *)(v12 + 32);
    v49 = (v48 >> 5) & 1;
    if ( v49 || (v48 & 0x40) != 0 )
    {
      if ( v49 && (v48 & 0x40) != 0 )
      {
        v50 = 9;
      }
      else if ( (v48 & 0x40) != 0 )
      {
        v50 = 11;
      }
      else
      {
        v50 = 9;
        if ( v49 )
          v50 = 13;
      }
      v13 = a7;
      if ( (unsigned int)MigrateRectMonitors(
                           a2,
                           (int)v12 + 36,
                           v81,
                           (unsigned int)&v85,
                           (__int64)NewMonitor,
                           0LL,
                           (__int64)v86,
                           v50) )
        *(_OWORD *)(v12 + 36) = v85;
      else
        *(_DWORD *)(v12 + 32) &= 0xFFFFFF9F;
    }
  }
LABEL_6:
  v14 = FindOldMonitor(a4, a3, *(unsigned int *)(a2 + 344));
  if ( v14 == -1 )
    return a1;
  if ( v10 == 3 )
  {
    v51 = 112LL * v14;
    v52 = *(_QWORD *)((char *)a3 + v51 + 112);
    if ( !v52 || !(unsigned int)IsValidMonitor(v52) )
    {
      v53 = FindNewMonitor((struct tagRECT *)((char *)a3 + v51 + 8), (struct tagRECT *)((char *)a3 + v51 + 24));
      if ( !v53 )
        v53 = *(struct tagMONITOR **)(GetDispInfo(v55, v54, v56) + 88);
    }
    v57 = v84;
    v58 = *(_OWORD *)((char *)a3 + v51 + 24);
    if ( (v13 & 1) != 0 )
      v57 = (_QWORD *)v86[26];
    *(_OWORD *)((char *)&v84[3] + 4) = *(_OWORD *)((char *)a3 + v51 + 8);
    v86[26] = v57;
    v59 = *(_OWORD *)((char *)a3 + v51 + 40);
    v60 = *(_DWORD *)(a2 + 344);
    *(_OWORD *)((char *)&v84[9] + 4) = v58;
    v61 = *(_OWORD *)((char *)a3 + v51 + 56);
    *(_OWORD *)((char *)&v84[5] + 4) = v59;
    v62 = *(_OWORD *)((char *)a3 + v51 + 72);
    *(_OWORD *)((char *)&v84[11] + 4) = v61;
    v63 = *(_OWORD *)((char *)a3 + v51 + 88);
    *(_OWORD *)((char *)&v84[7] + 4) = v62;
    *(_OWORD *)((char *)&v84[13] + 4) = v63;
    if ( v60 == 2 )
    {
      v64 = (char *)&v84[3] + 4;
      v65 = (_QWORD *)((char *)v53 + 28);
      v66 = (char *)&v84[9] + 4;
      v67 = (_QWORD *)((char *)v53 + 76);
    }
    else if ( v60 == 1 )
    {
      v64 = (char *)&v84[7] + 4;
      v65 = (_QWORD *)((char *)v53 + 60);
      v66 = (char *)&v84[13] + 4;
      v67 = (_QWORD *)((char *)v53 + 108);
    }
    else
    {
      v64 = (char *)&v84[5] + 4;
      v65 = (_QWORD *)((char *)v53 + 44);
      v66 = (char *)&v84[11] + 4;
      v67 = (_QWORD *)((char *)v53 + 92);
    }
    v68 = *(_QWORD *)v64 - *v65;
    if ( *(_QWORD *)v64 == *v65 )
      v68 = *((_QWORD *)v64 + 1) - v65[1];
    if ( v68 )
      goto LABEL_97;
    v69 = *(_QWORD *)v66 - *v67;
    if ( *(_QWORD *)v66 == *v67 )
      v69 = *((_QWORD *)v66 + 1) - v67[1];
    if ( v69 )
LABEL_97:
      v70 = 0;
    else
      v70 = 1;
    v82[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v82;
    v82[1] = v53;
    if ( v53 )
      ++*((_DWORD *)v53 + 2);
    if ( (unsigned int)xxxEvaluateDestRectForMonitorMigration(v78, (unsigned int)v86, a2, (_DWORD)v53, v70) )
    {
      a6 |= 0x100000u;
      v83 = *(struct tagRECT *)&v86[3];
    }
    else
    {
      v9 = 0;
    }
    ThreadUnlock1(v72, v71);
  }
  else
  {
    if ( (*(_BYTE *)(a2 + 55) & 1) != 0 )
    {
      v73 = *(_DWORD *)(a2 + 344);
      if ( (unsigned int)(v73 + 1) <= 1 )
        v74 = (__int64)a3 + 56;
      else
        v74 = v73 == 1 ? (__int64)a3 + 88 : (__int64)a3 + 24;
      v75 = (_DWORD *)(112LL * v14 + v74);
      if ( a4->right - a4->left >= v75[2] - *v75 && a4->bottom - a4->top >= v75[3] - v75[1] )
        v10 = 1;
    }
    v16 = NormalizeRect((struct tagWND *)a2, &v83, a4, a3, v14, v10, 0);
    if ( (*(_BYTE *)(a2 + 45) & 8) == 0 )
      return DeferWindowPos(a1, a2, 0, v83.left, v83.top, v83.right - v83.left, v83.bottom - v83.top, a6, 0);
    v76 = *(_DWORD *)(a2 + 344);
    if ( v76 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
    {
      if ( v76 == 1 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 416LL) + 8LL) + 260LL) & 1) != 0 )
        v77 = *((_QWORD *)v16 + 18);
      else
        v77 = *((_QWORD *)v16 + 16);
    }
    else
    {
      v77 = *((_QWORD *)v16 + 17);
    }
    *(_QWORD *)(a2 + 200) = v77;
  }
  if ( !v9 )
    return a1;
  return DeferWindowPos(a1, a2, 0, v83.left, v83.top, v83.right - v83.left, v83.bottom - v83.top, a6, 0);
}
