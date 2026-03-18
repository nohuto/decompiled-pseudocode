/*
 * XREFs of ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01FF80C
 * Callers:
 *     xxxNextWindow @ 0x1C0201554 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C0201B8C (xxxOldNextWindow.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C006D900 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006D970 (BuildHwndList.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     _GetKeyState @ 0x1C00936A0 (_GetKeyState.c)
 *     ?NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z @ 0x1C020006C (-NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z.c)
 *     ?_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z @ 0x1C0200130 (-_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z.c)
 *     _GetNextQueueWindow @ 0x1C0201368 (_GetNextQueueWindow.c)
 */

struct tagWND *__fastcall InitSwitchWndInfo(struct tagSwitchWndInfo **a1, struct tagWND *a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v6; // rbx
  __int64 v7; // rsi
  _DWORD *v8; // r13
  struct tagBWL *v9; // rax
  struct tagBWL *v10; // r14
  int v11; // r15d
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  int v16; // edx
  __int64 PrevTaskIndex; // r9
  char *v18; // rdx
  int v19; // r14d
  int v20; // eax
  bool v21; // zf
  int v22; // r15d
  int v23; // r12d
  __int64 v24; // rcx
  int v25; // r8d
  int v26; // edx
  int v27; // r10d
  __int64 v28; // rcx
  _DWORD *v29; // r13
  int v30; // ecx
  unsigned __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rcx
  _DWORD *v38; // rbx
  __int64 v39; // rcx
  int v40; // ebx
  int v41; // r13d
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 DPIMetrics; // rax
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rcx
  __int64 v53; // rcx
  _DWORD *v54; // rbx
  __int64 v55; // rcx
  int v56; // r13d
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // rax
  int v60; // ebx
  int v61; // r12d
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // kr00_8
  __int64 v67; // rcx
  int v68; // r12d
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rcx
  __int64 v77; // rcx
  _DWORD *v78; // rbx
  int v79; // ecx
  int v80; // [rsp+20h] [rbp-58h]
  int v81; // [rsp+24h] [rbp-54h]
  _DWORD *v82; // [rsp+28h] [rbp-50h]
  HWND *v83; // [rsp+30h] [rbp-48h] BYREF
  int v85; // [rsp+90h] [rbp+18h]
  int v86; // [rsp+98h] [rbp+20h] BYREF

  v85 = a3;
  v3 = 0;
  v6 = 0LL;
  v7 = *(_QWORD *)(gptiCurrent + 416LL);
  v8 = *(_DWORD **)(GetDispInfo(a1, a2, a3) + 88);
  *a1 = 0LL;
  v9 = BuildHwndList(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 96LL), 2, 0LL);
  v10 = v9;
  if ( v9 )
  {
    v11 = _RemoveNonTaskWindows(v9, a2, &v86, &v83);
    if ( v11 < 2 )
    {
      if ( v11 != 1
        || (v12 = HMValidateHandleNoSecure(*((_QWORD *)v10 + 4), 1), (v6 = v12) != 0)
        && (*(_BYTE *)(v12 + 47) & 7) == 1
        && a2 == (struct tagWND *)v12 )
      {
        v6 = *(_QWORD *)(v7 + 160);
      }
LABEL_9:
      FreeHwndList(v10);
      if ( v6 )
        return (struct tagWND *)v6;
      goto LABEL_99;
    }
    v13 = Win32AllocPoolWithQuota(112LL, 1818325845LL);
    v14 = v13;
    if ( !v13 )
      goto LABEL_9;
    v16 = v86;
    *(_QWORD *)(v13 + 8) = gptiCurrent;
    *(_QWORD *)(v13 + 16) = v10;
    *(_QWORD *)(v13 + 24) = v83;
    *(_DWORD *)(v13 + 40) = v11;
    *(_DWORD *)(v13 + 44) = v11;
    PrevTaskIndex = (int)NextPrevTaskIndex((struct tagSwitchWndInfo *)v13, v16, 1, v85 == 0);
    v18 = (char *)v10 + 8 * PrevTaskIndex + 32;
    v19 = v11;
    *(_QWORD *)(v14 + 32) = v18;
    if ( gnFastAltTabColumns < v11 )
      v19 = gnFastAltTabColumns;
    v20 = v11 / v19;
    v21 = v11 == v19 * (v11 / v19);
    v22 = v11 % v19;
    v23 = !v21 + v20;
    v24 = (unsigned int)gnFastAltTabRows;
    v80 = v23;
    if ( v23 <= gnFastAltTabRows )
    {
      *(_DWORD *)(v14 + 48) = 0;
    }
    else
    {
      v80 = gnFastAltTabRows;
      v23 = gnFastAltTabRows;
      *(_DWORD *)(v14 + 48) = 1;
      v22 = v19;
      *(_DWORD *)(v14 + 44) = v19 * v24;
    }
    *(_DWORD *)(v14 + 56) = v19;
    *(_DWORD *)(v14 + 60) = v23;
    if ( !v22 )
      v22 = v19;
    *(_DWORD *)(v14 + 64) = v22;
    if ( (int)PrevTaskIndex < v19 * v23 )
    {
      v27 = 0;
      v25 = (int)PrevTaskIndex / v19;
      v24 = (unsigned int)(v19 * ((int)PrevTaskIndex / v19));
      v26 = (int)PrevTaskIndex % v19;
    }
    else
    {
      v25 = (v23 >> 2) + 1;
      v26 = (v19 >> 2) + 1;
      v27 = PrevTaskIndex - v19 * v25 - v26;
    }
    *(_DWORD *)(v14 + 52) = v27;
    *(_DWORD *)(v14 + 72) = v25;
    *(_DWORD *)(v14 + 68) = v26;
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v28 = 0LL)
        : (v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          !(_DWORD)v28) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v30 = 0)
          : (v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v30) )
      {
        v29 = v8 + 15;
      }
      else
      {
        v29 = v8 + 7;
      }
    }
    else
    {
      v29 = v8 + 11;
    }
    v82 = v29;
    v81 = IsDPIAbsoluteSysMet(5uLL);
    if ( v81 )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x4000) != 0 )
      {
        goto LABEL_38;
      }
    }
    else if ( !IsDPIDWMSysMet(v31)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v34 = 0LL)
             : (v34 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !(_DWORD)v34) )
    {
LABEL_38:
      if ( IsDPIDWMSysMet(5uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v34 = 0LL)
          : (v34 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            (_DWORD)v34) )
      {
        v38 = (_DWORD *)(gpsi + 2676LL);
      }
      else
      {
        v38 = (_DWORD *)(gpsi + 1900LL);
      }
LABEL_54:
      v39 = (unsigned int)(*v38 * *(_DWORD *)GetDPIServerInfo(v34, v33, v35));
      v40 = 6 * v39;
      v41 = v29[2] - *v29;
      DPIMetrics = GetDPIMetrics(v39, v42, v43);
      v46 = (unsigned int)(43 * gnFastAltTabColumns);
      v47 = (unsigned int)(v46 + *(_DWORD *)(DPIMetrics + 72));
      if ( v41 < (int)v47 + v40 + 16 )
        goto LABEL_75;
      if ( v81 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v48) + 776) & 0x4000) != 0 )
        {
          goto LABEL_58;
        }
      }
      else if ( !IsDPIDWMSysMet(5uLL)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v52) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v53) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v50 = 0LL)
               : (v50 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !(_DWORD)v50) )
      {
LABEL_58:
        if ( IsDPIDWMSysMet(5uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v50) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v50 = 0LL)
            : (v50 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              (_DWORD)v50) )
        {
          v54 = (_DWORD *)(gpsi + 2676LL);
        }
        else
        {
          v54 = (_DWORD *)(gpsi + 1900LL);
        }
        goto LABEL_74;
      }
      v54 = (_DWORD *)(gpsi + 2288LL);
