/*
 * XREFs of xxxArrangeIconicWindows @ 0x1C014E1F0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     FreeHwndList @ 0x1C0076DE0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0076E50 (BuildHwndList.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0078230 (xxxEndDeferWindowPosEx.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IsTrayWindow @ 0x1C00A1E80 (IsTrayWindow.c)
 *     _DeferWindowPos @ 0x1C00A6664 (_DeferWindowPos.c)
 *     InternalBeginDeferWindowPos @ 0x1C00A6808 (InternalBeginDeferWindowPos.c)
 *     _ScreenToClient @ 0x1C00DD204 (_ScreenToClient.c)
 *     InternalGetRealClientRect @ 0x1C01052BC (InternalGetRealClientRect.c)
 */

struct tagBWL *__fastcall xxxArrangeIconicWindows(__int64 a1)
{
  struct tagBWL *result; // rax
  struct tagBWL *v3; // rdi
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int *v16; // rcx
  int v17; // ebx
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int *v30; // rcx
  int v31; // esi
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r14
  unsigned __int64 *v39; // rdi
  unsigned __int16 v40; // r12
  __int64 v41; // rax
  unsigned int v42; // r11d
  int v43; // r13d
  bool v44; // zf
  int v45; // r12d
  unsigned int v46; // r14d
  _DWORD *Prop; // rax
  __int64 v48; // r10
  char v49; // r11
  _DWORD *v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  int v64; // ecx
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  int v78; // ecx
  _DWORD *v79; // rsi
  __int64 v80; // rdx
  unsigned __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  char CurrentThreadDpiAwarenessContext; // al
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 ThreadWin32Thread; // rax
  int v93; // ecx
  int *v94; // rcx
  __int64 v95; // rcx
  __int64 v96; // rax
  int v97; // ecx
  signed int v98; // eax
  int v99; // ecx
  int v100; // r15d
  int v101; // r14d
  int v102; // r12d
  __int64 v103; // rdx
  unsigned __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rdx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rdx
  __int64 v115; // r8
  __int64 v116; // r9
  _DWORD *v118; // rcx
  __int64 v119; // rcx
  int v120; // ecx
  int v121; // edi
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // rdx
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 v129; // rdx
  __int64 v130; // r8
  __int64 v131; // r9
  int v132; // ecx
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  __int64 v137; // rdx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rdx
  __int64 v141; // r8
  __int64 v142; // r9
  _DWORD *v144; // rbx
  __int64 v145; // rdx
  unsigned __int64 v146; // rcx
  __int64 v147; // r8
  __int64 v148; // r9
  __int64 v149; // rcx
  int v150; // ecx
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 v155; // rdx
  __int64 v156; // r8
  __int64 v157; // r9
  __int64 v159; // rdx
  __int64 v160; // r8
  __int64 v161; // r9
  __int64 v162; // rcx
  int v163; // ecx
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // r8
  __int64 v167; // r9
  __int64 v168; // rdx
  __int64 v169; // r8
  __int64 v170; // r9
  int *v172; // rcx
  int v173; // eax
  __int64 v174; // rcx
  __int64 v175; // rdx
  __int64 v176; // rcx
  __int64 v177; // r8
  __int64 v178; // r9
  __int64 v179; // rdx
  __int64 v180; // r8
  __int64 v181; // r9
  __int64 v182; // rdx
  __int64 v183; // r8
  __int64 v184; // r9
  int v185; // ecx
  __int64 v186; // rdx
  __int64 v187; // rcx
  __int64 v188; // r8
  __int64 v189; // r9
  __int64 v190; // rdx
  __int64 v191; // r8
  __int64 v192; // r9
  __int64 v193; // rdx
  __int64 v194; // r8
  __int64 v195; // r9
  _DWORD *v197; // rbx
  __int64 v198; // rdx
  unsigned __int64 v199; // rcx
  __int64 v200; // r8
  __int64 v201; // r9
  __int64 v202; // rcx
  int v203; // ecx
  __int64 v204; // rdx
  __int64 v205; // rcx
  __int64 v206; // r8
  __int64 v207; // r9
  __int64 v208; // rdx
  __int64 v209; // r8
  __int64 v210; // r9
  _DWORD *v212; // rcx
  char v213; // al
  int v214; // r11d
  __int64 v215; // rdx
  __int64 v216; // rcx
  __int64 v217; // r8
  __int64 v218; // r9
  __int64 v219; // rdx
  __int64 v220; // r8
  __int64 v221; // r9
  __int64 v222; // rax
  __int64 v223; // rdx
  int v224; // ecx
  _DWORD *v225; // rcx
  __int64 v226; // rdx
  __int64 v227; // rcx
  __int64 v228; // rdx
  __int64 v229; // rax
  __int64 v230; // rdx
  int v231; // ecx
  int v232; // eax
  unsigned __int64 *v233; // rbx
  unsigned __int64 *v234; // r13
  int v235; // r12d
  __int64 v236; // rax
  __int64 v237; // rax
  __int64 v238; // rdx
  __int64 v239; // r8
  unsigned __int64 *v240; // r10
  unsigned __int64 v241; // r11
  int v242; // r14d
  unsigned __int64 *v243; // r15
  __int64 v244; // rdi
  __int64 v245; // rax
  __int64 v246; // rdx
  __int64 v247; // rcx
  __int64 v248; // rbx
  __int64 v249; // r8
  __int64 v250; // r9
  char v251; // al
  __int64 v252; // rdx
  __int64 v253; // rcx
  __int64 v254; // r8
  __int64 v255; // r9
  __int64 v256; // rdx
  __int64 v257; // r8
  __int64 v258; // r9
  __int64 v259; // rax
  int v260; // ecx
  _DWORD *v261; // rcx
  __int64 v262; // rcx
  __int64 v263; // rax
  int v264; // ecx
  unsigned int v265; // ecx
  unsigned int v266; // ecx
  unsigned int v267; // ecx
  unsigned int v268; // ecx
  unsigned int v269; // ecx
  unsigned int v270; // ecx
  unsigned int v271; // ecx
  bool v272; // cc
  bool v273; // cc
  bool v274; // cc
  unsigned __int64 v275; // rax
  unsigned __int64 v276; // rax
  unsigned __int64 *v277; // r13
  unsigned __int64 *v278; // rbx
  unsigned __int64 v279; // rax
  __int64 v280; // rsi
  __int64 v281; // rax
  __int64 v282; // rax
  __int64 v283; // rdx
  struct tagSMWP *v284; // rdi
  __int64 v285; // r8
  __int64 v286; // r9
  __int64 v287; // rax
  __int64 v288; // rsi
  __int64 v289; // r15
  __int64 v290; // rdx
  unsigned __int64 v291; // rcx
  __int64 v292; // r8
  __int64 v293; // r9
  __int64 v294; // rdx
  __int64 v295; // rcx
  __int64 v296; // r8
  __int64 v297; // r9
  __int64 v298; // rdx
  __int64 v299; // r8
  __int64 v300; // r9
  __int64 v301; // rdx
  __int64 v302; // r8
  __int64 v303; // r9
  int v304; // ecx
  __int64 v305; // rdx
  __int64 v306; // rcx
  __int64 v307; // r8
  __int64 v308; // r9
  __int64 v309; // rdx
  __int64 v310; // r8
  __int64 v311; // r9
  __int64 v312; // rdx
  __int64 v313; // r8
  __int64 v314; // r9
  int v315; // ecx
  int *v316; // rbx
  __int64 v317; // rdx
  unsigned __int64 v318; // rcx
  __int64 v319; // r8
  __int64 v320; // r9
  __int64 v321; // rdx
  __int64 v322; // rcx
  __int64 v323; // r8
  __int64 v324; // r9
  __int64 v325; // rdx
  __int64 v326; // r8
  __int64 v327; // r9
  __int64 v328; // rdx
  __int64 v329; // r8
  __int64 v330; // r9
  int v331; // ecx
  __int64 v332; // rdx
  __int64 v333; // rcx
  __int64 v334; // r8
  __int64 v335; // r9
  __int64 v336; // rdx
  __int64 v337; // r8
  __int64 v338; // r9
  __int64 v339; // rdx
  __int64 v340; // r8
  __int64 v341; // r9
  int v342; // ecx
  int *v343; // rcx
  __int64 v344; // rdx
  __int64 v345; // rcx
  unsigned __int64 v346; // rcx
  int v347; // [rsp+50h] [rbp-59h]
  unsigned __int64 v348; // [rsp+50h] [rbp-59h]
  int v349; // [rsp+58h] [rbp-51h]
  int v350; // [rsp+5Ch] [rbp-4Dh]
  int v351; // [rsp+60h] [rbp-49h]
  int v352; // [rsp+64h] [rbp-45h]
  int v353; // [rsp+68h] [rbp-41h]
  int v354; // [rsp+6Ch] [rbp-3Dh]
  int v355; // [rsp+70h] [rbp-39h]
  unsigned __int64 *v356; // [rsp+78h] [rbp-31h]
  _DWORD v357[2]; // [rsp+80h] [rbp-29h] BYREF
  int v358; // [rsp+88h] [rbp-21h]
  int v359; // [rsp+8Ch] [rbp-1Dh]
  int v360; // [rsp+90h] [rbp-19h]
  struct tagBWL *v361; // [rsp+98h] [rbp-11h]
  _QWORD v362[12]; // [rsp+A0h] [rbp-9h] BYREF
  unsigned __int16 v363; // [rsp+110h] [rbp+67h]
  int v364; // [rsp+118h] [rbp+6Fh]
  int v365; // [rsp+120h] [rbp+77h]
  int v366; // [rsp+120h] [rbp+77h]
  unsigned __int64 *v367; // [rsp+120h] [rbp+77h]
  int v368; // [rsp+128h] [rbp+7Fh]

