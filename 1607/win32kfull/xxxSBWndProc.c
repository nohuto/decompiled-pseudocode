/*
 * XREFs of xxxSBWndProc @ 0x1C022CE10
 * Callers:
 *     ?xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01DA730 (-xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     xxxBeginPaint @ 0x1C00552FC (xxxBeginPaint.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     ConstrainWindowSIZERECT @ 0x1C006F920 (ConstrainWindowSIZERECT.c)
 *     xxxDefWindowProc @ 0x1C007CE70 (xxxDefWindowProc.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _GetKeyState @ 0x1C0095870 (_GetKeyState.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     _FChildVisible @ 0x1C009E9A8 (_FChildVisible.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxMoveWindow @ 0x1C00A7894 (xxxMoveWindow.c)
 *     xxxSetFocus @ 0x1C00A8300 (xxxSetFocus.c)
 *     zzzHideCaret @ 0x1C00AB924 (zzzHideCaret.c)
 *     zzzShowCaret @ 0x1C00AB9A4 (zzzShowCaret.c)
 *     ?SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z @ 0x1C00AD140 (-SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z.c)
 *     xxxGetScrollBarInfo @ 0x1C00AF75C (xxxGetScrollBarInfo.c)
 *     xxxEnableScrollBar @ 0x1C00FFF6C (xxxEnableScrollBar.c)
 *     xxxEndPaint @ 0x1C0100BCC (xxxEndPaint.c)
 *     xxxCreateCaret @ 0x1C0122D94 (xxxCreateCaret.c)
 *     zzzDestroyCaret @ 0x1C0123130 (zzzDestroyCaret.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C014E5CC (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     DrawThumb2 @ 0x1C014EF3C (DrawThumb2.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C014F0AC (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C022AF3C (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C022B0C0 (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     ?zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z @ 0x1C022BC38 (-zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z.c)
 *     DrawSize @ 0x1C022BED4 (DrawSize.c)
 *     SBCtlSetup @ 0x1C022C40C (SBCtlSetup.c)
 *     _SBGetParms @ 0x1C022C448 (_SBGetParms.c)
 *     xxxDoScrollMenu @ 0x1C022C4CC (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C022C980 (xxxSBTrackInit.c)
 *     _ClientToScreen @ 0x1C0245D20 (_ClientToScreen.c)
 */

