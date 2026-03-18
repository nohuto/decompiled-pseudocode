/*
 * XREFs of ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0235A94
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C0237948 (xxxDrawCaptionTemp.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     _DrawIconEx @ 0x1C005137C (_DrawIconEx.c)
 *     FillRect @ 0x1C0086584 (FillRect.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     FixHDCBITSBmp @ 0x1C00F4B48 (FixHDCBITSBmp.c)
 *     ?BltMe4Times@@YAXPEAUtagOEMBITMAPINFO@@HHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C02357A0 (-BltMe4Times@@YAXPEAUtagOEMBITMAPINFO@@HHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 */

void __fastcall DrawCaptionIcon(HDC a1, struct tagRECT *a2, struct tagCURSOR *a3, HBRUSH a4, char a5)
{
  int v6; // r13d
  struct tagCURSOR *v7; // r15
  struct tagRECT *v8; // rdi
  HDC v9; // rsi
  __int64 v10; // rcx
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // ebx
  struct tagCURSOR **v16; // rdx
  __int64 i; // r8
  _QWORD *v18; // rcx
  __int64 j; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int *v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rsi
  struct tagOEMBITMAPINFO *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int128 *v31; // rax
  __int64 v32; // xmm3_8
  __int128 v33; // xmm2
  __int64 v34; // rcx
  __int64 v35; // rcx
  int *v36; // rbx
  LONG top; // ecx
  unsigned __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  int v41; // ecx
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v44; // ecx
  _DWORD *v45; // rbx
  unsigned __int64 v46; // rcx
  int v47; // r14d
  __int64 v48; // rcx
  __int64 v49; // rcx
  int v50; // ecx
  __int64 v51; // rcx
  __int64 v52; // rcx
  int v53; // ecx
  _DWORD *v54; // rcx
  unsigned __int64 v55; // rcx
  int v56; // ebx
  __int64 v57; // rcx
  __int64 v58; // rcx
  int v59; // ecx
  __int64 v60; // rcx
  __int64 v61; // rcx
  int v62; // ecx
  _DWORD *v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  int *v68; // rbx
  __int64 v69; // rcx
  __int64 v70; // rcx
  int v71; // ecx
  __int64 v72; // rcx
  __int64 v73; // rcx
  int v74; // ecx
  int *v75; // rcx
  RECT v76; // [rsp+60h] [rbp-10h] BYREF

  v6 = a2->bottom - a2->top;
  v7 = a3;
  v8 = a2;
  v9 = a1;
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x4000) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v11 = 0)
      : (v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        !v11 || (v12 = gpsi, *(_WORD *)(gpsi + 7286LL) == 96)) )
  {
    v12 = gpsi;
    v13 = gpsi + 4260LL;
  }
  else
  {
    v13 = gpsi + 5748LL;
  }
  if ( v6 != *(_DWORD *)(v13 + 476) || a4 == *(HBRUSH *)(v12 + 3944) || *((_QWORD *)v7 + 16) )
  {
    top = v8->top;
    v76.left = v8->left;
    v76.right = v6 + v76.left;
    v76.top = top;
    v76.bottom = top + v6;
    FillRect(v9, &v76, a4);
    if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x4000) != 0 )
      {
        goto LABEL_65;
      }
    }
    else if ( !IsDPIDWMSysMet(v38)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v42) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v43) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v44 = 0)
             : (v44 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v44) )
    {
LABEL_65:
      if ( IsDPIDWMSysMet(5uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v41 = 0)
          : (v41 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v41) )
      {
        v45 = (_DWORD *)(gpsi + 2676LL);
      }
      else
      {
        v45 = (_DWORD *)(gpsi + 1900LL);
      }
LABEL_81:
      v47 = IsDPIAbsoluteSysMet(0x31uLL);
      if ( v47 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v48) + 776) & 0x4000) != 0 )
        {
          goto LABEL_84;
        }
      }
      else if ( !IsDPIDWMSysMet(v46)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v51) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v52) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v53 = 0)
               : (v53 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                 !v53) )
      {
LABEL_84:
        if ( IsDPIDWMSysMet(0x31uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v49) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v50 = 0)
            : (v50 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              v50) )
        {
          v54 = (_DWORD *)(gpsi + 2852LL);
        }
        else
        {
          v54 = (_DWORD *)(gpsi + 2076LL);
        }
LABEL_100:
        v76.left += *v45 + (v6 - *v54) / 2;
        v56 = IsDPIAbsoluteSysMet(0x32uLL);
        if ( v56 )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v55) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v57) + 776) & 0x4000) != 0 )
          {
            goto LABEL_103;
          }
        }
        else if ( !IsDPIDWMSysMet(v55)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v60) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v61) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 ? (v62 = 0)
                 : (v62 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                   !v62) )
        {
LABEL_103:
          if ( IsDPIDWMSysMet(0x32uLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v58) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v59 = 0)
              : (v59 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                v59) )
          {
            v63 = (_DWORD *)(gpsi + 2856LL);
          }
          else
          {
            v63 = (_DWORD *)(gpsi + 2080LL);
          }
LABEL_119:
          v76.top += (v6 - *v63) / 2;
          if ( v56 )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(2LL) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v64) + 776) & 0x4000) != 0 )
            {
              goto LABEL_122;
            }
          }
          else if ( !IsDPIDWMSysMet(0x32uLL)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v66) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v67) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                   ? (v65 = 0LL)
                   : (v65 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 416)
                                                  + 8LL)
                                      + 260LL) & 1),
                     !(_DWORD)v65) )
          {
LABEL_122:
            if ( IsDPIDWMSysMet(0x32uLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v65) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v65 = 0LL)
                : (v65 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                  (_DWORD)v65) )
            {
              v68 = (int *)(gpsi + 2856LL);
            }
            else
            {
              v68 = (int *)(gpsi + 2080LL);
            }
