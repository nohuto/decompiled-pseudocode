/*
 * XREFs of xxxMNCompute @ 0x1C0015858
 * Callers:
 *     xxxMenuBarCompute @ 0x1C0013EA8 (xxxMenuBarCompute.c)
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxSendUAHInitMenuMessage @ 0x1C00141C0 (xxxSendUAHInitMenuMessage.c)
 *     GetDPIMETRICSForDpi @ 0x1C0015CB8 (GetDPIMETRICSForDpi.c)
 *     GreSelectFont @ 0x1C0018350 (GreSelectFont.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C006BFBC (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     MNIsOwnerDrawItem @ 0x1C006E6E0 (MNIsOwnerDrawItem.c)
 *     MNGetpItemIndex @ 0x1C006EE50 (MNGetpItemIndex.c)
 *     RealGetDpiSystemMetrics @ 0x1C006F5CC (RealGetDpiSystemMetrics.c)
 *     MNIsUAHMenu @ 0x1C00707A8 (MNIsUAHMenu.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z @ 0x1C0148FE4 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z.c)
 */

__int64 __fastcall xxxMNCompute(
        struct tagMENU *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        unsigned int *a7)
{
  signed int v7; // r15d
  unsigned int v8; // r14d
  unsigned int v12; // r13d
  unsigned int v13; // esi
  bool v14; // zf
  char *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 DPIMETRICSForDpi; // rax
  __int64 v19; // rcx
  __int64 v20; // r9
  unsigned int v21; // r12d
  int v22; // eax
  unsigned int v23; // ebp
  __int64 v24; // rdi
  __int64 v25; // r8
  BOOL v26; // eax
  int v27; // eax
  int v28; // ecx
  unsigned int v29; // eax
  _WORD *v30; // rax
  __int64 v31; // rax
  unsigned int v32; // eax
  unsigned int v33; // esi
  int v35; // esi
  unsigned int v36; // r13d
  unsigned int v37; // ecx
  unsigned int v38; // r12d
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  int v43; // ecx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  int v50; // ecx
  __int64 v51; // rcx
  __int64 v52; // rcx
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  int v58; // ecx
  __int64 v59; // rcx
  __int64 v60; // rcx
  _DWORD *v62; // rcx
  __int64 v63; // rcx
  int v64; // ecx
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rcx
  int v68; // ecx
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rcx
  int v73; // ecx
  __int64 v74; // rcx
  __int64 v75; // rcx
  int v76; // ecx
  _DWORD *v77; // rcx
  __int64 v78; // rcx
  int v79; // ecx
  __int64 v80; // rsi
  __int64 v81; // rcx
  __int64 v82; // rcx
  __int64 v83; // rcx
  int v84; // ecx
  __int64 v85; // rcx
  __int64 v86; // rcx
  int v87; // ecx
  _DWORD *v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // rcx
  __int64 v91; // rcx
  int v92; // ecx
  __int64 v93; // rcx
  __int64 v94; // rcx
  int v95; // ecx
  _DWORD *v96; // rcx
  _DWORD *v97; // rdx
  unsigned int v98; // r8d
  _DWORD *v99; // rdx
  unsigned int v100; // [rsp+40h] [rbp-88h]
  unsigned int v101; // [rsp+44h] [rbp-84h]
  unsigned int v102; // [rsp+48h] [rbp-80h]
  unsigned int v103; // [rsp+4Ch] [rbp-7Ch]
  unsigned int v104; // [rsp+50h] [rbp-78h]
  int v105; // [rsp+54h] [rbp-74h]
  int v106; // [rsp+58h] [rbp-70h]
  HDC DCEx; // [rsp+60h] [rbp-68h]
  struct tagPOINT v108; // [rsp+68h] [rbp-60h] BYREF
  __int64 v109; // [rsp+70h] [rbp-58h]
  __int64 v110; // [rsp+78h] [rbp-50h]
  unsigned int v111; // [rsp+D0h] [rbp+8h]
  unsigned int v113; // [rsp+E0h] [rbp+18h]