unsigned __int64 __fastcall xxxSBWndProc(struct tagWND *a1, unsigned int a2, _DWORD *a3, int *a4)
{
  int v4; // ebx
  struct tagSCROLLINFO *v5; // r11
  __int16 v6; // ax
  __int16 v8; // di
  int *v9; // r13
  unsigned int v10; // r10d
  struct tagWND *v11; // r14
  unsigned __int64 result; // rax
  char v13; // dl
  int v14; // ecx
  unsigned int v15; // r12d
  bool v16; // zf
  int v17; // r12d
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // ecx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  int v43; // ecx
  _DWORD *v44; // rcx
  int v45; // r12d
  int v46; // r15d
  __int64 v47; // rdx
  unsigned __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  int v61; // ecx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  int v72; // ecx
  _DWORD *v73; // rcx
  unsigned int v74; // r10d
  unsigned int v75; // r9d
  int v76; // r8d
  int v77; // ecx
  int v78; // r8d
  int v79; // ecx
  int v80; // eax
  __int64 v81; // rdx
  unsigned __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // r9
  int v95; // ecx
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rdx
  __int64 v104; // r8
  __int64 v105; // r9
  int v106; // ecx
  _DWORD *v107; // rcx
  unsigned int v108; // r13d
  __int64 v109; // rdx
  unsigned __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // rdx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // rdx
  __int64 v121; // r8
  __int64 v122; // r9
  int v123; // ecx
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // rdx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // rdx
  __int64 v132; // r8
  __int64 v133; // r9
  int v134; // ecx
  _DWORD *v135; // rcx
  __int64 v136; // rdx
  unsigned __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r9
  __int64 v144; // rdx
  __int64 v145; // r8
  __int64 v146; // r9
  __int64 v147; // rdx
  __int64 v148; // r8
  __int64 v149; // r9
  int v150; // ecx
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 v155; // rdx
  __int64 v156; // r8
  __int64 v157; // r9
  __int64 v158; // rdx
  __int64 v159; // r8
  __int64 v160; // r9
  int v161; // ecx
  _DWORD *v162; // rcx
  __int64 v163; // rdx
  unsigned __int64 v164; // rcx
  __int64 v165; // r8
  __int64 v166; // r9
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // r8
  __int64 v170; // r9
  __int64 v171; // rdx
  __int64 v172; // r8
  __int64 v173; // r9
  __int64 v174; // rdx
  __int64 v175; // r8
  __int64 v176; // r9
  int v177; // ecx
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // r8
  __int64 v181; // r9
  __int64 v182; // rdx
  __int64 v183; // r8
  __int64 v184; // r9
  __int64 v185; // rdx
  __int64 v186; // r8
  __int64 v187; // r9
  int v188; // ecx
  _DWORD *v189; // rcx
  unsigned int v190; // edx
  __int64 v191; // rdx
  unsigned __int64 v192; // rcx
  __int64 v193; // r8
  __int64 v194; // r9
  __int64 v195; // rdx
  __int64 v196; // rcx
  __int64 v197; // r8
  __int64 v198; // r9
  __int64 v199; // rdx
  __int64 v200; // r8
  __int64 v201; // r9
  __int64 v202; // rdx
  __int64 v203; // r8
  __int64 v204; // r9
  int v205; // ecx
  __int64 v206; // rdx
  __int64 v207; // rcx
  __int64 v208; // r8
  __int64 v209; // r9
  __int64 v210; // rdx
  __int64 v211; // r8
  __int64 v212; // r9
  __int64 v213; // rdx
  __int64 v214; // r8
  __int64 v215; // r9
  int v216; // ecx
  _DWORD *v217; // rcx
  unsigned int v218; // eax
  __int64 v219; // rdx
  unsigned __int64 v220; // rcx
  __int64 v221; // r8
  __int64 v222; // r9
  __int64 v223; // rdx
  __int64 v224; // rcx
  __int64 v225; // r8
  __int64 v226; // r9
  __int64 v227; // rdx
  __int64 v228; // r8
  __int64 v229; // r9
  __int64 v230; // rdx
  __int64 v231; // r8
  __int64 v232; // r9
  int v233; // ecx
  __int64 v234; // rdx
  __int64 v235; // rcx
  __int64 v236; // r8
  __int64 v237; // r9
  __int64 v238; // rdx
  __int64 v239; // r8
  __int64 v240; // r9
  __int64 v241; // rdx
  __int64 v242; // r8
  __int64 v243; // r9
  int v244; // ecx
  _DWORD *v245; // rcx
  __int64 v246; // rdx
  unsigned __int64 v247; // rcx
  __int64 v248; // r8
  __int64 v249; // r9
  __int64 v250; // rdx
  __int64 v251; // rcx
  __int64 v252; // r8
  __int64 v253; // r9
  __int64 v254; // rdx
  __int64 v255; // r8
  __int64 v256; // r9
  __int64 v257; // rdx
  __int64 v258; // r8
  __int64 v259; // r9
  int v260; // ecx
  __int64 v261; // rdx
  __int64 v262; // rcx
  __int64 v263; // r8
  __int64 v264; // r9
  __int64 v265; // rdx
  __int64 v266; // r8
  __int64 v267; // r9
  __int64 v268; // rdx
  __int64 v269; // r8
  __int64 v270; // r9
  int v271; // ecx
  _DWORD *v272; // rcx
  __int64 v273; // rdx
  unsigned __int64 v274; // rcx
  __int64 v275; // r8
  __int64 v276; // r9
  __int64 v277; // rdx
  __int64 v278; // rcx
  __int64 v279; // r8
  __int64 v280; // r9
  __int64 v281; // rdx
  __int64 v282; // r8
  __int64 v283; // r9
  __int64 v284; // rdx
  __int64 v285; // r8
  __int64 v286; // r9
  int v287; // ecx
  __int64 v288; // rdx
  __int64 v289; // rcx
  __int64 v290; // r8
  __int64 v291; // r9
  __int64 v292; // rdx
  __int64 v293; // r8
  __int64 v294; // r9
  __int64 v295; // rdx
  __int64 v296; // r8
  __int64 v297; // r9
  int v298; // ecx
  _DWORD *v299; // rcx
  __int64 v300; // rdx
  __int64 v301; // rdx
  __int64 v302; // rcx
  HDC DCEx; // rsi
  HBRUSH ColorObjects; // rbx
  __int64 v305; // rdi
  HDC v306; // r12
  __int64 v307; // rax
  int v308; // r15d
  __int64 v309; // rdx
  __int64 v310; // r8
  __int64 v311; // r9
  unsigned int v312; // r9d
  __int64 v313; // rdx
  __int64 v314; // r10
  int v315; // r8d
  struct tagWND *v316; // rcx
  unsigned __int16 v317; // r8
  int v318; // [rsp+50h] [rbp-B0h]
  unsigned int v319; // [rsp+50h] [rbp-B0h]
  unsigned int v320; // [rsp+54h] [rbp-ACh]
  unsigned int v321; // [rsp+58h] [rbp-A8h]
  unsigned int v322; // [rsp+5Ch] [rbp-A4h]
  int v323; // [rsp+60h] [rbp-A0h] BYREF
  int *v324; // [rsp+68h] [rbp-98h] BYREF
  int v325; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v326; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v327; // [rsp+7Ch] [rbp-84h]
  unsigned int v328; // [rsp+80h] [rbp-80h]
  int v329; // [rsp+84h] [rbp-7Ch]
  __int64 v330; // [rsp+88h] [rbp-78h] BYREF
  __int64 v331; // [rsp+90h] [rbp-70h]
  int v332; // [rsp+A0h] [rbp-60h] BYREF
  int v333; // [rsp+A4h] [rbp-5Ch]
  int v334; // [rsp+A8h] [rbp-58h]
  int v335; // [rsp+ACh] [rbp-54h]
  int v336; // [rsp+B4h] [rbp-4Ch]
  _QWORD v337[10]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = 0;
  v5 = (struct tagSCROLLINFO *)&v332;
  v324 = &v332;
  v6 = *((_WORD *)a1 + 33);
  v318 = 0;
  v8 = 1;
  v9 = a4;
  v10 = a2;
  v11 = a1;
  if ( v6 != 666 )
  {
    if ( v6 )
      return 0LL;
    if ( a2 != 1 )
      return xxxDefWindowProc(a1, a2, (__int64)a3, (__int64)a4);
    if ( *((_DWORD *)a1 + 58) + 360 < (unsigned int)*(unsigned __int16 *)(gpsi + 328LL) )
      return 0LL;
    *((_WORD *)a1 + 33) = 666;
  }
  v13 = *((_BYTE *)a1 + 52);
  v14 = (v13 & 0x18) != 0;
  v323 = v14;
  v15 = 3;
  if ( v10 <= 0xE2 )
  {
    if ( v10 != 226 )
    {
      if ( v10 <= 0x14 )
      {
        if ( v10 != 20 )
        {
          if ( v10 != 1 )
          {
            switch ( v10 )
            {
              case 5u:
                if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL) != v11 )
                  return 0LL;
                zzzDestroyCaret();
                break;
              case 7u:
                break;
              case 8u:
                zzzDestroyCaret();
                return 0LL;
              case 0xAu:
                _InterlockedAdd(&glSendMessage, 1u);
                return xxxSendTransformableMessageTimeout(v11, 228LL, a3 == 0LL ? 3 : 0, 0LL, 0, 0, 0LL, 1, 1);
              default:
                v16 = v10 == 15;
                goto LABEL_286;
            }
            SBCtlSetup((__int64)v11);
            if ( *((_DWORD *)v11 + 90) )
              v17 = *((_DWORD *)v11 + 30) - *((_DWORD *)v11 + 28);
            else
              v17 = *((_DWORD *)v11 + 100);
            if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext(v19, v18, v20, v21) & 0xF) != 0 )
                goto LABEL_26;
            }
            else if ( !IsDPIDWMSysMet(v19)
                   || (W32GetCurrentThreadDpiAwarenessContext(v34, v33, v35, v36) & 0xF) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37, v38, v39) + 408)
                     ? (v43 = 0)
                     : (v43 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                    (__int64)KeGetCurrentThread(),
                                                                    v40,
                                                                    v41,
                                                                    v42)
                                                                + 408)
                                                    + 8LL)
                                        + 244LL) & 1),
                       !v43) )
            {
LABEL_26:
              if ( IsDPIDWMSysMet(0x2DuLL)
                && (W32GetCurrentThreadDpiAwarenessContext(v23, v22, v24, v25) & 0xF) == 1
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27, v28) + 408)
                  ? (v32 = 0)
                  : (v32 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                 (__int64)KeGetCurrentThread(),
                                                                 v29,
                                                                 v30,
                                                                 v31)
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                    v32) )
              {
                v44 = (_DWORD *)(gpsi + 2836LL);
              }
              else
              {
                v44 = (_DWORD *)(gpsi + 2060LL);
              }
