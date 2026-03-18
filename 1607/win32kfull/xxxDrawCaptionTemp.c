/*
 * XREFs of xxxDrawCaptionTemp @ 0x1C022FFA0
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C00AD500 (xxxDrawCaptionBar.c)
 *     NtUserDrawCaption @ 0x1C0211CF0 (NtUserDrawCaption.c)
 *     NtUserDrawCaptionTemp @ 0x1C0211E10 (NtUserDrawCaptionTemp.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C0226BB8 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     _GetTextMetricsW @ 0x1C0011560 (_GetTextMetricsW.c)
 *     GreExtTextOutWInternal @ 0x1C00399F8 (GreExtTextOutWInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     GreGetLayout @ 0x1C005D99C (GreGetLayout.c)
 *     GreSetBkMode @ 0x1C005F858 (GreSetBkMode.c)
 *     TextCopy @ 0x1C0067E84 (TextCopy.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     _HasCaptionIcon @ 0x1C006F598 (_HasCaptionIcon.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxGetWindowSmIcon @ 0x1C00AB130 (xxxGetWindowSmIcon.c)
 *     FillRect @ 0x1C00AE8B8 (FillRect.c)
 *     GreSetTextColor @ 0x1C00B112C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00B1198 (GreSetBkColor.c)
 *     xxxClientGetTextExtentPointW @ 0x1C00B9374 (xxxClientGetTextExtentPointW.c)
 *     GreSetTextAlign @ 0x1C00B9838 (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00B98B0 (GreGetTextAlign.c)
 *     CALL_LPK @ 0x1C00B98EC (CALL_LPK.c)
 *     GreGetTextExtentW @ 0x1C0123640 (GreGetTextExtentW.c)
 *     xxxClientExtTextOutW @ 0x1C0151798 (xxxClientExtTextOutW.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     xxxGetWindowText @ 0x1C01FB880 (xxxGetWindowText.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C022E79C (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z @ 0x1C022F174 (-FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z.c)
 *     DrawTextExWorker @ 0x1C0247624 (DrawTextExWorker.c)
 *     GreSelectFontInternal @ 0x1C0292FA8 (GreSelectFontInternal.c)
 */