  v7 = 0;
  v102 = 0;
  v8 = a4;
  v101 = 0;
  v12 = 0;
  v109 = gptiCurrent;
  v13 = 96;
  if ( a3 )
  {
    if ( (*(_DWORD *)(a3 + 288) & 0x10000000) != 0 )
    {
      v13 = *(unsigned __int16 *)(a3 + 360);
      goto LABEL_5;
    }
    v14 = *(_DWORD *)(a3 + 344) == 0;
  }
  else
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) != 0 )
      goto LABEL_61;
    v14 = (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x4000) == 0;
  }
  if ( !v14 )
LABEL_61:
    v13 = *(unsigned __int16 *)(gpsi + 7286LL);
LABEL_5:
  v15 = (char *)a1 + 72;
  v100 = v13;
  if ( a2 != *((_QWORD *)a1 + 9) )
    HMAssignmentLock(v15, a2);
  if ( a7 )
  {
    v101 = *a7;
    v8 = a4;
  }
  if ( !*((_DWORD *)a1 + 13) )
    return 0LL;
  v113 = *((_DWORD *)a1 + 10) & 1;
  if ( v113 )
  {
    v101 = 0;
  }
  else if ( a2 )
  {
    *((_DWORD *)a1 + 14) = a6;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x4000) != 0 )
  {
    v17 = 65539LL;
    v16 = a3;
  }
  else
  {
    v16 = 0LL;
    v17 = 3LL;
  }
  DCEx = (HDC)_GetDCEx(v16, 0LL, v17);
  DPIMETRICSForDpi = GetDPIMETRICSForDpi(v13);
  v104 = 0;
  v111 = 0;
  v110 = GreSelectFont(DCEx, *(_QWORD *)(DPIMETRICSForDpi + 8));
  if ( gihmodUserApiHook >= 0 )
    xxxSendUAHInitMenuMessage(a2, (__int64)a1, (__int64)DCEx);
  v106 = 0;
  v21 = 0;
  *((_DWORD *)a1 + 16) = 0;
  v105 = 0;
  v22 = *((_DWORD *)a1 + 13);
  v23 = a5;
  v103 = 0;
  if ( v22 )
    v24 = *((_QWORD *)a1 + 10);
  else
    v24 = 0LL;
  if ( !v22 )
    goto LABEL_53;
  v25 = v113;
  while ( v24 )
  {
    if ( (*(_DWORD *)v24 & 0x800) != 0
      && (!(unsigned int)MNIsOwnerDrawItem(a1, v24, v25, v20) || *(_WORD *)(v109 + 552) < 0x400u) )
    {
      *(_DWORD *)(v24 + 80) = 0;
      *(_DWORD *)(v24 + 84) = (int)RealGetDpiSystemMetrics(55LL, v13) / 2;
LABEL_32:
      v29 = v113;
      goto LABEL_33;
    }
    v26 = *(_QWORD *)(v24 + 104) && *(_QWORD *)(v24 + 40);
    v106 |= v26;
    v27 = xxxMNItemSize(a1, (struct tagWND *)a2, v13, DCEx, (struct tagITEM *)v24, v25, &v108);
    v28 = v105;
    if ( v27 )
      v28 = 1;
    v105 = v28;
    if ( (unsigned int)MNGetpItemIndex(a1, v24) == -1 )
      break;
    *(struct tagPOINT *)(v24 + 80) = v108;
    v29 = v113;
    if ( !v113 && (!*(_QWORD *)(v24 + 104) || *(_QWORD *)(v24 + 40)) )
    {
      if ( !(unsigned int)MNIsUAHMenu(a1) )
        *(_DWORD *)(v24 + 80) += 2 * *(_DWORD *)(GetDPIMETRICSForDpi(v13) + 48);
      goto LABEL_32;
    }
LABEL_33:
    v19 = v101;
    if ( v101 && *(_DWORD *)(v24 + 84) < v101 )
      *(_DWORD *)(v24 + 84) = v101;
    if ( !v21 )
    {
      v12 = *(_DWORD *)(v24 + 84);
      v102 = v12;
    }
    if ( !v29 )
    {
      v30 = *(_WORD **)(v24 + 40);
      if ( v30 && *v30 == 8 && !(unsigned int)MNIsUAHMenu(a1) )
      {
        v19 = *(unsigned int *)(GetDPIMETRICSForDpi(v13) + 48);
        *(_DWORD *)(v24 + 80) -= v19;
      }
      if ( (*(_DWORD *)v24 & 0x60) != 0
        || (v31 = GetDPIMETRICSForDpi(v13),
            v19 = *((_DWORD *)a1 + 14) + a5,
            *(_DWORD *)(v24 + 80) + v23 + *(_DWORD *)(v31 + 48) > (unsigned int)v19)
        && v21 )
      {
        v23 = a5;
        v8 += v12;
        v12 = *(_DWORD *)(v24 + 84);
        v102 = v12;
      }
      *(_DWORD *)(v24 + 72) = v23;
      v23 += *(_DWORD *)(v24 + 80);
      *(_DWORD *)(v24 + 76) = v8;
      goto LABEL_42;
    }
    v35 = *(_DWORD *)v24 & 0x60;
    if ( v35 || *((_DWORD *)a1 + 13) == v21 + 1 )
    {
      v36 = v21 + 1;
      v37 = v7;
      if ( *((_DWORD *)a1 + 13) == v21 + 1 && *(_DWORD *)(v24 + 80) > v7 )
        v37 = *(_DWORD *)(v24 + 80);
      v38 = xxxMNRecalcTabStrings(DCEx, a1, v111, (v35 == 0) + v21, v37, v23);
      if ( (unsigned int)MNGetpItemIndex(a1, v24) == -1 )
        break;
      if ( !v35 )
      {
LABEL_72:
        if ( *((_DWORD *)a1 + 13) == v36 )
          *((_DWORD *)a1 + 14) = v38;
        goto LABEL_74;
      }
      if ( v105 && (*(_BYTE *)(a2 + 45) & 2) == 0 )
      {
        if ( (unsigned int)IsDPIAbsoluteSysMet(5LL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v41) + 776) & 0x4000) != 0 )
          {
LABEL_94:
            if ( (unsigned int)IsDPIDWMSysMet(5LL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v42) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                ? (v43 = 0)
                : (v43 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                   + 244LL) & 1),
                  v43) )
            {
              v19 = gpsi + 2676LL;
            }
            else
            {
              v19 = gpsi + 1900LL;
            }