  v354 = 0;
  v353 = 0;
  v368 = 0;
  v349 = 0;
  v355 = 0;
  v352 = 0;
  result = BuildHwndList(*(_QWORD *)(a1 + 96), (struct tagWND *)2, 0LL);
  v361 = result;
  v3 = result;
  if ( !result )
    return result;
  v351 = IsTrayWindow(*(_QWORD *)(a1 + 96));
  v360 = IsDPIAbsoluteSysMet(0x2FuLL);
  if ( v360 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v5, v4, v6, v7) & 0xF) == 0 )
    {
LABEL_35:
      v16 = (int *)(gpsi + 2456LL);
      goto LABEL_6;
    }
  }
  else if ( IsDPIDWMSysMet(v5)
         && (W32GetCurrentThreadDpiAwarenessContext(v9, v8, v10, v11) & 0xF) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v51, v52, v53) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v54, v55, v56)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_35;
  }
  if ( IsDPIDWMSysMet(0x2FuLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v13, v12, v14, v15) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v58, v59, v60) + 408)
      ? (v64 = 0)
      : (v64 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v61, v62, v63)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v64) )
  {
    v16 = (int *)(gpsi + 2844LL);
  }
  else
  {
    v16 = (int *)(gpsi + 2068LL);
  }
LABEL_6:
  v17 = *v16;
  v364 = *v16;
  v347 = IsDPIAbsoluteSysMet(0x30uLL);
  if ( !v347 )
  {
    if ( IsDPIDWMSysMet(v19)
      && (W32GetCurrentThreadDpiAwarenessContext(v23, v22, v24, v25) & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v65, v66, v67) + 408)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v68, v69, v70) + 408)
                               + 8LL)
                   + 244LL) & 1 )
    {
      goto LABEL_49;
    }
