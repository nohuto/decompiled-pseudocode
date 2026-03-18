/*
 * XREFs of xxxRealDrawMenuItem @ 0x1C0242300
 * Callers:
 *     xxxDrawState @ 0x1C023DBC0 (xxxDrawState.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C0014EE0 (GreExtGetObjectW.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     NtGdiAlphaBlend @ 0x1C0023B30 (NtGdiAlphaBlend.c)
 *     _DrawIconEx @ 0x1C005137C (_DrawIconEx.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0051984 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z.c)
 *     ?MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0051CA4 (-MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     MNGetpItemIndex @ 0x1C00557A0 (MNGetpItemIndex.c)
 *     xxxGetWindowSmIcon @ 0x1C007E1EC (xxxGetWindowSmIcon.c)
 *     HMValidateHandleNoRip @ 0x1C007E714 (HMValidateHandleNoRip.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     GreCreateDIBitmapReal @ 0x1C0098254 (GreCreateDIBitmapReal.c)
 *     BitBltSysBmp @ 0x1C00F4978 (BitBltSysBmp.c)
 *     FixHDCBITSBmp @ 0x1C00F4B48 (FixHDCBITSBmp.c)
 *     xxxPSMGetTextExtent @ 0x1C013821C (xxxPSMGetTextExtent.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?SetupFakeMDIAppStuff@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0225380 (-SetupFakeMDIAppStuff@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     BltColor @ 0x1C023DA94 (BltColor.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C023E3A4 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     ?xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C023ECF4 (-xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMTextOut @ 0x1C0244864 (xxxPSMTextOut.c)
 *     FindCharPosition @ 0x1C0249D58 (FindCharPosition.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x1C02B8CFC (GreDecBitmapExclusiveRefCnt.c)
 */