LABEL_110:
            v23 = v38 + *(_DWORD *)v19;
LABEL_131:
            v33 = v103;
            v7 = *(_DWORD *)(v24 + 80);
            v8 = a4;
            v111 = v103;
            if ( *((_DWORD *)a1 + 13) == v36 )
            {
              v38 = xxxMNRecalcTabStrings(DCEx, a1, v103, v36, v7, v23);
              if ( (unsigned int)MNGetpItemIndex(a1, v24) == -1 )
                goto LABEL_52;
              goto LABEL_72;
            }
LABEL_74:
            v21 = v103;
            goto LABEL_64;
          }
        }
        else
        {
          if ( !(unsigned int)IsDPIDWMSysMet(v40)
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v45) + 776) & 0x4000) != 0 )
          {
            goto LABEL_94;
          }
          if ( !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
            || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1) )
          {
            goto LABEL_94;
          }
        }
        v19 = gpsi + 2288LL;
        goto LABEL_110;
      }
      if ( (unsigned int)IsDPIAbsoluteSysMet(45LL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v47) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v48) + 776) & 0x4000) != 0 )
        {
LABEL_114:
          if ( (unsigned int)IsDPIDWMSysMet(45LL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v49) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
              ? (v50 = 0)
              : (v50 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                 + 244LL) & 1),
                v50) )
          {
            v19 = gpsi + 2836LL;
          }
          else
          {
            v19 = gpsi + 2060LL;
          }
          goto LABEL_130;
        }
      }
      else
      {
        if ( !(unsigned int)IsDPIDWMSysMet(v47)
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v51) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v52) + 776) & 0x4000) != 0 )
        {
          goto LABEL_114;
        }
        if ( !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
          || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1) )
        {
          goto LABEL_114;
        }
      }
      v19 = gpsi + 2448LL;