LABEL_41:
              v45 = v17 - 2 * *v44;
              if ( *((_DWORD *)v11 + 90) )
                v46 = *((_DWORD *)v11 + 100);
              else
                v46 = *((_DWORD *)v11 + 31) - *((_DWORD *)v11 + 29);
              if ( (unsigned int)IsDPIAbsoluteSysMet(0x2EuLL) )
              {
                if ( (W32GetCurrentThreadDpiAwarenessContext(v48, v47, v49, v50) & 0xF) != 0 )
                  goto LABEL_46;
              }
              else if ( !IsDPIDWMSysMet(v48)
                     || (W32GetCurrentThreadDpiAwarenessContext(v63, v62, v64, v65) & 0xF) != 0
                     || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v66, v67, v68) + 408)
                       ? (v72 = 0)
                       : (v72 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                      (__int64)KeGetCurrentThread(),
                                                                      v69,
                                                                      v70,
                                                                      v71)
                                                                  + 408)
                                                      + 8LL)
                                          + 244LL) & 1),
                         !v72) )
              {
LABEL_46:
                if ( IsDPIDWMSysMet(0x2EuLL)
                  && (W32GetCurrentThreadDpiAwarenessContext(v52, v51, v53, v54) & 0xF) == 1
                  && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v55, v56, v57) + 408)
                    ? (v61 = 0)
                    : (v61 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                   (__int64)KeGetCurrentThread(),
                                                                   v58,
                                                                   v59,
                                                                   v60)
                                                               + 408)
                                                   + 8LL)
                                       + 244LL) & 1),
                      v61) )
                {
                  v73 = (_DWORD *)(gpsi + 2840LL);
                }
                else
                {
                  v73 = (_DWORD *)(gpsi + 2064LL);
                }
                goto LABEL_61;
              }
              v73 = (_DWORD *)(gpsi + 2452LL);
