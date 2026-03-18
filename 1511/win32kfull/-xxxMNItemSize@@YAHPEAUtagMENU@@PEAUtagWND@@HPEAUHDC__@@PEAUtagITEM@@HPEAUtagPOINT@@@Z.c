/*
 * XREFs of ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C006BFBC
 * Callers:
 *     xxxMNCompute @ 0x1C0015858 (xxxMNCompute.c)
 * Callees:
 *     GetDPIMETRICSForDpi @ 0x1C0015CB8 (GetDPIMETRICSForDpi.c)
 *     GreSelectFont @ 0x1C0018350 (GreSelectFont.c)
 *     GreExtGetObjectW @ 0x1C0042130 (GreExtGetObjectW.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     MNIsOwnerDrawItem @ 0x1C006E6E0 (MNIsOwnerDrawItem.c)
 *     MNGetpItemIndex @ 0x1C006EE50 (MNGetpItemIndex.c)
 *     RealGetDpiSystemMetrics @ 0x1C006F5CC (RealGetDpiSystemMetrics.c)
 *     MNIsUAHMenu @ 0x1C00707A8 (MNIsUAHMenu.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     ?xxxMNGetBitmapSize@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C00C6670 (-xxxMNGetBitmapSize@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z.c)
 *     GetDPIServerInfoForDpi @ 0x1C00C67B4 (GetDPIServerInfoForDpi.c)
 *     xxxPSMGetTextExtent @ 0x1C00CD07C (xxxPSMGetTextExtent.c)
 *     FindCharPosition @ 0x1C0249D18 (FindCharPosition.c)
 *     GreGetTextCharacterExtra @ 0x1C029225C (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C029229C (GreSetTextCharacterExtra.c)
 */

__int64 __fastcall xxxMNItemSize(
        struct tagMENU *a1,
        struct tagWND *a2,
        __int64 a3,
        HDC a4,
        struct tagITEM *a5,
        int a6,
        struct tagPOINT *a7)
{
  LONG DpiSystemMetrics; // r12d
  unsigned int v9; // r15d
  HDC v10; // rbx
  unsigned int v11; // r14d
  struct tagMENU *v13; // rbp
  __int64 v14; // rcx
  unsigned int v15; // r10d
  __int64 v17; // rdx
  int v18; // eax
  HBRUSH v19; // r9
  int v20; // eax
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // ecx
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // ecx
  _DWORD *v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  int v32; // ebp
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // ecx
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // ecx
  _DWORD *v39; // rdi
  char *DPIMETRICSForDpi; // rbx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v44; // ecx
  __int64 v45; // rcx
  __int64 v46; // rcx
  int v47; // ecx
  _DWORD *v48; // rdi
  char *v49; // rbx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  int v53; // ecx
  __int64 v54; // rcx
  __int64 v55; // rcx
  int v56; // ecx
  __int64 v57; // rcx
  int v58; // ecx
  __int64 v59; // rax
  __int64 v60; // rcx
  int v61; // edi
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rcx
  _DWORD *v66; // rbx
  __int64 v67; // rcx
  __int64 v68; // rcx
  int v69; // ecx
  __int64 v70; // rcx
  __int64 v71; // rcx
  int v72; // ecx
  _DWORD *v73; // rcx
  __int64 v74; // [rsp+38h] [rbp-60h]
  unsigned __int16 v75[2]; // [rsp+40h] [rbp-58h] BYREF
  int v76; // [rsp+44h] [rbp-54h]
  int v77; // [rsp+48h] [rbp-50h]
  unsigned int v80; // [rsp+C8h] [rbp+30h]