LABEL_138:
            if ( v47 )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v65) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v69) + 776) & 0x4000) != 0 )
              {
                goto LABEL_141;
              }
            }
            else if ( !IsDPIDWMSysMet(0x31uLL)
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v72) + 776) & 0x2000) != 0
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v73) + 776) & 0x4000) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                     ? (v74 = 0)
                     : (v74 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                + 416)
                                                    + 8LL)
                                        + 260LL) & 1),
                       !v74) )
            {
LABEL_141:
              if ( IsDPIDWMSysMet(0x31uLL)
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v70) + 776) & 0x2000) != 0
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                  ? (v71 = 0)
                  : (v71 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 416)
                                                 + 8LL)
                                     + 260LL) & 1),
                    v71) )
              {
                v75 = (int *)(gpsi + 2852LL);
              }
              else
              {
                v75 = (int *)(gpsi + 2076LL);
              }
              goto LABEL_157;
            }
            v75 = (int *)(gpsi + 2464LL);
LABEL_157:
            DrawIconEx(a1, v76.left, v76.top, (__int64)a3, *v75, *v68, 0, 0LL, 3);
            v8 = a2;
            goto LABEL_158;
          }
          v68 = (int *)(gpsi + 2468LL);
          goto LABEL_138;
        }
        v63 = (_DWORD *)(gpsi + 2468LL);
        goto LABEL_119;
      }
      v54 = (_DWORD *)(gpsi + 2464LL);
      goto LABEL_100;
    }
    v45 = (_DWORD *)(gpsi + 2288LL);
    goto LABEL_81;
  }
  v14 = gcachedCaptions[0];
  if ( (a5 & 0x10) == 0 )
  {
    v15 = 1;
    v16 = (struct tagCURSOR **)&gcachedCaptions[3];
    for ( i = 1LL; i < 5; ++i )
    {
      if ( *v16 == v7 )
        break;
      ++v15;
      v16 += 3;
    }
    if ( v15 < 5 )
      goto LABEL_50;
LABEL_20:
    if ( (a5 & 0x10) != 0 )
    {
      v15 = 0;
    }
    else
    {
      v15 = 1;
      v18 = &gcachedCaptions[3];
      for ( j = 1LL; j < 4; ++j )
      {
        if ( !*v18 )
          break;
        ++v15;
        v18 += 3;
      }
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x31uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x4000) != 0 )
      {
        goto LABEL_28;
      }
    }
    else if ( !IsDPIDWMSysMet(v20)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v22 = 0LL)
             : (v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !(_DWORD)v22) )
    {
LABEL_28:
      if ( IsDPIDWMSysMet(0x31uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v22 = 0LL)
          : (v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            (_DWORD)v22) )
      {
        v25 = (int *)(gpsi + 2852LL);
        v7 = a3;
      }
      else
      {
        v25 = (int *)(gpsi + 2076LL);
      }
      goto LABEL_44;
    }
    v25 = (int *)(gpsi + 2464LL);
LABEL_44:
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x4000) != 0
      || *(_WORD *)(gpsi + 7286LL) == 96 )
    {
      v27 = 3LL * v15;
      v28 = (struct tagOEMBITMAPINFO *)gcachedCaptions[v27 + 1];
    }
    else
    {
      v27 = 3LL * v15;
      v28 = (struct tagOEMBITMAPINFO *)gcachedCaptions[v27 + 2];
    }
    BltMe4Times(v28, v6, *v25, ghdcMem, v7, a5);
    HMAssignmentLock(v27 * 8 + gcachedCaptions[0], v7);
    v14 = gcachedCaptions[0];
    v8 = a2;
    v9 = a1;
    goto LABEL_50;
  }
  if ( (struct tagCURSOR *)gcachedCaptions[0] != v7 )
    goto LABEL_20;
  v15 = 0;
LABEL_50:
  if ( v15 > 1LL )
  {
    v29 = 24LL * v15;
    v30 = v15 - 1LL;
    v15 = 1;
    while ( 1 )
    {
      v31 = (__int128 *)(v29 + v14);
      v32 = *(_QWORD *)(v29 + v14 + 16);
      v29 -= 24LL;
      v33 = *v31;
      *v31 = *(_OWORD *)(v29 + v14);
      *((_QWORD *)v31 + 2) = *(_QWORD *)(v29 + v14 + 16);
      *(_OWORD *)(v29 + gcachedCaptions[0]) = v33;
      *(_QWORD *)(v29 + gcachedCaptions[0] + 16) = v32;
      if ( !--v30 )
        break;
      v14 = gcachedCaptions[0];
    }
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x4000) != 0
    || *(_WORD *)(gpsi + 7286LL) == 96 )
  {
    v35 = 3LL * v15;
    v36 = (int *)gcachedCaptions[3 * v15 + 1];
  }
  else
  {
    v35 = 3LL * v15;
    v36 = (int *)gcachedCaptions[3 * v15 + 2];
  }
  if ( (a5 & 1) == 0 )
    v36 += 4;
  FixHDCBITSBmp(v35);
  NtGdiBitBltInternal(v9, v8->left, v8->top, v6, v6, *(HDC *)(gpDispInfo + 32LL), *v36, v36[1], 0xCC0020u, 0, 0);
LABEL_158:
  v8->left += v6;
}