LABEL_61:
              xxxCreateCaret((__int64 *)v11, (struct HLFONT__ *)1, v45, v46 - 2 * *v73);
              zzzSetSBCaretPos(v11);
              zzzShowCaret(v11);
              return 0LL;
            }
            v44 = (_DWORD *)(gpsi + 2448LL);
            goto LABEL_41;
          }
          if ( !a4 )
          {
            UserSetLastError(87LL);
            return 0LL;
          }
          v74 = a4[11];
          v75 = a4[10];
          v76 = v9[9];
          v77 = v9[8];
          v321 = v74;
          v320 = v75;
          if ( v74 == 0x80000000 )
          {
            if ( (*((_BYTE *)v11 + 55) & 0xC0) != 0 )
              v74 = 0;
            else
              v74 = *((_DWORD *)v11 + 28);
            v321 = v74;
          }
          if ( v75 == 0x80000000 )
          {
            if ( (*((_BYTE *)v11 + 55) & 0xC0) != 0 )
              v75 = 0;
            else
              v75 = *((_DWORD *)v11 + 29);
            v320 = v75;
          }
          if ( v76 == 0x80000000 )
          {
            if ( (*((_BYTE *)v11 + 55) & 0xC0) != 0 )
              v76 = 0;
            else
              v76 = *((_DWORD *)v11 + 30) - *((_DWORD *)v11 + 28);
          }
          if ( v77 == 0x80000000 )
          {
            if ( (*((_BYTE *)v11 + 55) & 0xC0) != 0 )
              v77 = 0;
            else
              v77 = *((_DWORD *)v11 + 31) - *((_DWORD *)v11 + 29);
          }
          v322 = v76 + v74;
          v319 = v77 + v75;
          if ( (*((_BYTE *)v11 + 45) & 2) == 0 )
            *((_DWORD *)v11 + 13) &= 0xFFCFFFFF;
          v78 = v323;
          if ( !v323 )
          {
            v79 = *v9;
            *((_DWORD *)v11 + 92) = (unsigned __int16)*v9;
            *((_DWORD *)v11 + 95) = (unsigned __int16)v79;
            *((_DWORD *)v11 + 93) = HIWORD(v79);
            v80 = *((_BYTE *)v11 + 52) & 1;
            *((_DWORD *)v11 + 94) = 0;
            *((_DWORD *)v11 + 90) = v80;
          }
          if ( (*((_DWORD *)v11 + 13) & 0x8000000) != 0 )
            *((_DWORD *)v11 + 91) = 3;
          if ( (v13 & 6) == 0 )
            return 0LL;
          if ( v78 )
          {
            if ( (v13 & 4) == 0 )
            {
              v108 = v321;
LABEL_126:
              if ( (unsigned int)IsDPIAbsoluteSysMet(2uLL) )
              {
                if ( (W32GetCurrentThreadDpiAwarenessContext(v137, v136, v138, v139) & 0xF) != 0 )
                  goto LABEL_128;
              }
              else if ( !IsDPIDWMSysMet(v137)
                     || (W32GetCurrentThreadDpiAwarenessContext(v152, v151, v153, v154) & 0xF) != 0
                     || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v155, v156, v157) + 408)
                       ? (v161 = 0)
                       : (v161 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                       (__int64)KeGetCurrentThread(),
                                                                       v158,
                                                                       v159,
                                                                       v160)
                                                                   + 408)
                                                       + 8LL)
                                           + 244LL) & 1),
                         !v161) )
              {
LABEL_128:
                if ( IsDPIDWMSysMet(2uLL)
                  && (W32GetCurrentThreadDpiAwarenessContext(v141, v140, v142, v143) & 0xF) == 1
                  && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v144, v145, v146) + 408)
                    ? (v150 = 0)
                    : (v150 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                    (__int64)KeGetCurrentThread(),
                                                                    v147,
                                                                    v148,
                                                                    v149)
                                                                + 408)
                                                    + 8LL)
                                        + 244LL) & 1),
                      v150) )
                {
                  v162 = (_DWORD *)(gpsi + 2664LL);
                }
                else
                {
                  v162 = (_DWORD *)(gpsi + 1888LL);
                }