__int64 __fastcall xxxRealDrawMenuItem(HDC a1, struct tagMENU **a2, int a3, int a4, int a5, int a6)
{
  __int64 v6; // r14
  int v7; // esi
  struct tagMENU *v9; // r8
  HDC v10; // r10
  int v11; // r15d
  int v12; // edx
  unsigned __int64 v13; // rcx
  int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ecx
  LONG *v21; // rcx
  LONG v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // ecx
  _DWORD *v27; // rcx
  __int64 v28; // rcx
  int v29; // ecx
  bool v30; // zf
  int v31; // eax
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // ecx
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // ecx
  _DWORD *v41; // rcx
  __int64 v42; // rcx
  int v43; // edi
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  unsigned int v48; // ebx
  __int64 v49; // rcx
  _QWORD *v50; // rax
  __int64 v51; // rax
  int *v52; // rdi
  unsigned int v53; // ebx
  int v54; // r15d
  unsigned int v55; // r15d
  unsigned __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  int v59; // ecx
  __int64 v60; // rcx
  __int64 v61; // rcx
  int v62; // ecx
  _DWORD *v63; // rcx
  unsigned __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rcx
  int v67; // ecx
  __int64 v68; // rcx
  __int64 v69; // rcx
  int v70; // ecx
  _DWORD *v71; // rcx
  unsigned __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rcx
  int v75; // ecx
  __int64 v76; // rcx
  __int64 v77; // rcx
  int v78; // ecx
  int *v79; // rcx
  __int64 v80; // rax
  int v81; // ebx
  int v82; // edi
  int v83; // r13d
  __int64 v84; // r8
  __int64 WindowSmIcon; // r15
  __int64 v86; // rdx
  __int64 v87; // rcx
  unsigned __int64 v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // rcx
  int v91; // ecx
  __int64 v92; // rcx
  __int64 v93; // rcx
  int v94; // ecx
  _DWORD *v95; // rcx
  unsigned int v96; // r12d
  unsigned __int64 v97; // rcx
  int v98; // edi
  __int64 v99; // rcx
  __int64 v100; // rcx
  __int64 v101; // rcx
  int v102; // ecx
  _DWORD *v103; // rcx
  __int64 v104; // rcx
  int v105; // ecx
  unsigned int v106; // r13d
  unsigned __int64 v107; // rcx
  __int64 v108; // rcx
  __int64 v109; // rcx
  __int64 v110; // rcx
  __int64 v111; // rcx
  int *v112; // rbx
  __int64 v113; // rcx
  __int64 v114; // rcx
  int v115; // ecx
  __int64 v116; // rcx
  __int64 v117; // rcx
  int v118; // ecx
  __int64 v119; // rcx
  _DWORD *v120; // rax
  unsigned __int64 v121; // rcx
  int v122; // ebx
  __int64 v123; // rcx
  __int64 v124; // rdx
  __int64 v125; // r8
  __int64 v126; // rcx
  int v127; // ecx
  __int64 v128; // rcx
  __int64 v129; // rcx
  int v130; // ecx
  int *v131; // rcx
  __int64 v132; // rcx
  __int64 v133; // rcx
  int v134; // ecx
  __int64 v135; // rcx
  __int64 v136; // rcx
  int v137; // ecx
  int ObjectW; // eax
  __int64 v139; // rdx
  __int64 v140; // r15
  __int64 v141; // r12
  HDC CompatibleDC; // rbx
  unsigned int v143; // edx
  __int64 v144; // rax
  int v145; // r11d
  unsigned __int8 *v146; // r9
  __int64 v147; // r10
  int v148; // r8d
  unsigned int v149; // eax
  __int64 v150; // rdx
  _DWORD *v151; // rcx
  __int64 v152; // r8
  __int64 v153; // r9
  __m128i *v154; // r12
  int v155; // r13d
  unsigned __int64 v156; // rcx
  __int64 v157; // rcx
  __int64 v158; // rcx
  int v159; // ecx
  __int64 v160; // rcx
  __int64 v161; // rcx
  int v162; // ecx
  int v163; // r15d
  unsigned __int64 v164; // rcx
  __int64 v165; // rcx
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // r8
  __int64 v169; // rcx
  __int64 v170; // rcx
  _DWORD *v171; // rbx
  int v172; // edi
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // r8
  __int64 v176; // rdx
  __int64 v177; // rcx
  int v178; // edi
  __int64 v179; // r8
  int v180; // r9d
  __int64 DPIMetrics; // rax
  __int64 CharPosition; // r15
  unsigned int v183; // r10d
  __int64 v184; // rdi
  __int64 v185; // rcx
  __int64 v186; // rcx
  int v187; // ecx
  __int64 v188; // rbx
  unsigned __int64 v189; // rcx
  __int64 v190; // rcx
  __int64 v191; // rdx
  __int64 v192; // r8
  __int64 v193; // rcx
  int v194; // ecx
  __int64 v195; // rcx
  __int64 v196; // rcx
  _DWORD *v198; // rcx
  int v199; // ebx
  struct tagMENU *v200; // r10
  int v201; // ebx
  int v202; // ecx
  __int64 v203; // rax
  HDC v204; // rdi
  __int64 v205; // rdi
  __int64 v206; // rcx
  int v207; // r9d
  __int64 v208; // rcx
  int v209; // ecx
  __int64 v210; // rdx
  __int64 v211; // rcx
  __int64 v212; // r8
  int v213; // ebx
  int v214; // ebx
  int v215; // edx
  _QWORD *v216; // rdx
  __int64 v217; // rdx
  __int64 v218; // rcx
  int *v219; // rbx
  int v220; // r10d
  int v221; // ecx
  int v222; // r9d
  int v224; // [rsp+70h] [rbp-90h]
  int v225; // [rsp+74h] [rbp-8Ch]
  unsigned int v227; // [rsp+80h] [rbp-80h]
  int v228; // [rsp+80h] [rbp-80h]
  struct tagMENU *v229; // [rsp+88h] [rbp-78h]
  int v231; // [rsp+90h] [rbp-70h]
  int v232[2]; // [rsp+90h] [rbp-70h]
  int v233; // [rsp+98h] [rbp-68h]
  int v234; // [rsp+9Ch] [rbp-64h]
  __int64 v235; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v236; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v237; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v238; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v239; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v240[3]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v241[12]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int16 v242[24]; // [rsp+110h] [rbp+10h] BYREF
  int v243; // [rsp+140h] [rbp+40h]

  v6 = (__int64)a2[1];
  v7 = 0;
  v9 = *a2;
  v10 = a1;
  v11 = 0;
  v30 = (*((_DWORD *)*a2 + 10) & 1) == 0;
  v12 = *((_DWORD *)*a2 + 10) & 1;
  v234 = 0;
  v224 = v12;
  v233 = 0;
  v229 = v9;
  if ( !v30 )
  {
    v14 = IsDPIAbsoluteSysMet(0x2DuLL);
    if ( v14 )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x4000) != 0 )
      {
        goto LABEL_5;
      }
    }
    else if ( !IsDPIDWMSysMet(v13)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v20 = 0)
             : (v20 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v20) )
    {
LABEL_5:
      if ( IsDPIDWMSysMet(0x2DuLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v17 = 0)
          : (v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v17) )
      {
        v21 = (LONG *)(gpsi + 2836LL);
      }
      else
      {
        v21 = (LONG *)(gpsi + 2060LL);
      }
LABEL_21:
      v9 = v229;
      v22 = *v21;
      v225 = *v21;
      if ( *((int *)v229 + 10) < 0 )
      {
        if ( v14 )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x4000) != 0 )
          {
            goto LABEL_34;
          }
        }
        else if ( !IsDPIDWMSysMet(0x2DuLL)
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
LABEL_34:
          if ( IsDPIDWMSysMet(0x2DuLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v29 = 0)
              : (v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                v29) )
          {
            v27 = (_DWORD *)(gpsi + 2836LL);
          }
          else
          {
            v27 = (_DWORD *)(gpsi + 2060LL);
          }
          goto LABEL_42;
        }
        v27 = (_DWORD *)(gpsi + 2448LL);
