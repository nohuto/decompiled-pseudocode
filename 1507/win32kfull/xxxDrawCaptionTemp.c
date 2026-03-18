/*
 * XREFs of xxxDrawCaptionTemp @ 0x1C0237948
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C004ED9C (xxxDrawCaptionBar.c)
 *     NtUserDrawCaption @ 0x1C02191A0 (NtUserDrawCaption.c)
 *     NtUserDrawCaptionTemp @ 0x1C02192C0 (NtUserDrawCaptionTemp.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C0226AF4 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     _GetTextMetricsW @ 0x1C0038BF0 (_GetTextMetricsW.c)
 *     GreSetTextColor @ 0x1C005184C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00518B8 (GreSetBkColor.c)
 *     GreSetBkMode @ 0x1C00567EC (GreSetBkMode.c)
 *     xxxGetWindowSmIcon @ 0x1C007E1EC (xxxGetWindowSmIcon.c)
 *     FillRect @ 0x1C0086584 (FillRect.c)
 *     GreGetLayout @ 0x1C008E4AC (GreGetLayout.c)
 *     _HasCaptionIcon @ 0x1C00943D8 (_HasCaptionIcon.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     TextCopy @ 0x1C00E38A8 (TextCopy.c)
 *     GreExtTextOutWInternal @ 0x1C00EA458 (GreExtTextOutWInternal.c)
 *     GreSetTextAlign @ 0x1C00FA3AC (GreSetTextAlign.c)
 *     GreGetTextExtentW @ 0x1C00FA610 (GreGetTextExtentW.c)
 *     GreGetTextAlign @ 0x1C00FAEBC (GreGetTextAlign.c)
 *     xxxClientExtTextOutW @ 0x1C0123184 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0126A38 (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C0128938 (CALL_LPK.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     xxxGetWindowText @ 0x1C02041C0 (xxxGetWindowText.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0235A94 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z @ 0x1C0236674 (-FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z.c)
 *     DrawTextExWorker @ 0x1C024B358 (DrawTextExWorker.c)
 *     GreSelectFontInternal @ 0x1C0293D18 (GreSelectFontInternal.c)
 */

