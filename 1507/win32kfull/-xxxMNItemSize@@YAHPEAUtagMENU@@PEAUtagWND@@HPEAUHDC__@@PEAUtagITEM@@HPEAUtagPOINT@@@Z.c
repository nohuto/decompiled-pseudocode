/*
 * XREFs of ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0053F14
 * Callers:
 *     xxxMNCompute @ 0x1C0052F0C (xxxMNCompute.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C0014EE0 (GreExtGetObjectW.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     GetDPIMETRICSForDpi @ 0x1C0053EE8 (GetDPIMETRICSForDpi.c)
 *     MNGetpItemIndex @ 0x1C00557A0 (MNGetpItemIndex.c)
 *     ?xxxMNGetBitmapSize@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C0055CD8 (-xxxMNGetBitmapSize@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z.c)
 *     MNIsOwnerDrawItem @ 0x1C0055E1C (MNIsOwnerDrawItem.c)
 *     MNIsUAHMenu @ 0x1C005E724 (MNIsUAHMenu.c)
 *     RealGetDpiSystemMetrics @ 0x1C0093138 (RealGetDpiSystemMetrics.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     GetDPIServerInfoForDpi @ 0x1C0100128 (GetDPIServerInfoForDpi.c)
 *     xxxPSMGetTextExtent @ 0x1C013821C (xxxPSMGetTextExtent.c)
 *     FindCharPosition @ 0x1C0249D58 (FindCharPosition.c)
 *     GreGetTextCharacterExtra @ 0x1C0292714 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C0292750 (GreSetTextCharacterExtra.c)
 *     GreSelectFontInternal @ 0x1C0293D18 (GreSelectFontInternal.c)
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
  int v16; // eax
  HSURF v17; // r9
  int v18; // eax
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // ecx
  _DWORD *v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  int v30; // ebp
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // ecx
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // ecx
  _DWORD *v37; // rdi
  char *DPIMETRICSForDpi; // rbx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v42; // ecx
  __int64 v43; // rcx
  __int64 v44; // rcx
  int v45; // ecx
  _DWORD *v46; // rdi
  char *v47; // rbx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  int v51; // ecx
  __int64 v52; // rcx
  __int64 v53; // rcx
  int v54; // ecx
  __int64 v55; // rcx
  int v56; // ecx
  __int64 v57; // rax
  __int64 v58; // rcx
  int v59; // edi
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rcx
  _DWORD *v64; // rbx
  __int64 v65; // rcx
  __int64 v66; // rcx
  int v67; // ecx
  __int64 v68; // rcx
  __int64 v69; // rcx
  int v70; // ecx
  _DWORD *v71; // rcx
  __int64 v73; // [rsp+38h] [rbp-60h]
  unsigned __int16 v74[2]; // [rsp+40h] [rbp-58h] BYREF
  int v75; // [rsp+44h] [rbp-54h]
  int v76; // [rsp+48h] [rbp-50h]
  unsigned int v79; // [rsp+C8h] [rbp+30h]

  DpiSystemMetrics = 0;
  v9 = 0;
  v10 = a4;
  v11 = a3;
  v13 = a1;
  if ( !a6 )
    DpiSystemMetrics = RealGetDpiSystemMetrics(55LL, (unsigned int)a3);
  v73 = 0LL;
  if ( (*((_DWORD *)a5 + 1) & 0x1000) != 0 )
  {
    if ( *((_QWORD *)GetDPIMETRICSForDpi(v11) + 2) )
    {
      v73 = GreSelectFontInternal(v10);
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
  v79 = v15;
  if ( *((_QWORD *)a5 + 13) )
  {
    v16 = MNIsUAHMenu(v13);
    if ( !v16 || (v14 = (unsigned int)v17, !(_DWORD)v17) || (_DWORD)v17 == 4 || (unsigned int)v17 >= 0xC )
    {
      if ( v17 == (HSURF)-1LL )
        goto LABEL_13;
      if ( *((_DWORD *)a5 + 28) != -1 )
      {
LABEL_44:
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
        goto LABEL_57;
      }
      if ( (*((_DWORD *)a5 + 1) & 0x20000000) != 0 )
      {
        *((_DWORD *)a5 + 28) = RealGetDpiSystemMetrics(54LL, v11);
        v18 = RealGetDpiSystemMetrics(55LL, v11);
        v19 = *((_QWORD *)a5 + 13) == 1LL;
        *((_DWORD *)a5 + 29) = v18;
        if ( v19 )
        {
          if ( (unsigned int)IsDPIAbsoluteSysMet(45LL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x4000) != 0 )
            {
              goto LABEL_21;
            }
          }
          else if ( !(unsigned int)IsDPIDWMSysMet(v20)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                   ? (v26 = 0)
                   : (v26 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 416)
                                                  + 8LL)
                                      + 260LL) & 1),
                     !v26) )
          {
LABEL_21:
            if ( (unsigned int)IsDPIDWMSysMet(45LL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v23 = 0)
                : (v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                  v23) )
            {
              v27 = (_DWORD *)(gpsi + 2836LL);
            }
            else
            {
              v27 = (_DWORD *)(gpsi + 2060LL);
            }
            goto LABEL_37;
          }
          v27 = (_DWORD *)(gpsi + 2448LL);
LABEL_37:
          *((_DWORD *)a5 + 28) += *v27;
        }
      }
      else
      {
        if ( v16 )
        {
LABEL_13:
          xxxMNGetBitmapSize(v13, a5, a2, v11, v10);
          if ( (unsigned int)MNGetpItemIndex(v13, a5) == -1 )
            goto LABEL_179;
          goto LABEL_43;
        }
        if ( (unsigned int)GreExtGetObjectW(v17, 32, v74) )
        {
          *((_DWORD *)a5 + 28) = v75;
          v28 = v76;
        }
        else
        {
          *((_DWORD *)a5 + 28) = RealGetDpiSystemMetrics(54LL, v11);
          v28 = RealGetDpiSystemMetrics(55LL, v11);
        }
        *((_DWORD *)a5 + 29) = v28;
      }
LABEL_43:
      v15 = v79;
      goto LABEL_44;
    }
  }
  if ( !v15 )
    goto LABEL_58;
  xxxMNGetBitmapSize(v13, a5, a2, v11, v10);
  if ( (unsigned int)MNGetpItemIndex(v13, a5) == -1 )
    goto LABEL_179;
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
  v15 = v79;
LABEL_57:
  if ( v15 )
    goto LABEL_174;
LABEL_58:
  if ( !*((_QWORD *)a5 + 5) )
    goto LABEL_123;
  if ( a6 )
  {
    v30 = IsDPIAbsoluteSysMet(46LL);
    if ( v30 )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x4000) != 0 )
      {
        goto LABEL_63;
      }
    }
    else if ( !(unsigned int)IsDPIDWMSysMet(v29)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v36 = 0)
             : (v36 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v36) )
    {
LABEL_63:
      if ( (unsigned int)IsDPIDWMSysMet(46LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v33 = 0)
          : (v33 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v33) )
      {
        v37 = (_DWORD *)(gpsi + 2840LL);
      }
      else
      {
        v37 = (_DWORD *)(gpsi + 2064LL);
      }
LABEL_79:
      DPIMETRICSForDpi = GetDPIMETRICSForDpi(v11);
      v39 = (unsigned int)(*v37 + *((_DWORD *)DPIMETRICSForDpi + 15) + *((_DWORD *)GetDPIMETRICSForDpi(v11) + 13));
      if ( DpiSystemMetrics > (int)v39 )
      {
LABEL_100:
        v10 = a4;
        v13 = a1;
        goto LABEL_101;
      }
      if ( v30 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 776) & 0x4000) != 0 )
        {
          goto LABEL_83;
        }
      }
      else if ( !(unsigned int)IsDPIDWMSysMet(46LL)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v43) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v45 = 0)
               : (v45 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                 !v45) )
      {
LABEL_83:
        if ( (unsigned int)IsDPIDWMSysMet(46LL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v41) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v42 = 0)
            : (v42 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              v42) )
        {
          v46 = (_DWORD *)(gpsi + 2840LL);
        }
        else
        {
          v46 = (_DWORD *)(gpsi + 2064LL);
        }
        goto LABEL_99;
      }
      v46 = (_DWORD *)(gpsi + 2452LL);
LABEL_99:
      v47 = GetDPIMETRICSForDpi(v11);
      DpiSystemMetrics = *((_DWORD *)v47 + 15) + *v46 + *((_DWORD *)GetDPIMETRICSForDpi(v11) + 13);
      goto LABEL_100;
    }
    v37 = (_DWORD *)(gpsi + 2452LL);
    goto LABEL_79;
  }
LABEL_101:
  FindCharPosition(*((_QWORD *)a5 + 5), 9LL);
  xxxPSMGetTextExtent(v10, *((unsigned __int16 **)a5 + 5));
  if ( v9 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(45LL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v48) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v49) + 776) & 0x4000) != 0 )
      {
        goto LABEL_105;
      }
    }
    else if ( !(unsigned int)IsDPIDWMSysMet(v48)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v52) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v53) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v54 = 0)
             : (v54 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v54) )
    {
LABEL_105:
      if ( (unsigned int)IsDPIDWMSysMet(45LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v50) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v51 = 0)
          : (v51 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v51) )
      {
        v14 = gpsi + 2836LL;
      }
      else
      {
        v14 = gpsi + 2060LL;
      }
      goto LABEL_121;
    }
    v14 = gpsi + 2448LL;
LABEL_121:
    v9 += *(_DWORD *)v14;
    goto LABEL_123;
  }
  v9 = 0;
LABEL_123:
  if ( a6 )
  {
    if ( (*((_DWORD *)v13 + 10) & 0x84000000) != 0x80000000 )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v55) + 776) & 0x4000) != 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v56 = 0)
          : (v56 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            !v56 || *(_WORD *)(gpsi + 7286LL) == 96) )
      {
        v57 = gpsi + 4260LL;
      }
      else
      {
        v57 = gpsi + 5748LL;
      }
      v9 += *(_DWORD *)(v57 + 1016);
    }
    v59 = IsDPIAbsoluteSysMet(45LL);
    if ( v59 )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v58) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v60) + 776) & 0x4000) != 0 )
      {
        goto LABEL_138;
      }
    }
    else if ( !(unsigned int)IsDPIDWMSysMet(v58)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v62) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v63) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v61 = 0LL)
             : (v61 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !(_DWORD)v61) )
    {
LABEL_138:
      if ( (unsigned int)IsDPIDWMSysMet(45LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v61) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v61 = 0LL)
          : (v61 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            (_DWORD)v61) )
      {
        v64 = (_DWORD *)(gpsi + 2836LL);
      }
      else
      {
        v64 = (_DWORD *)(gpsi + 2060LL);
      }
LABEL_154:
      if ( v59 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v61) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v65) + 776) & 0x4000) != 0 )
        {
          goto LABEL_157;
        }
      }
      else if ( !(unsigned int)IsDPIDWMSysMet(45LL)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v68) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v69) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v70 = 0)
               : (v70 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                 !v70) )
      {
LABEL_157:
        if ( (unsigned int)IsDPIDWMSysMet(45LL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v66) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v67 = 0)
            : (v67 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              v67) )
        {
          v71 = (_DWORD *)(gpsi + 2836LL);
        }
        else
        {
          v71 = (_DWORD *)(gpsi + 2060LL);
        }
        goto LABEL_173;
      }
      v71 = (_DWORD *)(gpsi + 2448LL);
LABEL_173:
      v9 += *v71 + *v64 + 2;
      DpiSystemMetrics += 2;
      goto LABEL_174;
    }
    v64 = (_DWORD *)(gpsi + 2448LL);
    goto LABEL_154;
  }
LABEL_174:
  if ( (unsigned int)MNGetpItemIndex(v13, a5) != -1 && (*((_DWORD *)a5 + 1) & 0x1000) != 0 )
  {
    if ( v73 )
      GreSelectFontInternal(a4);
    else
      GreSetTextCharacterExtra(a4);
  }
LABEL_179:
  a7->x = v9;
  a7->y = DpiSystemMetrics;
  return v79;
}