LABEL_143:
                v322 = v108 + *v162;
                if ( (unsigned int)IsDPIAbsoluteSysMet(3uLL) )
                {
                  if ( (W32GetCurrentThreadDpiAwarenessContext(v164, v163, v165, v166) & 0xF) != 0 )
                    goto LABEL_145;
                }
                else if ( !IsDPIDWMSysMet(v164)
                       || (W32GetCurrentThreadDpiAwarenessContext(v179, v178, v180, v181) & 0xF) != 0
                       || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v182, v183, v184) + 408)
                         ? (v188 = 0)
                         : (v188 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                         (__int64)KeGetCurrentThread(),
                                                                         v185,
                                                                         v186,
                                                                         v187)
                                                                     + 408)
                                                         + 8LL)
                                             + 244LL) & 1),
                           !v188) )
                {
LABEL_145:
                  if ( IsDPIDWMSysMet(3uLL)
                    && (W32GetCurrentThreadDpiAwarenessContext(v168, v167, v169, v170) & 0xF) == 1
                    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v171, v172, v173) + 408)
                      ? (v177 = 0)
                      : (v177 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                      (__int64)KeGetCurrentThread(),
                                                                      v174,
                                                                      v175,
                                                                      v176)
                                                                  + 408)
                                                      + 8LL)
                                          + 244LL) & 1),
                        v177) )
                  {
                    v189 = (_DWORD *)(gpsi + 2668LL);
                  }
                  else
                  {
                    v189 = (_DWORD *)(gpsi + 1892LL);
                  }
                  goto LABEL_160;
                }
                v189 = (_DWORD *)(gpsi + 2280LL);
LABEL_160:
                v190 = v320;
                v319 = v320 + *v189;
LABEL_238:
                v218 = v322;
                goto LABEL_239;
              }
              v162 = (_DWORD *)(gpsi + 2276LL);
              goto LABEL_143;
            }
            if ( (unsigned int)IsDPIAbsoluteSysMet(2uLL) )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext(v82, v81, v83, v84) & 0xF) != 0 )
                goto LABEL_92;
            }
            else if ( !IsDPIDWMSysMet(v82)
                   || (W32GetCurrentThreadDpiAwarenessContext(v97, v96, v98, v99) & 0xF) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v100, v101, v102) + 408)
                     ? (v106 = 0)
                     : (v106 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                     (__int64)KeGetCurrentThread(),
                                                                     v103,
                                                                     v104,
                                                                     v105)
                                                                 + 408)
                                                     + 8LL)
                                         + 244LL) & 1),
                       !v106) )
            {
LABEL_92:
              if ( IsDPIDWMSysMet(2uLL)
                && (W32GetCurrentThreadDpiAwarenessContext(v86, v85, v87, v88) & 0xF) == 1
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v89, v90, v91) + 408)
                  ? (v95 = 0)
                  : (v95 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                 (__int64)KeGetCurrentThread(),
                                                                 v92,
                                                                 v93,
                                                                 v94)
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                    v95) )
              {
                v107 = (_DWORD *)(gpsi + 2664LL);
              }
              else
              {
                v107 = (_DWORD *)(gpsi + 1888LL);
              }
LABEL_107:
              v108 = v322 - *v107;
              if ( (unsigned int)IsDPIAbsoluteSysMet(3uLL) )
              {
                if ( (W32GetCurrentThreadDpiAwarenessContext(v110, v109, v111, v112) & 0xF) != 0 )
                  goto LABEL_109;
              }
              else if ( !IsDPIDWMSysMet(v110)
                     || (W32GetCurrentThreadDpiAwarenessContext(v125, v124, v126, v127) & 0xF) != 0
                     || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v128, v129, v130) + 408)
                       ? (v134 = 0)
                       : (v134 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                       (__int64)KeGetCurrentThread(),
                                                                       v131,
                                                                       v132,
                                                                       v133)
                                                                   + 408)
                                                       + 8LL)
                                           + 244LL) & 1),
                         !v134) )
              {
LABEL_109:
                if ( IsDPIDWMSysMet(3uLL)
                  && (W32GetCurrentThreadDpiAwarenessContext(v114, v113, v115, v116) & 0xF) == 1
                  && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v117, v118, v119) + 408)
                    ? (v123 = 0)
                    : (v123 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                    (__int64)KeGetCurrentThread(),
                                                                    v120,
                                                                    v121,
                                                                    v122)
                                                                + 408)
                                                    + 8LL)
                                        + 244LL) & 1),
                      v123) )
                {
                  v135 = (_DWORD *)(gpsi + 2668LL);
                }
                else
                {
                  v135 = (_DWORD *)(gpsi + 1892LL);
                }
                goto LABEL_124;
              }
              v135 = (_DWORD *)(gpsi + 2280LL);