__int64 __fastcall xxxDrawCaptionTemp(
        struct tagWND *a1,
        HDC a2,
        struct tagRECT *a3,
        __int64 a4,
        struct tagCURSOR *a5,
        unsigned __int16 *a6,
        __int16 a7)
{
  struct tagCURSOR *WindowSmIcon; // rsi
  LONG left; // eax
  int v13; // ebx
  HBRUSH v14; // rax
  int v15; // edi
  HBRUSH v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int Layout; // eax
  unsigned int v21; // ebx
  int v22; // edi
  struct tagCURSOR *v23; // r8
  struct tagRECT *v24; // rsi
  __int64 v25; // rdx
  __int64 ThreadWin32Thread; // rdi
  int WindowText; // eax
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // ecx
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // r13d
  int v36; // ecx
  int v37; // eax
  WCHAR *v38; // rdx
  struct tagWND *v39; // rbx
  int TextAlign; // eax
  __int64 v41; // rdx
  unsigned __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // r8
  int v54; // ecx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // r8
  int v64; // ecx
  _DWORD *v65; // rcx
  unsigned int v66; // r8d
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // r9
  int v81; // ecx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rdx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  int v92; // ecx
  _DWORD *v93; // rcx
  unsigned int v94; // edx
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rdx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rdx
  __int64 v107; // r8
  __int64 v108; // r9
  int v109; // ecx
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rdx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // rdx
  __int64 v118; // r8
  __int64 v119; // r9
  int v120; // ecx
  _DWORD *v121; // rcx
  LONG v122; // edx
  unsigned int v123; // r8d
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // rdx
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 v135; // rdx
  __int64 v136; // r8
  __int64 v137; // r9
  int v138; // ecx
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 v143; // rdx
  __int64 v144; // r8
  __int64 v145; // r9
  __int64 v146; // rdx
  __int64 v147; // r8
  __int64 v148; // r9
  int v149; // ecx
  _DWORD *v150; // rcx
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // r8
  __int64 v158; // r9
  __int64 v159; // rdx
  __int64 v160; // r8
  __int64 v161; // r9
  __int64 v162; // rdx
  __int64 v163; // r8
  __int64 v164; // r9
  int v165; // ecx
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // r8
  __int64 v169; // r9
  __int64 v170; // rdx
  __int64 v171; // r8
  __int64 v172; // r9
  __int64 v173; // rdx
  __int64 v174; // r8
  __int64 v175; // r9
  int v176; // ecx
  _DWORD *v177; // rcx
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // r8
  __int64 v181; // r9
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // r8
  __int64 v185; // r9
  __int64 v186; // rdx
  __int64 v187; // r8
  __int64 v188; // r9
  __int64 v189; // rdx
  __int64 v190; // r8
  __int64 v191; // r9
  int v192; // ecx
  __int64 v193; // rdx
  __int64 v194; // rcx
  __int64 v195; // r8
  __int64 v196; // r9
  __int64 v197; // rdx
  __int64 v198; // r8
  __int64 v199; // r9
  __int64 v200; // rdx
  __int64 v201; // r8
  __int64 v202; // r9
  int v203; // ecx
  int *v204; // rcx
  int v205; // eax
  int v207; // [rsp+50h] [rbp-B0h]
  int v208; // [rsp+58h] [rbp-A8h]
  _WORD *v209; // [rsp+60h] [rbp-A0h]
  HBRUSH v210; // [rsp+68h] [rbp-98h]
  int v211; // [rsp+70h] [rbp-90h]
  struct tagSIZE v212; // [rsp+78h] [rbp-88h] BYREF
  int v213; // [rsp+80h] [rbp-80h]
  unsigned int v214; // [rsp+84h] [rbp-7Ch]
  int v215; // [rsp+88h] [rbp-78h]
  int v216; // [rsp+8Ch] [rbp-74h]
  struct tagWND *v217; // [rsp+90h] [rbp-70h]
  __int64 v218; // [rsp+98h] [rbp-68h]
  _WORD v219[4]; // [rsp+A0h] [rbp-60h] BYREF
  _WORD *v220; // [rsp+A8h] [rbp-58h]
  __int64 v221; // [rsp+B0h] [rbp-50h] BYREF
  int v222; // [rsp+B8h] [rbp-48h]
  int v223; // [rsp+BCh] [rbp-44h]
  _DWORD v224[18]; // [rsp+C8h] [rbp-38h] BYREF
  _WORD v225[256]; // [rsp+110h] [rbp+10h] BYREF

  WindowSmIcon = a5;
  v209 = a6;
  left = a3->left;
  v217 = a1;
  v214 = 1;
  v211 = 0;
  v212 = 0LL;
  v213 = 0;
  if ( a3->right <= left )
    return 0LL;
  if ( a1 && !a5 && (unsigned int)HasCaptionIcon((__int64)a1) && (a7 & 2) == 0 && (*((_BYTE *)a1 + 54) & 8) != 0 )
    WindowSmIcon = (struct tagCURSOR *)xxxGetWindowSmIcon(a1, a7 & 0x2000);
  v208 = *(_DWORD *)(gpsi + 4964LL);
  if ( (a7 & 1) == 0 )
  {
    if ( (a7 & 0x10) != 0 )
    {
      v13 = *(_DWORD *)(gpsi + 5020LL);
      v14 = *(HBRUSH *)(gpsi + 5208LL);
      goto LABEL_19;
    }
    v15 = *(_DWORD *)(gpsi + 5036LL);
    v13 = *(_DWORD *)(gpsi + 4972LL);
    v16 = *(HBRUSH *)(gpsi + 5112LL);
    goto LABEL_21;
  }
  if ( (a7 & 0x10) == 0 )
  {
    v15 = *(_DWORD *)(gpsi + 4996LL);
    v13 = *(_DWORD *)(gpsi + 4968LL);
    v16 = *(HBRUSH *)(gpsi + 5104LL);
LABEL_21:
    v210 = v16;
    if ( (a7 & 0x20) == 0 )
      goto LABEL_24;
    v211 = 1;
LABEL_23:
    v208 = GreSetBkMode(a2, 1);
    goto LABEL_24;
  }
  if ( *(_WORD *)(gpsi + 8676LL) < 8u
    || (v13 = *(_DWORD *)(gpsi + 5040LL), v13 != *(_DWORD *)(gpsi + 4960LL))
    || v13 == *(_DWORD *)(gpsi + 4980LL) )
  {
    v15 = *(_DWORD *)(gpsi + 5020LL);
    v13 = *(_DWORD *)(gpsi + 5040LL);
    v210 = *(HBRUSH *)(gpsi + 5336LL);
    goto LABEL_23;
  }
  v14 = *(HBRUSH *)(gpsi + 5248LL);
LABEL_19:
  v15 = *(_DWORD *)(gpsi + 5032LL);
  v210 = v14;
LABEL_24:
  v215 = GreSetTextColor(a2, v15);
  v216 = GreSetBkColor(a2, v13);
  if ( !WindowSmIcon || (a7 & 2) != 0 )
  {
    v24 = a3;
  }
  else if ( (a7 & 4) != 0 )
  {
    Layout = GreGetLayout(a2);
    v21 = Layout;
    v22 = Layout & 1;
    if ( (Layout & 1) != 0 )
      GreSetLayout(a2, 0xFFFFFFFFLL, Layout | 8);
    v23 = WindowSmIcon;
    v24 = a3;
    DrawCaptionIcon(a2, a3, v23, v210, a7);
    if ( v22 )
      GreSetLayout(a2, 0xFFFFFFFFLL, v21);
  }
  else
  {
    v24 = a3;
    a3->left += a3->bottom - a3->top;
  }
  if ( (a7 & 8) == 0 )
    goto LABEL_193;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19);
  if ( !a6 )
  {
    if ( v217 )
    {
      if ( (a7 & 0x2000) == 0 )
      {
        WindowText = xxxGetWindowText((__int64)v217, v225);
LABEL_39:
        v28 = (unsigned __int16)WindowText;
        v207 = WindowText;
        LOWORD(v28) = 2 * WindowText;
LABEL_43:
        v219[0] = v28;
        v220 = v225;
        LOWORD(v28) = v28 + 2;
        v219[1] = v28;
        v209 = v219;
        goto LABEL_47;
      }
      if ( *((_DWORD *)v217 + 54) )
      {
        WindowText = TextCopy((__int64)v217 + 216, v225, 256);
        goto LABEL_39;
      }
    }
    v225[0] = 0;
    v28 = 0LL;
    v207 = 0;
    goto LABEL_43;
  }
  v28 = *a6;
  if ( (unsigned __int64)a6[1] - 2 < v28 )
    v28 = a6[1] - 2LL;
  v29 = *((_QWORD *)a6 + 1);
  v25 = (unsigned __int16)v28 >> 1;
  *a6 = v28;
  v207 = (unsigned __int16)v28 >> 1;
  *(_WORD *)(v29 + 2 * v25) = 0;