LABEL_74:
      v55 = (unsigned int)(*v54 * *(_DWORD *)GetDPIServerInfo(v50, v49, v51));
      v56 = 6 * v55;
      v59 = GetDPIMetrics(v55, v57, v58);
      v46 = (unsigned int)(43 * gnFastAltTabColumns);
      v47 = (unsigned int)(v46 + *(_DWORD *)(v59 + 72));
      v41 = v47 + v56 + 16;
LABEL_75:
      v60 = 2 * *(_DWORD *)(GetDPIMetrics(v46, v47, v45) + 76) + 32;
      v86 = 43 * v23;
      v61 = v82[3] - v82[1];
      v66 = *(int *)(GetDPIMetrics(v82, v62, v63) + 76);
      v64 = HIDWORD(v66);
      if ( v61 >= (int)(v86 + v60 + v66 / 2) )
      {
        LODWORD(v64) = v66 % 2;
        v67 = *(unsigned int *)(GetDPIMetrics(2LL, v64, v65) + 76);
        v68 = 2 * v67 + 32;
        v71 = GetDPIMetrics(v67, v69, v70);
        v61 = v86 + *(_DWORD *)(v71 + 76) / 2 + v68;
      }
      if ( v80 == 1 )
        v19 = v22;
      if ( v81 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(2LL) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v72) + 776) & 0x4000) != 0 )
        {
          goto LABEL_82;
        }
      }
      else if ( !IsDPIDWMSysMet(5uLL)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v76) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v77) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v74 = 0LL)
               : (v74 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !(_DWORD)v74) )
      {
LABEL_82:
        if ( IsDPIDWMSysMet(5uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v74) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v74 = 0LL)
            : (v74 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              (_DWORD)v74) )
        {
          v78 = (_DWORD *)(gpsi + 2676LL);
        }
        else
        {
          v78 = (_DWORD *)(gpsi + 1900LL);
        }
        goto LABEL_98;
      }
      v78 = (_DWORD *)(gpsi + 2288LL);
LABEL_98:
      v79 = *v78 * *(_DWORD *)GetDPIServerInfo(v74, v73, v75);
      *(_DWORD *)(v14 + 88) = 16;
      *(_DWORD *)(v14 + 76) = v41;
      *(_DWORD *)(v14 + 80) = v61;
      *(_DWORD *)(v14 + 84) = (v41 + -43 * v19 - 4 * v79) >> 1;
      *(_QWORD *)v14 = gpswiFirst;
      gpswiFirst = (struct tagSwitchWndInfo *)v14;
      *a1 = (struct tagSwitchWndInfo *)v14;
      return (struct tagWND *)HMValidateHandleNoSecure(**(_QWORD **)(v14 + 32), 1);
    }
    v38 = (_DWORD *)(gpsi + 2288LL);
    goto LABEL_54;
  }
LABEL_99:
  LOBYTE(v3) = (GetKeyState(0x10u) & 0x8000u) != 0LL;
  return (struct tagWND *)GetNextQueueWindow(a2, v3, 0LL);
}