LABEL_8:
    if ( IsDPIDWMSysMet(0x30uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v27, v26, v28, v29) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v72, v73, v74) + 408)
        ? (v78 = 0)
        : (v78 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v75,
                                                       v76,
                                                       v77)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v78) )
    {
      v30 = (int *)(gpsi + 2848LL);
    }
    else
    {
      v30 = (int *)(gpsi + 2072LL);
    }
    goto LABEL_10;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(v19, v18, v20, v21) & 0xF) != 0 )
    goto LABEL_8;
LABEL_49:
  v30 = (int *)(gpsi + 2460LL);
LABEL_10:
  v31 = *v30;
  v365 = *v30;
  InternalGetRealClientRect(a1, (__int64)v357, 1LL, 0LL, 1);
  LOBYTE(v32) = 1;
  v38 = HMValidateHandleNoSecure(ghwndSwitch, v32, v33, v34);
  v39 = (unsigned __int64 *)((char *)v3 + 32);
  v356 = v39;
  if ( *v39 == 1 )
  {
    v42 = 0;
    goto LABEL_18;
  }
  v40 = 0;
  do
  {
    LOBYTE(v35) = 1;
    v41 = HMValidateHandleNoSecure(*v39, v35, v36, v37);
    v42 = 0;
    if ( !v41 )
      goto LABEL_15;
    if ( (*(_BYTE *)(v41 + 55) & 0x10) == 0 || v41 == v38 )
      goto LABEL_14;
    Prop = (_DWORD *)GetProp(v41, (unsigned __int16)atomCheckpointProp, 1LL);
    v50 = Prop;
    if ( !Prop )
    {
      v17 = v364;
LABEL_14:
      v42 = 0;
LABEL_15:
      *v39 = 0LL;
      goto LABEL_16;
    }
    if ( (v49 & 0x20) == 0 )
    {
      Prop[8] &= ~8u;
      v42 = 0;
      Prop[5] = -1;
      Prop[4] = -1;
      *v39 = 0LL;
LABEL_24:
      v17 = v364;
      goto LABEL_16;
    }
    Prop[8] &= ~1u;
    v79 = Prop + 4;
    Prop[4] = *(_DWORD *)(v48 + 112);
    ++v40;
    Prop[5] = *(_DWORD *)(v48 + 116);
    ScreenToClient(a1, Prop + 4);
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x38uLL) )
    {
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v81, v80, v82, v83);
      v42 = 0;
      if ( (CurrentThreadDpiAwarenessContext & 0xF) == 0 )
        goto LABEL_65;
    }
    else if ( IsDPIDWMSysMet(v81) && (W32GetCurrentThreadDpiAwarenessContext(v86, v85, v87, v88) & 0xF) == 0 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v89, v90, v91);
      v42 = 0;
      if ( *(_QWORD *)(ThreadWin32Thread + 408) )
      {
        v93 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36, v37)
                                                + 408)
                                    + 8LL)
                        + 244LL) & 1;
        v42 = 0;
      }
      else
      {
        v93 = 0;
      }
      if ( v93 )
      {
LABEL_65:
        v94 = (int *)(gpsi + 2492LL);
        goto LABEL_75;
      }
    }
    if ( IsDPIDWMSysMet(0x38uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v95, v35, v36, v37) & 0xF) == 1 )
      {
        v96 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36, v37);
        v42 = 0;
        if ( *(_QWORD *)(v96 + 408) )
        {
          v97 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v35,
                                                      v36,
                                                      v37)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1;
          v42 = 0;
        }
        else
        {
          v97 = 0;
        }
        if ( v97 )
        {
          v94 = (int *)(gpsi + 2880LL);
          goto LABEL_75;
        }
      }
      else
      {
        v42 = 0;
      }
    }
    v94 = (int *)(gpsi + 2104LL);