LABEL_124:
              v320 = v319 - *v135;
              goto LABEL_126;
            }
            v107 = (_DWORD *)(gpsi + 2276LL);
            goto LABEL_107;
          }
          if ( (v13 & 1) != 0 )
          {
            if ( (v13 & 2) != 0 )
            {
              if ( (unsigned int)IsDPIAbsoluteSysMet(2uLL) )
              {
                if ( (W32GetCurrentThreadDpiAwarenessContext(v192, v191, v193, v194) & 0xF) != 0 )
                  goto LABEL_165;
              }
              else if ( !IsDPIDWMSysMet(v192)
                     || (W32GetCurrentThreadDpiAwarenessContext(v207, v206, v208, v209) & 0xF) != 0
                     || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v210, v211, v212) + 408)
                       ? (v216 = 0)
                       : (v216 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                       (__int64)KeGetCurrentThread(),
                                                                       v213,
                                                                       v214,
                                                                       v215)
                                                                   + 408)
                                                       + 8LL)
                                           + 244LL) & 1),
                         !v216) )
              {
LABEL_165:
                if ( IsDPIDWMSysMet(2uLL)
                  && (W32GetCurrentThreadDpiAwarenessContext(v196, v195, v197, v198) & 0xF) == 1
                  && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v199, v200, v201) + 408)
                    ? (v205 = 0)
                    : (v205 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                    (__int64)KeGetCurrentThread(),
                                                                    v202,
                                                                    v203,
                                                                    v204)
                                                                + 408)
                                                    + 8LL)
                                        + 244LL) & 1),
                      v205) )
                {
                  v217 = (_DWORD *)(gpsi + 2664LL);
                }
                else
                {
                  v217 = (_DWORD *)(gpsi + 1888LL);
                }
                goto LABEL_180;
              }
              v217 = (_DWORD *)(gpsi + 2276LL);
LABEL_180:
              v108 = v321;
              v218 = v321 + *v217;
LABEL_199:
              v190 = v320;
LABEL_239:
              v326 = v108;
              v328 = v218 - v108;
              v327 = v190;
              v329 = v319 - v190;
              ConstrainWindowSIZERECT((__int64)&v326);
              xxxMoveWindow(v11, v326, v327, v328, v329, 0);
              return 0LL;
            }
            if ( (unsigned int)IsDPIAbsoluteSysMet(2uLL) )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext(v220, v219, v221, v222) & 0xF) != 0 )
                goto LABEL_183;
            }
            else if ( !IsDPIDWMSysMet(v220)
                   || (W32GetCurrentThreadDpiAwarenessContext(v235, v234, v236, v237) & 0xF) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v238, v239, v240) + 408)
                     ? (v244 = 0)
                     : (v244 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                     (__int64)KeGetCurrentThread(),
                                                                     v241,
                                                                     v242,
                                                                     v243)
                                                                 + 408)
                                                     + 8LL)
                                         + 244LL) & 1),
                       !v244) )
            {
LABEL_183:
              if ( IsDPIDWMSysMet(2uLL)
                && (W32GetCurrentThreadDpiAwarenessContext(v224, v223, v225, v226) & 0xF) == 1
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v227, v228, v229) + 408)
                  ? (v233 = 0)
                  : (v233 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                  (__int64)KeGetCurrentThread(),
                                                                  v230,
                                                                  v231,
                                                                  v232)
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                    v233) )
              {
                v245 = (_DWORD *)(gpsi + 2664LL);
              }
              else
              {
                v245 = (_DWORD *)(gpsi + 1888LL);
              }
              goto LABEL_198;
            }
            v245 = (_DWORD *)(gpsi + 2276LL);
LABEL_198:
            v218 = v322;
            v108 = v322 - *v245;
            goto LABEL_199;
          }
          if ( (v13 & 2) != 0 )
          {
            if ( (unsigned int)IsDPIAbsoluteSysMet(3uLL) )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext(v247, v246, v248, v249) & 0xF) != 0 )
                goto LABEL_203;
            }
            else if ( !IsDPIDWMSysMet(v247)
                   || (W32GetCurrentThreadDpiAwarenessContext(v262, v261, v263, v264) & 0xF) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v265, v266, v267) + 408)
                     ? (v271 = 0)
                     : (v271 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                     (__int64)KeGetCurrentThread(),
                                                                     v268,
                                                                     v269,
                                                                     v270)
                                                                 + 408)
                                                     + 8LL)
                                         + 244LL) & 1),
                       !v271) )
            {
LABEL_203:
              if ( IsDPIDWMSysMet(3uLL)
                && (W32GetCurrentThreadDpiAwarenessContext(v251, v250, v252, v253) & 0xF) == 1
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v254, v255, v256) + 408)
                  ? (v260 = 0)
                  : (v260 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                  (__int64)KeGetCurrentThread(),
                                                                  v257,
                                                                  v258,
                                                                  v259)
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                    v260) )
              {
                v272 = (_DWORD *)(gpsi + 2668LL);
              }
              else
              {
                v272 = (_DWORD *)(gpsi + 1892LL);
              }
              goto LABEL_218;
            }
            v272 = (_DWORD *)(gpsi + 2280LL);