LABEL_42:
        v22 += *v27;
        v9 = v229;
        v225 = v22;
LABEL_84:
        v10 = a1;
        v12 = v224;
        goto LABEL_85;
      }
      if ( a5 )
      {
        if ( (*(_DWORD *)(v6 + 4) & 8) != 0 )
          v30 = *(_QWORD *)(v6 + 24) == 0LL;
        else
          v30 = *(_QWORD *)(v6 + 32) == 0LL;
        LOBYTE(v11) = !v30;
      }
      else
      {
        v31 = DrawMenuItemCheckMark(a1, (struct tagITEM *)v6, v22);
        v9 = v229;
        v11 = v31;
      }
      if ( (*((_DWORD *)v9 + 10) & 0x4000000) != 0 && *(_QWORD *)(v6 + 104) && !v11 )
        goto LABEL_84;
      if ( (*(_DWORD *)v6 & 0x2000) != 0 )
      {
        v32 = 0;
LABEL_83:
        v22 += v32;
        v225 = v22;
        goto LABEL_84;
      }
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x4000) != 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v33 = 0LL)
          : (v33 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            !(_DWORD)v33 || (v33 = gpsi, *(_WORD *)(gpsi + 7286LL) == 96)) )
      {
        v34 = gpsi + 4260LL;
      }
      else
      {
        v34 = gpsi + 5748LL;
      }
      if ( v14 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x4000) != 0 )
        {
          goto LABEL_66;
        }
      }
      else if ( !IsDPIDWMSysMet(0x2DuLL)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v40 = 0)
               : (v40 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                 !v40) )
      {
LABEL_66:
        if ( IsDPIDWMSysMet(0x2DuLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v37 = 0)
            : (v37 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              v37) )
        {
          v41 = (_DWORD *)(gpsi + 2836LL);
        }
        else
        {
          v41 = (_DWORD *)(gpsi + 2060LL);
        }
        goto LABEL_82;
      }
      v41 = (_DWORD *)(gpsi + 2448LL);
LABEL_82:
      v32 = *v41 + *(_DWORD *)(v34 + 1016);
      v22 = v225;
      v9 = v229;
      goto LABEL_83;
    }
    v21 = (LONG *)(gpsi + 2448LL);
    goto LABEL_21;
  }
  v22 = 0;
  v225 = 0;
  if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) != 0x80020000 && (*(_DWORD *)(v6 + 4) & 0x80u) != 0 )
  {
    v234 = 1;
    v233 = 1;
  }
LABEL_85:
  v42 = *(_QWORD *)(v6 + 104);
  if ( !v42 || v11 && (*((_DWORD *)v9 + 10) & 0x4000000) != 0 )
    goto LABEL_354;
  if ( a5 )
    goto LABEL_185;
  if ( (*(_DWORD *)(v6 + 4) & 0x20000000) == 0 )
  {
    if ( v42 == -1 )
    {
      xxxSendMenuDrawItemMessage(v10, 1u, v9, (struct tagITEM *)v6, 1, v22, 0LL);
      goto LABEL_354;
    }
    if ( *(_WORD *)(gptiCurrent + 560LL) > 0x400u
      || (!*(_QWORD *)(v6 + 64) || *(_QWORD *)(v6 + 40))
      && (v12
       || (v80 = *((_QWORD *)v9 + 10), v6 != v80)
       || *((_DWORD *)v9 + 13) <= 1u
       || *(_QWORD *)(v80 + 256)
       || !*(_QWORD *)(v6 + 16)) )
    {
LABEL_185:
      v81 = *(_DWORD *)(v6 + 112);
      v227 = v81;
      if ( v12 )
      {
        v82 = *(_DWORD *)(v6 + 116);
        v54 = v225;
        if ( *(_DWORD *)(v6 + 84) - v82 <= 0 )
          v83 = 0;
        else
          v83 = (*(_DWORD *)(v6 + 84) - v82) / 2;
        goto LABEL_322;
      }
      v122 = IsDPIAbsoluteSysMet(0x37uLL);
      if ( v122 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v121) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v123) + 776) & 0x4000) != 0 )
        {
          goto LABEL_281;
        }
      }
      else if ( !IsDPIDWMSysMet(v121)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v128) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v129) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v130 = 0)
               : (v130 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                 !v130) )
      {
LABEL_281:
        if ( IsDPIDWMSysMet(0x37uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v126) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v127 = 0)
            : (v127 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
              v127) )
        {
          v131 = (int *)(gpsi + 2876LL);
        }
        else
        {
          v131 = (int *)(gpsi + 2100LL);
        }