LABEL_47:
  if ( a4 )
  {
    v218 = GreSelectFontInternal(a2);
    if ( (unsigned int)GetTextMetricsW(a2, (__int64)v224) )
      v36 = v224[0];
    else
      v36 = *(_DWORD *)(GetDPIServerInfo() + 44);
    v35 = (v24->top + v24->bottom - v36) / 2;
  }
  else
  {
    if ( (a7 & 2) != 0 )
    {
      GetDPIMetrics(v28, v25);
      v32 = *(_DWORD *)(GetDPIMetrics(v31, v30) + 84);
    }
    else
    {
      GetDPIServerInfo();
      v32 = *(_DWORD *)(GetDPIMetrics(v34, v33) + 76);
    }
    v35 = (v24->top + v24->bottom - v32) / 2;
    v218 = GreSelectFontInternal(a2);
  }
  if ( v211 )
    FillCaptionGradient(a2, v24, a7 & 1);
  else
    FillRect(a2, v24, v210);
  if ( v210 == *(HBRUSH *)(gpsi + 5336LL) )
  {
    GreSetTextColor(a2, *(_DWORD *)(gpsi + 5032LL));
    GreSetBkColor(a2, *(_DWORD *)(gpsi + 5028LL));
  }
  v37 = CALL_LPK(ThreadWin32Thread);
  v38 = (WCHAR *)*((_QWORD *)v209 + 1);
  if ( v37 )
    xxxClientGetTextExtentPointW(a2, v38, v207, &v212);
  else
    GreGetTextExtentW(a2, v38, v207, &v212, 1);
  v39 = v217;
  if ( v217 && (*((_BYTE *)v217 + 49) & 0x20) != 0 )
  {
    TextAlign = GreGetTextAlign(a2);
    v213 = GreSetTextAlign(a2, TextAlign | 0x100u);
  }
  if ( (a7 & 0x4000) != 0 )
    goto LABEL_165;
  if ( v207 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v42, v41, v43, v44) & 0xF) != 0 )
        goto LABEL_71;
    }
    else if ( !IsDPIDWMSysMet(v42)
           || (W32GetCurrentThreadDpiAwarenessContext(v56, v55, v57, v58) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v59, v60, v61) + 408)
             ? (v64 = 0)
             : (v64 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v62,
                                                            v63,
                                                            0LL)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v64) )
    {
LABEL_71:
      if ( IsDPIDWMSysMet(0x2DuLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v46, v45, v47, v48) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v49, v50, v51) + 408)
          ? (v54 = 0)
          : (v54 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v52,
                                                         v53,
                                                         0LL)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v54) )
      {
        v65 = (_DWORD *)(gpsi + 2836LL);
      }
      else
      {
        v65 = (_DWORD *)(gpsi + 2060LL);
      }