__int64 __fastcall xxxDrawCaptionTemp(
        __int64 a1,
        HDC a2,
        const RECT *a3,
        __int64 a4,
        struct tagCURSOR *a5,
        unsigned __int16 *a6,
        __int16 a7)
{
  struct tagCURSOR *WindowSmIcon; // rsi
  int v11; // r13d
  HDC v12; // r8
  LONG left; // eax
  int v15; // ebx
  HBRUSH v16; // rax
  int v17; // edi
  HBRUSH v18; // rax
  int v19; // edx
  HDC v20; // rdi
  unsigned int Layout; // eax
  unsigned int v22; // ebx
  int v23; // edi
  bool v24; // zf
  __int64 ThreadWin32Thread; // rax
  __int64 v26; // rdx
  unsigned __int16 *v27; // r8
  __int64 v28; // rsi
  int WindowText; // eax
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // ecx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  RECT *v39; // r12
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // ecx
  int v44; // eax
  PCWSTR *v45; // r13
  __m128i *v46; // rdx
  __int64 v47; // rbx
  int TextAlign; // eax
  unsigned __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rax
  int v53; // ecx
  _DWORD *v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rax
  int v58; // ecx
  unsigned int v59; // r8d
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rcx
  int v63; // ecx
  __int64 v64; // rcx
  __int64 v65; // rcx
  int v66; // ecx
  _DWORD *v67; // rcx
  unsigned int v68; // edx
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rcx
  int v72; // ecx
  __int64 v73; // rcx
  __int64 v74; // rcx
  int v75; // ecx
  _DWORD *v76; // rcx
  LONG v77; // edx
  unsigned int v78; // r8d
  __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // rcx
  int v82; // ecx
  __int64 v83; // rcx
  __int64 v84; // rcx
  int v85; // ecx
  _DWORD *v86; // rcx
  __int64 v87; // rcx
  __int64 v88; // rcx
  __int64 v89; // rcx
  int v90; // ecx
  __int64 v91; // rcx
  __int64 v92; // rcx
  int v93; // ecx
  _DWORD *v94; // rcx
  __int64 v95; // rcx
  __int64 v96; // rcx
  __int64 v97; // rcx
  int v98; // ecx
  __int64 v99; // rcx
  __int64 v100; // rcx
  int v101; // ecx
  int *v102; // rcx
  int v103; // eax
  int v105; // [rsp+50h] [rbp-B0h]
  int v106; // [rsp+58h] [rbp-A8h]
  int v107; // [rsp+5Ch] [rbp-A4h]
  HBRUSH v108; // [rsp+60h] [rbp-A0h]
  struct tagSIZE v109; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v110; // [rsp+70h] [rbp-90h]
  int v111; // [rsp+74h] [rbp-8Ch]
  unsigned __int16 *v112; // [rsp+78h] [rbp-88h]
  LPCRECT v113; // [rsp+80h] [rbp-80h]
  int v114; // [rsp+88h] [rbp-78h]
  int v115; // [rsp+8Ch] [rbp-74h]
  __int64 v116; // [rsp+90h] [rbp-70h]
  __int64 v117; // [rsp+98h] [rbp-68h]
  _WORD v118[4]; // [rsp+A0h] [rbp-60h] BYREF
  _WORD *v119; // [rsp+A8h] [rbp-58h]
  __int64 v120; // [rsp+B0h] [rbp-50h] BYREF
  int v121; // [rsp+B8h] [rbp-48h]
  int v122; // [rsp+BCh] [rbp-44h]
  int v123[18]; // [rsp+C8h] [rbp-38h] BYREF
  _WORD v124[256]; // [rsp+110h] [rbp+10h] BYREF

  WindowSmIcon = a5;
  v112 = a6;
  v113 = a3;
  v11 = 0;
  v12 = a2;
  left = a3->left;
  v117 = a1;
  v110 = 1;
  v109 = 0LL;
  v111 = 0;
  if ( a3->right <= left )
    return 0LL;
  if ( a1 && !a5 )
  {
    if ( (unsigned int)HasCaptionIcon(a1) && (a7 & 2) == 0 && (*(_BYTE *)(a1 + 54) & 8) != 0 )
      WindowSmIcon = (struct tagCURSOR *)xxxGetWindowSmIcon(a1, a7 & 0x2000);
    v12 = a2;
  }
  v107 = *(_DWORD *)(gpsi + 3572LL);
  if ( (a7 & 1) == 0 )
  {
    if ( (a7 & 0x10) != 0 )
    {
      v15 = *(_DWORD *)(gpsi + 3628LL);
      v16 = *(HBRUSH *)(gpsi + 3816LL);
      goto LABEL_20;
    }
    v17 = *(_DWORD *)(gpsi + 3644LL);
    v15 = *(_DWORD *)(gpsi + 3580LL);
    v18 = *(HBRUSH *)(gpsi + 3720LL);
    goto LABEL_22;
  }
  if ( (a7 & 0x10) == 0 )
  {
    v17 = *(_DWORD *)(gpsi + 3604LL);
    v15 = *(_DWORD *)(gpsi + 3576LL);
    v18 = *(HBRUSH *)(gpsi + 3712LL);
LABEL_22:
    v108 = v18;
    if ( (a7 & 0x20) == 0 )
      goto LABEL_25;
    v11 = 1;
LABEL_24:
    v107 = GreSetBkMode(v12, 1);
    goto LABEL_25;
  }
  if ( *(_WORD *)(gpsi + 7284LL) < 8u
    || (v15 = *(_DWORD *)(gpsi + 3648LL), v15 != *(_DWORD *)(gpsi + 3568LL))
    || v15 == *(_DWORD *)(gpsi + 3588LL) )
  {
    v17 = *(_DWORD *)(gpsi + 3628LL);
    v15 = *(_DWORD *)(gpsi + 3648LL);
    v108 = *(HBRUSH *)(gpsi + 3944LL);
    goto LABEL_24;
  }
  v16 = *(HBRUSH *)(gpsi + 3856LL);
LABEL_20:
  v17 = *(_DWORD *)(gpsi + 3640LL);
  v108 = v16;
LABEL_25:
  v19 = v17;
  v20 = a2;
  v115 = GreSetTextColor(a2, v19);
  v114 = GreSetBkColor(a2, v15);
  if ( WindowSmIcon && (a7 & 2) == 0 )
  {
    if ( (a7 & 4) != 0 )
    {
      Layout = GreGetLayout(a2);
      v22 = Layout;
      v23 = Layout & 1;
      if ( (Layout & 1) != 0 )
        GreSetLayout(a2, 0xFFFFFFFFLL, Layout | 8);
      DrawCaptionIcon(a2, (struct tagRECT *)v113, WindowSmIcon, v108, a7);
      v24 = v23 == 0;
      v20 = a2;
      if ( !v24 )
        GreSetLayout(a2, 0xFFFFFFFFLL, v22);
    }
    else
    {
      v113->left += v113->bottom - v113->top;
    }
  }
  if ( (a7 & 8) == 0 )
    goto LABEL_202;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v27 = v112;
  v28 = ThreadWin32Thread;
  if ( !v112 )
  {
    if ( v117 )
    {
      if ( (a7 & 0x2000) == 0 )
      {
        WindowText = xxxGetWindowText(v117, v124);
LABEL_37:
        v30 = (unsigned __int16)WindowText;
        v106 = WindowText;
        LOWORD(v30) = 2 * WindowText;
LABEL_42:
        v118[0] = v30;
        v119 = v124;
        LOWORD(v30) = v30 + 2;
        v118[1] = v30;
        v112 = v118;
        goto LABEL_46;
      }
      if ( *(_DWORD *)(v117 + 216) )
      {
        WindowText = TextCopy(v117 + 216, v124, 256);
        goto LABEL_37;
      }
    }
    v124[0] = 0;
    v30 = 0LL;
    v106 = 0;
    goto LABEL_42;
  }
  v30 = *v112;
  if ( (unsigned __int64)v112[1] - 2 < v30 )
    v30 = v112[1] - 2LL;
  v31 = *((_QWORD *)v112 + 1);
  v26 = (unsigned __int16)v30 >> 1;
  *v112 = v30;
  v106 = (unsigned __int16)v30 >> 1;
  *(_WORD *)(v31 + 2 * v26) = 0;
LABEL_46:
  if ( a4 )
  {
    v116 = GreSelectFontInternal(v20);
    if ( (unsigned int)GetTextMetricsW(v20, (__int64)v123) )
      v43 = v123[0];
    else
      v43 = *(_DWORD *)(GetDPIServerInfo(v41, v40, v42) + 44);
    v39 = (RECT *)v113;
    v105 = (v113->top + v113->bottom - v43) / 2;
  }
  else
  {
    if ( (a7 & 2) != 0 )
    {
      GetDPIMetrics(v30, v26, v27);
      v35 = *(_DWORD *)(GetDPIMetrics(v33, v32, v34) + 84);
    }
    else
    {
      GetDPIServerInfo(v30, v26, v27);
      v35 = *(_DWORD *)(GetDPIMetrics(v37, v36, v38) + 76);
    }
    v39 = (RECT *)v113;
    v105 = (v113->top + v113->bottom - v35) / 2;
    v116 = GreSelectFontInternal(v20);
  }
  if ( v11 )
    FillCaptionGradient(v20, v39, a7 & 1);
  else
    FillRect(v20, v39, v108);
  if ( v108 == *(HBRUSH *)(gpsi + 3944LL) )
  {
    GreSetTextColor(v20, *(_DWORD *)(gpsi + 3640LL));
    GreSetBkColor(v20, *(_DWORD *)(gpsi + 3636LL));
  }
  v44 = CALL_LPK(v28);
  v45 = (PCWSTR *)v112;
  v46 = (__m128i *)*((_QWORD *)v112 + 1);
  if ( v44 )
    xxxClientGetTextExtentPointW(v20, (const WCHAR *)v46, v106, &v109);
  else
    GreGetTextExtentW(v20, v46, v106, &v109, 1);
  v47 = v117;
  if ( v117 && (*(_BYTE *)(v117 + 49) & 0x20) != 0 )
  {
    TextAlign = GreGetTextAlign(v20);
    v111 = GreSetTextAlign(v20, TextAlign | 0x100u);
  }
  if ( (a7 & 0x4000) != 0 )
    goto LABEL_172;
  if ( v106 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v49) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v50) + 776) & 0x4000) != 0 )
      {
LABEL_71:
        if ( !IsDPIDWMSysMet(0x2DuLL) || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v51) + 776) & 0x2000) == 0 )
          goto LABEL_84;
        v52 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v53 = 0;
        if ( *(_QWORD *)(v52 + 416) )
          v53 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1;
        if ( v53 )
          v54 = (_DWORD *)(gpsi + 2836LL);
        else
