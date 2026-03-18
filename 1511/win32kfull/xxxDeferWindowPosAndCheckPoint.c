/*
 * XREFs of xxxDeferWindowPosAndCheckPoint @ 0x1C0091108
 * Callers:
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C0090E2C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01D81F4 (xxxRestoreMonitorsAndWindowsRects.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     _DeferWindowPos @ 0x1C00750A4 (_DeferWindowPos.c)
 *     FindOldMonitor @ 0x1C00912EC (FindOldMonitor.c)
 *     ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00913BC (-NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     IsValidMonitor @ 0x1C0091744 (IsValidMonitor.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@0@Z @ 0x1C01D64EC (-FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@0@Z.c)
 *     EvaluateArrangeState @ 0x1C020B46C (EvaluateArrangeState.c)
 *     MigrateRectMonitors @ 0x1C020B510 (MigrateRectMonitors.c)
 *     xxxEvaluateDestRectForMonitorMigration @ 0x1C020CAEC (xxxEvaluateDestRectForMonitorMigration.c)
 *     xxxInitializeMoveSizeData @ 0x1C020CE20 (xxxInitializeMoveSizeData.c)
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
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // ecx
  _WORD *v27; // rcx
  unsigned __int16 v28; // cx
  unsigned __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // ecx
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // ecx
  _WORD *v36; // rcx
  __int64 v37; // r13
  struct tagMONITOR *NewMonitor; // r12
  _QWORD *v39; // rcx
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  unsigned int v45; // ecx
  int v46; // eax
  int v47; // ecx
  __int64 v48; // r14
  __int64 v49; // r9
  struct tagMONITOR *v50; // r9
  _QWORD *v51; // rax
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  int v54; // eax
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  char *v58; // rdx
  _QWORD *v59; // r8
  char *v60; // r10
  _QWORD *v61; // r11
  __int64 v62; // rcx
  __int64 v63; // rcx
  int v64; // edx
  __int64 v65; // rdx
  __int64 v66; // rcx
  int v67; // ecx
  __int64 v68; // r8
  _DWORD *v69; // r8
  int v70; // eax
  __int64 v71; // rax
  int v72; // [rsp+50h] [rbp-B0h]
  int v75; // [rsp+70h] [rbp-90h]
  _QWORD v76[3]; // [rsp+78h] [rbp-88h] BYREF
  struct tagRECT v77; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v78[74]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v79; // [rsp+2F0h] [rbp+1F0h] BYREF
  _QWORD v80[40]; // [rsp+300h] [rbp+200h] BYREF

  memset(v78, 0, 584);
  v72 = 0;
  v9 = 1;
  v77 = 0LL;
  if ( (dword_1C031B14C & 1) != 0 && (*(_BYTE *)(a2 + 289) & 3) != 0 )
  {
    v10 = 3;
    v72 = EvaluateArrangeState(a2);
    memset(v80, 0, sizeof(v80));
    v18 = *(_DWORD *)(a2 + 120) - *(_DWORD *)(a2 + 112);
    v80[0] = a2;
    v19 = *(_WORD *)(a2 + 112) + v18 / 2;
    if ( v72 == 3 )
    {
      if ( (unsigned int)IsDPIAbsoluteSysMet(4uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x4000) != 0 )
        {
          goto LABEL_20;
        }
      }
      else if ( !IsDPIDWMSysMet(v20)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v26 = 0)
               : (v26 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v26) )
      {
LABEL_20:
        if ( IsDPIDWMSysMet(4uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v23 = 0)
            : (v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
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
      HIDWORD(v80[22]) = HIDWORD(v80[22]) & 0xFFFC7FFF | 0x30000;
      xxxInitializeMoveSizeData(a2, v80, 9LL, v19 | (v28 << 16), 11);
      goto LABEL_4;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x4000) != 0 )
      {
        goto LABEL_40;
      }
    }
    else if ( !IsDPIDWMSysMet(v29)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v35 = 0)
             : (v35 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v35) )
    {
LABEL_40:
      if ( IsDPIDWMSysMet(6uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v32 = 0)
          : (v32 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
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
      NewMonitor = *(struct tagMONITOR **)(GetDispInfo() + 88);
  }
  v39 = v78;
  v40 = *(_OWORD *)((char *)a3 + v37 + 24);
  *(_OWORD *)((char *)&v78[3] + 4) = *(_OWORD *)((char *)a3 + v37 + 8);
  v41 = *(_OWORD *)((char *)a3 + v37 + 40);
  *(_OWORD *)((char *)&v78[9] + 4) = v40;
  v42 = *(_OWORD *)((char *)a3 + v37 + 56);
  *(_OWORD *)((char *)&v78[5] + 4) = v41;
  v43 = *(_OWORD *)((char *)a3 + v37 + 72);
  *(_OWORD *)((char *)&v78[11] + 4) = v42;
  v44 = *(_OWORD *)((char *)a3 + v37 + 88);
  v13 = a7;
  if ( (a7 & 1) != 0 )
    LODWORD(v39) = v80[26];
  v75 = (int)v39;
  *(_OWORD *)((char *)&v78[7] + 4) = v43;
  *(_OWORD *)((char *)&v78[13] + 4) = v44;
  if ( (unsigned int)MigrateRectMonitors(
                       a2,
                       (_DWORD)a5,
                       (_DWORD)v39,
                       (unsigned int)&v79,
                       (__int64)NewMonitor,
                       0LL,
                       (__int64)v80,
                       0) )
    *(_OWORD *)v12 = v79;
  if ( (*(_BYTE *)(a2 + 55) & 0x20) != 0 )
  {
    v45 = *(_DWORD *)(v12 + 32);
    v46 = (v45 >> 5) & 1;
    if ( v46 || (v45 & 0x40) != 0 )
    {
      if ( v46 && (v45 & 0x40) != 0 )
      {
        v47 = 9;
      }
      else if ( (v45 & 0x40) != 0 )
      {
        v47 = 11;
      }
      else
      {
        v47 = 9;
        if ( v46 )
          v47 = 13;
      }
      v13 = a7;
      if ( (unsigned int)MigrateRectMonitors(
                           a2,
                           (int)v12 + 36,
                           v75,
                           (unsigned int)&v79,
                           (__int64)NewMonitor,
                           0LL,
                           (__int64)v80,
                           v47) )
        *(_OWORD *)(v12 + 36) = v79;
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
    v48 = 112LL * v14;
    v49 = *(_QWORD *)((char *)a3 + v48 + 112);
    if ( !v49 || !(unsigned int)IsValidMonitor(v49) )
    {
      v50 = FindNewMonitor((struct tagRECT *)((char *)a3 + v48 + 8), (struct tagRECT *)((char *)a3 + v48 + 24));
      if ( !v50 )
        v50 = *(struct tagMONITOR **)(GetDispInfo() + 88);
    }
    v51 = v78;
    v52 = *(_OWORD *)((char *)a3 + v48 + 24);
    if ( (v13 & 1) != 0 )
      v51 = (_QWORD *)v80[26];
    *(_OWORD *)((char *)&v78[3] + 4) = *(_OWORD *)((char *)a3 + v48 + 8);
    v80[26] = v51;
    v53 = *(_OWORD *)((char *)a3 + v48 + 40);
    v54 = *(_DWORD *)(a2 + 344);
    *(_OWORD *)((char *)&v78[9] + 4) = v52;
    v55 = *(_OWORD *)((char *)a3 + v48 + 56);
    *(_OWORD *)((char *)&v78[5] + 4) = v53;
    v56 = *(_OWORD *)((char *)a3 + v48 + 72);
    *(_OWORD *)((char *)&v78[11] + 4) = v55;
    v57 = *(_OWORD *)((char *)a3 + v48 + 88);
    *(_OWORD *)((char *)&v78[7] + 4) = v56;
    *(_OWORD *)((char *)&v78[13] + 4) = v57;
    if ( v54 == 2 )
    {
      v58 = (char *)&v78[3] + 4;
      v59 = (_QWORD *)((char *)v50 + 28);
      v60 = (char *)&v78[9] + 4;
      v61 = (_QWORD *)((char *)v50 + 76);
    }
    else if ( v54 == 1 )
    {
      v58 = (char *)&v78[7] + 4;
      v59 = (_QWORD *)((char *)v50 + 60);
      v60 = (char *)&v78[13] + 4;
      v61 = (_QWORD *)((char *)v50 + 108);
    }
    else
    {
      v58 = (char *)&v78[5] + 4;
      v59 = (_QWORD *)((char *)v50 + 44);
      v60 = (char *)&v78[11] + 4;
      v61 = (_QWORD *)((char *)v50 + 92);
    }
    v62 = *(_QWORD *)v58 - *v59;
    if ( *(_QWORD *)v58 == *v59 )
      v62 = *((_QWORD *)v58 + 1) - v59[1];
    if ( v62 )
      goto LABEL_97;
    v63 = *(_QWORD *)v60 - *v61;
    if ( *(_QWORD *)v60 == *v61 )
      v63 = *((_QWORD *)v60 + 1) - v61[1];
    if ( v63 )
LABEL_97:
      v64 = 0;
    else
      v64 = 1;
    v76[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v76;
    v76[1] = v50;
    if ( v50 )
      ++*((_DWORD *)v50 + 2);
    if ( (unsigned int)xxxEvaluateDestRectForMonitorMigration(v72, (unsigned int)v80, a2, (_DWORD)v50, v64) )
    {
      a6 |= 0x100000u;
      v77 = *(struct tagRECT *)&v80[3];
    }
    else
    {
      v9 = 0;
    }
    ThreadUnlock1(v66, v65);
  }
  else
  {
    if ( (*(_BYTE *)(a2 + 55) & 1) != 0 )
    {
      v67 = *(_DWORD *)(a2 + 344);
      if ( (unsigned int)(v67 + 1) <= 1 )
        v68 = (__int64)a3 + 56;
      else
        v68 = v67 == 1 ? (__int64)a3 + 88 : (__int64)a3 + 24;
      v69 = (_DWORD *)(112LL * v14 + v68);
      if ( a4->right - a4->left >= v69[2] - *v69 && a4->bottom - a4->top >= v69[3] - v69[1] )
        v10 = 1;
    }
    v16 = NormalizeRect((struct tagWND *)a2, &v77, a4, a3, v14, v10, 0);
    if ( (*(_BYTE *)(a2 + 45) & 8) == 0 )
      return DeferWindowPos(a1, a2, 0LL, v77.left, v77.top, v77.right - v77.left, v77.bottom - v77.top, a6, 0);
    v70 = *(_DWORD *)(a2 + 344);
    if ( v70 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0 )
    {
      if ( v70 == 1 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 408LL) + 8LL) + 244LL) & 1) != 0 )
        v71 = *((_QWORD *)v16 + 18);
      else
        v71 = *((_QWORD *)v16 + 16);
    }
    else
    {
      v71 = *((_QWORD *)v16 + 17);
    }
    *(_QWORD *)(a2 + 200) = v71;
  }
  if ( !v9 )
    return a1;
  return DeferWindowPos(a1, a2, 0LL, v77.left, v77.top, v77.right - v77.left, v77.bottom - v77.top, a6, 0);
}