LABEL_297:
        v82 = *(_DWORD *)(v6 + 116);
        if ( v82 > *v131 )
        {
LABEL_318:
          v83 = 0;
          if ( *(_QWORD *)(v6 + 40) )
          {
            v54 = *(_DWORD *)(GetDPIMetrics(v131, v124, v125) + 48) + v225;
            v225 = v54;
          }
          else
          {
            v54 = v225;
          }
          v81 = v227;
LABEL_322:
          v235 = GreSelectBitmap(ghdcMem2, *(_QWORD *)(v6 + 104));
          if ( !v235 )
            goto LABEL_355;
          ObjectW = GreExtGetObjectW(*(HSURF *)(v6 + 104), 104, v242);
          if ( !a5 || *(_DWORD *)v6 == 4 )
          {
            if ( ObjectW != 104 || v242[23] != 32 || v243 || *(_DWORD *)v6 == 4 )
            {
              if ( v242[8] * v242[9] == 1 )
                v149 = 12060490;
              else
                v149 = (unsigned int)MNDrawHilite(v229, (struct tagITEM *)v6) != 0 ? 3342344 : 13369376;
              NtGdiBitBltInternal(a1, v54 + v234, v83 + v233, v81, v82, ghdcMem2, 0, 0, v149, 0xFFFFFF, 0);
            }
            goto LABEL_353;
          }
          v140 = 0LL;
          v231 = 33488896;
          v141 = 0LL;
          if ( a6 )
          {
            v239 = 0LL;
            CompatibleDC = (HDC)GreCreateCompatibleDC(a1, v139);
            if ( !CompatibleDC )
            {
LABEL_338:
              if ( a6 )
              {
                if ( v141 != -1 )
                  GreSelectBitmap(CompatibleDC, v141);
                if ( v140 )
                {
                  GreDecBitmapExclusiveRefCnt(v140);
                  GreDeleteObject(v140);
                }
                if ( CompatibleDC )
                  GreDeleteDC(CompatibleDC);
              }
LABEL_353:
              GreSelectBitmap(ghdcMem2, v235);
              goto LABEL_354;
            }
            memset(v241, 0, 0x2CuLL);
            v241[1] = v227;
            v241[0] = 40;
            v241[2] = v82;
            *(_QWORD *)&v241[3] = 2097153LL;
            v144 = GreCreateDIBitmapReal(CompatibleDC, v143, 0LL, v241, 0, 0x2Cu, 0, 0LL, 0, 0LL, 0, 0LL, &v239);
            v140 = v144;
            if ( v144 )
            {
              v141 = GreSelectBitmap(CompatibleDC, v144);
              if ( v141 != -1 )
              {
                NtGdiAlphaBlend(CompatibleDC, 0, 0, v227, v82, ghdcMem2, 0, 0, v227, v82, 33488896);
                v145 = v227;
                if ( (int)(v227 * v82) > 0 )
                {
                  v146 = (unsigned __int8 *)v239;
                  v147 = v227 * v82;
                  do
                  {
                    v148 = (29 * v146[2] + 150 * v146[1] + 77 * *v146 + 129) >> 8;
                    *(_DWORD *)v146 = v148 | ((v148 | ((v148 | (v146[3] << 8)) << 8)) << 8);
                    v146 += 4;
                    --v147;
                  }
                  while ( v147 );
                  v145 = v227;
                }
                BYTE2(v231) = 102;
                goto LABEL_336;
              }
            }
          }
          else
          {
            CompatibleDC = (HDC)ghdcMem2;
          }
          v145 = v227;
LABEL_336:
          if ( CompatibleDC )
            NtGdiAlphaBlend(a1, v234 + v225, v83 + v233, v145, v82, (__int64)CompatibleDC, 0, 0, v145, v82, v231);
          goto LABEL_338;
        }
        if ( v122 )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v131) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v132) + 776) & 0x4000) != 0 )
          {
            goto LABEL_301;
          }
        }
        else if ( !IsDPIDWMSysMet(0x37uLL)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v135) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v136) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 ? (v137 = 0)
                 : (v137 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 416)
                                                 + 8LL)
                                     + 260LL) & 1),
                   !v137) )
        {
LABEL_301:
          if ( IsDPIDWMSysMet(0x37uLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v133) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v134 = 0)
              : (v134 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                v134) )
          {
            v131 = (int *)(gpsi + 2876LL);
          }
          else
          {
            v131 = (int *)(gpsi + 2100LL);
          }
          goto LABEL_317;
        }
        v131 = (int *)(gpsi + 2488LL);
