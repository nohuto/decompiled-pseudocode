/*
 * XREFs of MNEraseBackground @ 0x1C023FB70
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     xxxMNInvertItem @ 0x1C0139128 (xxxMNInvertItem.c)
 * Callees:
 *     NtGdiPatBlt @ 0x1C00412C0 (NtGdiPatBlt.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     GreSetBrushOrg @ 0x1C00E7AF0 (GreSetBrushOrg.c)
 *     GreGetBrushOrg @ 0x1C014DA6C (GreGetBrushOrg.c)
 */

__int64 __fastcall MNEraseBackground(HDC a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  int v7; // ebp
  int v8; // r14d
  HDC v9; // rsi
  int v10; // r12d
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // r8d
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ecx
  _DWORD *v22; // rdi
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // ecx
  _DWORD *v30; // rcx
  unsigned __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // ecx
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // ecx
  _DWORD *v38; // rsi
  unsigned __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rcx
  _DWORD *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rbp
  unsigned __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  int v52; // ecx
  __int64 v53; // rcx
  __int64 v54; // rcx
  int v55; // ecx
  _DWORD *v56; // rdi
  unsigned __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  int v60; // ecx
  __int64 v61; // rcx
  __int64 v62; // rcx
  int v63; // ecx
  _DWORD *v64; // rcx
  unsigned __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  int v68; // ecx
  __int64 v69; // rcx
  __int64 v70; // rcx
  int v71; // ecx
  _DWORD *v72; // rdi
  unsigned __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rcx
  int v76; // ecx
  __int64 v77; // rcx
  __int64 v78; // rcx
  int v79; // ecx
  _DWORD *v80; // rcx
  __int64 v81; // rdi
  __int64 v84; // [rsp+78h] [rbp+10h] BYREF
  int v85; // [rsp+80h] [rbp+18h]
  int v86; // [rsp+88h] [rbp+20h]

  v86 = a4;
  v85 = a3;
  v7 = a4;
  v8 = a3;
  v9 = a1;
  v10 = 1;
  GreGetBrushOrg(a1, &v84);
  v11 = *(_DWORD *)(a2 + 40);
  if ( (*(_DWORD *)(a2 + 128) & 3) != 0 )
  {
    if ( (v11 & 8) != 0 )
    {
      LODWORD(v84) = 0;
      v12 = *(unsigned int *)(a2 + 120);
      if ( (_DWORD)v12 == -1 || (unsigned int)v12 >= *(_DWORD *)(a2 + 52) )
        v13 = 0LL;
      else
        v13 = *(_QWORD *)(a2 + 80) + 152 * v12;
      v14 = -*(_DWORD *)(v13 + 76);
      goto LABEL_168;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x4000) != 0 )
      {
        goto LABEL_11;
      }
    }
    else if ( !IsDPIDWMSysMet(v15)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v21 = 0)
             : (v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v21) )
    {
LABEL_11:
      if ( IsDPIDWMSysMet(5uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v18 = 0)
          : (v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v18) )
      {
        v22 = (_DWORD *)(gpsi + 2676LL);
      }
      else
      {
        v22 = (_DWORD *)(gpsi + 1900LL);
      }
LABEL_27:
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x4000) != 0 )
        {
          goto LABEL_30;
        }
      }
      else if ( !IsDPIDWMSysMet(v23)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v29 = 0)
               : (v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v29) )
      {
LABEL_30:
        if ( IsDPIDWMSysMet(0x2DuLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v26 = 0)
            : (v26 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v26) )
        {
          v30 = (_DWORD *)(gpsi + 2836LL);
        }
        else
        {
          v30 = (_DWORD *)(gpsi + 2060LL);
        }
LABEL_46:
        LODWORD(v84) = -(*v22 + *v30);
        if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x4000) != 0 )
          {
            goto LABEL_49;
          }
        }
        else if ( !IsDPIDWMSysMet(v31)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                 ? (v37 = 0)
                 : (v37 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                   !v37) )
        {
LABEL_49:
          if ( IsDPIDWMSysMet(6uLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v34 = 0)
              : (v34 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v34) )
          {
            v38 = (_DWORD *)(gpsi + 2680LL);
          }
          else
          {
            v38 = (_DWORD *)(gpsi + 1904LL);
          }
LABEL_65:
          if ( (unsigned int)IsDPIAbsoluteSysMet(0x2EuLL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 776) & 0x4000) != 0 )
            {
              goto LABEL_68;
            }
          }
          else if ( !IsDPIDWMSysMet(v39)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v45) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                   ? (v42 = 0LL)
                   : (v42 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                     !(_DWORD)v42) )
          {
LABEL_68:
            if ( IsDPIDWMSysMet(0x2EuLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v42) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v42 = 0LL)
                : (v42 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  (_DWORD)v42) )
            {
              v46 = (_DWORD *)(gpsi + 2840LL);
            }
            else
            {
              v46 = (_DWORD *)(gpsi + 2064LL);
            }
            goto LABEL_84;
          }
          v46 = (_DWORD *)(gpsi + 2452LL);