LABEL_84:
          v54 = (_DWORD *)(gpsi + 2060LL);
LABEL_85:
        if ( v109.cx <= v39->right - *v54 - v39->left )
          goto LABEL_86;
LABEL_172:
        LODWORD(v120) = 20;
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v95) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v96) + 776) & 0x4000) != 0 )
          {
            goto LABEL_175;
          }
        }
        else if ( !IsDPIDWMSysMet(0x2DuLL)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v99) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v100) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 ? (v101 = 0)
                 : (v101 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 416)
                                                 + 8LL)
                                     + 260LL) & 1),
                   !v101) )
        {
LABEL_175:
          if ( IsDPIDWMSysMet(0x2DuLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v97) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v98 = 0)
              : (v98 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                v98) )
          {
            v102 = (int *)(gpsi + 2836LL);
          }
          else
          {
            v102 = (int *)(gpsi + 2060LL);
          }
          goto LABEL_191;
        }
        v102 = (int *)(gpsi + 2448LL);
LABEL_191:
        v121 = *v102;
        v122 = 0;
        if ( (a7 & 0x4000) != 0 )
        {
          v103 = 1;
        }
        else if ( !v47 || (v103 = 2, (*(_BYTE *)(v47 + 49) & 0x10) == 0) )
        {
          v103 = 0;
        }
        DrawTextExWorker(v20, v103 | 0x8824, (__int64)&v120);
        v110 = 0;
        goto LABEL_197;
      }
    }
    else
    {
      if ( !IsDPIDWMSysMet(v49)
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v55) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v56) + 776) & 0x4000) != 0 )
      {
        goto LABEL_71;
      }
      v57 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v58 = 0;
      if ( *(_QWORD *)(v57 + 416) )
        v58 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                        + 260LL) & 1;
      if ( !v58 )
        goto LABEL_71;
    }
    v54 = (_DWORD *)(gpsi + 2448LL);
    goto LABEL_85;
  }