LABEL_317:
        v82 = *v131;
        goto LABEL_318;
      }
      v131 = (int *)(gpsi + 2488LL);
      goto LABEL_297;
    }
    while ( 1 )
    {
LABEL_188:
      if ( !*(_QWORD *)(v6 + 64) && *((_QWORD *)v9 + 9) )
        SetupFakeMDIAppStuff(v9, (struct tagITEM *)v6);
      v84 = HMValidateHandleNoRip(*(_QWORD *)(v6 + 64), 1);
      if ( v84 )
        break;
      if ( !*(_QWORD *)(v6 + 64) )
        goto LABEL_195;
      v9 = v229;
      *(_QWORD *)(v6 + 64) = 0LL;
    }
    v240[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v240;
    v240[1] = v84;
    ++*(_DWORD *)(v84 + 8);
    WindowSmIcon = xxxGetWindowSmIcon(v84, 0);
    ThreadUnlock1(v87, v86);
    if ( WindowSmIcon )
      goto LABEL_196;
LABEL_195:
    WindowSmIcon = qword_1C031EA98;
LABEL_196:
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2EuLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v88) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v89) + 776) & 0x4000) != 0 )
      {
        goto LABEL_199;
      }
    }
    else if ( !IsDPIDWMSysMet(v88)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v92) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v93) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v94 = 0)
             : (v94 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v94) )
    {
LABEL_199:
      if ( IsDPIDWMSysMet(0x2EuLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v90) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v91 = 0)
          : (v91 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v91) )
      {
        v95 = (_DWORD *)(gpsi + 2840LL);
      }
      else
      {
        v95 = (_DWORD *)(gpsi + 2064LL);
      }
LABEL_215:
      v96 = a4 - *v95;
      v98 = IsDPIAbsoluteSysMet(0x2DuLL);
      if ( v98 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v97) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v99) + 776) & 0x4000) != 0 )
        {
          goto LABEL_227;
        }
      }
      else if ( !IsDPIDWMSysMet(v97)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v100) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v101) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v102 = 0)
               : (v102 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                 !v102) )
      {
LABEL_227:
        if ( IsDPIDWMSysMet(0x2DuLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v104) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v105 = 0)
            : (v105 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
              v105) )
        {
          v103 = (_DWORD *)(gpsi + 2836LL);
        }
        else
        {
          v103 = (_DWORD *)(gpsi + 2060LL);
        }
LABEL_235:
        v106 = a3 - 2 * *v103;
        if ( v224 && v96 < v106 )
          v106 = v96;
        if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v107) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v108) + 776) & 0x4000) != 0 )
          {
            goto LABEL_241;
          }
        }
        else if ( !IsDPIDWMSysMet(v107)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v110) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v111) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 ? (v109 = 0LL)
                 : (v109 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 416)
                                                 + 8LL)
                                     + 260LL) & 1),
                   !(_DWORD)v109) )
        {
LABEL_241:
          if ( IsDPIDWMSysMet(6uLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v109) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v109 = 0LL)
              : (v109 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                (_DWORD)v109) )
          {
            v112 = (int *)(gpsi + 2680LL);
          }
          else
          {
            v112 = (int *)(gpsi + 1904LL);
          }
LABEL_257:
          if ( v98 )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v109) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v113) + 776) & 0x4000) != 0 )
            {
              goto LABEL_260;
            }
          }
          else if ( !IsDPIDWMSysMet(0x2DuLL)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v116) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v117) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                   ? (v118 = 0)
                   : (v118 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                               + 416)
                                                   + 8LL)
                                       + 260LL) & 1),
                     !v118) )
          {
LABEL_260:
            if ( IsDPIDWMSysMet(0x2DuLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v114) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v115 = 0)
                : (v115 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                  v115) )
            {
              v119 = gpsi;
              v120 = (_DWORD *)(gpsi + 2836LL);
            }
            else
            {
              v119 = gpsi;
              v120 = (_DWORD *)(gpsi + 2060LL);
            }
            goto LABEL_276;
          }
          v119 = gpsi;
          v120 = (_DWORD *)(gpsi + 2448LL);
LABEL_276:
          DrawIconEx(a1, v225 + 2 * *v120, *v112, WindowSmIcon, v106, v96, 0, *(_QWORD *)(v119 + 3728), 19);
          goto LABEL_354;
        }
        v112 = (int *)(gpsi + 2292LL);
        goto LABEL_257;
      }
      v103 = (_DWORD *)(gpsi + 2448LL);
      goto LABEL_235;
    }
    v95 = (_DWORD *)(gpsi + 2452LL);
    goto LABEL_215;
  }
  if ( v42 == 1 )
    goto LABEL_188;
  v43 = v22;
  v44 = v42 - 2;
  if ( !v44 )
  {
    v55 = 26;
LABEL_153:
    if ( (*(_DWORD *)(v6 + 4) & 0x80u) != 0 )
      ++v55;
LABEL_155:
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2EuLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v72) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v73) + 776) & 0x4000) != 0 )
      {
        goto LABEL_158;
      }
    }
    else if ( !IsDPIDWMSysMet(v72)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v76) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v77) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v78 = 0)
             : (v78 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v78) )
    {
LABEL_158:
      if ( IsDPIDWMSysMet(0x2EuLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v74) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v75 = 0)
          : (v75 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v75) )
      {
        v79 = (int *)(gpsi + 2840LL);
      }
      else
      {
        v79 = (int *)(gpsi + 2064LL);
      }
      goto LABEL_174;
    }
    v79 = (int *)(gpsi + 2452LL);