LABEL_130:
      v23 = v38 + 2 * *(_DWORD *)v19;
      goto LABEL_131;
    }
LABEL_64:
    v13 = v100;
    v12 = v102;
    *(_DWORD *)(v24 + 76) = v8;
    v8 += *(_DWORD *)(v24 + 84);
    *(_DWORD *)(v24 + 72) = v23;
    if ( v104 < v8 )
      v104 = v8;
LABEL_42:
    v32 = *(_DWORD *)(v24 + 84);
    if ( v7 < *(_DWORD *)(v24 + 80) )
      v7 = *(_DWORD *)(v24 + 80);
    v25 = v113;
    if ( v12 != v32 )
    {
      if ( v12 < v32 )
        v12 = *(_DWORD *)(v24 + 84);
      v102 = v12;
      if ( v113 )
        goto LABEL_47;
      v101 = v12;
    }
    if ( !v113 )
      v104 = v8 + v12;
LABEL_47:
    v103 = ++v21;
    if ( v21 == -1 || v21 >= *((_DWORD *)a1 + 13) )
      v24 = 0LL;
    else
      v24 = *((_QWORD *)a1 + 10) + 152LL * v21;
    if ( v21 >= *((_DWORD *)a1 + 13) )
      break;
  }
  v33 = v111;
LABEL_52:
  if ( !v106 || v33 )
  {
LABEL_53:
    v33 = v111;
    *((_DWORD *)a1 + 16) = 0;
    goto LABEL_54;
  }
  v54 = *((_DWORD *)a1 + 10);
  if ( v54 >= 0 )
  {
    if ( (v54 & 0x4000000) != 0 )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v63) + 776) & 0x4000) != 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
          ? (v64 = 0)
          : (v64 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                             + 244LL) & 1),
            !v64 || *(_WORD *)(gpsi + 7286LL) == 96) )
      {
        v65 = gpsi + 4260LL;
      }
      else
      {
        v65 = gpsi + 5748LL;
      }
      v66 = *((unsigned int *)a1 + 16);
      if ( (unsigned int)v66 <= *(_DWORD *)(v65 + 1016) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v66) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v67) + 776) & 0x4000) != 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
            ? (v68 = 0)
            : (v68 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                               + 244LL) & 1),
              !v68 || *(_WORD *)(gpsi + 7286LL) == 96) )
        {
          v69 = gpsi + 4260LL;
        }
        else
        {
          v69 = gpsi + 5748LL;
        }
        LODWORD(v66) = *(_DWORD *)(v69 + 1016);
      }
      *((_DWORD *)a1 + 16) = v66;
      if ( (unsigned int)IsDPIAbsoluteSysMet(45LL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v70) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v71) + 776) & 0x4000) != 0 )
        {
          goto LABEL_188;
        }
      }
      else if ( !(unsigned int)IsDPIDWMSysMet(v70)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v74) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v75) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
               ? (v76 = 0)
               : (v76 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                  + 244LL) & 1),
                 !v76) )
      {
LABEL_188:
        if ( (unsigned int)IsDPIDWMSysMet(45LL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v72) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
            ? (v73 = 0)
            : (v73 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                               + 244LL) & 1),
              v73) )
        {
          v77 = (_DWORD *)(gpsi + 2836LL);
        }
        else
        {
          v77 = (_DWORD *)(gpsi + 2060LL);
        }
        goto LABEL_204;
      }
      v77 = (_DWORD *)(gpsi + 2448LL);