LABEL_84:
          v47 = *(unsigned int *)(a2 + 120);
          if ( (_DWORD)v47 == -1 || (unsigned int)v47 >= *(_DWORD *)(a2 + 52) )
            v48 = 0LL;
          else
            v48 = *(_QWORD *)(a2 + 80) + 152 * v47;
          v14 = -(*v38 + *v46 + *(_DWORD *)(v48 + 76) + *(_DWORD *)(GetDPIMetrics(v42, v41, v43) + 68));
          goto LABEL_167;
        }
        v38 = (_DWORD *)(gpsi + 2292LL);
        goto LABEL_65;
      }
      v30 = (_DWORD *)(gpsi + 2448LL);
      goto LABEL_46;
    }
    v22 = (_DWORD *)(gpsi + 2288LL);
    goto LABEL_27;
  }
  if ( (v11 & 8) != 0 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v49) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v50) + 776) & 0x4000) != 0 )
      {
        goto LABEL_93;
      }
    }
    else if ( !IsDPIDWMSysMet(v49)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v53) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v54) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v55 = 0)
             : (v55 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v55) )
    {
LABEL_93:
      if ( IsDPIDWMSysMet(5uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v51) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v52 = 0)
          : (v52 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v52) )
      {
        v56 = (_DWORD *)(gpsi + 2676LL);
      }
      else
      {
        v56 = (_DWORD *)(gpsi + 1900LL);
      }
LABEL_109:
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v57) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v58) + 776) & 0x4000) != 0 )
        {
          goto LABEL_112;
        }
      }
      else if ( !IsDPIDWMSysMet(v57)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v61) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v62) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v63 = 0)
               : (v63 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v63) )
      {
LABEL_112:
        if ( IsDPIDWMSysMet(0x2DuLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v59) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v60 = 0)
            : (v60 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v60) )
        {
          v64 = (_DWORD *)(gpsi + 2836LL);
        }
        else
        {
          v64 = (_DWORD *)(gpsi + 2060LL);
        }
LABEL_128:
        LODWORD(v84) = *v56 + *v64;
        if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v65) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v66) + 776) & 0x4000) != 0 )
          {
            goto LABEL_131;
          }
        }
        else if ( !IsDPIDWMSysMet(v65)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v69) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v70) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                 ? (v71 = 0)
                 : (v71 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                   !v71) )
        {
LABEL_131:
          if ( IsDPIDWMSysMet(6uLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v67) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v68 = 0)
              : (v68 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v68) )
          {
            v72 = (_DWORD *)(gpsi + 2680LL);
          }
          else
          {
            v72 = (_DWORD *)(gpsi + 1904LL);
          }
LABEL_147:
          if ( (unsigned int)IsDPIAbsoluteSysMet(0x2EuLL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v73) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v74) + 776) & 0x4000) != 0 )
            {
              goto LABEL_150;
            }
          }
          else if ( !IsDPIDWMSysMet(v73)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v77) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v78) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                   ? (v79 = 0)
                   : (v79 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                     !v79) )
          {
LABEL_150:
            if ( IsDPIDWMSysMet(0x2EuLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v75) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v76 = 0)
                : (v76 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  v76) )
            {
              v80 = (_DWORD *)(gpsi + 2840LL);
            }
            else
            {
              v80 = (_DWORD *)(gpsi + 2064LL);
            }
            goto LABEL_166;
          }
          v80 = (_DWORD *)(gpsi + 2452LL);
LABEL_166:
          v14 = *v72 + *v80;
LABEL_167:
          v8 = v85;
          v7 = v86;
          v9 = a1;
LABEL_168:
          HIDWORD(v84) = v14;
          GreSetBrushOrg(v9, v84, v14, &v84);
          goto LABEL_170;
        }
        v72 = (_DWORD *)(gpsi + 2292LL);
        goto LABEL_147;
      }
      v64 = (_DWORD *)(gpsi + 2448LL);
      goto LABEL_128;
    }
    v56 = (_DWORD *)(gpsi + 2288LL);
    goto LABEL_109;
  }
  v10 = 0;
LABEL_170:
  v81 = GreSelectBrush(v9, *(_QWORD *)(a2 + 112));
  NtGdiPatBlt(v9, v8, v7, a5, a6, 15728673);
  if ( v10 )
    GreSetBrushOrg(v9, v84, SHIDWORD(v84), 0LL);
  return GreSelectBrush(v9, v81);
}