LABEL_75:
    v98 = *v94 & 0xFFFFFFF7;
    if ( *v94 < 0 )
      goto LABEL_87;
    if ( v98 <= 1 )
    {
      v31 = v365;
      v36 = (unsigned int)v359;
      v35 = (unsigned int)((v365 / 2 - v50[5] + v359) % v365 - (v365 / 2 - v50[5]));
      v50[5] = v35;
      goto LABEL_24;
    }
    if ( v98 <= 3 )
    {
      v31 = v365;
      v35 = (unsigned int)((v50[5] + v365 / 2) >> 31);
      LODWORD(v35) = (v50[5] + v365 / 2) % v365;
      v36 = (unsigned int)(v50[5] + v365 / 2 - v35);
      v50[5] = v36;
      goto LABEL_24;
    }
    if ( v98 == 4 )
    {
LABEL_83:
      v17 = v364;
      v35 = (unsigned int)((*v79 + v364 / 2) >> 31);
      LODWORD(v35) = (*v79 + v364 / 2) % v364;
      v36 = (unsigned int)(*v79 + v364 / 2 - v35);
      *v79 = v36;
      goto LABEL_84;
    }
    if ( v98 != 5 )
    {
      if ( v98 == 6 )
        goto LABEL_83;
      if ( v98 != 7 )
      {
LABEL_87:
        v31 = v365;
        goto LABEL_24;
      }
    }
    v17 = v364;
    v36 = (unsigned int)v358;
    v35 = (unsigned int)((v364 / 2 - *v79 + v358) % v364 - (v364 / 2 - *v79));
    *v79 = v35;
LABEL_84:
    v31 = v365;
LABEL_16:
    ++v39;
  }
  while ( *v39 != 1 );
  v43 = v347;
  v44 = v40 == 0;
  v363 = v40;
  v45 = v360;
  if ( v44 )
  {
LABEL_18:
    v46 = v42;
    goto LABEL_19;
  }
  v99 = v351;
  if ( v351 )
  {
    v100 = 0;
    v101 = -32000;
    v348 = 0xFFFF8300FFFF8300uLL;
    v102 = -32000;
    goto LABEL_303;
  }
  v366 = IsDPIAbsoluteSysMet(0x38uLL);
  if ( v366 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v104, v103, v105, v106) & 0xF) == 0 )
      goto LABEL_99;
LABEL_100:
    if ( IsDPIDWMSysMet(0x38uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v119, v107, v108, v109) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v107, v108, v109) + 408)
        ? (v120 = 0)
        : (v120 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                        (__int64)KeGetCurrentThread(),
                                                        v107,
                                                        v108,
                                                        v109)
                                                    + 408)
                                        + 8LL)
                            + 244LL) & 1),
          v120) )
    {
      v118 = (_DWORD *)(gpsi + 2880LL);
    }
    else
    {
      v118 = (_DWORD *)(gpsi + 2104LL);
    }
  }
  else
  {
    if ( !IsDPIDWMSysMet(v104) || (W32GetCurrentThreadDpiAwarenessContext(v111, v110, v112, v113) & 0xF) != 0 )
      goto LABEL_100;
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v114, v115, v116) + 408)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v107, v108, v109)
                                             + 408)
                                 + 8LL)
                     + 244LL) & 1) )
    {
      goto LABEL_100;
    }
LABEL_99:
    v118 = (_DWORD *)(gpsi + 2492LL);
  }
  if ( (*v118 & 1) != 0 )
  {
    v121 = v364;
    v354 = v358 - v17;
    v101 = v358 - v17;
    LODWORD(v348) = v358 - v17;
    v368 = -v17;
    goto LABEL_145;
  }
  if ( !v45 )
  {
    if ( !IsDPIDWMSysMet(0x2FuLL) || (W32GetCurrentThreadDpiAwarenessContext(v134, v133, v135, v136) & 0xF) != 0 )
      goto LABEL_112;
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v137, v138, v139) + 408)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v140, v141, v142)
                                             + 408)
                                 + 8LL)
                     + 244LL) & 1) )
    {
      goto LABEL_112;
    }
    goto LABEL_122;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)v118, v107, v108, v109) & 0xF) == 0 )
  {
LABEL_122:
    v144 = (_DWORD *)(gpsi + 2456LL);
    goto LABEL_127;
  }