  DpiSystemMetrics = 0;
  v9 = 0;
  v10 = a4;
  v11 = a3;
  v13 = a1;
  if ( !a6 )
    DpiSystemMetrics = RealGetDpiSystemMetrics(55LL, (unsigned int)a3);
  v74 = 0LL;
  if ( (*((_DWORD *)a5 + 1) & 0x1000) != 0 )
  {
    v17 = *((_QWORD *)GetDPIMETRICSForDpi(v11) + 2);
    if ( v17 )
    {
      v74 = GreSelectFont((__int64)v10, v17);
    }
    else
    {
      GreGetTextCharacterExtra(v10);
      GetDPIMETRICSForDpi(v11);
      GetDPIServerInfoForDpi(v11);
      v10 = a4;
      GreSetTextCharacterExtra(a4);
    }
  }
  v15 = MNIsOwnerDrawItem(v13, a5, a3, a4);
  v80 = v15;
  if ( *((_QWORD *)a5 + 13) )
  {
    v18 = MNIsUAHMenu(v13);
    if ( !v18
      || (v14 = (unsigned int)v19, !(_DWORD)v19)
      || (unsigned int)v19 > 3 && (v14 = (unsigned int)((_DWORD)v19 - 5), (unsigned int)v14 > 6) )
    {
      if ( v19 != (HBRUSH)-1LL )
      {
        if ( *((_DWORD *)a5 + 28) != -1 )
        {
LABEL_57:
          v9 = *((_DWORD *)a5 + 28);
          v14 = v9;
          if ( *((_DWORD *)v13 + 16) > v9 )
            v14 = *((unsigned int *)v13 + 16);
          *((_DWORD *)v13 + 16) = v14;
          if ( a6 )
          {
            DpiSystemMetrics = *((_DWORD *)a5 + 29);
          }
          else if ( *((_DWORD *)a5 + 29) > DpiSystemMetrics )
          {
            DpiSystemMetrics = *((_DWORD *)a5 + 29);
          }
          goto LABEL_11;
        }
        if ( (*((_DWORD *)a5 + 1) & 0x20000000) != 0 )
        {
          *((_DWORD *)a5 + 28) = RealGetDpiSystemMetrics(54LL, v11);
          v20 = RealGetDpiSystemMetrics(55LL, v11);
          v21 = *((_QWORD *)a5 + 13) == 1LL;
          *((_DWORD *)a5 + 29) = v20;
          if ( !v21 )
          {
LABEL_56:
            v15 = v80;
            goto LABEL_57;
          }
          if ( (unsigned int)IsDPIAbsoluteSysMet(45LL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x4000) != 0 )
            {
              goto LABEL_32;
            }
          }
          else if ( !(unsigned int)IsDPIDWMSysMet(v22)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                   ? (v28 = 0)
                   : (v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                     !v28) )
          {
LABEL_32:
            if ( (unsigned int)IsDPIDWMSysMet(45LL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v25 = 0)
                : (v25 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  v25) )
            {
              v29 = (_DWORD *)(gpsi + 2836LL);
            }
            else
            {
              v29 = (_DWORD *)(gpsi + 2060LL);
            }
            goto LABEL_50;
          }
          v29 = (_DWORD *)(gpsi + 2448LL);
LABEL_50:
          *((_DWORD *)a5 + 28) += *v29;
          goto LABEL_56;
        }
        if ( !v18 )
        {
          if ( (unsigned int)GreExtGetObjectW(v19, 32LL, v75) )
          {
            *((_DWORD *)a5 + 28) = v76;
            v30 = v77;
          }
          else
          {
            *((_DWORD *)a5 + 28) = RealGetDpiSystemMetrics(54LL, v11);
            v30 = RealGetDpiSystemMetrics(55LL, v11);
          }
          *((_DWORD *)a5 + 29) = v30;
          goto LABEL_56;
        }
      }
      xxxMNGetBitmapSize(v13, a5, a2, v11, v10);
      if ( (unsigned int)MNGetpItemIndex(v13, a5) == -1 )
        goto LABEL_14;
      goto LABEL_56;
    }
  }
  if ( !v15 )
    goto LABEL_63;
  xxxMNGetBitmapSize(v13, a5, a2, v11, v10);
  if ( (unsigned int)MNGetpItemIndex(v13, a5) == -1 )
    goto LABEL_14;
  v9 = *((_DWORD *)a5 + 28);
  if ( a6 )
  {
    DpiSystemMetrics = *((_DWORD *)a5 + 29);
    v14 = *((unsigned int *)GetDPIMETRICSForDpi(v11) + 12);
    v9 += 2 * v14;
  }
  else if ( (unsigned int)MNIsUAHMenu(v13) )
  {
    DpiSystemMetrics = *((_DWORD *)a5 + 29);
  }
  v15 = v80;
LABEL_11:
  if ( !v15 )
  {
LABEL_63:
    if ( !*((_QWORD *)a5 + 5) )
      goto LABEL_128;
    if ( !a6 )
    {
LABEL_106:
      FindCharPosition(*((_QWORD *)a5 + 5), 9LL);
      xxxPSMGetTextExtent(v10, *((unsigned __int16 **)a5 + 5));
      if ( !v9 )
      {
        v9 = 0;
LABEL_128:
        if ( !a6 )
          goto LABEL_12;
        if ( (*((_DWORD *)v13 + 10) & 0x84000000) != 0x80000000 )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v57) + 776) & 0x4000) != 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v58 = 0)
              : (v58 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                !v58 || *(_WORD *)(gpsi + 7286LL) == 96) )
          {
            v59 = gpsi + 4260LL;
          }
          else
          {
            v59 = gpsi + 5748LL;
          }
          v9 += *(_DWORD *)(v59 + 1016);
        }
        v61 = IsDPIAbsoluteSysMet(45LL);
        if ( v61 )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v60) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v62) + 776) & 0x4000) != 0 )
          {
            goto LABEL_143;
          }
        }
        else if ( !(unsigned int)IsDPIDWMSysMet(v60)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v64) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v65) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                 ? (v63 = 0LL)
                 : (v63 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                   !(_DWORD)v63) )
        {
LABEL_143:
          if ( (unsigned int)IsDPIDWMSysMet(45LL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v63) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v63 = 0LL)
              : (v63 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                (_DWORD)v63) )
          {
            v66 = (_DWORD *)(gpsi + 2836LL);
          }
          else
          {
            v66 = (_DWORD *)(gpsi + 2060LL);
          }