LABEL_174:
    BitBltSysBmp(a1, v43, *v79, v55);
LABEL_354:
    v54 = v225;
    goto LABEL_355;
  }
  v45 = v44 - 1;
  if ( !v45 )
  {
    v55 = 22;
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v64) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v65) + 776) & 0x4000) != 0 )
      {
        goto LABEL_135;
      }
    }
    else if ( !IsDPIDWMSysMet(v64)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v68) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v69) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v70 = 0)
             : (v70 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v70) )
    {
LABEL_135:
      if ( IsDPIDWMSysMet(0x2DuLL)
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
      goto LABEL_151;
    }
    v71 = (_DWORD *)(gpsi + 2448LL);
LABEL_151:
    v43 = v22 + *v71;
    goto LABEL_153;
  }
  v46 = v45 - 2;
  if ( !v46 )
  {
    v55 = 18;
    goto LABEL_153;
  }
  v47 = v46 - 1;
  if ( !v47 )
  {
    v55 = 21;
    goto LABEL_155;
  }
  if ( v47 == 1 )
  {
    v55 = 25;
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v56) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v57) + 776) & 0x4000) != 0 )
      {
        goto LABEL_113;
      }
    }
    else if ( !IsDPIDWMSysMet(v56)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v60) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v61) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v62 = 0)
             : (v62 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v62) )
    {
LABEL_113:
      if ( IsDPIDWMSysMet(0x2DuLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v58) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v59 = 0)
          : (v59 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v59) )
      {
        v63 = (_DWORD *)(gpsi + 2836LL);
      }
      else
      {
        v63 = (_DWORD *)(gpsi + 2060LL);
      }
      goto LABEL_129;
    }
    v63 = (_DWORD *)(gpsi + 2448LL);
LABEL_129:
    v43 = v22 + *v63;
    goto LABEL_155;
  }
  v48 = *(_DWORD *)(v6 + 104) + 79;
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v47) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v49) + 776) & 0x4000) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v49 = 0LL)
      : (v49 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        !(_DWORD)v49) )
  {
    v50 = (_QWORD *)gpsi;
    goto LABEL_108;
  }
  v50 = (_QWORD *)gpsi;
  v49 = gpsi;
  if ( *(_WORD *)(gpsi + 7286LL) == 96 )
  {
LABEL_108:
    v51 = *v50 + 4260LL;
    goto LABEL_109;
  }
  v51 = gpsi + 5748LL;
LABEL_109:
  v52 = (int *)(v51 + 16LL * v48);
  v53 = (unsigned int)(*(_DWORD *)(v6 + 84) - v52[3]) >> 1;
  FixHDCBITSBmp(v49);
  v54 = v225;
  BltColor(a1, 0LL, *(HDC *)(gpDispInfo + 32LL), v225, v53, v52[2], v52[3], *v52, v52[1], 1);
LABEL_355:
  if ( (unsigned int)MNGetpItemIndex((__int64)v229, v6) == -1 )
    goto LABEL_457;
  if ( a5 )
    goto LABEL_457;
  v154 = *(__m128i **)(v6 + 40);
  if ( !v154 )
    goto LABEL_457;
  v155 = *(_DWORD *)(v6 + 48);
  if ( !v155 )
    goto LABEL_457;
  *(_QWORD *)v232 = *(_QWORD *)(v6 + 56);
  if ( v224 && *(_DWORD *)(v153 + 64) )
  {
    v225 = *(_DWORD *)(v153 + 64);
    goto LABEL_383;
  }
  if ( *(_QWORD *)(v6 + 104) )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v156) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v157) + 776) & 0x4000) != 0 )
      {
        goto LABEL_366;
      }
    }
    else if ( !IsDPIDWMSysMet(v156)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v160) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v161) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v162 = 0)
             : (v162 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
               !v162) )
    {
LABEL_366:
      if ( IsDPIDWMSysMet(0x2DuLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v158) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v159 = 0)
          : (v159 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1),
            v159) )
      {
        v151 = (_DWORD *)(gpsi + 2836LL);
      }
      else
      {
        v151 = (_DWORD *)(gpsi + 2060LL);
      }
      goto LABEL_382;
    }
    v151 = (_DWORD *)(gpsi + 2448LL);
LABEL_382:
    v225 = *v151 + *(_DWORD *)(v6 + 112) + v54;
  }
LABEL_383:
  v163 = *(_DWORD *)(GetDPIMetrics(v151, v150, v152) + 60);
  v228 = v163;
  if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v164) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v165) + 776) & 0x4000) != 0 )
    {
      goto LABEL_386;
    }
