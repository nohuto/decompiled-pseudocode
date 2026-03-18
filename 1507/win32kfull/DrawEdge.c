/*
 * XREFs of DrawEdge @ 0x1C0094D78
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C004ED9C (xxxDrawCaptionBar.c)
 *     xxxMenuDraw @ 0x1C0050108 (xxxMenuDraw.c)
 *     DrawPushButton @ 0x1C0056BC8 (DrawPushButton.c)
 *     xxxDrawWindowFrame @ 0x1C0057540 (xxxDrawWindowFrame.c)
 *     ?DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z @ 0x1C011A0B0 (-DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C02009B0 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     xxxMNDrawFullNC @ 0x1C0241710 (xxxMNDrawFullNC.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     FillRect @ 0x1C0086584 (FillRect.c)
 *     GrePolyPatBlt @ 0x1C00865E0 (GrePolyPatBlt.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     DrawDiagonal @ 0x1C024A114 (DrawDiagonal.c)
 *     FillTriangle @ 0x1C024AAE8 (FillTriangle.c)
 */

__int64 __fastcall DrawEdge(HDC a1, RECT *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // r14d
  unsigned int v6; // r10d
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // r12
  __int64 v12; // rsi
  unsigned int v13; // r15d
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // rcx
  _DWORD *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int *v21; // rcx
  __int64 v22; // rcx
  int v23; // edi
  __int64 v24; // rcx
  __int64 v25; // rcx
  _DWORD *v26; // rdx
  __int64 bottom; // rcx
  __int64 v28; // rbx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  int *v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rcx
  int v35; // edi
  __int64 v36; // rcx
  __int64 v37; // rcx
  int *v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  _DWORD *v41; // rcx
  LONG left; // edx
  __int64 v43; // rbx
  int v44; // eax
  __int64 v45; // rcx
  int v46; // edi
  __int64 v47; // rcx
  __int64 v48; // rcx
  int *v49; // rcx
  int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rcx
  _DWORD *v53; // rcx
  unsigned int v54; // eax
  __int64 v56; // rcx
  __int64 v57; // rcx
  int v59; // ecx
  __int64 v60; // rcx
  __int64 v61; // rcx
  int v63; // ecx
  __int64 v64; // rcx
  __int64 v65; // rcx
  int v67; // ecx
  __int64 v68; // rcx
  __int64 v69; // rcx
  int v70; // ecx
  int v71; // ecx
  __int64 v72; // rcx
  __int64 v73; // rcx
  int v75; // ecx
  __int64 v76; // rcx
  __int64 v77; // rcx
  int v79; // ecx
  __int64 v80; // rcx
  __int64 v81; // rcx
  int v83; // ecx
  __int64 v84; // rcx
  __int64 v85; // rcx
  int v87; // ecx
  __int64 v88; // r8
  int v89; // eax
  HBRUSH v90; // r8
  RECT v91; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v92; // [rsp+40h] [rbp-59h]
  RECT *v93; // [rsp+48h] [rbp-51h]
  LONG right; // [rsp+50h] [rbp-49h] BYREF
  LONG top; // [rsp+54h] [rbp-45h]
  int v96; // [rsp+58h] [rbp-41h]
  int v97; // [rsp+5Ch] [rbp-3Dh]
  _QWORD v98[10]; // [rsp+60h] [rbp-39h]

  v92 = a3;
  v5 = a4;
  v93 = a2;
  v6 = 1;
  if ( *(_WORD *)(gpsi + 7284LL) == 1 )
    v5 = a4 | 0x8000;
  if ( (v5 & 0x8000) != 0 )
    v5 |= 0x4000u;
  v91 = *a2;
  v7 = a3 & 3;
  if ( (a3 & 3) == 0 )
    goto LABEL_56;
  while ( 1 )
  {
    if ( (v5 & 0x4000) != 0 )
    {
      if ( (v5 & 0x8000) != 0 )
      {
        if ( (v7 & 3) != 0 )
          v12 = *(_QWORD *)(gpsi + 3744LL);
        else
          v12 = *(_QWORD *)(gpsi + 3736LL);
      }
      else if ( (v7 & 3) != 0 )
      {
        v12 = *(_QWORD *)(gpsi + 3824LL);
      }
      else
      {
        v12 = *(_QWORD *)(gpsi + 3816LL);
      }
      v11 = v12;
    }
    else
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 2;
          if ( v10 )
          {
            if ( v10 != 4 )
              return 0LL;
            if ( (v5 & 0x1000) != 0 )
              v11 = *(_QWORD *)(gpsi + 3824LL);
            else
              v11 = *(_QWORD *)(gpsi + 3864LL);
            v12 = *(_QWORD *)(gpsi + 3872LL);
          }
          else
          {
            if ( (v5 & 0x1000) != 0 )
              v11 = *(_QWORD *)(gpsi + 3872LL);
            else
              v11 = *(_QWORD *)(gpsi + 3856LL);
            v12 = *(_QWORD *)(gpsi + 3824LL);
          }
        }
        else
        {
          if ( (v5 & 0x1000) != 0 )
            v11 = *(_QWORD *)(gpsi + 3864LL);
          else
            v11 = *(_QWORD *)(gpsi + 3824LL);
          v12 = *(_QWORD *)(gpsi + 3856LL);
        }
      }
      else
      {
        if ( (v5 & 0x1000) != 0 )
          v11 = *(_QWORD *)(gpsi + 3856LL);
        else
          v11 = *(_QWORD *)(gpsi + 3872LL);
        v12 = *(_QWORD *)(gpsi + 3864LL);
      }
    }
    if ( (v5 & 0x10) != 0 )
    {
      v54 = DrawDiagonal((_DWORD)a1, (unsigned int)&v91, v11, v12, v5);
      goto LABEL_55;
    }
    v13 = 0;
    if ( (v5 & 4) != 0 )
    {
      v15 = IsDPIAbsoluteSysMet(5LL);
      if ( v15 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) == 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v56) + 776) & 0x4000) == 0 )
        {
LABEL_95:
          v18 = (_DWORD *)(gpsi + 2288LL);
          goto LABEL_19;
        }
      }
      else if ( (unsigned int)IsDPIDWMSysMet(v14)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v57) + 776) & 0x4000) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1 )
      {
        goto LABEL_95;
      }
      if ( (unsigned int)IsDPIDWMSysMet(5LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v59 = 0)
          : (v59 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v59) )
      {
        v18 = (_DWORD *)(gpsi + 2676LL);
      }
      else
      {
        v18 = (_DWORD *)(gpsi + 1900LL);
      }