LABEL_159:
          if ( v61 )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v63) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v67) + 776) & 0x4000) != 0 )
            {
              goto LABEL_162;
            }
          }
          else if ( !(unsigned int)IsDPIDWMSysMet(45LL)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v70) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v71) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                   ? (v72 = 0)
                   : (v72 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                     !v72) )
          {
LABEL_162:
            if ( (unsigned int)IsDPIDWMSysMet(45LL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v68) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v69 = 0)
                : (v69 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  v69) )
            {
              v73 = (_DWORD *)(gpsi + 2836LL);
            }
            else
            {
              v73 = (_DWORD *)(gpsi + 2060LL);
            }
            goto LABEL_178;
          }
          v73 = (_DWORD *)(gpsi + 2448LL);
LABEL_178:
          v9 += *v73 + *v66 + 2;
          DpiSystemMetrics += 2;
          goto LABEL_12;
        }
        v66 = (_DWORD *)(gpsi + 2448LL);
        goto LABEL_159;
      }
      if ( (unsigned int)IsDPIAbsoluteSysMet(45LL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v50) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v51) + 776) & 0x4000) != 0 )
        {
          goto LABEL_110;
        }
      }
      else if ( !(unsigned int)IsDPIDWMSysMet(v50)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v54) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v55) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v56 = 0)
               : (v56 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v56) )
      {
LABEL_110:
        if ( (unsigned int)IsDPIDWMSysMet(45LL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v52) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v53 = 0)
            : (v53 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v53) )
        {
          v14 = gpsi + 2836LL;
        }
        else
        {
          v14 = gpsi + 2060LL;
        }
        goto LABEL_126;
      }
      v14 = gpsi + 2448LL;
LABEL_126:
      v9 += *(_DWORD *)v14;
      goto LABEL_128;
    }
    v32 = IsDPIAbsoluteSysMet(46LL);
    if ( v32 )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x4000) != 0 )
      {
        goto LABEL_68;
      }
    }
    else if ( !(unsigned int)IsDPIDWMSysMet(v31)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v38 = 0)
             : (v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v38) )
    {
LABEL_68:
      if ( (unsigned int)IsDPIDWMSysMet(46LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v35 = 0)
          : (v35 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v35) )
      {
        v39 = (_DWORD *)(gpsi + 2840LL);
      }
      else
      {
        v39 = (_DWORD *)(gpsi + 2064LL);
      }
LABEL_84:
      DPIMETRICSForDpi = GetDPIMETRICSForDpi(v11);
      v41 = (unsigned int)(*v39 + *((_DWORD *)DPIMETRICSForDpi + 15) + *((_DWORD *)GetDPIMETRICSForDpi(v11) + 13));
      if ( DpiSystemMetrics > (int)v41 )
      {
LABEL_105:
        v10 = a4;
        v13 = a1;
        goto LABEL_106;
      }
      if ( v32 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v41) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v42) + 776) & 0x4000) != 0 )
        {
          goto LABEL_88;
        }
      }
      else if ( !(unsigned int)IsDPIDWMSysMet(46LL)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v45) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v47 = 0)
               : (v47 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v47) )
      {
LABEL_88:
        if ( (unsigned int)IsDPIDWMSysMet(46LL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v43) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v44 = 0)
            : (v44 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v44) )
        {
          v48 = (_DWORD *)(gpsi + 2840LL);
        }
        else
        {
          v48 = (_DWORD *)(gpsi + 2064LL);
        }
        goto LABEL_104;
      }
      v48 = (_DWORD *)(gpsi + 2452LL);
LABEL_104:
      v49 = GetDPIMETRICSForDpi(v11);
      DpiSystemMetrics = *((_DWORD *)v49 + 15) + *v48 + *((_DWORD *)GetDPIMETRICSForDpi(v11) + 13);
      goto LABEL_105;
    }
    v39 = (_DWORD *)(gpsi + 2452LL);
    goto LABEL_84;
  }
LABEL_12:
  if ( (unsigned int)MNGetpItemIndex(v13, a5) != -1 && (*((_DWORD *)a5 + 1) & 0x1000) != 0 )
  {
    if ( v74 )
      GreSelectFont((__int64)a4, v74);
    else
      GreSetTextCharacterExtra(a4);
  }
LABEL_14:
  a7->x = v9;
  a7->y = DpiSystemMetrics;
  return v80;
}