LABEL_397:
    v171 = (_DWORD *)(gpsi + 2292LL);
    goto LABEL_402;
  }
  if ( IsDPIDWMSysMet(v164)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v169) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v170) + 776) & 0x4000) == 0 )
  {
    v167 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                     + 260LL) & 1;
    if ( (_DWORD)v167 )
      goto LABEL_397;
  }
LABEL_386:
  if ( IsDPIDWMSysMet(6uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v167) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v167 = 0LL)
      : (v167 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1),
        (_DWORD)v167) )
  {
    v171 = (_DWORD *)(gpsi + 2680LL);
  }
  else
  {
    v171 = (_DWORD *)(gpsi + 1904LL);
  }
LABEL_402:
  v172 = *(_DWORD *)(v6 + 84) - *(_DWORD *)(GetDPIMetrics(v167, v166, v168) + 60);
  v178 = v172 - *(_DWORD *)(GetDPIMetrics(v174, v173, v175) + 52) - *v171;
  if ( v178 > 0 )
  {
    v176 = (unsigned int)(v178 >> 31);
    v228 = v178 / 2 + v163;
  }
  v180 = v224;
  if ( !v224 && !*(_QWORD *)(v6 + 104) )
  {
    DPIMetrics = GetDPIMetrics(v177, v176, v179);
    v180 = 0;
    v225 += *(_DWORD *)(DPIMetrics + 48);
  }
  if ( v154->m128i_i16[0] == 8 && !v180 )
  {
    v154 = (__m128i *)((char *)v154 + 2);
    if ( !--v155 )
    {
      v204 = a1;
      goto LABEL_458;
    }
  }
  CharPosition = (unsigned int)FindCharPosition(v154, 9LL);
  v184 = (unsigned int)FindCharPosition(v154, v183);
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v185) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v186) + 776) & 0x4000) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v187 = 0)
      : (v187 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1),
        !v187 || *(_WORD *)(gpsi + 7286LL) == 96) )
  {
    v188 = gpsi + 4260LL;
  }
  else
  {
    v188 = gpsi + 5748LL;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v189) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v190) + 776) & 0x4000) != 0 )
    {
      goto LABEL_422;
    }
LABEL_433:
    v198 = (_DWORD *)(gpsi + 2448LL);
    goto LABEL_438;
  }
  if ( IsDPIDWMSysMet(v189)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v195) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v196) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL) + 260LL) & 1 )
  {
    goto LABEL_433;
  }
LABEL_422:
  if ( IsDPIDWMSysMet(0x2DuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v193) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v194 = 0)
      : (v194 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1),
        v194) )
  {
    v198 = (_DWORD *)(gpsi + 2836LL);
  }
  else
  {
    v198 = (_DWORD *)(gpsi + 2060LL);
  }
