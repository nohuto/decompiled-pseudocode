/*
 * XREFs of xxxMNCompute @ 0x1C0052F0C
 * Callers:
 *     xxxMenuBarCompute @ 0x1C004F804 (xxxMenuBarCompute.c)
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     xxxSendUAHInitMenuMessage @ 0x1C004FB68 (xxxSendUAHInitMenuMessage.c)
 *     GetDPIMETRICSForDpi @ 0x1C0053EE8 (GetDPIMETRICSForDpi.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0053F14 (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     MNGetpItemIndex @ 0x1C00557A0 (MNGetpItemIndex.c)
 *     MNIsOwnerDrawItem @ 0x1C0055E1C (MNIsOwnerDrawItem.c)
 *     MNIsUAHMenu @ 0x1C005E724 (MNIsUAHMenu.c)
 *     RealGetDpiSystemMetrics @ 0x1C0093138 (RealGetDpiSystemMetrics.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z @ 0x1C011F970 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z.c)
 *     GreSelectFontInternal @ 0x1C0293D18 (GreSelectFontInternal.c)
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
  __int64 v14; // rcx
  bool v15; // zf
  char *v16; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r9
  unsigned int v22; // r12d
  int v23; // eax
  unsigned int v24; // ebp
  __int64 v25; // rdi
  __int64 v26; // r8
  BOOL v27; // eax
  int v28; // eax
  int v29; // ecx
  unsigned int v30; // eax
  int v31; // esi
  unsigned int v32; // r13d
  unsigned int v33; // ecx
  unsigned int v34; // r12d
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // ecx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  int v45; // ecx
  __int64 v46; // rcx
  __int64 v47; // rcx
  unsigned int v49; // esi
  _WORD *v50; // rax
  __int64 DPIMETRICSForDpi; // rax
  unsigned int v52; // eax
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  int v57; // ecx
  __int64 v58; // rcx
  __int64 v59; // rcx
  _DWORD *v61; // rcx
  __int64 v62; // rcx
  int v63; // ecx
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rcx
  int v67; // ecx
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rcx
  int v72; // ecx
  __int64 v73; // rcx
  __int64 v74; // rcx
  int v75; // ecx
  _DWORD *v76; // rcx
  __int64 v77; // rcx
  int v78; // ecx
  __int64 v79; // rsi
  __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rcx
  int v83; // ecx
  __int64 v84; // rcx
  __int64 v85; // rcx
  int v86; // ecx
  _DWORD *v87; // rcx
  __int64 v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // rcx
  int v91; // ecx
  __int64 v92; // rcx
  __int64 v93; // rcx
  _DWORD *v95; // rcx
  _DWORD *v96; // rdx
  unsigned int v97; // r9d
  _DWORD *v98; // rdx
  unsigned int v99; // [rsp+40h] [rbp-88h]
  unsigned int v100; // [rsp+44h] [rbp-84h]
  unsigned int v101; // [rsp+48h] [rbp-80h]
  unsigned int v102; // [rsp+4Ch] [rbp-7Ch]
  unsigned int v103; // [rsp+50h] [rbp-78h]
  int v104; // [rsp+54h] [rbp-74h]
  int v105; // [rsp+58h] [rbp-70h]
  HDC DCEx; // [rsp+60h] [rbp-68h]
  struct tagPOINT v107; // [rsp+68h] [rbp-60h] BYREF
  __int64 v108; // [rsp+70h] [rbp-58h]
  __int64 v109; // [rsp+78h] [rbp-50h]
  unsigned int v110; // [rsp+D0h] [rbp+8h]
  unsigned int v112; // [rsp+E0h] [rbp+18h]

  v7 = 0;
  v101 = 0;
  v8 = a4;
  v100 = 0;
  v12 = 0;
  v108 = gptiCurrent;
  v13 = 96;
  if ( a3 )
  {
    if ( (*(_DWORD *)(a3 + 288) & 0x10000000) != 0 )
    {
      v13 = *(unsigned __int16 *)(a3 + 360);
      goto LABEL_9;
    }
    v15 = *(_DWORD *)(a3 + 344) == 0;
  }
  else
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) != 0 )
    {
LABEL_8:
      v13 = *(unsigned __int16 *)(gpsi + 7286LL);
      goto LABEL_9;
    }
    v15 = (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x4000) == 0;
  }
  if ( !v15 )
    goto LABEL_8;
LABEL_9:
  v16 = (char *)a1 + 72;
  v99 = v13;
  if ( a2 != *((_QWORD *)a1 + 9) )
    HMAssignmentLock(v16, a2);
  if ( a7 )
  {
    v100 = *a7;
    v8 = a4;
  }
  if ( !*((_DWORD *)a1 + 13) )
    return 0LL;
  v112 = *((_DWORD *)a1 + 10) & 1;
  if ( v112 )
  {
    v100 = 0;
  }
  else if ( a2 )
  {
    *((_DWORD *)a1 + 14) = a6;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x4000) != 0 )
  {
    v18 = 65539LL;
    v19 = a3;
  }
  else
  {
    v19 = 0LL;
    v18 = 3LL;
  }
  DCEx = (HDC)_GetDCEx(v19, 0LL, v18);
  GetDPIMETRICSForDpi(v13);
  v103 = 0;
  v110 = 0;
  v109 = GreSelectFontInternal(DCEx);
  if ( gihmodUserApiHook >= 0 )
    xxxSendUAHInitMenuMessage(a2, (__int64)a1);
  v105 = 0;
  v22 = 0;
  *((_DWORD *)a1 + 16) = 0;
  v104 = 0;
  v23 = *((_DWORD *)a1 + 13);
  v24 = a5;
  v102 = 0;
  if ( v23 )
    v25 = *((_QWORD *)a1 + 10);
  else
    v25 = 0LL;
  if ( !v23 )
    goto LABEL_226;
  v26 = v112;
  while ( v25 )
  {
    if ( (*(_DWORD *)v25 & 0x800) != 0
      && (!(unsigned int)MNIsOwnerDrawItem(a1, v25, v26, v21) || *(_WORD *)(v108 + 560) < 0x400u) )
    {
      *(_DWORD *)(v25 + 80) = 0;
      *(_DWORD *)(v25 + 84) = (int)RealGetDpiSystemMetrics(55LL, v13) / 2;
LABEL_46:
      v30 = v112;
      goto LABEL_47;
    }
    v27 = *(_QWORD *)(v25 + 104) && *(_QWORD *)(v25 + 40);
    v105 |= v27;
    v28 = xxxMNItemSize(a1, (struct tagWND *)a2, v13, DCEx, (struct tagITEM *)v25, v26, &v107);
    v29 = v104;
    if ( v28 )
      v29 = 1;
    v104 = v29;
    if ( (unsigned int)MNGetpItemIndex(a1, v25) == -1 )
      break;
    *(struct tagPOINT *)(v25 + 80) = v107;
    v30 = v112;
    if ( !v112 && (!*(_QWORD *)(v25 + 104) || *(_QWORD *)(v25 + 40)) )
    {
      if ( !(unsigned int)MNIsUAHMenu(a1) )
        *(_DWORD *)(v25 + 80) += 2 * *(_DWORD *)(GetDPIMETRICSForDpi(v13) + 48);
      goto LABEL_46;
    }
LABEL_47:
    v20 = v100;
    if ( v100 && *(_DWORD *)(v25 + 84) < v100 )
      *(_DWORD *)(v25 + 84) = v100;
    if ( !v22 )
    {
      v12 = *(_DWORD *)(v25 + 84);
      v101 = v12;
    }
    if ( v30 )
    {
      v31 = *(_DWORD *)v25 & 0x60;
      if ( !v31 && *((_DWORD *)a1 + 13) != v22 + 1 )
        goto LABEL_107;
      v32 = v22 + 1;
      v33 = v7;
      if ( *((_DWORD *)a1 + 13) == v22 + 1 && *(_DWORD *)(v25 + 80) > v7 )
        v33 = *(_DWORD *)(v25 + 80);
      v34 = xxxMNRecalcTabStrings(DCEx, a1, v110, (v31 == 0) + v22, v33, v24);
      if ( (unsigned int)MNGetpItemIndex(a1, v25) == -1 )
        break;
      if ( !v31 )
      {
LABEL_104:
        if ( *((_DWORD *)a1 + 13) == v32 )
          *((_DWORD *)a1 + 14) = v34;
        goto LABEL_106;
      }
      if ( v104 && (*(_BYTE *)(a2 + 45) & 2) == 0 )
      {
        if ( (unsigned int)IsDPIAbsoluteSysMet(5LL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x4000) != 0 )
          {
LABEL_65:
            if ( (unsigned int)IsDPIDWMSysMet(5LL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v38 = 0)
                : (v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                  v38) )
            {
              v20 = gpsi + 2676LL;
            }
            else
            {
              v20 = gpsi + 1900LL;
            }
LABEL_81:
            v24 = v34 + *(_DWORD *)v20;
LABEL_102:
            v49 = v102;
            v7 = *(_DWORD *)(v25 + 80);
            v8 = a4;
            v110 = v102;
            if ( *((_DWORD *)a1 + 13) == v32 )
            {
              v34 = xxxMNRecalcTabStrings(DCEx, a1, v102, v32, v7, v24);
              if ( (unsigned int)MNGetpItemIndex(a1, v25) == -1 )
                goto LABEL_133;
              goto LABEL_104;
            }
LABEL_106:
            v22 = v102;
LABEL_107:
            v13 = v99;
            v12 = v101;
            *(_DWORD *)(v25 + 76) = v8;
            v8 += *(_DWORD *)(v25 + 84);
            *(_DWORD *)(v25 + 72) = v24;
            if ( v103 < v8 )
              v103 = v8;
            goto LABEL_118;
          }
        }
        else
        {
          if ( !(unsigned int)IsDPIDWMSysMet(v35)
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 776) & 0x4000) != 0 )
          {
            goto LABEL_65;
          }
          if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1) )
          {
            goto LABEL_65;
          }
        }
        v20 = gpsi + 2288LL;
        goto LABEL_81;
      }
      if ( (unsigned int)IsDPIAbsoluteSysMet(45LL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v42) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v43) + 776) & 0x4000) != 0 )
        {
LABEL_85:
          if ( (unsigned int)IsDPIDWMSysMet(45LL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v45 = 0)
              : (v45 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                v45) )
          {
            v20 = gpsi + 2836LL;
          }
          else
          {
            v20 = gpsi + 2060LL;
          }
          goto LABEL_101;
        }
      }
      else
      {
        if ( !(unsigned int)IsDPIDWMSysMet(v42)
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v47) + 776) & 0x4000) != 0 )
        {
          goto LABEL_85;
        }
        if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1) )
        {
          goto LABEL_85;
        }
      }
      v20 = gpsi + 2448LL;
LABEL_101:
      v24 = v34 + 2 * *(_DWORD *)v20;
      goto LABEL_102;
    }
    v50 = *(_WORD **)(v25 + 40);
    if ( v50 && *v50 == 8 && !(unsigned int)MNIsUAHMenu(a1) )
    {
      v20 = *(unsigned int *)(GetDPIMETRICSForDpi(v13) + 48);
      *(_DWORD *)(v25 + 80) -= v20;
    }
    if ( (*(_DWORD *)v25 & 0x60) != 0
      || (DPIMETRICSForDpi = GetDPIMETRICSForDpi(v13),
          v20 = *((_DWORD *)a1 + 14) + a5,
          v24 + *(_DWORD *)(v25 + 80) + *(_DWORD *)(DPIMETRICSForDpi + 48) > (unsigned int)v20)
      && v22 )
    {
      v24 = a5;
      v8 += v12;
      v12 = *(_DWORD *)(v25 + 84);
      v101 = v12;
    }
    *(_DWORD *)(v25 + 72) = v24;
    v24 += *(_DWORD *)(v25 + 80);
    *(_DWORD *)(v25 + 76) = v8;
LABEL_118:
    v52 = *(_DWORD *)(v25 + 84);
    if ( v7 < *(_DWORD *)(v25 + 80) )
      v7 = *(_DWORD *)(v25 + 80);
    v26 = v112;
    if ( v12 != v52 )
    {
      if ( v12 < v52 )
        v12 = *(_DWORD *)(v25 + 84);
      v101 = v12;
      if ( v112 )
        goto LABEL_127;
      v100 = v12;
    }
    if ( !v112 )
      v103 = v8 + v12;
LABEL_127:
    v102 = ++v22;
    if ( v22 == -1 || v22 >= *((_DWORD *)a1 + 13) )
      v25 = 0LL;
    else
      v25 = *((_QWORD *)a1 + 10) + 152LL * v22;
    if ( v22 >= *((_DWORD *)a1 + 13) )
      break;
  }
  v49 = v110;
LABEL_133:
  if ( !v105 || v49 )
  {
LABEL_226:
    v49 = v110;
    *((_DWORD *)a1 + 16) = 0;
    goto LABEL_227;
  }
  v53 = *((_DWORD *)a1 + 10);
  if ( v53 >= 0 )
  {
    if ( (v53 & 0x4000000) != 0 )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v62) + 776) & 0x4000) != 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v63 = 0)
          : (v63 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            !v63 || *(_WORD *)(gpsi + 7286LL) == 96) )
      {
        v64 = gpsi + 4260LL;
      }
      else
      {
        v64 = gpsi + 5748LL;
      }
      v65 = *((unsigned int *)a1 + 16);
      if ( (unsigned int)v65 <= *(_DWORD *)(v64 + 1016) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v65) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v66) + 776) & 0x4000) != 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v67 = 0)
            : (v67 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              !v67 || *(_WORD *)(gpsi + 7286LL) == 96) )
        {
          v68 = gpsi + 4260LL;
        }
        else
        {
          v68 = gpsi + 5748LL;
        }
        LODWORD(v65) = *(_DWORD *)(v68 + 1016);
      }
      *((_DWORD *)a1 + 16) = v65;
      if ( (unsigned int)IsDPIAbsoluteSysMet(45LL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v69) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v70) + 776) & 0x4000) != 0 )
        {
          goto LABEL_180;
        }
      }
      else if ( !(unsigned int)IsDPIDWMSysMet(v69)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v73) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v74) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v75 = 0)
               : (v75 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                 !v75) )
      {
LABEL_180:
        if ( (unsigned int)IsDPIDWMSysMet(45LL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v71) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v72 = 0)
            : (v72 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              v72) )
        {
          v76 = (_DWORD *)(gpsi + 2836LL);
        }
        else
        {
          v76 = (_DWORD *)(gpsi + 2060LL);
        }
        goto LABEL_196;
      }
      v76 = (_DWORD *)(gpsi + 2448LL);
LABEL_196:
      *((_DWORD *)a1 + 16) += *v76;
      goto LABEL_227;
    }
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v77) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v78 = 0)
        : (v78 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          !v78 || *(_WORD *)(gpsi + 7286LL) == 96) )
    {
      v79 = gpsi + 4260LL;
    }
    else
    {
      v79 = gpsi + 5748LL;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(45LL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v80) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v81) + 776) & 0x4000) != 0 )
      {
        goto LABEL_209;
      }
    }
    else if ( !(unsigned int)IsDPIDWMSysMet(v80)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v84) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v85) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v86 = 0)
             : (v86 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v86) )
    {
LABEL_209:
      if ( (unsigned int)IsDPIDWMSysMet(45LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v82) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v83 = 0)
          : (v83 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v83) )
      {
        v87 = (_DWORD *)(gpsi + 2836LL);
      }
      else
      {
        v87 = (_DWORD *)(gpsi + 2060LL);
      }
      goto LABEL_225;
    }
    v87 = (_DWORD *)(gpsi + 2448LL);
LABEL_225:
    *((_DWORD *)a1 + 16) += *v87 + *(_DWORD *)(v79 + 1016);
    v49 = v110;
    goto LABEL_227;
  }
  if ( !(unsigned int)IsDPIAbsoluteSysMet(45LL) )
  {
    if ( !(unsigned int)IsDPIDWMSysMet(v54)
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v58) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v59) + 776) & 0x4000) != 0 )
    {
      goto LABEL_139;
    }
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                     + 260LL) & 1) )
    {
      goto LABEL_139;
    }
    goto LABEL_150;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v54) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v55) + 776) & 0x4000) == 0 )
  {
LABEL_150:
    v61 = (_DWORD *)(gpsi + 2448LL);
    goto LABEL_155;
  }
LABEL_139:
  if ( (unsigned int)IsDPIDWMSysMet(45LL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v56) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v57 = 0)
      : (v57 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v57) )
  {
    v61 = (_DWORD *)(gpsi + 2836LL);
  }
  else
  {
    v61 = (_DWORD *)(gpsi + 2060LL);
  }
LABEL_155:
  *((_DWORD *)a1 + 16) += *v61;
LABEL_227:
  if ( !*((_DWORD *)a1 + 16) )
    goto LABEL_248;
  if ( !(unsigned int)IsDPIAbsoluteSysMet(45LL) )
  {
    if ( !(unsigned int)IsDPIDWMSysMet(v88)
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v92) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v93) + 776) & 0x4000) != 0 )
    {
      goto LABEL_231;
    }
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                     + 260LL) & 1) )
    {
      goto LABEL_231;
    }
    goto LABEL_242;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v88) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v89) + 776) & 0x4000) == 0 )
  {
LABEL_242:
    v95 = (_DWORD *)(gpsi + 2448LL);
    goto LABEL_247;
  }
LABEL_231:
  if ( (unsigned int)IsDPIDWMSysMet(45LL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v90) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v91 = 0)
      : (v91 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v91) )
  {
    v95 = (_DWORD *)(gpsi + 2836LL);
  }
  else
  {
    v95 = (_DWORD *)(gpsi + 2060LL);
  }
LABEL_247:
  *((_DWORD *)a1 + 16) += *v95;
LABEL_248:
  if ( v49 )
  {
    if ( *((_DWORD *)a1 + 13) )
    {
      v96 = (_DWORD *)*((_QWORD *)a1 + 10);
      if ( (*v96 & 0x4000) != 0 )
      {
        v97 = 0;
        v98 = v96 + 18;
        do
        {
          ++v97;
          *v98 = *((_DWORD *)a1 + 14) - v98[2] - *v98;
          v98 += 38;
        }
        while ( v97 < *((_DWORD *)a1 + 13) );
      }
    }
  }
  GreSelectFontInternal(DCEx);
  _ReleaseDC(DCEx);
  *((_DWORD *)a1 + 15) = v103 - a4;
  if ( a7 )
    *a7 = v100;
  return *((unsigned int *)a1 + 15);
}