LABEL_86:
      if ( v212.cx <= v24->right - *v65 - v24->left )
        goto LABEL_87;
LABEL_165:
      LODWORD(v221) = 20;
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v179, v178, v180, v181) & 0xF) != 0 )
          goto LABEL_167;
      }
      else if ( !IsDPIDWMSysMet(0x2DuLL)
             || (W32GetCurrentThreadDpiAwarenessContext(v194, v193, v195, v196) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v197, v198, v199) + 408)
               ? (v203 = 0)
               : (v203 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v200,
                                                               v201,
                                                               v202)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                 !v203) )
      {
LABEL_167:
        if ( IsDPIDWMSysMet(0x2DuLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v183, v182, v184, v185) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v186, v187, v188) + 408)
            ? (v192 = 0)
            : (v192 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v189,
                                                            v190,
                                                            v191)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
              v192) )
        {
          v204 = (int *)(gpsi + 2836LL);
        }
        else
        {
          v204 = (int *)(gpsi + 2060LL);
        }
        goto LABEL_182;
      }
      v204 = (int *)(gpsi + 2448LL);
LABEL_182:
      v222 = *v204;
      v223 = 0;
      if ( (a7 & 0x4000) != 0 )
      {
        v205 = 1;
      }
      else if ( !v39 || (v205 = 2, (*((_BYTE *)v39 + 49) & 0x10) == 0) )
      {
        v205 = 0;
      }
      DrawTextExWorker(a2, v205 | 0x8824, (__int64)&v221);
      v214 = 0;
      goto LABEL_188;
    }
    v65 = (_DWORD *)(gpsi + 2448LL);
    goto LABEL_86;
  }
LABEL_87:
  if ( !v39 || (*((_BYTE *)v39 + 49) & 0x10) == 0 )
  {
    if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
    {
      if ( (unsigned int)IsDPIAbsoluteSysMet(v123) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v125, v124, v126, v127) & 0xF) != 0 )
          goto LABEL_129;
      }
      else if ( !IsDPIDWMSysMet(0x2DuLL)
             || (W32GetCurrentThreadDpiAwarenessContext(v140, v139, v141, v142) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v143, v144, v145) + 408)
               ? (v149 = 0)
               : (v149 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v146,
                                                               v147,
                                                               v148)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                 !v149) )
      {
LABEL_129:
        if ( IsDPIDWMSysMet(0x2DuLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v129, v128, v130, v131) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v132, v133, v134) + 408)
            ? (v138 = 0)
            : (v138 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v135,
                                                            v136,
                                                            v137)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
              v138) )
        {
          v150 = (_DWORD *)(gpsi + 2836LL);
        }
        else
        {
          v150 = (_DWORD *)(gpsi + 2060LL);
        }
        goto LABEL_144;
      }
      v150 = (_DWORD *)(gpsi + 2448LL);