LABEL_112:
  if ( IsDPIDWMSysMet(0x2FuLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v123, v122, v124, v125) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v126, v127, v128) + 408)
      ? (v132 = 0)
      : (v132 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v129,
                                                      v130,
                                                      v131)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
        v132) )
  {
    v144 = (_DWORD *)(gpsi + 2844LL);
  }
  else
  {
    v144 = (_DWORD *)(gpsi + 2068LL);
  }
LABEL_127:
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x39uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v146, v145, v147, v148) & 0xF) != 0 )
    {
LABEL_129:
      if ( IsDPIDWMSysMet(0x39uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v149, v107, v108, v109) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v107, v108, v109) + 408)
          ? (v150 = 0)
          : (v150 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v107,
                                                          v108,
                                                          v109)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v150) )
      {
        v118 = (_DWORD *)(gpsi + 2884LL);
      }
      else
      {
        v118 = (_DWORD *)(gpsi + 2108LL);
      }
      goto LABEL_144;
    }
  }
  else
  {
    if ( !IsDPIDWMSysMet(v146) || (W32GetCurrentThreadDpiAwarenessContext(v152, v151, v153, v154) & 0xF) != 0 )
      goto LABEL_129;
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v155, v156, v157) + 408)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v107, v108, v109)
                                             + 408)
                                 + 8LL)
                     + 244LL) & 1) )
    {
      goto LABEL_129;
    }
  }
  v118 = (_DWORD *)(gpsi + 2496LL);
LABEL_144:
  v121 = v364;
  v101 = *v144 + v357[0] - *v118;
  v354 = v101;
  LODWORD(v348) = v101;
  v368 = v364;
LABEL_145:
  if ( !v366 )
  {
    if ( !IsDPIDWMSysMet(0x38uLL) || (W32GetCurrentThreadDpiAwarenessContext(v165, v164, v166, v167) & 0xF) != 0 )
      goto LABEL_147;
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v168, v169, v170) + 408)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v159, v160, v161)
                                             + 408)
                                 + 8LL)
                     + 244LL) & 1) )
    {
      goto LABEL_147;
    }
    goto LABEL_157;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)v118, v107, v108, v109) & 0xF) == 0 )
  {
LABEL_157:
    v172 = (int *)(gpsi + 2492LL);
    goto LABEL_162;
  }
LABEL_147:
  if ( IsDPIDWMSysMet(0x38uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v162, v159, v160, v161) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v159, v160, v161) + 408)
      ? (v163 = 0)
      : (v163 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v159,
                                                      v160,
                                                      v161)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
        v163) )
  {
    v172 = (int *)(gpsi + 2880LL);
  }
  else
  {
    v172 = (int *)(gpsi + 2104LL);
  }
LABEL_162:
  v173 = *v172;
  v174 = 2LL;
  if ( (v173 & 2) == 0 )
  {
    v353 = v359 - v31;
    v102 = v359 - v31;
    HIDWORD(v348) = v359 - v31;
    v349 = -v31;
    goto LABEL_199;
  }
  if ( !v43 )
  {
    if ( !IsDPIDWMSysMet(0x30uLL) || (W32GetCurrentThreadDpiAwarenessContext(v187, v186, v188, v189) & 0xF) != 0 )
      goto LABEL_165;
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v190, v191, v192) + 408)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v193, v194, v195)
                                             + 408)
                                 + 8LL)
                     + 244LL) & 1) )
    {
      goto LABEL_165;
    }
    goto LABEL_175;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(2LL, v159, v160, v161) & 0xF) == 0 )
  {
LABEL_175:
    v197 = (_DWORD *)(gpsi + 2460LL);
    goto LABEL_180;
  }
LABEL_165:
  if ( IsDPIDWMSysMet(0x30uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v176, v175, v177, v178) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v179, v180, v181) + 408)
      ? (v185 = 0)
      : (v185 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v182,
                                                      v183,
                                                      v184)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
        v185) )
  {
    v197 = (_DWORD *)(gpsi + 2848LL);
  }
  else
  {
    v197 = (_DWORD *)(gpsi + 2072LL);
  }
LABEL_180:
  if ( !(unsigned int)IsDPIAbsoluteSysMet(0x3AuLL) )
  {
    if ( !IsDPIDWMSysMet(v199) || (W32GetCurrentThreadDpiAwarenessContext(v205, v204, v206, v207) & 0xF) != 0 )
      goto LABEL_182;
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v208, v209, v210) + 408)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v159, v160, v161)
                                             + 408)
                                 + 8LL)
                     + 244LL) & 1) )
    {
      goto LABEL_182;
    }
    goto LABEL_192;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(v199, v198, v200, v201) & 0xF) == 0 )
  {
LABEL_192:
    v212 = (_DWORD *)(gpsi + 2500LL);
    goto LABEL_197;
  }