LABEL_204:
      *((_DWORD *)a1 + 16) += *v77;
      goto LABEL_54;
    }
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v78) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
        ? (v79 = 0)
        : (v79 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1),
          !v79 || *(_WORD *)(gpsi + 7286LL) == 96) )
    {
      v80 = gpsi + 4260LL;
    }
    else
    {
      v80 = gpsi + 5748LL;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(45LL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v81) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v82) + 776) & 0x4000) != 0 )
      {
        goto LABEL_217;
      }
    }
    else if ( !(unsigned int)IsDPIDWMSysMet(v81)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v85) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v86) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
             ? (v87 = 0)
             : (v87 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                + 244LL) & 1),
               !v87) )
    {
LABEL_217:
      if ( (unsigned int)IsDPIDWMSysMet(45LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v83) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
          ? (v84 = 0)
          : (v84 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                             + 244LL) & 1),
            v84) )
      {
        v88 = (_DWORD *)(gpsi + 2836LL);
      }
      else
      {
        v88 = (_DWORD *)(gpsi + 2060LL);
      }
      goto LABEL_233;
    }
    v88 = (_DWORD *)(gpsi + 2448LL);
LABEL_233:
    *((_DWORD *)a1 + 16) += *v88 + *(_DWORD *)(v80 + 1016);
    v33 = v111;
    goto LABEL_54;
  }
  if ( !(unsigned int)IsDPIAbsoluteSysMet(45LL) )
  {
    if ( !(unsigned int)IsDPIDWMSysMet(v55)
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v59) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v60) + 776) & 0x4000) != 0 )
    {
      goto LABEL_147;
    }
    if ( !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1) )
    {
      goto LABEL_147;
    }
    goto LABEL_158;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v55) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v56) + 776) & 0x4000) == 0 )
  {
LABEL_158:
    v62 = (_DWORD *)(gpsi + 2448LL);
    goto LABEL_163;
  }
LABEL_147:
  if ( (unsigned int)IsDPIDWMSysMet(45LL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v57) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
      ? (v58 = 0)
      : (v58 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1),
        v58) )
  {
    v62 = (_DWORD *)(gpsi + 2836LL);
  }
  else
  {
    v62 = (_DWORD *)(gpsi + 2060LL);
  }
LABEL_163:
  *((_DWORD *)a1 + 16) += *v62;
LABEL_54:
  if ( *((_DWORD *)a1 + 16) )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(45LL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v89) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v90) + 776) & 0x4000) != 0 )
      {
        goto LABEL_238;
      }
    }
    else if ( !(unsigned int)IsDPIDWMSysMet(v89)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v93) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v94) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
             ? (v95 = 0)
             : (v95 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                + 244LL) & 1),
               !v95) )
    {
LABEL_238:
      if ( (unsigned int)IsDPIDWMSysMet(45LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v91) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
          ? (v92 = 0)
          : (v92 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                             + 244LL) & 1),
            v92) )
      {
        v96 = (_DWORD *)(gpsi + 2836LL);
      }
      else
      {
        v96 = (_DWORD *)(gpsi + 2060LL);
      }
      goto LABEL_254;
    }
    v96 = (_DWORD *)(gpsi + 2448LL);
LABEL_254:
    *((_DWORD *)a1 + 16) += *v96;
  }
  if ( v33 )
  {
    if ( *((_DWORD *)a1 + 13) )
    {
      v97 = (_DWORD *)*((_QWORD *)a1 + 10);
      if ( (*v97 & 0x4000) != 0 )
      {
        v98 = 0;
        v99 = v97 + 18;
        do
        {
          ++v98;
          *v99 = *((_DWORD *)a1 + 14) - v99[2] - *v99;
          v99 += 38;
        }
        while ( v98 < *((_DWORD *)a1 + 13) );
      }
    }
  }
  GreSelectFont(DCEx, v110);
  _ReleaseDC(DCEx);
  *((_DWORD *)a1 + 15) = v104 - a4;
  if ( a7 )
    *a7 = v101;
  return *((unsigned int *)a1 + 15);
}