LABEL_218:
            v190 = v320;
            v319 = v320 + *v272;
LABEL_237:
            v108 = v321;
            goto LABEL_238;
          }
          if ( (unsigned int)IsDPIAbsoluteSysMet(3uLL) )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v274, v273, v275, v276) & 0xF) != 0 )
              goto LABEL_221;
          }
          else if ( !IsDPIDWMSysMet(v274)
                 || (W32GetCurrentThreadDpiAwarenessContext(v289, v288, v290, v291) & 0xF) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v292, v293, v294) + 408)
                   ? (v298 = 0)
                   : (v298 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                   (__int64)KeGetCurrentThread(),
                                                                   v295,
                                                                   v296,
                                                                   v297)
                                                               + 408)
                                                   + 8LL)
                                       + 244LL) & 1),
                     !v298) )
          {
LABEL_221:
            if ( IsDPIDWMSysMet(3uLL)
              && (W32GetCurrentThreadDpiAwarenessContext(v278, v277, v279, v280) & 0xF) == 1
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v281, v282, v283) + 408)
                ? (v287 = 0)
                : (v287 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v284,
                                                                v285,
                                                                v286)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  v287) )
            {
              v299 = (_DWORD *)(gpsi + 2668LL);
            }
            else
            {
              v299 = (_DWORD *)(gpsi + 1892LL);
            }
            goto LABEL_236;
          }
          v299 = (_DWORD *)(gpsi + 2280LL);
LABEL_236:
          v190 = v319 - *v299;
          goto LABEL_237;
        }
        return 1LL;
      }
      if ( v10 != 123 )
      {
        if ( v10 == 132 )
        {
          if ( (v13 & 0x10) != 0 )
            return 17LL
                 - (((*((unsigned __int8 *)v11 + 50) >> 6) & 1) != ((*(unsigned __int8 *)(*((_QWORD *)v11 + 11) + 49LL) >> 6) & 1));
LABEL_287:
          a2 = v10;
          a1 = v11;
          return xxxDefWindowProc(a1, a2, (__int64)a3, (__int64)a4);
        }
        if ( v10 == 135 )
          return 1LL;
        if ( v10 != 224 )
        {
          if ( v10 == 225 )
            return *((int *)v11 + 95);
          goto LABEL_287;
        }
        v333 = 4100;
        v336 = (int)a3;
        goto LABEL_266;
      }
      v300 = *((_QWORD *)v11 + 11);
      v330 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v330;
      v331 = v300;
      if ( v300 )
        ++*(_DWORD *)(v300 + 8);
      xxxDoScrollMenu(*((struct tagWND **)v11 + 11), v11, *((_DWORD *)v11 + 90), (unsigned __int64)a4);
LABEL_254:
      ThreadUnlock1(v302, v301);
      return 0LL;
    }
LABEL_265:
    LODWORD(v9) = v318;
    v334 = (int)a3;
    v335 = (int)a4;
    v333 = 4097;