LABEL_86:
  if ( !v47 || (*(_BYTE *)(v47 + 49) & 0x10) == 0 )
  {
    if ( (unsigned int)CALL_LPK(v28) )
    {
      if ( (unsigned int)IsDPIAbsoluteSysMet(v78) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v79) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v80) + 776) & 0x4000) != 0 )
        {
          goto LABEL_133;
        }
      }
      else if ( !IsDPIDWMSysMet(0x2DuLL)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v83) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v84) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v85 = 0)
               : (v85 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                 !v85) )
      {
LABEL_133:
        if ( IsDPIDWMSysMet(0x2DuLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v81) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v82 = 0)
            : (v82 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              v82) )
        {
          v86 = (_DWORD *)(gpsi + 2836LL);
        }
        else
        {
          v86 = (_DWORD *)(gpsi + 2060LL);
        }
        goto LABEL_149;
      }
      v86 = (_DWORD *)(gpsi + 2448LL);
LABEL_149:
      v68 = *v86 + v39->left;
      goto LABEL_150;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(v78) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v87) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v88) + 776) & 0x4000) != 0 )
      {
        goto LABEL_154;
      }
    }
    else if ( !IsDPIDWMSysMet(0x2DuLL)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v91) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v92) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v93 = 0)
             : (v93 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v93) )
    {
LABEL_154:
      if ( IsDPIDWMSysMet(0x2DuLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v89) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v90 = 0)
          : (v90 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v90) )
      {
        v94 = (_DWORD *)(gpsi + 2836LL);
      }
      else
      {
        v94 = (_DWORD *)(gpsi + 2060LL);
      }
      goto LABEL_170;
    }
    v94 = (_DWORD *)(gpsi + 2448LL);
LABEL_170:
    v77 = *v94 + v39->left;
    goto LABEL_171;
  }
  if ( (unsigned int)CALL_LPK(v28) )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(v59) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v60) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v61) + 776) & 0x4000) != 0 )
      {
        goto LABEL_92;
      }
    }
    else if ( !IsDPIDWMSysMet(0x2DuLL)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v64) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v65) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v66 = 0)
             : (v66 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v66) )
    {
LABEL_92:
      if ( IsDPIDWMSysMet(0x2DuLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v62) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v63 = 0)
          : (v63 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v63) )
      {
        v67 = (_DWORD *)(gpsi + 2836LL);
      }
      else
      {
        v67 = (_DWORD *)(gpsi + 2060LL);
      }
      goto LABEL_108;
    }
    v67 = (_DWORD *)(gpsi + 2448LL);
LABEL_108:
    v68 = v39->right - *v67 - v109.cx;
LABEL_150:
    xxxClientExtTextOutW(v20, v68, v105, 4u, v39, v45[1], v106);
    goto LABEL_197;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(v59) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v69) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v70) + 776) & 0x4000) != 0 )
    {
      goto LABEL_112;
    }
  }
  else if ( !IsDPIDWMSysMet(0x2DuLL)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v73) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v74) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
           ? (v75 = 0)
           : (v75 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1),
             !v75) )
  {
LABEL_112:
    if ( IsDPIDWMSysMet(0x2DuLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v71) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v72 = 0)
        : (v72 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          v72) )
    {
      v76 = (_DWORD *)(gpsi + 2836LL);
    }
    else
    {
      v76 = (_DWORD *)(gpsi + 2060LL);
    }
    goto LABEL_128;
  }
  v76 = (_DWORD *)(gpsi + 2448LL);
LABEL_128:
  v77 = v39->right - v109.cx - *v76;
LABEL_171:
  GreExtTextOutWInternal(v20, v77, v105, 4, v39, (unsigned __int16 *)v45[1], v106, 0LL, 0LL, 0);
LABEL_197:
  if ( v47 && (*(_BYTE *)(v47 + 49) & 0x20) != 0 )
    GreSetTextAlign(v20, v111);
  if ( v116 )
    GreSelectFontInternal(v20);
LABEL_202:
  GreSetTextColor(v20, v115);
  GreSetBkColor(v20, v114);
  if ( v108 == *(HBRUSH *)(gpsi + 3944LL) )
    GreSetBkMode(v20, v107);
  return v110;
}