LABEL_19:
      v91.right -= *v18;
      right = v91.right;
      top = v91.top;
      if ( v15 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) == 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v60) + 776) & 0x4000) == 0 )
        {
LABEL_111:
          v21 = (int *)(gpsi + 2288LL);
LABEL_23:
          v13 = 1;
          v96 = *v21;
          v97 = v91.bottom - v91.top;
          v98[0] = v12;
          goto LABEL_24;
        }
      }
      else if ( (unsigned int)IsDPIDWMSysMet(5LL)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v61) + 776) & 0x4000) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1 )
      {
        goto LABEL_111;
      }
      if ( (unsigned int)IsDPIDWMSysMet(5LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v63 = 0)
          : (v63 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v63) )
      {
        v21 = (int *)(gpsi + 2676LL);
      }
      else
      {
        v21 = (int *)(gpsi + 1900LL);
      }
      goto LABEL_23;
    }
LABEL_24:
    if ( (v5 & 8) == 0 )
      goto LABEL_34;
    v23 = IsDPIAbsoluteSysMet(6LL);
    if ( v23 )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x2000) == 0
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v64) + 776) & 0x4000) == 0 )
      {
        goto LABEL_127;
      }
    }
    else if ( (unsigned int)IsDPIDWMSysMet(v22)
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x2000) == 0
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v65) + 776) & 0x4000) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                        + 260LL) & 1 )
    {
LABEL_127:
      v26 = (_DWORD *)(gpsi + 2292LL);
      goto LABEL_29;
    }
    if ( (unsigned int)IsDPIDWMSysMet(6LL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v67 = 0)
        : (v67 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          v67) )
    {
      v26 = (_DWORD *)(gpsi + 2680LL);
    }
    else
    {
      v26 = (_DWORD *)(gpsi + 1904LL);
    }
LABEL_29:
    v91.bottom -= *v26;
    bottom = (unsigned int)v91.bottom;
    v28 = 3LL * v13;
    v29 = v91.right - v91.left;
    *(&right + 2 * v28) = v91.left;
    *(&top + 2 * v28) = bottom;
    *(&v96 + 2 * v28) = v29;
    if ( v23 )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(bottom) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v68) + 776) & 0x4000) != 0 )
      {
        goto LABEL_31;
      }
    }
    else if ( !(unsigned int)IsDPIDWMSysMet(6LL)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v69) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v70 = 0)
             : (v70 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v70) )
    {
LABEL_31:
      if ( (unsigned int)IsDPIDWMSysMet(6LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v71 = 0)
          : (v71 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v71) )
      {
        v32 = (int *)(gpsi + 2680LL);
      }
      else
      {
        v32 = (int *)(gpsi + 1904LL);
      }
      goto LABEL_33;
    }
    v32 = (int *)(gpsi + 2292LL);
LABEL_33:
    ++v13;
    *(&v97 + 2 * v28) = *v32;
    v98[v28] = v12;