LABEL_182:
  if ( IsDPIDWMSysMet(0x3AuLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v202, v159, v160, v161) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v159, v160, v161) + 408)
      ? (v203 = 0)
      : (v203 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v159,
                                                      v160,
                                                      v161)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
        v203) )
  {
    v212 = (_DWORD *)(gpsi + 2888LL);
  }
  else
  {
    v212 = (_DWORD *)(gpsi + 2112LL);
  }
LABEL_197:
  v349 = v31;
  v174 = (unsigned int)(v357[1] + *v197 - *v212);
  v353 = v174;
  v102 = v174;
  HIDWORD(v348) = v174;
LABEL_199:
  if ( v366 )
  {
    v213 = W32GetCurrentThreadDpiAwarenessContext(v174, v159, v160, v161);
    v214 = 0;
    if ( (v213 & 0xF) == 0 )
      goto LABEL_208;
LABEL_209:
    if ( IsDPIDWMSysMet(0x38uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v227, v226, v36, v37) & 0xF) == 1 )
      {
        v229 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v228, v36, v37);
        v214 = 0;
        if ( *(_QWORD *)(v229 + 408) )
        {
          v231 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v230,
                                                       v36,
                                                       v37)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1;
          v214 = 0;
        }
        else
        {
          v231 = 0;
        }
        if ( v231 )
        {
          v225 = (_DWORD *)(gpsi + 2880LL);
          goto LABEL_218;
        }
      }
      else
      {
        v214 = 0;
      }
    }
    v225 = (_DWORD *)(gpsi + 2104LL);
  }
  else
  {
    if ( !IsDPIDWMSysMet(0x38uLL) || (W32GetCurrentThreadDpiAwarenessContext(v216, v215, v217, v218) & 0xF) != 0 )
      goto LABEL_209;
    v222 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v219, v220, v221);
    v214 = 0;
    if ( *(_QWORD *)(v222 + 408) )
    {
      v224 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v223, v36, v37)
                                               + 408)
                                   + 8LL)
                       + 244LL) & 1;
      v214 = 0;
    }
    else
    {
      v224 = 0;
    }
    if ( !v224 )
      goto LABEL_209;
LABEL_208:
    v225 = (_DWORD *)(gpsi + 2492LL);
  }
LABEL_218:
  if ( (*v225 & 4) != 0 )
  {
    v35 = (unsigned int)(v359 >> 31);
    v352 = v214;
    LODWORD(v35) = v359 % v31;
    v232 = v359 / v31;
  }
  else
  {
    v35 = (unsigned int)(v358 >> 31);
    v352 = 1;
    LODWORD(v35) = v358 % v121;
    v232 = v358 / v121;
  }
  v233 = v356;
  v100 = v232;
  v234 = v356;
  if ( v232 < 1 )
    v100 = 1;
  v350 = v100;
  v355 = v100;
  if ( *v356 != 1 )
  {
    v235 = v366;
    while ( 1 )
    {
      if ( !*v234 )
        goto LABEL_300;
      LOBYTE(v35) = 1;
      v236 = HMValidateHandleNoSecure(*v234, v35, v36, v37);
      v367 = (unsigned __int64 *)v236;
      if ( !v236 )
        goto LABEL_300;
      v237 = GetProp(v236, (unsigned __int16)atomCheckpointProp, 1LL);
      v242 = v241;
      v243 = v233;
      v244 = *(_QWORD *)(v237 + 16);
      if ( v233 >= v234 )
        goto LABEL_291;
      while ( 1 )
      {
        if ( *v243 )
        {
          LOBYTE(v238) = 1;
          v245 = HMValidateHandleNoSecure(*v243, v238, v239, v37);
          v241 = 0LL;
          if ( v245 )
            break;
        }
LABEL_289:
        if ( ++v243 >= v234 )
          goto LABEL_290;
      }
      v248 = *(_QWORD *)(GetProp(v245, (unsigned __int16)atomCheckpointProp, 1LL) + 16);
      if ( v235 )
      {
        v251 = W32GetCurrentThreadDpiAwarenessContext(v247, v246, v249, v250);
        v241 = 0LL;
        if ( (v251 & 0xF) == 0 )
          goto LABEL_239;
      }
      else if ( IsDPIDWMSysMet(0x38uLL) && (W32GetCurrentThreadDpiAwarenessContext(v253, v252, v254, v255) & 0xF) == 0 )
      {
        v259 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v256, v257, v258);
        v241 = 0LL;
        if ( *(_QWORD *)(v259 + 408) )
        {
          v260 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v238,
                                                       v239,
                                                       v37)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1;
          v241 = 0LL;
        }
        else
        {
          v260 = 0;
        }
        if ( v260 )
        {
LABEL_239:
          v261 = (_DWORD *)(gpsi + 2492LL);
          goto LABEL_249;
        }
      }
      if ( IsDPIDWMSysMet(0x38uLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v262, v238, v239, v37) & 0xF) == 1 )
        {
          v263 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v238, v239, v37);
          v241 = 0LL;
          if ( *(_QWORD *)(v263 + 408) )
          {
            v264 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v238,
                                                         v239,
                                                         v37)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1;
            v241 = 0LL;
          }
          else
          {
            v264 = 0;
          }
          if ( v264 )
          {
            v261 = (_DWORD *)(gpsi + 2880LL);
            goto LABEL_249;
          }
        }
        else
        {
          v241 = 0LL;
        }
      }
      v261 = (_DWORD *)(gpsi + 2104LL);