LABEL_438:
  v199 = *(_DWORD *)(v6 + 80) - *(_DWORD *)(v188 + 1016) - *v198;
  if ( !(_DWORD)v184 || (_DWORD)v184 == v155 )
  {
    if ( (_DWORD)CharPosition && (_DWORD)v184 == v155 )
    {
      if ( (*(_DWORD *)v6 & 0x2000) != 0 )
      {
        v204 = a1;
        v238 = 0LL;
        xxxPSMGetTextExtent(a1, v154, CharPosition, (__int64)&v238);
        if ( (unsigned int)MNGetpItemIndex((__int64)v229, v6) == -1 )
          goto LABEL_458;
        v205 = *(_QWORD *)v232;
        if ( *(_QWORD *)v232 != *(_QWORD *)(v6 + 56) )
          goto LABEL_457;
        v213 = v199 - v238;
        v225 = v213;
        if ( !v224 && !*(_QWORD *)(v6 + 104) )
          v225 = *(_DWORD *)(GetDPIMetrics(v211, v210, v212) + 48) + v213;
      }
      else
      {
        v205 = *(_QWORD *)v232;
      }
      v214 = v228;
      xxxDrawMenuItemText(
        v229,
        (struct tagITEM *)v6,
        a1,
        v234 + v225,
        v228 + v233,
        (unsigned __int16 *)v154,
        CharPosition,
        *((_DWORD *)v229 + 10) & 4);
      if ( (unsigned int)MNGetpItemIndex((__int64)v229, v6) == -1 || v205 != *(_QWORD *)(v6 + 56) )
        goto LABEL_457;
      goto LABEL_480;
    }
    goto LABEL_478;
  }
  if ( (*(_DWORD *)v6 & 0x2000) != 0 && v224 )
  {
    v237 = 0LL;
    xxxPSMGetTextExtent(a1, v154, v184, (__int64)&v237);
    if ( (unsigned int)MNGetpItemIndex((__int64)v229, v6) == -1 || *(_QWORD *)v232 != *(_QWORD *)(v6 + 56) )
      goto LABEL_457;
    v225 = v199 - v237;
  }
  else
  {
    v200 = v229;
  }
  xxxDrawMenuItemText(
    v200,
    (struct tagITEM *)v6,
    a1,
    v234 + v225,
    v233 + v228,
    (unsigned __int16 *)v154,
    v184,
    *((_DWORD *)v200 + 10) & 4);
  if ( (unsigned int)MNGetpItemIndex((__int64)v229, v6) == -1 || *(_QWORD *)v232 != *(_QWORD *)(v6 + 56) )
    goto LABEL_457;
  if ( (unsigned int)CharPosition <= (int)v184 + 1 )
  {
LABEL_478:
    v205 = *(_QWORD *)v232;
LABEL_479:
    v214 = v228;
LABEL_480:
    if ( (unsigned int)CharPosition < v155 - 1 )
    {
      if ( (*(_DWORD *)v6 & 0x2000) != 0 && v224 )
      {
        v235 = 0LL;
        xxxPSMGetTextExtent(a1, (__m128i *)&v154->m128i_i16[CharPosition + 1], v155 - CharPosition - 1, (__int64)&v235);
        if ( (unsigned int)MNGetpItemIndex((__int64)v229, v6) == -1 || v205 != *(_QWORD *)(v6 + 56) )
          goto LABEL_457;
        v215 = *(_DWORD *)(v6 + 80) - *(_DWORD *)(v6 + 88) - v235;
      }
      else
      {
        v215 = *(_DWORD *)(v6 + 88) + *(_DWORD *)(GetDPIMetrics(v198, v191, v192) + 48);
      }
      v204 = a1;
      xxxPSMTextOut(
        a1,
        v215,
        v214,
        &v154->m128i_u16[CharPosition + 1],
        v155 - CharPosition - 1,
        (~*((_BYTE *)v229 + 40) & 4) << 18);
      goto LABEL_458;
    }
LABEL_457:
    v204 = a1;
    goto LABEL_458;
  }
  v30 = (*(_DWORD *)v6 & 0x2000) == 0;
  v236 = 0LL;
  if ( v30 || !v224 )
  {
    xxxPSMGetTextExtent(a1, (__m128i *)&v154->m128i_i16[v184 + 1], CharPosition - v184 - 1, (__int64)&v236);
    if ( (unsigned int)MNGetpItemIndex((__int64)v229, v6) == -1 || *(_QWORD *)v232 != *(_QWORD *)(v6 + 56) )
    {
      v204 = a1;
      goto LABEL_458;
    }
    v201 = *(_DWORD *)(v6 + 88) - v236;
  }
  else
  {
    v201 = v199 - *(_DWORD *)(v6 + 88);
  }
  v202 = CharPosition - v184 - 1;
  v203 = v184 + 1;
  v204 = a1;
  xxxPSMTextOut(a1, v201, v228, (PCWSTR)v154 + v203, v202, (~*((_BYTE *)v229 + 40) & 4) << 18);
  if ( (unsigned int)MNGetpItemIndex((__int64)v229, v6) != -1 )
  {
    v205 = *(_QWORD *)v232;
    if ( *(_QWORD *)v232 != *(_QWORD *)(v6 + 56) )
      goto LABEL_457;
    goto LABEL_479;
  }
LABEL_458:
  if ( (unsigned int)MNGetpItemIndex((__int64)v229, v6) == -1 || a5 || !v207 || !*(_QWORD *)(v6 + 16) )
    return 1LL;
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v206) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v208) + 776) & 0x4000) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v209 = 0)
      : (v209 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1),
        !v209) )
  {
    v216 = (_QWORD *)gpsi;
    goto LABEL_495;
  }
  v216 = (_QWORD *)gpsi;
  if ( *(_WORD *)(gpsi + 7286LL) == 96 )
  {
LABEL_495:
    v217 = *v216 + 4260LL;
    goto LABEL_496;
  }
  v217 = gpsi + 5748LL;
LABEL_496:
  v218 = (*(_DWORD *)v6 & 0x2000) != 0 ? 92 : 62;
  v219 = (int *)(v217 + 16LL * (int)v218);
  FixHDCBITSBmp(v218);
  v220 = v219[3];
  v221 = v219[2];
  if ( (*(_DWORD *)(v6 + 84) - v220 - 2) / 2 > 0 )
    v7 = (*(_DWORD *)(v6 + 84) - v220 - 2) / 2;
  if ( (*(_DWORD *)v6 & 0x2000) != 0 )
    v222 = v219[2];
  else
    v222 = *(_DWORD *)(v6 + 80) - v221;
  BltColor(v204, 0LL, *(HDC *)(gpDispInfo + 32LL), v222, v7, v221, v220, *v219, v219[1], 1);
  return 1LL;
}
