/*
 * XREFs of xxxDrawCaptionTemp @ 0x1C0237D58
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C00CAFD0 (xxxDrawCaptionBar.c)
 *     NtUserDrawCaption @ 0x1C0219030 (NtUserDrawCaption.c)
 *     NtUserDrawCaptionTemp @ 0x1C0219150 (NtUserDrawCaptionTemp.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C0226E94 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     GreSetTextColor @ 0x1C00155BC (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0015630 (GreSetBkColor.c)
 *     GreSelectFont @ 0x1C0018350 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C0018468 (GreSetBkMode.c)
 *     FillRect @ 0x1C003C7F0 (FillRect.c)
 *     GreExtTextOutWInternal @ 0x1C0040128 (GreExtTextOutWInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     GreGetLayout @ 0x1C006B8B4 (GreGetLayout.c)
 *     _HasCaptionIcon @ 0x1C00711D8 (_HasCaptionIcon.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     xxxGetWindowSmIcon @ 0x1C007EE70 (xxxGetWindowSmIcon.c)
 *     xxxClientGetTextExtentPointW @ 0x1C00CCAFC (xxxClientGetTextExtentPointW.c)
 *     GreSetTextAlign @ 0x1C00CCFB8 (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00CD038 (GreGetTextAlign.c)
 *     CALL_LPK @ 0x1C00CD148 (CALL_LPK.c)
 *     TextCopy @ 0x1C00E5268 (TextCopy.c)
 *     _GetTextMetricsW @ 0x1C00E7D40 (_GetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1C01027C0 (GreGetTextExtentW.c)
 *     xxxClientExtTextOutW @ 0x1C014C20C (xxxClientExtTextOutW.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     xxxGetWindowText @ 0x1C0204530 (xxxGetWindowText.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0235EA4 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z @ 0x1C0236A84 (-FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z.c)
 *     DrawTextExWorker @ 0x1C024B318 (DrawTextExWorker.c)
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
  HBRUSH v18; // rcx
  int v19; // edx
  HDC v20; // rdi
  unsigned int Layout; // eax
  unsigned int v22; // ebx
  int v23; // edi
  bool v24; // zf
  __int64 ThreadWin32Thread; // rax
  __int64 v26; // r8
  __int64 v27; // rsi
  unsigned int WindowText; // eax
  unsigned __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // ecx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  RECT *v39; // r12
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // ecx
  int v45; // eax
  WCHAR *v46; // rdx
  int v47; // r13d
  unsigned int v48; // ebx
  __int64 v49; // r15
  int TextAlign; // eax
  unsigned __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rax
  int v55; // ecx
  _DWORD *v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rax
  int v60; // ecx
  unsigned int v61; // r8d
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rcx
  int v65; // ecx
  __int64 v66; // rcx
  __int64 v67; // rcx
  int v68; // ecx
  _DWORD *v69; // rcx
  unsigned int v70; // edx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rcx
  int v74; // ecx
  __int64 v75; // rcx
  __int64 v76; // rcx
  int v77; // ecx
  _DWORD *v78; // rcx
  LONG v79; // edx
  unsigned int v80; // r8d
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
  __int64 v97; // rcx
  __int64 v98; // rcx
  __int64 v99; // rcx
  int v100; // ecx
  __int64 v101; // rcx
  __int64 v102; // rcx
  int v103; // ecx
  int *v104; // rcx
  int v105; // eax
  int v107; // [rsp+50h] [rbp-B0h]
  unsigned int v108; // [rsp+58h] [rbp-A8h]
  int v109; // [rsp+5Ch] [rbp-A4h]
  _WORD *v110; // [rsp+60h] [rbp-A0h]
  HBRUSH v111; // [rsp+68h] [rbp-98h]
  struct tagSIZE v112; // [rsp+70h] [rbp-90h] BYREF
  int v113; // [rsp+78h] [rbp-88h]
  LPCRECT v114; // [rsp+80h] [rbp-80h]
  int v115; // [rsp+88h] [rbp-78h]
  int v116; // [rsp+8Ch] [rbp-74h]
  __int64 v117; // [rsp+90h] [rbp-70h]
  __int64 v118; // [rsp+98h] [rbp-68h]
  _WORD v119[4]; // [rsp+A0h] [rbp-60h] BYREF
  _WORD *v120; // [rsp+A8h] [rbp-58h]
  __int64 v121; // [rsp+B0h] [rbp-50h] BYREF
  int v122; // [rsp+B8h] [rbp-48h]
  int v123; // [rsp+BCh] [rbp-44h]
  _DWORD v124[18]; // [rsp+C8h] [rbp-38h] BYREF
  _WORD v125[256]; // [rsp+110h] [rbp+10h] BYREF

  WindowSmIcon = a5;
  v110 = a6;
  v114 = a3;
  v11 = 0;
  v12 = a2;
  left = a3->left;
  v117 = a1;
  v112 = 0LL;
  v113 = 0;
  if ( a3->right <= left )
    return 0LL;
  if ( a1 && !a5 )
  {
    if ( (unsigned int)HasCaptionIcon(a1) && (a7 & 2) == 0 && (*(_BYTE *)(a1 + 54) & 8) != 0 )
      WindowSmIcon = (struct tagCURSOR *)xxxGetWindowSmIcon(a1, a7 & 0x2000);
    v12 = a2;
  }
  v109 = *(_DWORD *)(gpsi + 3572LL);
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
    v111 = v18;
    if ( (a7 & 0x20) == 0 )
      goto LABEL_25;
    v11 = 1;
LABEL_24:
    v109 = GreSetBkMode(v12, 1);
    goto LABEL_25;
  }
  if ( *(_WORD *)(gpsi + 7284LL) < 8u
    || (v15 = *(_DWORD *)(gpsi + 3648LL), v15 != *(_DWORD *)(gpsi + 3568LL))
    || v15 == *(_DWORD *)(gpsi + 3588LL) )
  {
    v17 = *(_DWORD *)(gpsi + 3628LL);
    v15 = *(_DWORD *)(gpsi + 3648LL);
    v111 = *(HBRUSH *)(gpsi + 3944LL);
    goto LABEL_24;
  }
  v16 = *(HBRUSH *)(gpsi + 3856LL);
LABEL_20:
  v17 = *(_DWORD *)(gpsi + 3640LL);
  v111 = v16;
LABEL_25:
  v19 = v17;
  v20 = a2;
  v115 = GreSetTextColor(a2, v19);
  v116 = GreSetBkColor(a2, v15);
  if ( WindowSmIcon && (a7 & 2) == 0 )
  {
    if ( (a7 & 4) != 0 )
    {
      Layout = GreGetLayout(a2);
      v22 = Layout;
      v23 = Layout & 1;
      if ( (Layout & 1) != 0 )
        GreSetLayout(a2, 0xFFFFFFFFLL, Layout | 8);
      DrawCaptionIcon(a2, (struct tagRECT *)v114, WindowSmIcon, v111, a7);
      v24 = v23 == 0;
      v20 = a2;
      if ( !v24 )
        GreSetLayout(a2, 0xFFFFFFFFLL, v22);
    }
    else
    {
      v114->left += v114->bottom - v114->top;
    }
  }
  if ( (a7 & 8) != 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v26 = 0LL;
    v27 = ThreadWin32Thread;
    if ( a6 )
    {
      v29 = *a6;
      if ( (unsigned __int64)a6[1] - 2 < v29 )
        v29 = a6[1] - 2LL;
      v31 = *((_QWORD *)a6 + 1);
      v30 = (unsigned __int16)v29 >> 1;
      *a6 = v29;
      v108 = (unsigned __int16)v29 >> 1;
      *(_WORD *)(v31 + 2 * v30) = 0;
LABEL_46:
      if ( a4 )
      {
        v118 = GreSelectFont((__int64)v20, a4);
        if ( (unsigned int)GetTextMetricsW(v20, (__int64)v124) )
          v44 = v124[0];
        else
          v44 = *(_DWORD *)(GetDPIServerInfo(v42, v41, v43) + 44);
        v39 = (RECT *)v114;
        v107 = (v114->top + v114->bottom - v44) / 2;
      }
      else
      {
        if ( (a7 & 2) != 0 )
        {
          v30 = *(_QWORD *)(GetDPIMetrics(v29, 2LL, v26) + 40);
          v35 = *(_DWORD *)(GetDPIMetrics(v33, v32, v34) + 84);
        }
        else
        {
          v30 = *(_QWORD *)(GetDPIServerInfo(v29, 2LL, v26) + 8);
          v35 = *(_DWORD *)(GetDPIMetrics(v37, v36, v38) + 76);
        }
        v39 = (RECT *)v114;
        v107 = (v114->top + v114->bottom - v35) / 2;
        v40 = GreSelectFont((__int64)v20, v30);
        LODWORD(v30) = v108;
        v118 = v40;
      }
      if ( v11 )
        FillCaptionGradient(v20, v39, a7 & 1);
      else
        FillRect(v20, v39, v111);
      if ( v111 == *(HBRUSH *)(gpsi + 3944LL) )
      {
        GreSetTextColor(v20, *(_DWORD *)(gpsi + 3640LL));
        GreSetBkColor(v20, *(_DWORD *)(gpsi + 3636LL));
      }
      v45 = CALL_LPK(v27);
      v46 = (WCHAR *)*((_QWORD *)v110 + 1);
      if ( v45 )
      {
        xxxClientGetTextExtentPointW(v20, v46, v30, &v112);
        v47 = v108;
        v48 = 1;
      }
      else
      {
        v47 = v108;
        v48 = 1;
        GreGetTextExtentW(v20, v46, v108, &v112, 1);
      }
      v49 = v117;
      if ( v117 && (*(_BYTE *)(v117 + 49) & 0x20) != 0 )
      {
        TextAlign = GreGetTextAlign(v20);
        v113 = GreSetTextAlign(v20, TextAlign | 0x100u);
      }
      if ( (a7 & 0x4000) != 0 )
        goto LABEL_172;
      if ( !v47 )
      {
LABEL_86:
        if ( v49 && (*(_BYTE *)(v49 + 49) & 0x10) != 0 )
        {
          if ( (unsigned int)CALL_LPK(v27) )
          {
            if ( (unsigned int)IsDPIAbsoluteSysMet(v61) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v62) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v63) + 776) & 0x4000) != 0 )
              {
                goto LABEL_92;
              }
            }
            else if ( !IsDPIDWMSysMet(0x2DuLL)
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v66) + 776) & 0x2000) != 0
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v67) + 776) & 0x4000) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                     ? (v68 = 0)
                     : (v68 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                + 408)
                                                    + 8LL)
                                        + 244LL) & 1),
                       !v68) )
            {
LABEL_92:
              if ( IsDPIDWMSysMet(0x2DuLL)
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v64) + 776) & 0x2000) != 0
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  ? (v65 = 0)
                  : (v65 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                    v65) )
              {
                v69 = (_DWORD *)(gpsi + 2836LL);
              }
              else
              {
                v69 = (_DWORD *)(gpsi + 2060LL);
              }
              goto LABEL_108;
            }
            v69 = (_DWORD *)(gpsi + 2448LL);
LABEL_108:
            v70 = v39->right - *v69 - v112.cx;
LABEL_150:
            xxxClientExtTextOutW(v20, v70, v107, 4u, v39, *((PCWSTR *)v110 + 1), v47);
            goto LABEL_197;
          }
          if ( (unsigned int)IsDPIAbsoluteSysMet(v61) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v71) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v72) + 776) & 0x4000) != 0 )
            {
              goto LABEL_112;
            }
          }
          else if ( !IsDPIDWMSysMet(0x2DuLL)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v75) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v76) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                   ? (v77 = 0)
                   : (v77 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                     !v77) )
          {
LABEL_112:
            if ( IsDPIDWMSysMet(0x2DuLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v73) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v74 = 0)
                : (v74 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  v74) )
            {
              v78 = (_DWORD *)(gpsi + 2836LL);
            }
            else
            {
              v78 = (_DWORD *)(gpsi + 2060LL);
            }
            goto LABEL_128;
          }
          v78 = (_DWORD *)(gpsi + 2448LL);
LABEL_128:
          v79 = v39->right - v112.cx - *v78;
LABEL_171:
          GreExtTextOutWInternal(v20, v79, v107, 4, v39, *((unsigned __int16 **)v110 + 1), v47, 0LL, 0LL, 0);
LABEL_197:
          if ( v49 && (*(_BYTE *)(v49 + 49) & 0x20) != 0 )
            GreSetTextAlign(v20, v113);
          if ( v118 )
            GreSelectFont((__int64)v20, v118);
          goto LABEL_203;
        }
        if ( (unsigned int)CALL_LPK(v27) )
        {
          if ( (unsigned int)IsDPIAbsoluteSysMet(v80) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v81) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v82) + 776) & 0x4000) != 0 )
            {
              goto LABEL_133;
            }
          }
          else if ( !IsDPIDWMSysMet(0x2DuLL)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v85) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v86) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                   ? (v87 = 0)
                   : (v87 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                     !v87) )
          {
LABEL_133:
            if ( IsDPIDWMSysMet(0x2DuLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v83) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v84 = 0)
                : (v84 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  v84) )
            {
              v88 = (_DWORD *)(gpsi + 2836LL);
            }
            else
            {
              v88 = (_DWORD *)(gpsi + 2060LL);
            }
            goto LABEL_149;
          }
          v88 = (_DWORD *)(gpsi + 2448LL);
LABEL_149:
          v70 = *v88 + v39->left;
          goto LABEL_150;
        }
        if ( (unsigned int)IsDPIAbsoluteSysMet(v80) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v89) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v90) + 776) & 0x4000) != 0 )
          {
            goto LABEL_154;
          }
        }
        else if ( !IsDPIDWMSysMet(0x2DuLL)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v93) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v94) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                 ? (v95 = 0)
                 : (v95 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                   !v95) )
        {
LABEL_154:
          if ( IsDPIDWMSysMet(0x2DuLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v91) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v92 = 0)
              : (v92 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v92) )
          {
            v96 = (_DWORD *)(gpsi + 2836LL);
          }
          else
          {
            v96 = (_DWORD *)(gpsi + 2060LL);
          }
          goto LABEL_170;
        }
        v96 = (_DWORD *)(gpsi + 2448LL);
LABEL_170:
        v79 = *v96 + v39->left;
        goto LABEL_171;
      }
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v51) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v52) + 776) & 0x4000) != 0 )
        {
LABEL_71:
          if ( !IsDPIDWMSysMet(0x2DuLL) || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v53) + 776) & 0x2000) == 0 )
            goto LABEL_84;
          v54 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v55 = 0;
          if ( *(_QWORD *)(v54 + 408) )
            v55 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                            + 244LL) & 1;
          if ( v55 )
            v56 = (_DWORD *)(gpsi + 2836LL);
          else
LABEL_84:
            v56 = (_DWORD *)(gpsi + 2060LL);
LABEL_85:
          if ( v112.cx <= v39->right - *v56 - v39->left )
            goto LABEL_86;
LABEL_172:
          LODWORD(v121) = 20;
          if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v97) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v98) + 776) & 0x4000) != 0 )
            {
              goto LABEL_175;
            }
          }
          else if ( !IsDPIDWMSysMet(0x2DuLL)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v101) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v102) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                   ? (v103 = 0)
                   : (v103 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                               + 408)
                                                   + 8LL)
                                       + 244LL) & 1),
                     !v103) )
          {
LABEL_175:
            if ( IsDPIDWMSysMet(0x2DuLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v99) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v100 = 0)
                : (v100 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  v100) )
            {
              v104 = (int *)(gpsi + 2836LL);
            }
            else
            {
              v104 = (int *)(gpsi + 2060LL);
            }
            goto LABEL_191;
          }
          v104 = (int *)(gpsi + 2448LL);
LABEL_191:
          v122 = *v104;
          v123 = 0;
          if ( (a7 & 0x4000) != 0 )
          {
            v105 = 1;
          }
          else if ( !v49 || (v105 = 2, (*(_BYTE *)(v49 + 49) & 0x10) == 0) )
          {
            v105 = 0;
          }
          DrawTextExWorker(v20, v105 | 0x8824, (__int64)&v121);
          v48 = 0;
          goto LABEL_197;
        }
      }
      else
      {
        if ( !IsDPIDWMSysMet(v51)
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v57) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v58) + 776) & 0x4000) != 0 )
        {
          goto LABEL_71;
        }
        v59 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v60 = 0;
        if ( *(_QWORD *)(v59 + 408) )
          v60 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                          + 244LL) & 1;
        if ( !v60 )
          goto LABEL_71;
      }
      v56 = (_DWORD *)(gpsi + 2448LL);
      goto LABEL_85;
    }
    if ( v117 )
    {
      if ( (a7 & 0x2000) == 0 )
      {
        WindowText = xxxGetWindowText(v117, v125);
LABEL_38:
        v29 = (unsigned __int16)WindowText;
        v108 = WindowText;
        LOWORD(v29) = 2 * WindowText;
        LODWORD(v30) = WindowText;
LABEL_42:
        v119[0] = v29;
        v120 = v125;
        LOWORD(v29) = v29 + 2;
        v110 = v119;
        v119[1] = v29;
        goto LABEL_46;
      }
      if ( *(_DWORD *)(v117 + 216) )
      {
        WindowText = TextCopy(v117 + 216, v125, 256);
        goto LABEL_38;
      }
    }
    LODWORD(v30) = 0;
    v125[0] = 0;
    v108 = 0;
    v29 = 0LL;
    goto LABEL_42;
  }
  v48 = 1;
LABEL_203:
  GreSetTextColor(v20, v115);
  GreSetBkColor(v20, v116);
  if ( v111 == *(HBRUSH *)(gpsi + 3944LL) )
    GreSetBkMode(v20, v109);
  return v48;
}