LABEL_266:
    v332 = 28;
    goto LABEL_267;
  }
  if ( v10 > 0xEB )
  {
    switch ( v10 )
    {
      case 0x100u:
        if ( a3 == (_DWORD *)33 )
        {
          v8 = 2;
        }
        else if ( a3 == (_DWORD *)34 )
        {
          v8 = 3;
        }
        else if ( a3 == (_DWORD *)35 )
        {
          v8 = 7;
        }
        else if ( a3 == (_DWORD *)36 )
        {
          v8 = 6;
        }
        else
        {
          if ( (unsigned __int64)a3 <= 0x24 )
            return 0LL;
          if ( (unsigned __int64)a3 <= 0x26 )
          {
            v8 = 0;
          }
          else if ( (unsigned __int64)a3 > 0x28 )
          {
            return 0LL;
          }
        }
        v317 = v8;
        break;
      case 0x101u:
        if ( (unsigned __int64)a3 - 33 > 7 )
          return 0LL;
        v317 = 8;
        break;
      case 0x201u:
        goto LABEL_299;
      case 0x203u:
        if ( (v13 & 0x18) == 0 )
        {
LABEL_299:
          if ( (v13 & 0x18) == 0 )
          {
            if ( (*((_BYTE *)v11 + 54) & 1) != 0 )
              xxxSetFocus(v11, 0LL);
            zzzHideCaret(v11);
            SBCtlSetup((__int64)v11);
            LOBYTE(v4) = (GetKeyState(0x10u, v309, v310, v311) & 0x8000u) != 0LL;
            xxxSBTrackInit(v11, (__int64)v9, 0, v4);
            return 0LL;
          }
        }
        LODWORD(v324) = (__int16)a4;
        HIDWORD(v324) = SWORD1(a4);
        ClientToScreen(v11, &v324);
        v313 = *((_QWORD *)v11 + 11);
        v314 = (unsigned __int16)v324 | (WORD2(v324) << 16);
        v315 = 17 - (((*(unsigned __int8 *)(v313 + 50) >> 6) & 1) != ((*(unsigned __int8 *)(v313 + 49) >> 6) & 1));
        v330 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v330;
        v331 = v313;
        if ( v313 )
          ++*(_DWORD *)(v313 + 8);
        v316 = (struct tagWND *)*((_QWORD *)v11 + 11);
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout(
          v316,
          274LL,
          v312 | (unsigned __int64)(unsigned int)(v315 - 9),
          v314,
          0,
          0,
          0LL,
          1,
          1);
        goto LABEL_254;
      default:
        v16 = v10 == 792;
LABEL_286:
        if ( !v16 )
          goto LABEL_287;
        v306 = (HDC)a3;
        if ( !a3 )
        {
          v307 = xxxBeginPaint(v11, (__int64)v337);
          v14 = v323;
          v306 = (HDC)v307;
        }
        if ( v14 )
        {
          v308 = *((_BYTE *)v11 + 54) & 4;
          if ( (*((_BYTE *)v11 + 54) & 4) == 0 )
            SetOrClrWF(1, v11, 0xE04u, 1);
          DrawSize((__int64)v11, v306, 0, 0);
          if ( !v308 )
            SetOrClrWF(0, v11, 0xE04u, 1);
        }
        else
        {
          SBCtlSetup((__int64)v11);
          xxxDrawSB2(v11, (struct tagWND *)((char *)v11 + 368), v306, *((_DWORD *)v11 + 90), *((_DWORD *)v11 + 91));
        }
        if ( !a3 )
          xxxEndPaint(v11, v337);
        return 0LL;
    }
    xxxDoScroll(v11, *((struct tagWND **)v11 + 11), v317, 0, *((_DWORD *)v11 + 90));
    return 0LL;
  }
  switch ( v10 )
  {
    case 0xEBu:
      LODWORD(result) = xxxGetScrollBarInfo(v11, -4, (__int64)a4);
      return (int)result;
    case 0xE3u:
      *a3 = *((_DWORD *)v11 + 92);
      *a4 = *((_DWORD *)v11 + 93);
      return *((unsigned __int16 *)v11 + 184) | (unsigned __int64)(*((unsigned __int16 *)v11 + 186) << 16);
    case 0xE4u:
      LODWORD(result) = xxxEnableSBCtlArrows(v11);
      return (int)result;
    case 0xE6u:
      v318 = 1;
      goto LABEL_265;
  }
  if ( v10 != 233 )
  {
    if ( v10 != 234 )
      goto LABEL_287;
    LODWORD(result) = SBGetParms((__int64)v11, 2, (_DWORD *)v11 + 92, a4);
    return (int)result;
  }
  v5 = (struct tagSCROLLINFO *)a4;
  v324 = a4;
  LODWORD(v9) = (_DWORD)a3;
LABEL_267:
  v325 = 1;
  if ( (unsigned int)SBSetParms((struct tagWND *)((char *)v11 + 368), v5, &v325, &v323) )
    xxxWindowEvent(0x800Eu, (__int64 *)v11, -4, 0, 1);
  if ( (_DWORD)v9 )
  {
    zzzHideCaret(v11);
    SBCtlSetup((__int64)v11);
    zzzSetSBCaretPos(v11);
    if ( (unsigned int)FChildVisible((__int64)v11) )
    {
      if ( v325 || (v324[1] & 8) == 0 )
        v15 = 0;
      xxxEnableScrollBar(v11, 2u, v15);
      DCEx = (HDC)_GetDCEx(v11, 0LL, 65537LL);
      ColorObjects = (HBRUSH)xxxGetColorObjects(v11, (__int64)DCEx);
      v305 = GreSelectBrush(DCEx, ColorObjects);
      DrawThumb2((__int64)v11, (_DWORD *)v11 + 92, DCEx, ColorObjects, *((_DWORD *)v11 + 90), *((_DWORD *)v11 + 91));
      GreSelectBrush(DCEx, v305);
      _ReleaseDC(DCEx);
    }
    zzzShowCaret(v11);
  }
  return v323;
}