LABEL_34:
    if ( (v5 & 1) != 0 )
    {
      v33 = 3LL * v13;
      *(&right + 2 * v33) = v91.left;
      *(&top + 2 * v33) = v91.top;
      v35 = IsDPIAbsoluteSysMet(5LL);
      if ( v35 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x2000) == 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v72) + 776) & 0x4000) == 0 )
        {
LABEL_159:
          v38 = (int *)(gpsi + 2288LL);
          goto LABEL_39;
        }
      }
      else if ( (unsigned int)IsDPIDWMSysMet(v34)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v73) + 776) & 0x4000) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1 )
      {
        goto LABEL_159;
      }
      if ( (unsigned int)IsDPIDWMSysMet(5LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v75 = 0)
          : (v75 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v75) )
      {
        v38 = (int *)(gpsi + 2676LL);
      }
      else
      {
        v38 = (int *)(gpsi + 1900LL);
      }
LABEL_39:
      ++v13;
      *(&v96 + 2 * v33) = *v38;
      *(&v97 + 2 * v33) = v91.bottom - v91.top;
      v98[v33] = v11;
      if ( v35 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x2000) == 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v76) + 776) & 0x4000) == 0 )
        {
LABEL_175:
          v41 = (_DWORD *)(gpsi + 2288LL);
LABEL_43:
          v91.left += *v41;
          goto LABEL_44;
        }
      }
      else if ( (unsigned int)IsDPIDWMSysMet(5LL)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v77) + 776) & 0x4000) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1 )
      {
        goto LABEL_175;
      }
      if ( (unsigned int)IsDPIDWMSysMet(5LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v79 = 0)
          : (v79 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v79) )
      {
        v41 = (_DWORD *)(gpsi + 2676LL);
      }
      else
      {
        v41 = (_DWORD *)(gpsi + 1900LL);
      }
      goto LABEL_43;
    }
LABEL_44:
    if ( (v5 & 2) != 0 )
    {
      left = v91.left;
      v43 = 3LL * v13;
      *(&top + 2 * v43) = v91.top;
      v44 = v91.right - left;
      *(&right + 2 * v43) = left;
      *(&v96 + 2 * v43) = v44;
      v46 = IsDPIAbsoluteSysMet(6LL);
      if ( v46 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v45) + 776) & 0x2000) == 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v80) + 776) & 0x4000) == 0 )
        {
LABEL_192:
          v49 = (int *)(gpsi + 2292LL);
          goto LABEL_49;
        }
      }
      else if ( (unsigned int)IsDPIDWMSysMet(v45)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v47) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v81) + 776) & 0x4000) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1 )
      {
        goto LABEL_192;
      }
      if ( (unsigned int)IsDPIDWMSysMet(6LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v48) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v83 = 0)
          : (v83 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v83) )
      {
        v49 = (int *)(gpsi + 2680LL);
      }
      else
      {
        v49 = (int *)(gpsi + 1904LL);
      }
LABEL_49:
      v50 = *v49;
      v98[3 * v13++] = v11;
      *(&v97 + 2 * v43) = v50;
      if ( v46 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v49) + 776) & 0x2000) == 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v84) + 776) & 0x4000) == 0 )
        {
LABEL_208:
          v53 = (_DWORD *)(gpsi + 2292LL);
LABEL_53:
          v91.top += *v53;
          goto LABEL_54;
        }
      }
      else if ( (unsigned int)IsDPIDWMSysMet(6LL)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v51) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v85) + 776) & 0x4000) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1 )
      {
        goto LABEL_208;
      }
      if ( (unsigned int)IsDPIDWMSysMet(6LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v52) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v87 = 0)
          : (v87 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v87) )
      {
        v53 = (_DWORD *)(gpsi + 2680LL);
      }
      else
      {
        v53 = (_DWORD *)(gpsi + 1904LL);
      }
      goto LABEL_53;
    }
LABEL_54:
    v54 = GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)&right, v13);
LABEL_55:
    a3 = v92;
    v6 = v54;
LABEL_56:
    v7 = a3 & 0xC;
    if ( (a3 & 0xC) == 0 )
      break;
    v92 = a3 & 0xFFFFFFF3;
  }
  if ( (v5 & 0x800) != 0 )
  {
    if ( (v5 & 0x10) != 0 )
    {
      if ( (v5 & 0x8000) != 0 )
        v88 = *(_QWORD *)(gpsi + 3736LL);
      else
        v88 = *(_QWORD *)(gpsi + 3816LL);
      v89 = FillTriangle(a1, &v91, v88, v5);
    }
    else
    {
      if ( (v5 & 0x8000) != 0 )
        v90 = *(HBRUSH *)(gpsi + 3736LL);
      else
        v90 = *(HBRUSH *)(gpsi + 3816LL);
      v89 = FillRect(a1, &v91, v90);
    }
    v6 = v89;
  }
  if ( (v5 & 0x2000) != 0 )
    *v93 = v91;
  return v6;
}