LABEL_144:
      v94 = *v150 + v24->left;
      goto LABEL_145;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(v123) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v152, v151, v153, v154) & 0xF) != 0 )
        goto LABEL_148;
    }
    else if ( !IsDPIDWMSysMet(0x2DuLL)
           || (W32GetCurrentThreadDpiAwarenessContext(v167, v166, v168, v169) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v170, v171, v172) + 408)
             ? (v176 = 0)
             : (v176 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v173,
                                                             v174,
                                                             v175)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
               !v176) )
    {
LABEL_148:
      if ( IsDPIDWMSysMet(0x2DuLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v156, v155, v157, v158) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v159, v160, v161) + 408)
          ? (v165 = 0)
          : (v165 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v162,
                                                          v163,
                                                          v164)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v165) )
      {
        v177 = (_DWORD *)(gpsi + 2836LL);
      }
      else
      {
        v177 = (_DWORD *)(gpsi + 2060LL);
      }
      goto LABEL_163;
    }
    v177 = (_DWORD *)(gpsi + 2448LL);
LABEL_163:
    v122 = *v177 + v24->left;
    goto LABEL_164;
  }
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(v66) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v68, v67, v69, v70) & 0xF) != 0 )
        goto LABEL_92;
    }
    else if ( !IsDPIDWMSysMet(0x2DuLL)
           || (W32GetCurrentThreadDpiAwarenessContext(v83, v82, v84, v85) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v86, v87, v88) + 408)
             ? (v92 = 0)
             : (v92 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v89,
                                                            v90,
                                                            v91)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v92) )
    {
LABEL_92:
      if ( IsDPIDWMSysMet(0x2DuLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v72, v71, v73, v74) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v75, v76, v77) + 408)
          ? (v81 = 0)
          : (v81 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v78,
                                                         v79,
                                                         v80)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v81) )
      {
        v93 = (_DWORD *)(gpsi + 2836LL);
      }
      else
      {
        v93 = (_DWORD *)(gpsi + 2060LL);
      }
      goto LABEL_107;
    }
    v93 = (_DWORD *)(gpsi + 2448LL);
LABEL_107:
    v94 = v24->right - *v93 - v212.cx;
LABEL_145:
    xxxClientExtTextOutW(a2, v94, v35, 4u, v24, *((PCWSTR *)v209 + 1), v207);
    goto LABEL_188;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(v66) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v96, v95, v97, v98) & 0xF) != 0 )
      goto LABEL_110;
  }
  else if ( !IsDPIDWMSysMet(0x2DuLL)
         || (W32GetCurrentThreadDpiAwarenessContext(v111, v110, v112, v113) & 0xF) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v114, v115, v116) + 408)
           ? (v120 = 0)
           : (v120 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v117,
                                                           v118,
                                                           v119)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
             !v120) )
  {
LABEL_110:
    if ( IsDPIDWMSysMet(0x2DuLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v100, v99, v101, v102) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v103, v104, v105) + 408)
        ? (v109 = 0)
        : (v109 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                        (__int64)KeGetCurrentThread(),
                                                        v106,
                                                        v107,
                                                        v108)
                                                    + 408)
                                        + 8LL)
                            + 244LL) & 1),
          v109) )
    {
      v121 = (_DWORD *)(gpsi + 2836LL);
    }
    else
    {
      v121 = (_DWORD *)(gpsi + 2060LL);
    }
    goto LABEL_125;
  }
  v121 = (_DWORD *)(gpsi + 2448LL);
LABEL_125:
  v122 = v24->right - v212.cx - *v121;
LABEL_164:
  GreExtTextOutWInternal(a2, v122, v35, 4, v24, *((unsigned __int16 **)v209 + 1), v207, 0LL, 0LL, 0);
LABEL_188:
  if ( v39 && (*((_BYTE *)v39 + 49) & 0x20) != 0 )
    GreSetTextAlign(a2, v213);
  if ( v218 )
    GreSelectFontInternal(a2);
LABEL_193:
  GreSetTextColor(a2, v215);
  GreSetBkColor(a2, v216);
  if ( v210 == *(HBRUSH *)(gpsi + 5336LL) )
    GreSetBkMode(a2, v208);
  return v214;
}