LABEL_249:
      v265 = *v261 & 0xFFFFFFF7;
      if ( !v265 )
      {
        v274 = SHIDWORD(v248) < SHIDWORD(v244);
        if ( HIDWORD(v248) != HIDWORD(v244) )
          goto LABEL_286;
        if ( (int)v248 > (int)v244 )
          goto LABEL_287;
        goto LABEL_285;
      }
      v266 = v265 - 1;
      if ( !v266 )
      {
        v274 = SHIDWORD(v248) < SHIDWORD(v244);
        if ( HIDWORD(v248) != HIDWORD(v244) )
          goto LABEL_286;
        if ( (int)v248 < (int)v244 )
          goto LABEL_287;
LABEL_285:
        v274 = SHIDWORD(v248) < SHIDWORD(v244);
        goto LABEL_286;
      }
      v267 = v266 - 1;
      if ( !v267 )
      {
        v273 = SHIDWORD(v248) <= SHIDWORD(v244);
        if ( HIDWORD(v248) != HIDWORD(v244) )
          goto LABEL_266;
        if ( (int)v248 > (int)v244 )
          goto LABEL_287;
LABEL_265:
        v273 = SHIDWORD(v248) <= SHIDWORD(v244);
        goto LABEL_266;
      }
      v268 = v267 - 1;
      if ( !v268 )
      {
        v273 = SHIDWORD(v248) <= SHIDWORD(v244);
        if ( HIDWORD(v248) != HIDWORD(v244) )
          goto LABEL_266;
        if ( (int)v248 < (int)v244 )
          goto LABEL_287;
        goto LABEL_265;
      }
      v269 = v268 - 1;
      if ( !v269 )
      {
        v273 = (int)v248 <= (int)v244;
        if ( (_DWORD)v248 == (_DWORD)v244 )
        {
          if ( SHIDWORD(v248) < SHIDWORD(v244) )
            goto LABEL_287;
LABEL_264:
          v273 = (int)v248 <= (int)v244;
        }
        goto LABEL_266;
      }
      v270 = v269 - 1;
      if ( !v270 )
      {
        v274 = (int)v248 < (int)v244;
        if ( (_DWORD)v248 == (_DWORD)v244 )
        {
          if ( SHIDWORD(v248) < SHIDWORD(v244) )
            goto LABEL_287;
          v274 = (int)v248 < (int)v244;
        }
LABEL_286:
        if ( v274 )
          goto LABEL_287;
        goto LABEL_288;
      }
      v271 = v270 - 1;
      if ( !v271 )
      {
        v273 = (int)v248 <= (int)v244;
        if ( (_DWORD)v248 == (_DWORD)v244 )
        {
          if ( SHIDWORD(v248) <= SHIDWORD(v244) )
            goto LABEL_264;
LABEL_287:
          v242 = 1;
LABEL_288:
          if ( v242 )
            goto LABEL_290;
          goto LABEL_289;
        }
LABEL_266:
        if ( !v273 )
          goto LABEL_287;
        goto LABEL_288;
      }
      if ( v271 != 1 )
        goto LABEL_288;
      v272 = (int)v248 < (int)v244;
      if ( (_DWORD)v248 == (_DWORD)v244 )
      {
        if ( SHIDWORD(v248) > SHIDWORD(v244) )
          goto LABEL_290;
        v272 = (int)v248 < (int)v244;
      }
      if ( !v272 )
        goto LABEL_288;
LABEL_290:
      v240 = v367;
      v233 = v356;
LABEL_291:
      v36 = v241;
      v35 = (unsigned __int64)((char *)v234 - (char *)v243 + 7) >> 3;
      if ( v243 > v234 )
        v35 = v241;
      if ( v35 )
      {
        do
        {
          v37 = *(_QWORD *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v243 + gSharedInfo[1]);
          v275 = v241;
          if ( v240 )
            v275 = *v240;
          *v243 = v275;
          ++v36;
          ++v243;
          v240 = (unsigned __int64 *)v37;
        }
        while ( v36 < v35 );
      }
      v276 = v241;
      if ( v240 )
        v276 = *v240;
      *v234 = v276;
LABEL_300:
      if ( *++v234 == 1 )
      {
        v102 = HIDWORD(v348);
        v101 = v348;
        v100 = v350;
        break;
      }
    }
  }
  v99 = 0;
LABEL_303:
  v277 = v356;
  v278 = v356;
  v279 = *v356;
  if ( *v356 != 1 )
  {
    v280 = v99;
    while ( 1 )
    {
      if ( !v279 )
        goto LABEL_314;
      LOBYTE(v35) = 1;
      v281 = HMValidateHandleNoSecure(v279, v35, v36, v37);
      if ( !v281 )
        goto LABEL_314;
      v282 = GetProp(v281, (unsigned __int16)atomCheckpointProp, 1LL);
      if ( v282 )
      {
        *(_DWORD *)(v282 + 32) |= 8u;
        *(_QWORD *)(v282 + 16) = v348;
      }
      if ( v280 )
        goto LABEL_314;
      if ( --v100 > 0 )
      {
        if ( v352 )
        {
          v101 += v368;
          LODWORD(v348) = v101;
          goto LABEL_314;
        }
      }
      else
      {
        v100 = v355;
        if ( !v352 )
        {
          v101 += v368;
          v102 = v353;
          v348 = __PAIR64__(v353, v101);
          goto LABEL_314;
        }
        v101 = v354;
        LODWORD(v348) = v354;
      }
      v102 += v349;
      HIDWORD(v348) = v102;
LABEL_314:
      v279 = *++v278;
      if ( *v278 == 1 )
      {
        v277 = v356;
        break;
      }
    }
  }
  v46 = v363;
  v284 = (struct tagSMWP *)InternalBeginDeferWindowPos(2 * (unsigned int)v363);
  if ( !v284 )
    goto LABEL_19;
  while ( 2 )
  {
    v346 = *v277;
    if ( *v277 != 1 )
    {
      if ( !v346 || (LOBYTE(v283) = 1, v287 = HMValidateHandleNoSecure(v346, v283, v285, v286), (v288 = v287) == 0) )
      {
LABEL_358:
        ++v277;
        continue;
      }
      v289 = GetProp(v287, (unsigned __int16)atomCheckpointProp, 1LL);
      v362[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v362;
      v362[1] = v288;
      ++*(_DWORD *)(v288 + 8);
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x3AuLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v291, v290, v292, v293) & 0xF) != 0 )
          goto LABEL_325;
      }
      else if ( !IsDPIDWMSysMet(v291)
             || (W32GetCurrentThreadDpiAwarenessContext(v306, v305, v307, v308) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v309, v310, v311) + 408)
               ? (v315 = 0)
               : (v315 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v312,
                                                               v313,
                                                               v314)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                 !v315) )
      {
LABEL_325:
        if ( IsDPIDWMSysMet(0x3AuLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v295, v294, v296, v297) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v298, v299, v300) + 408)
            ? (v304 = 0)
            : (v304 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v301,
                                                            v302,
                                                            v303)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
              v304) )
        {
          v316 = (int *)(gpsi + 2888LL);
        }
        else
        {
          v316 = (int *)(gpsi + 2112LL);
        }
LABEL_340:
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x39uLL) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v318, v317, v319, v320) & 0xF) != 0 )
            goto LABEL_342;
        }
        else if ( !IsDPIDWMSysMet(v318)
               || (W32GetCurrentThreadDpiAwarenessContext(v333, v332, v334, v335) & 0xF) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v336, v337, v338) + 408)
                 ? (v342 = 0)
                 : (v342 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                 (__int64)KeGetCurrentThread(),
                                                                 v339,
                                                                 v340,
                                                                 v341)
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                   !v342) )
        {
LABEL_342:
          if ( IsDPIDWMSysMet(0x39uLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v322, v321, v323, v324) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v325, v326, v327) + 408)
              ? (v331 = 0)
              : (v331 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v328,
                                                              v329,
                                                              v330)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                v331) )
          {
            v343 = (int *)(gpsi + 2884LL);
          }
          else
          {
            v343 = (int *)(gpsi + 2108LL);
          }
LABEL_357:
          v284 = (struct tagSMWP *)DeferWindowPos(
                                     (__int64)v284,
                                     v288,
                                     0LL,
                                     *(_DWORD *)(v289 + 16),
                                     *(_DWORD *)(v289 + 20),
                                     *v343,
                                     *v316,
                                     276,
                                     0);
          ThreadUnlock1(v345, v344);
          if ( !v284 )
            goto LABEL_19;
          goto LABEL_358;
        }
        v343 = (int *)(gpsi + 2496LL);
        goto LABEL_357;
      }
      v316 = (int *)(gpsi + 2500LL);
      goto LABEL_340;
    }
    break;
  }
  xxxEndDeferWindowPosEx(v284, 1LL, v285);
LABEL_19:
  FreeHwndList(v361);
  return (struct tagBWL *)v46;
}
