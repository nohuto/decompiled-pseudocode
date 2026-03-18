/*
 * XREFs of xxxDrawCaptionBar @ 0x1C004ED9C
 * Callers:
 *     xxxRedrawTitle @ 0x1C0047C70 (xxxRedrawTitle.c)
 *     xxxDWP_DoNCActivate @ 0x1C004EB68 (xxxDWP_DoNCActivate.c)
 *     xxxDrawWindowFrame @ 0x1C0057540 (xxxDrawWindowFrame.c)
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 * Callees:
 *     GetResizeBorderWidth @ 0x1C000E7E4 (GetResizeBorderWidth.c)
 *     GetWindowFrameMetric @ 0x1C000E7FC (GetWindowFrameMetric.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     xxxMNCanClose @ 0x1C004F188 (xxxMNCanClose.c)
 *     GetWindowBorders @ 0x1C004F1E0 (GetWindowBorders.c)
 *     IsVisible @ 0x1C0057870 (IsVisible.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     GrePolyPatBlt @ 0x1C00865E0 (GrePolyPatBlt.c)
 *     NtGdiPatBlt @ 0x1C00868F0 (NtGdiPatBlt.c)
 *     GetRect @ 0x1C0087D10 (GetRect.c)
 *     ClearHungFlag @ 0x1C0089EE8 (ClearHungFlag.c)
 *     DrawEdge @ 0x1C0094D78 (DrawEdge.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     GetAppCompatFlags2 @ 0x1C00956B8 (GetAppCompatFlags2.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     BitBltSysBmp @ 0x1C00F4978 (BitBltSysBmp.c)
 *     IS_UI_LANGID @ 0x1C00F4B1C (IS_UI_LANGID.c)
 *     FixHDCBITSBmp @ 0x1C00F4B48 (FixHDCBITSBmp.c)
 *     DrawFrame @ 0x1C00F9D40 (DrawFrame.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     xxxDrawCaptionTemp @ 0x1C0237948 (xxxDrawCaptionTemp.c)
 */

char __fastcall xxxDrawCaptionBar(__int64 a1, HDC a2, int a3)
{
  __int16 v3; // r12
  HDC v4; // r15
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // eax
  int v9; // edx
  char v10; // cl
  int v11; // edx
  int WindowBorders; // edi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  _DWORD *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  _DWORD *v20; // rdx
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // ebx
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  int *v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  _DWORD *v34; // rdx
  int v35; // ecx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // ecx
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v42; // ecx
  _DWORD *v43; // rbx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  int v47; // ecx
  __int64 v48; // rcx
  __int64 v49; // rcx
  int v50; // ecx
  _DWORD *v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  int v55; // ecx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  int v62; // ecx
  __int64 v63; // rcx
  __int64 v64; // rcx
  int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rcx
  int v70; // ecx
  __int64 v71; // rcx
  __int64 v72; // rcx
  int v73; // ecx
  _DWORD *v74; // rcx
  int v75; // edi
  __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rcx
  int v79; // ecx
  __int64 v80; // rcx
  __int64 v81; // rcx
  int v82; // ecx
  _DWORD *v83; // rbx
  __int64 v84; // rcx
  __int64 v85; // rcx
  __int64 v86; // rcx
  int v87; // ecx
  __int64 v88; // rcx
  __int64 v89; // rcx
  int v90; // ecx
  _DWORD *v91; // rdx
  int v92; // ecx
  int v93; // eax
  int v94; // ecx
  __int64 v95; // rcx
  __int64 v96; // rcx
  int v98; // ecx
  __int64 v99; // rcx
  __int64 v100; // rcx
  int v102; // ecx
  __int64 v103; // rcx
  __int64 v104; // rcx
  int v106; // ecx
  __int64 v107; // rcx
  __int64 v108; // rcx
  int v110; // ecx
  __int64 v111; // rcx
  __int64 v112; // rcx
  __int64 v113; // rcx
  int v114; // ecx
  __int64 v115; // rcx
  __int64 v116; // rcx
  int v117; // ecx
  _DWORD *v118; // rcx
  __int64 v119; // rcx
  __int64 v120; // rcx
  __int64 v121; // rcx
  int v122; // ecx
  __int64 v123; // rcx
  __int64 v124; // rcx
  int v125; // ecx
  __int64 v126; // rcx
  __int64 v127; // rcx
  __int64 v128; // rcx
  __int64 v129; // rcx
  __int64 v131; // rcx
  unsigned __int8 v132; // di
  int v133; // r15d
  __int64 v134; // rcx
  __int64 v135; // rcx
  __int64 v136; // rcx
  int v137; // ecx
  __int64 v138; // rcx
  __int64 v139; // rcx
  int v140; // ecx
  _DWORD *v141; // rcx
  __int64 v142; // rcx
  __int64 v143; // rcx
  __int64 v144; // rcx
  int v145; // ecx
  __int64 v146; // rcx
  __int64 v147; // rcx
  int v148; // ecx
  _DWORD *v149; // rcx
  __int64 v150; // rcx
  __int64 v151; // rcx
  __int64 v152; // rcx
  int v153; // ecx
  __int64 v154; // rcx
  __int64 v155; // rcx
  int v156; // ecx
  __int64 v157; // rcx
  __int64 v158; // rcx
  __int64 v159; // rcx
  int v160; // ecx
  __int64 v161; // rcx
  __int64 v162; // rcx
  int v163; // ecx
  _DWORD *v164; // rcx
  __int64 v165; // rcx
  __int64 v166; // rcx
  int v167; // ecx
  __int64 v168; // rcx
  __int64 v169; // rcx
  int v170; // ecx
  _DWORD *v171; // rcx
  __int64 v172; // rcx
  int v173; // esi
  __int64 v174; // rcx
  __int64 v175; // rcx
  int v176; // ecx
  __int64 v177; // rcx
  __int64 v178; // rcx
  int v179; // ecx
  _DWORD *v180; // rcx
  __int64 v181; // rcx
  __int64 v182; // rcx
  __int64 v183; // rcx
  __int64 v184; // rcx
  int v186; // edi
  unsigned int v187; // r8d
  __int64 v188; // rcx
  __int64 v189; // rcx
  __int64 v190; // rcx
  __int64 v191; // rcx
  __int64 v192; // rcx
  _DWORD *v194; // rcx
  __int64 v195; // rcx
  int v196; // ecx
  __int64 v197; // rcx
  __int64 v198; // rcx
  __int64 v199; // rcx
  __int64 v200; // rcx
  unsigned int v202; // r9d
  __int64 v203; // rcx
  unsigned int v204; // r8d
  __int64 v205; // rcx
  __int64 v206; // rcx
  __int64 v207; // rcx
  __int64 v208; // rcx
  int v209; // ecx
  __int64 v210; // rcx
  __int64 v211; // rcx
  int v212; // ecx
  _DWORD *v213; // rcx
  __int64 v214; // rcx
  __int64 v215; // rcx
  __int64 v216; // rcx
  __int64 v217; // rcx
  int v218; // ecx
  __int64 v219; // rcx
  __int64 v220; // rcx
  int v221; // ecx
  __int64 v222; // rcx
  __int64 v223; // rcx
  int v224; // ecx
  _DWORD *v225; // rcx
  __int64 v226; // rcx
  __int64 v227; // rcx
  __int64 v228; // rcx
  __int64 v229; // rcx
  int v230; // ecx
  __int64 v231; // rax
  __int64 v232; // rcx
  __int64 v233; // rcx
  __int64 v234; // rcx
  _DWORD *v236; // rcx
  __int64 v237; // rcx
  int v238; // ecx
  __int64 v239; // rcx
  __int64 v240; // rcx
  int v241; // ecx
  __int64 v242; // rcx
  __int64 v243; // rcx
  int v244; // ecx
  _DWORD *v245; // rcx
  __int64 v246; // rcx
  __int64 v247; // rcx
  __int64 v248; // rcx
  int v249; // ecx
  __int64 v250; // rcx
  __int64 v251; // rcx
  int v252; // ecx
  __int64 v253; // rcx
  __int64 v254; // rcx
  __int64 v255; // rcx
  __int64 v256; // rcx
  int v257; // ecx
  __int64 v258; // rcx
  __int64 v259; // rcx
  int v260; // ecx
  __int64 v261; // rcx
  __int64 v262; // rcx
  int v263; // ecx
  __int64 v264; // rcx
  __int64 v265; // rcx
  int v266; // ecx
  __int64 v267; // rcx
  __int64 v268; // rcx
  __int64 v269; // rcx
  int v270; // ecx
  __int64 v271; // rcx
  __int64 v272; // rcx
  int v273; // ecx
  __int64 v274; // rcx
  __int64 v275; // rcx
  __int64 v276; // rcx
  __int64 v277; // rcx
  __int64 v278; // rcx
  int v279; // ecx
  HDC v280; // rbx
  _DWORD *v281; // rdi
  __int64 v282; // rax
  __int64 v283; // rcx
  __int64 v284; // rcx
  __int64 v285; // rcx
  int v286; // ecx
  __int64 v287; // rcx
  __int64 v288; // rcx
  int v289; // ecx
  _DWORD *v290; // rbx
  __int64 v291; // rcx
  __int64 v292; // rcx
  __int64 v293; // rcx
  int v294; // ecx
  __int64 v295; // rcx
  __int64 v296; // rcx
  int v297; // ecx
  _DWORD *v298; // rcx
  int v299; // edi
  int v300; // ebx
  __int64 v301; // rcx
  __int64 v302; // rcx
  __int64 v303; // rcx
  int v304; // ecx
  __int64 v305; // rcx
  __int64 v306; // rcx
  int v307; // ecx
  _DWORD *v308; // rcx
  __int64 v309; // rcx
  __int64 v310; // rcx
  __int64 v311; // rcx
  int v312; // ecx
  __int64 v313; // rcx
  __int64 v314; // rcx
  int v315; // ecx
  _DWORD *v316; // rcx
  __int64 v317; // rcx
  __int64 v318; // rcx
  __int64 v319; // rcx
  int v320; // ecx
  __int64 v321; // rcx
  __int64 v322; // rcx
  int v323; // ecx
  _DWORD *v324; // rbx
  __int64 v325; // rcx
  int v326; // edi
  __int64 v327; // rcx
  __int64 v328; // rcx
  int v329; // ecx
  __int64 v330; // rcx
  __int64 v331; // rcx
  int v332; // ecx
  _DWORD *v333; // rcx
  __int64 v334; // rcx
  __int64 v335; // rcx
  __int64 v336; // rcx
  __int64 v337; // rcx
  __int64 v338; // rcx
  _DWORD *v339; // rbx
  __int64 v340; // rcx
  __int64 v341; // rcx
  int v342; // ecx
  __int64 v343; // rcx
  __int64 v344; // rcx
  int v345; // ecx
  int *v346; // r8
  int v347; // edx
  __int64 v348; // rcx
  __int64 v349; // rcx
  __int64 v350; // rcx
  __int64 v351; // rcx
  __int64 v352; // rcx
  __int64 v353; // rax
  __int64 v354; // rcx
  __int64 v355; // rcx
  __int64 v356; // rcx
  __int64 v357; // rcx
  _DWORD *v358; // r13
  __int64 v359; // rcx
  __int64 v360; // rcx
  __int64 v361; // rcx
  __int64 v362; // rcx
  _DWORD *v363; // r15
  __int64 v364; // rcx
  __int64 v365; // rcx
  __int64 v366; // rcx
  __int64 v367; // rcx
  _DWORD *v368; // r14
  __int64 v369; // rcx
  __int64 v370; // rcx
  __int64 v371; // rcx
  __int64 v372; // rcx
  _DWORD *v373; // rsi
  __int64 v374; // rcx
  __int64 v375; // rcx
  int v376; // ecx
  __int64 v377; // rcx
  __int64 v378; // rcx
  int v379; // ecx
  _BOOL8 v380; // rcx
  unsigned int v382; // [rsp+60h] [rbp-A0h]
  int v384; // [rsp+70h] [rbp-90h]
  int v386; // [rsp+80h] [rbp-80h]
  int v387; // [rsp+80h] [rbp-80h]
  int v388; // [rsp+88h] [rbp-78h]
  _DWORD *v389; // [rsp+88h] [rbp-78h]
  __int64 v390; // [rsp+90h] [rbp-70h]
  _DWORD *v391; // [rsp+90h] [rbp-70h]
  int v392; // [rsp+98h] [rbp-68h]
  __int64 v394; // [rsp+A0h] [rbp-60h]
  int v395; // [rsp+F0h] [rbp-10h] BYREF
  int v396; // [rsp+F4h] [rbp-Ch]
  int v397; // [rsp+F8h] [rbp-8h]
  int v398; // [rsp+FCh] [rbp-4h]

  v3 = a3;
  v4 = a2;
  v388 = 0;
  v5 = a1;
  v394 = 0LL;
  if ( (a3 & 0x800) == 0 )
  {
    LODWORD(v6) = IsVisible(a1, a2);
    if ( !(_DWORD)v6 )
      return v6;
  }
  ClearHungFlag((struct tagWND *)a1);
  GetRect(v5, &v395, 34LL);
  if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) != 0x80000010 )
  {
    v392 = 0;
    v386 = v3 & 1;
    if ( (v3 & 1) != 0 )
      v7 = *(_QWORD *)(gpsi + 3712LL);
    else
      v7 = *(_QWORD *)(gpsi + 3720LL);
  }
  else
  {
    v392 = 1;
    v386 = v3 & 1;
    if ( (v3 & 1) != 0 )
      v7 = *(_QWORD *)(gpsi + 3912LL);
    else
      v7 = *(_QWORD *)(gpsi + 3920LL);
  }
  v390 = v7;
  v8 = xxxMNCanClose(v5);
  v9 = 0;
  if ( !v8 )
    v9 = 16;
  v10 = *(_BYTE *)(v5 + 54);
  v382 = v9;
  if ( (v10 & 1) == 0 )
  {
    v9 |= 8u;
LABEL_11:
    v382 = v9;
    goto LABEL_12;
  }
  if ( (*(_BYTE *)(v5 + 55) & 1) != 0 )
  {
    v9 |= 2u;
    goto LABEL_11;
  }
LABEL_12:
  if ( (v10 & 2) != 0 )
  {
    if ( (*(_BYTE *)(v5 + 55) & 0x20) == 0 )
    {
LABEL_15:
      if ( (v3 & 0x8000) == 0 )
      {
        WindowBorders = GetWindowBorders(*(unsigned int *)(v5 + 52), *(unsigned int *)(v5 + 48));
        if ( (unsigned int)IsDPIAbsoluteSysMet(6LL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) == 0
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v103) + 776) & 0x4000) == 0 )
          {
LABEL_233:
            v16 = (_DWORD *)(gpsi + 2292LL);
            goto LABEL_20;
          }
        }
        else if ( (unsigned int)IsDPIDWMSysMet(v13)
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) == 0
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v104) + 776) & 0x4000) == 0
               && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                            + 260LL) & 1 )
        {
          goto LABEL_233;
        }
        if ( (unsigned int)IsDPIDWMSysMet(6LL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v106 = 0)
            : (v106 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
              v106) )
        {
          v16 = (_DWORD *)(gpsi + 2680LL);
        }
        else
        {
          v16 = (_DWORD *)(gpsi + 1904LL);
        }
LABEL_20:
        if ( (unsigned int)IsDPIAbsoluteSysMet(5LL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x2000) == 0
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v107) + 776) & 0x4000) == 0 )
          {
LABEL_249:
            v20 = (_DWORD *)(gpsi + 2288LL);
LABEL_24:
            v21 = WindowBorders * *v16;
            LODWORD(v6) = -(WindowBorders * *v20);
            v395 += WindowBorders * *v20;
            v397 += v6;
            v396 += v21;
            goto LABEL_25;
          }
        }
        else if ( (unsigned int)IsDPIDWMSysMet(v17)
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) == 0
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v108) + 776) & 0x4000) == 0
               && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                            + 260LL) & 1 )
        {
          goto LABEL_249;
        }
        if ( (unsigned int)IsDPIDWMSysMet(5LL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v110 = 0)
            : (v110 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
              v110) )
        {
          v20 = (_DWORD *)(gpsi + 2676LL);
        }
        else
        {
          v20 = (_DWORD *)(gpsi + 1900LL);
        }
        goto LABEL_24;
      }
      LODWORD(v6) = GetWindowFrameMetric();
      v25 = v6;
      if ( (*(_BYTE *)(v5 + 49) & 1) != 0 )
      {
        LOBYTE(v6) = DrawEdge(v4);
        v26 = a1;
      }
      else
      {
        v26 = a1;
        if ( (*(_BYTE *)(a1 + 50) & 2) != 0 )
          LOBYTE(v6) = DrawEdge(v4);
      }
      if ( (*(_BYTE *)(v26 + 54) & 4) == 0 )
      {
        if ( v25 <= 0
          || (LOBYTE(v6) = !_bittest((const signed __int32 *)(v26 + 52), 0x12u),
              (((*(_DWORD *)(v26 + 52) & 0xC00000) != 12582912) & (unsigned __int8)v6) != 0)
          || (LODWORD(v6) = GetAppCompatFlags2(39168LL, v22, v23, v24), (v6 & 0x30000000) != 0) )
        {
LABEL_34:
          if ( (*(_BYTE *)(v26 + 54) & 0xC0) == 0 && (*(_BYTE *)(v26 + 48) & 1) == 0 )
          {
LABEL_25:
            v5 = a1;
            if ( (*(_BYTE *)(a1 + 40) & 8) == 0 )
              return v6;
            if ( *(char *)(a1 + 48) < 0 )
            {
              v382 |= 0x20u;
              if ( (unsigned int)IsDPIAbsoluteSysMet(53LL) )
              {
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v111) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v112) + 776) & 0x4000) != 0 )
                {
                  goto LABEL_260;
                }
              }
              else if ( !(unsigned int)IsDPIDWMSysMet(v111)
                     || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v115) + 776) & 0x2000) != 0
                     || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v116) + 776) & 0x4000) != 0
                     || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                       ? (v117 = 0)
                       : (v117 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                   + 416)
                                                       + 8LL)
                                           + 260LL) & 1),
                         !v117) )
              {
LABEL_260:
                if ( (unsigned int)IsDPIDWMSysMet(53LL)
                  && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v113) + 776) & 0x2000) != 0
                  && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                    ? (v114 = 0)
                    : (v114 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                + 416)
                                                    + 8LL)
                                        + 260LL) & 1),
                      v114) )
                {
                  v118 = (_DWORD *)(gpsi + 2868LL);
                }
                else
                {
                  v118 = (_DWORD *)(gpsi + 2092LL);
                }
                goto LABEL_276;
              }
              v118 = (_DWORD *)(gpsi + 2480LL);
LABEL_276:
              v388 = 41;
              goto LABEL_296;
            }
            if ( (unsigned int)IsDPIAbsoluteSysMet(31LL) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v119) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v120) + 776) & 0x4000) != 0 )
              {
                goto LABEL_280;
              }
            }
            else if ( !(unsigned int)IsDPIDWMSysMet(v119)
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v123) + 776) & 0x2000) != 0
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v124) + 776) & 0x4000) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                     ? (v125 = 0)
                     : (v125 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                 + 416)
                                                     + 8LL)
                                         + 260LL) & 1),
                       !v125) )
            {
LABEL_280:
              if ( (unsigned int)IsDPIDWMSysMet(31LL)
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v121) + 776) & 0x2000) != 0
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                  ? (v122 = 0)
                  : (v122 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 416)
                                                  + 8LL)
                                      + 260LL) & 1),
                    v122) )
              {
                v118 = (_DWORD *)(gpsi + 2780LL);
              }
              else
              {
                v118 = (_DWORD *)(gpsi + 2004LL);
              }
LABEL_296:
              v398 = v396 + *v118;
              if ( (unsigned int)IsDPIAbsoluteSysMet(6LL) )
              {
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v126) + 776) & 0x2000) == 0
                  && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v127) + 776) & 0x4000) == 0 )
                {
LABEL_311:
                  GrePolyPatBlt(a2);
                  LOBYTE(v6) = GreSelectBrush(a2, v390);
                  goto LABEL_312;
                }
              }
              else if ( (unsigned int)IsDPIDWMSysMet(v126)
                     && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v128) + 776) & 0x2000) == 0
                     && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v129) + 776) & 0x4000) == 0
                     && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                     && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1 )
              {
                goto LABEL_311;
              }
              if ( (unsigned int)IsDPIDWMSysMet(6LL)
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v131) + 776) & 0x2000) != 0
                && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) )
              {
                W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              }
              goto LABEL_311;
            }
            v118 = (_DWORD *)(gpsi + 2392LL);
            goto LABEL_296;
          }
          DrawFrame(a2);
          if ( (unsigned int)IsDPIAbsoluteSysMet(6LL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x2000) == 0
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v95) + 776) & 0x4000) == 0 )
            {
LABEL_201:
              v30 = (int *)(gpsi + 2292LL);
              goto LABEL_39;
            }
          }
          else if ( (unsigned int)IsDPIDWMSysMet(v27)
                 && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x2000) == 0
                 && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v96) + 776) & 0x4000) == 0
                 && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1 )
          {
            goto LABEL_201;
          }
          if ( (unsigned int)IsDPIDWMSysMet(6LL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v98 = 0)
              : (v98 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                v98) )
          {
            v30 = (int *)(gpsi + 2680LL);
          }
          else
          {
            v30 = (int *)(gpsi + 1904LL);
          }
LABEL_39:
          if ( (unsigned int)IsDPIAbsoluteSysMet(5LL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x2000) == 0
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v99) + 776) & 0x4000) == 0 )
            {
LABEL_217:
              v34 = (_DWORD *)(gpsi + 2288LL);
LABEL_43:
              v35 = *v30;
              LODWORD(v6) = -*v34;
              v395 += *v34;
              v397 += v6;
              v396 += v35;
              goto LABEL_25;
            }
          }
          else if ( (unsigned int)IsDPIDWMSysMet(v31)
                 && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x2000) == 0
                 && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v100) + 776) & 0x4000) == 0
                 && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1 )
          {
            goto LABEL_217;
          }
          if ( (unsigned int)IsDPIDWMSysMet(5LL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v102 = 0)
              : (v102 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                v102) )
          {
            v34 = (_DWORD *)(gpsi + 2676LL);
          }
          else
          {
            v34 = (_DWORD *)(gpsi + 1900LL);
          }
          goto LABEL_43;
        }
      }
      v75 = v25 + GetResizeBorderWidth();
      DrawFrame(a2);
      if ( (unsigned int)IsDPIAbsoluteSysMet(6LL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v76) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v77) + 776) & 0x4000) != 0 )
        {
          goto LABEL_156;
        }
      }
      else if ( !(unsigned int)IsDPIDWMSysMet(v76)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v80) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v81) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v82 = 0)
               : (v82 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                 !v82) )
      {
LABEL_156:
        if ( (unsigned int)IsDPIDWMSysMet(6LL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v78) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v79 = 0)
            : (v79 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              v79) )
        {
          v83 = (_DWORD *)(gpsi + 2680LL);
        }
        else
        {
          v83 = (_DWORD *)(gpsi + 1904LL);
        }
LABEL_172:
        if ( (unsigned int)IsDPIAbsoluteSysMet(5LL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v84) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v85) + 776) & 0x4000) != 0 )
          {
            goto LABEL_175;
          }
        }
        else if ( !(unsigned int)IsDPIDWMSysMet(v84)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v88) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v89) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 ? (v90 = 0)
                 : (v90 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                   !v90) )
        {
LABEL_175:
          if ( (unsigned int)IsDPIDWMSysMet(5LL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v86) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v87 = 0)
              : (v87 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                v87) )
          {
            v91 = (_DWORD *)(gpsi + 2676LL);
          }
          else
          {
            v91 = (_DWORD *)(gpsi + 1900LL);
          }
          goto LABEL_191;
        }
        v91 = (_DWORD *)(gpsi + 2288LL);
LABEL_191:
        v92 = v75 * *v83;
        v93 = v75 * *v91;
        v26 = a1;
        v94 = -v92;
        v396 -= v94;
        LODWORD(v6) = -v93;
        v395 -= v6;
        v397 += v6;
        v398 += v94;
        goto LABEL_34;
      }
      v83 = (_DWORD *)(gpsi + 2292LL);
      goto LABEL_172;
    }
    v11 = v9 | 1;
  }
  else
  {
    v11 = v9 | 4;
  }
  v382 = v11;
  if ( (*(_BYTE *)(v5 + 55) & 0x20) == 0 )
    goto LABEL_15;
  if ( v3 < 0 )
  {
    DrawEdge(v4);
    DrawFrame(v4);
    if ( (unsigned int)IsDPIAbsoluteSysMet(6LL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x4000) != 0 )
      {
        goto LABEL_58;
      }
    }
    else if ( !(unsigned int)IsDPIDWMSysMet(v36)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v41) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v42 = 0)
             : (v42 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v42) )
    {
LABEL_58:
      if ( (unsigned int)IsDPIDWMSysMet(6LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v39 = 0)
          : (v39 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v39) )
      {
        v43 = (_DWORD *)(gpsi + 2680LL);
        v4 = a2;
      }
      else
      {
        v43 = (_DWORD *)(gpsi + 1904LL);
      }
LABEL_74:
      if ( (unsigned int)IsDPIAbsoluteSysMet(5LL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v45) + 776) & 0x4000) != 0 )
        {
          goto LABEL_77;
        }
      }
      else if ( !(unsigned int)IsDPIDWMSysMet(v44)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v48) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v49) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v50 = 0)
               : (v50 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                 !v50) )
      {
LABEL_77:
        if ( (unsigned int)IsDPIDWMSysMet(5LL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v47 = 0)
            : (v47 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              v47) )
        {
          v51 = (_DWORD *)(gpsi + 2676LL);
        }
        else
        {
          v51 = (_DWORD *)(gpsi + 1900LL);
        }
        goto LABEL_93;
      }
      v51 = (_DWORD *)(gpsi + 2288LL);
LABEL_93:
      v5 = a1;
      goto LABEL_132;
    }
    v43 = (_DWORD *)(gpsi + 2292LL);
    goto LABEL_74;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(8LL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v52) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v53) + 776) & 0x4000) != 0 )
    {
      goto LABEL_97;
    }
LABEL_108:
    v43 = (_DWORD *)(gpsi + 2300LL);
    goto LABEL_113;
  }
  if ( (unsigned int)IsDPIDWMSysMet(v52)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v56) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v57) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL) + 260LL) & 1 )
  {
    goto LABEL_108;
  }
LABEL_97:
  if ( (unsigned int)IsDPIDWMSysMet(8LL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v54) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v55 = 0)
      : (v55 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v55) )
  {
    v43 = (_DWORD *)(gpsi + 2688LL);
  }
  else
  {
    v43 = (_DWORD *)(gpsi + 1912LL);
  }
LABEL_113:
  if ( (unsigned int)IsDPIAbsoluteSysMet(7LL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v59) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v60) + 776) & 0x4000) != 0 )
    {
      goto LABEL_116;
    }
LABEL_127:
    v51 = (_DWORD *)(gpsi + 2296LL);
    goto LABEL_132;
  }
  if ( (unsigned int)IsDPIDWMSysMet(v59)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v63) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v64) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL) + 260LL) & 1 )
  {
    goto LABEL_127;
  }
LABEL_116:
  if ( (unsigned int)IsDPIDWMSysMet(7LL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v61) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v62 = 0)
      : (v62 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v62) )
  {
    v51 = (_DWORD *)(gpsi + 2684LL);
  }
  else
  {
    v51 = (_DWORD *)(gpsi + 1908LL);
  }
LABEL_132:
  v66 = -*v51;
  v395 += *v51;
  v397 += v66;
  v396 += *v43;
  if ( (unsigned int)IsDPIAbsoluteSysMet(31LL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v67) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v68) + 776) & 0x4000) != 0 )
    {
      goto LABEL_135;
    }
  }
  else if ( !(unsigned int)IsDPIDWMSysMet(v67)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v71) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v72) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
           ? (v73 = 0)
           : (v73 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1),
             !v73) )
  {
LABEL_135:
    if ( (unsigned int)IsDPIDWMSysMet(31LL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v69) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v70 = 0)
        : (v70 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          v70) )
    {
      v74 = (_DWORD *)(gpsi + 2780LL);
    }
    else
    {
      v74 = (_DWORD *)(gpsi + 2004LL);
    }
    goto LABEL_151;
  }
  v74 = (_DWORD *)(gpsi + 2392LL);
LABEL_151:
  v398 = v396 + *v74;
  v6 = GreSelectBrush(v4, v7);
  v394 = v6;
LABEL_312:
  if ( (*(_BYTE *)(v5 + 54) & 8) != 0 || (*(_BYTE *)(v5 + 45) & 2) == 0 )
  {
    v133 = 1;
    if ( (a3 & 0x1000) == 0 )
    {
      v132 = v382;
      if ( !v382 || (v382 & 0xC) != 12 && (v382 & 0x20) == 0 )
      {
        v133 = 3;
        goto LABEL_341;
      }
      if ( (unsigned int)IsDPIAbsoluteSysMet(45LL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v134) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v135) + 776) & 0x4000) != 0 )
        {
          goto LABEL_321;
        }
      }
      else if ( !(unsigned int)IsDPIDWMSysMet(v134)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v138) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v139) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v140 = 0)
               : (v140 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                 !v140) )
      {
LABEL_321:
        if ( (unsigned int)IsDPIDWMSysMet(45LL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v136) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v137 = 0)
            : (v137 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
              v137) )
        {
          v141 = (_DWORD *)(gpsi + 2836LL);
        }
        else
        {
          v141 = (_DWORD *)(gpsi + 2060LL);
        }
LABEL_337:
        v397 -= *v141;
        if ( v382 == 12 && (*(_BYTE *)(v5 + 49) & 4) != 0 )
          v133 = 2;
LABEL_341:
        if ( (v382 & 0x20) != 0 )
        {
          if ( (unsigned int)IsDPIAbsoluteSysMet(52LL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v142) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v143) + 776) & 0x4000) != 0 )
            {
              goto LABEL_345;
            }
          }
          else if ( !(unsigned int)IsDPIDWMSysMet(v142)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v146) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v147) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                   ? (v148 = 0)
                   : (v148 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                               + 416)
                                                   + 8LL)
                                       + 260LL) & 1),
                     !v148) )
          {
LABEL_345:
            if ( (unsigned int)IsDPIDWMSysMet(52LL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v144) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v145 = 0)
                : (v145 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                  v145) )
            {
              v149 = (_DWORD *)(gpsi + 2864LL);
            }
            else
            {
              v149 = (_DWORD *)(gpsi + 2088LL);
            }
            goto LABEL_380;
          }
          v149 = (_DWORD *)(gpsi + 2476LL);
LABEL_380:
          LODWORD(v6) = *v149;
          v397 -= *v149 * v133;
          goto LABEL_1005;
        }
        if ( (unsigned int)IsDPIAbsoluteSysMet(30LL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v150) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v151) + 776) & 0x4000) != 0 )
          {
            goto LABEL_364;
          }
        }
        else if ( !(unsigned int)IsDPIDWMSysMet(v150)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v154) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v155) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 ? (v156 = 0)
                 : (v156 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 416)
                                                 + 8LL)
                                     + 260LL) & 1),
                   !v156) )
        {
LABEL_364:
          if ( (unsigned int)IsDPIDWMSysMet(30LL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v152) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v153 = 0)
              : (v153 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                v153) )
          {
            v149 = (_DWORD *)(gpsi + 2776LL);
          }
          else
          {
            v149 = (_DWORD *)(gpsi + 2000LL);
          }
          goto LABEL_380;
        }
        v149 = (_DWORD *)(gpsi + 2388LL);
        goto LABEL_380;
      }
      v141 = (_DWORD *)(gpsi + 2448LL);
      goto LABEL_337;
    }
    if ( v382 && v382 != 12 )
    {
      v387 = IsDPIAbsoluteSysMet(46LL);
      if ( v387 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v157) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v158) + 776) & 0x4000) != 0 )
        {
          goto LABEL_386;
        }
      }
      else if ( !(unsigned int)IsDPIDWMSysMet(v157)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v161) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v162) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v163 = 0)
               : (v163 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                 !v163) )
      {
LABEL_386:
        if ( (unsigned int)IsDPIDWMSysMet(46LL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v159) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v160 = 0)
            : (v160 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
              v160) )
        {
          v164 = (_DWORD *)(gpsi + 2840LL);
        }
        else
        {
          v164 = (_DWORD *)(gpsi + 2064LL);
        }
LABEL_402:
        v396 += *v164;
        if ( v387 )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v164) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v165) + 776) & 0x4000) != 0 )
          {
            goto LABEL_405;
          }
        }
        else if ( !(unsigned int)IsDPIDWMSysMet(46LL)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v168) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v169) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 ? (v170 = 0)
                 : (v170 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 416)
                                                 + 8LL)
                                     + 260LL) & 1),
                   !v170) )
        {
LABEL_405:
          if ( (unsigned int)IsDPIDWMSysMet(46LL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v166) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v167 = 0)
              : (v167 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                v167) )
          {
            v171 = (_DWORD *)(gpsi + 2840LL);
          }
          else
          {
            v171 = (_DWORD *)(gpsi + 2064LL);
          }
LABEL_421:
          v398 -= *v171;
          v173 = IsDPIAbsoluteSysMet(45LL);
          if ( v173 )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v172) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v174) + 776) & 0x4000) != 0 )
            {
              goto LABEL_424;
            }
          }
          else if ( !(unsigned int)IsDPIDWMSysMet(v172)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v177) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v178) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                   ? (v179 = 0)
                   : (v179 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                               + 416)
                                                   + 8LL)
                                       + 260LL) & 1),
                     !v179) )
          {
LABEL_424:
            if ( (unsigned int)IsDPIDWMSysMet(45LL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v175) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v176 = 0)
                : (v176 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                  v176) )
            {
              v180 = (_DWORD *)(gpsi + 2836LL);
            }
            else
            {
              v180 = (_DWORD *)(gpsi + 2060LL);
            }
LABEL_440:
            v397 -= *v180;
            if ( v173 )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v180) + 776) & 0x2000) == 0
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v181) + 776) & 0x4000) == 0 )
              {
                goto LABEL_454;
              }
            }
            else if ( (unsigned int)IsDPIDWMSysMet(45LL)
                   && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v183) + 776) & 0x2000) == 0
                   && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v184) + 776) & 0x4000) == 0
                   && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                   && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1 )
            {
              goto LABEL_454;
            }
            if ( (unsigned int)IsDPIDWMSysMet(45LL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v182) + 776) & 0x2000) != 0
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) )
            {
              W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            }
LABEL_454:
            v186 = v398 - v396;
            NtGdiPatBlt(a2, v397, v396, v398 - v396, 15728673);
            v187 = v388;
            if ( (v382 & 0x10) != 0 )
              v187 = v388 + 3;
            if ( *(_DWORD *)(a1 + 344)
              || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0
              || *(_WORD *)(gpsi + 7286LL) == 96 )
            {
              v188 = gpsi + 4260LL;
            }
            else
            {
              v188 = gpsi + 5748LL;
            }
            v397 -= *(_DWORD *)(v188 + 16LL * v187 + 8);
            BitBltSysBmp(a2, v397, v396);
            v189 = v382;
            if ( (v382 & 0x20) != 0 || (v382 & 0xC) == 0xC )
            {
LABEL_547:
              if ( (v189 & 0x1C) == 0 || (v382 & 0x20) != 0 || (*(_BYTE *)(a1 + 49) & 4) == 0 )
                goto LABEL_589;
              if ( v173 )
              {
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v189) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v219) + 776) & 0x4000) != 0 )
                {
                  goto LABEL_553;
                }
              }
              else if ( !(unsigned int)IsDPIDWMSysMet(45LL)
                     || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v222) + 776) & 0x2000) != 0
                     || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v223) + 776) & 0x4000) != 0
                     || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                       ? (v224 = 0)
                       : (v224 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                   + 416)
                                                       + 8LL)
                                           + 260LL) & 1),
                         !v224) )
              {
LABEL_553:
                if ( (unsigned int)IsDPIDWMSysMet(45LL)
                  && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v220) + 776) & 0x2000) != 0
                  && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                    ? (v221 = 0)
                    : (v221 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                + 416)
                                                    + 8LL)
                                        + 260LL) & 1),
                      v221) )
                {
                  v225 = (_DWORD *)(gpsi + 2836LL);
                }
                else
                {
                  v225 = (_DWORD *)(gpsi + 2060LL);
                }
LABEL_569:
                v397 -= *v225;
                if ( v173 )
                {
                  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v225) + 776) & 0x2000) != 0
                    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v226) + 776) & 0x4000) != 0 )
                  {
                    goto LABEL_572;
                  }
                }
                else if ( !(unsigned int)IsDPIDWMSysMet(45LL)
                       || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v228) + 776) & 0x2000) != 0
                       || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v229) + 776) & 0x4000) != 0
                       || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                         ? (v230 = 0)
                         : (v230 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                     + 416)
                                                         + 8LL)
                                             + 260LL) & 1),
                           !v230) )
                {
LABEL_572:
                  if ( (unsigned int)IsDPIDWMSysMet(45LL)
                    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v227) + 776) & 0x2000) != 0
                    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) )
                  {
                    W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                  }
                }
                NtGdiPatBlt(a2, v397, v396, v186, 15728673);
                if ( *(_DWORD *)(a1 + 344)
                  || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0
                  || *(_WORD *)(gpsi + 7286LL) == 96 )
                {
                  v231 = gpsi + 4260LL;
                }
                else
                {
                  v231 = gpsi + 5748LL;
                }
                v397 -= *(_DWORD *)(v231 + 184);
                BitBltSysBmp(a2, v397, v396);
LABEL_589:
                if ( v387 )
                {
                  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v189) + 776) & 0x2000) == 0
                    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v232) + 776) & 0x4000) == 0 )
                  {
LABEL_600:
                    v236 = (_DWORD *)(gpsi + 2452LL);
                    goto LABEL_609;
                  }
                }
                else if ( (unsigned int)IsDPIDWMSysMet(46LL)
                       && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v233) + 776) & 0x2000) == 0
                       && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v234) + 776) & 0x4000) == 0
                       && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                       && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1 )
                {
                  goto LABEL_600;
                }
                if ( (unsigned int)IsDPIDWMSysMet(46LL)
                  && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v237) + 776) & 0x2000) != 0
                  && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                    ? (v238 = 0)
                    : (v238 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                + 416)
                                                    + 8LL)
                                        + 260LL) & 1),
                      v238) )
                {
                  v236 = (_DWORD *)(gpsi + 2840LL);
                }
                else
                {
                  v236 = (_DWORD *)(gpsi + 2064LL);
                }
LABEL_609:
                v396 -= *v236;
                if ( v387 )
                {
                  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v236) + 776) & 0x2000) != 0
                    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v239) + 776) & 0x4000) != 0 )
                  {
                    goto LABEL_612;
                  }
                }
                else if ( !(unsigned int)IsDPIDWMSysMet(46LL)
                       || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v242) + 776) & 0x2000) != 0
                       || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v243) + 776) & 0x4000) != 0
                       || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                         ? (v244 = 0)
                         : (v244 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                     + 416)
                                                         + 8LL)
                                             + 260LL) & 1),
                           !v244) )
                {
LABEL_612:
                  if ( (unsigned int)IsDPIDWMSysMet(46LL)
                    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v240) + 776) & 0x2000) != 0
                    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                      ? (v241 = 0)
                      : (v241 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                  + 416)
                                                      + 8LL)
                                          + 260LL) & 1),
                        v241) )
                  {
                    v245 = (_DWORD *)(gpsi + 2840LL);
                  }
                  else
                  {
                    v245 = (_DWORD *)(gpsi + 2064LL);
                  }
LABEL_628:
                  v398 += *v245;
                  if ( (v382 & 0x20) != 0 )
                  {
                    if ( (unsigned int)IsDPIAbsoluteSysMet(52LL) )
                    {
                      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v246) + 776) & 0x2000) != 0
                        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v247) + 776) & 0x4000) != 0 )
                      {
                        goto LABEL_632;
                      }
                    }
                    else if ( !(unsigned int)IsDPIDWMSysMet(v246)
                           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v250) + 776) & 0x2000) != 0
                           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v251) + 776) & 0x4000) != 0
                           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                             ? (v252 = 0)
                             : (v252 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                         + 416)
                                                             + 8LL)
                                                 + 260LL) & 1),
                               !v252) )
                    {
LABEL_632:
                      if ( (unsigned int)IsDPIDWMSysMet(52LL)
                        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v248) + 776) & 0x2000) != 0
                        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                          ? (v249 = 0)
                          : (v249 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                      + 416)
                                                          + 8LL)
                                              + 260LL) & 1),
                            v249) )
                      {
                        v253 = gpsi + 2864LL;
                      }
                      else
                      {
                        v253 = gpsi + 2088LL;
                      }
                      goto LABEL_667;
                    }
                    v253 = gpsi + 2476LL;
                    goto LABEL_667;
                  }
                  if ( (unsigned int)IsDPIAbsoluteSysMet(30LL) )
                  {
                    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v254) + 776) & 0x2000) != 0
                      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v255) + 776) & 0x4000) != 0 )
                    {
                      goto LABEL_651;
                    }
                  }
                  else if ( !(unsigned int)IsDPIDWMSysMet(v254)
                         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v258) + 776) & 0x2000) != 0
                         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v259) + 776) & 0x4000) != 0
                         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                           ? (v260 = 0)
                           : (v260 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                       + 416)
                                                           + 8LL)
                                               + 260LL) & 1),
                             !v260) )
                  {
LABEL_651:
                    if ( (unsigned int)IsDPIDWMSysMet(30LL)
                      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v256) + 776) & 0x2000) != 0
                      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                        ? (v257 = 0)
                        : (v257 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                    + 416)
                                                        + 8LL)
                                            + 260LL) & 1),
                          v257) )
                    {
                      v253 = gpsi + 2776LL;
                    }
                    else
                    {
                      v253 = gpsi + 2000LL;
                    }
LABEL_667:
                    if ( v387 )
                    {
                      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v253) + 776) & 0x2000) != 0
                        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v261) + 776) & 0x4000) != 0 )
                      {
                        goto LABEL_670;
                      }
                    }
                    else if ( !(unsigned int)IsDPIDWMSysMet(46LL)
                           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v264) + 776) & 0x2000) != 0
                           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v265) + 776) & 0x4000) != 0
                           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                             ? (v266 = 0)
                             : (v266 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                         + 416)
                                                             + 8LL)
                                                 + 260LL) & 1),
                               !v266) )
                    {
LABEL_670:
                      if ( (unsigned int)IsDPIDWMSysMet(46LL)
                        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v262) + 776) & 0x2000) != 0
                        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                          ? (v263 = 0)
                          : (v263 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                      + 416)
                                                          + 8LL)
                                              + 260LL) & 1),
                            v263) )
                      {
                        v267 = gpsi + 2840LL;
                      }
                      else
                      {
                        v267 = gpsi + 2064LL;
                      }
LABEL_686:
                      if ( v387 )
                      {
                        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v267) + 776) & 0x2000) != 0
                          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v268) + 776) & 0x4000) != 0 )
                        {
                          goto LABEL_689;
                        }
                      }
                      else if ( !(unsigned int)IsDPIDWMSysMet(46LL)
                             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v271) + 776) & 0x2000) != 0
                             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v272) + 776) & 0x4000) != 0
                             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                               ? (v273 = 0)
                               : (v273 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                           + 416)
                                                               + 8LL)
                                                   + 260LL) & 1),
                                 !v273) )
                      {
LABEL_689:
                        if ( (unsigned int)IsDPIDWMSysMet(46LL)
                          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v269) + 776) & 0x2000) != 0
                          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                            ? (v270 = 0)
                            : (v270 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                        + 416)
                                                            + 8LL)
                                                + 260LL) & 1),
                              v270) )
                        {
                          v274 = gpsi + 2840LL;
                        }
                        else
                        {
                          v274 = gpsi + 2064LL;
                        }
LABEL_705:
                        if ( v387 )
                        {
                          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v274) + 776) & 0x2000) != 0
                            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v275) + 776) & 0x4000) != 0 )
                          {
                            goto LABEL_708;
                          }
                        }
                        else if ( !(unsigned int)IsDPIDWMSysMet(46LL)
                               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v277) + 776) & 0x2000) != 0
                               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v278) + 776) & 0x4000) != 0
                               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                 ? (v279 = 0)
                                 : (v279 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                             + 416)
                                                                 + 8LL)
                                                     + 260LL) & 1),
                                   !v279) )
                        {
LABEL_708:
                          if ( (unsigned int)IsDPIDWMSysMet(46LL)
                            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v276) + 776) & 0x2000) != 0
                            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) )
                          {
                            W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                          }
                        }
                        v280 = a2;
                        GrePolyPatBlt(a2);
                        LOBYTE(v6) = v394;
                        if ( v394 )
                          LOBYTE(v6) = GreSelectBrush(a2, v394);
                        goto LABEL_723;
                      }
                      v274 = gpsi + 2452LL;
                      goto LABEL_705;
                    }
                    v267 = gpsi + 2452LL;
                    goto LABEL_686;
                  }
                  v253 = gpsi + 2388LL;
                  goto LABEL_667;
                }
                v245 = (_DWORD *)(gpsi + 2452LL);
                goto LABEL_628;
              }
              v225 = (_DWORD *)(gpsi + 2448LL);
              goto LABEL_569;
            }
            if ( v173 )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v382) + 776) & 0x2000) == 0
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v190) + 776) & 0x4000) == 0 )
              {
LABEL_474:
                v194 = (_DWORD *)(gpsi + 2448LL);
                goto LABEL_483;
              }
            }
            else if ( (unsigned int)IsDPIDWMSysMet(45LL)
                   && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v191) + 776) & 0x2000) == 0
                   && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v192) + 776) & 0x4000) == 0
                   && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                   && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1 )
            {
              goto LABEL_474;
            }
            if ( (unsigned int)IsDPIDWMSysMet(45LL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v195) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v196 = 0)
                : (v196 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                  v196) )
            {
              v194 = (_DWORD *)(gpsi + 2836LL);
            }
            else
            {
              v194 = (_DWORD *)(gpsi + 2060LL);
            }
LABEL_483:
            v397 -= *v194;
            if ( v173 )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v194) + 776) & 0x2000) == 0
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v197) + 776) & 0x4000) == 0 )
              {
                goto LABEL_497;
              }
            }
            else if ( (unsigned int)IsDPIDWMSysMet(45LL)
                   && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v199) + 776) & 0x2000) == 0
                   && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v200) + 776) & 0x4000) == 0
                   && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                   && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1 )
            {
              goto LABEL_497;
            }
            if ( (unsigned int)IsDPIDWMSysMet(45LL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v198) + 776) & 0x2000) != 0
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) )
            {
              W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            }
LABEL_497:
            NtGdiPatBlt(a2, v397, v396, v186, 15728673);
            if ( (v382 & 2) != 0 )
              v202 = 8;
            else
              v202 = (v382 & 8) != 0 ? 17 : 14;
            if ( *(_DWORD *)(a1 + 344)
              || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0
              || *(_WORD *)(gpsi + 7286LL) == 96 )
            {
              v203 = gpsi + 4260LL;
            }
            else
            {
              v203 = gpsi + 5748LL;
            }
            v397 -= *(_DWORD *)(v203 + 16LL * v202 + 8);
            BitBltSysBmp(a2, v397, v396);
            if ( (v382 & 1) != 0 )
              v204 = 8;
            else
              v204 = (v382 & 4) != 0 ? 7 : 4;
            if ( *(_DWORD *)(a1 + 344)
              || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0
              || *(_WORD *)(gpsi + 7286LL) == 96 )
            {
              v205 = gpsi + 4260LL;
            }
            else
            {
              v205 = gpsi + 5748LL;
            }
            v397 -= *(_DWORD *)(v205 + 16LL * v204 + 8);
            BitBltSysBmp(a2, v397, v396);
            if ( v173 )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v206) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v207) + 776) & 0x4000) != 0 )
              {
                goto LABEL_516;
              }
            }
            else if ( !(unsigned int)IsDPIDWMSysMet(45LL)
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v210) + 776) & 0x2000) != 0
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v211) + 776) & 0x4000) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                     ? (v212 = 0)
                     : (v212 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                 + 416)
                                                     + 8LL)
                                         + 260LL) & 1),
                       !v212) )
            {
LABEL_516:
              if ( (unsigned int)IsDPIDWMSysMet(45LL)
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v208) + 776) & 0x2000) != 0
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                  ? (v209 = 0)
                  : (v209 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 416)
                                                  + 8LL)
                                      + 260LL) & 1),
                    v209) )
              {
                v213 = (_DWORD *)(gpsi + 2836LL);
              }
              else
              {
                v213 = (_DWORD *)(gpsi + 2060LL);
              }
LABEL_532:
              v397 -= *v213;
              if ( v173 )
              {
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v213) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v214) + 776) & 0x4000) != 0 )
                {
                  goto LABEL_535;
                }
              }
              else if ( !(unsigned int)IsDPIDWMSysMet(45LL)
                     || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v216) + 776) & 0x2000) != 0
                     || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v217) + 776) & 0x4000) != 0
                     || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                       ? (v218 = 0)
                       : (v218 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                   + 416)
                                                       + 8LL)
                                           + 260LL) & 1),
                         !v218) )
              {
LABEL_535:
                if ( (unsigned int)IsDPIDWMSysMet(45LL)
                  && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v215) + 776) & 0x2000) != 0
                  && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) )
                {
                  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                }
              }
              NtGdiPatBlt(a2, v397, v396, v186, 15728673);
              v189 = v382;
              goto LABEL_547;
            }
            v213 = (_DWORD *)(gpsi + 2448LL);
            goto LABEL_532;
          }
          v180 = (_DWORD *)(gpsi + 2448LL);
          goto LABEL_440;
        }
        v171 = (_DWORD *)(gpsi + 2452LL);
        goto LABEL_421;
      }
      v164 = (_DWORD *)(gpsi + 2452LL);
      goto LABEL_402;
    }
    if ( *(_DWORD *)(v5 + 344)
      || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0
      || *(_WORD *)(gpsi + 7286LL) == 96 )
    {
      v282 = gpsi + 4260LL;
    }
    else
    {
      v282 = gpsi + 5748LL;
    }
    v389 = (_DWORD *)(v282 + 624);
    if ( v382 )
    {
      v384 = IsDPIAbsoluteSysMet(30LL);
      if ( v384 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v283) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v284) + 776) & 0x4000) != 0 )
        {
          goto LABEL_733;
        }
      }
      else if ( !(unsigned int)IsDPIDWMSysMet(v283)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v287) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v288) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v289 = 0)
               : (v289 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                 !v289) )
      {
LABEL_733:
        if ( (unsigned int)IsDPIDWMSysMet(30LL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v285) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v286 = 0)
            : (v286 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
              v286) )
        {
          v290 = (_DWORD *)(gpsi + 2776LL);
        }
        else
        {
          v290 = (_DWORD *)(gpsi + 2000LL);
        }
LABEL_749:
        if ( (unsigned int)IsDPIAbsoluteSysMet(45LL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v291) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v292) + 776) & 0x4000) != 0 )
          {
            goto LABEL_752;
          }
        }
        else if ( !(unsigned int)IsDPIDWMSysMet(v291)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v295) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v296) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 ? (v297 = 0)
                 : (v297 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 416)
                                                 + 8LL)
                                     + 260LL) & 1),
                   !v297) )
        {
LABEL_752:
          if ( (unsigned int)IsDPIDWMSysMet(45LL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v293) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v294 = 0)
              : (v294 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                v294) )
          {
            v298 = (_DWORD *)(gpsi + 2836LL);
          }
          else
          {
            v298 = (_DWORD *)(gpsi + 2060LL);
          }
          goto LABEL_768;
        }
        v298 = (_DWORD *)(gpsi + 2448LL);
LABEL_768:
        v299 = *v290 + *v298;
        v300 = v384;
        goto LABEL_789;
      }
      v290 = (_DWORD *)(gpsi + 2388LL);
      goto LABEL_749;
    }
    v384 = IsDPIAbsoluteSysMet(30LL);
    v300 = v384;
    if ( v384 )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v301) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v302) + 776) & 0x4000) != 0 )
      {
        goto LABEL_772;
      }
    }
    else if ( !(unsigned int)IsDPIDWMSysMet(v301)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v305) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v306) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v307 = 0)
             : (v307 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
               !v307) )
    {
LABEL_772:
      if ( (unsigned int)IsDPIDWMSysMet(30LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v303) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v304 = 0)
          : (v304 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1),
            v304) )
      {
        v308 = (_DWORD *)(gpsi + 2776LL);
      }
      else
      {
        v308 = (_DWORD *)(gpsi + 2000LL);
      }
      goto LABEL_788;
    }
    v308 = (_DWORD *)(gpsi + 2388LL);
LABEL_788:
    v299 = 3 * *v308;
LABEL_789:
    if ( !v386 )
      v389 += 4;
    v397 -= v299;
    FixHDCBITSBmp();
    if ( v300 )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v309) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v310) + 776) & 0x4000) != 0 )
      {
        goto LABEL_794;
      }
    }
    else if ( !(unsigned int)IsDPIDWMSysMet(30LL)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v313) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v314) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v315 = 0)
             : (v315 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
               !v315) )
    {
LABEL_794:
      if ( (unsigned int)IsDPIDWMSysMet(30LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v311) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v312 = 0)
          : (v312 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1),
            v312) )
      {
        v316 = (_DWORD *)(gpsi + 2776LL);
      }
      else
      {
        v316 = (_DWORD *)(gpsi + 2000LL);
      }
LABEL_810:
      LOBYTE(v6) = NtGdiBitBltInternal(
                     a2,
                     v397,
                     v396,
                     v299,
                     v389[3],
                     *(_QWORD *)(gpDispInfo + 32LL),
                     *v389 + v389[2] - v299 - *v316,
                     v389[1],
                     13369376,
                     0,
                     0);
      v132 = v382;
      if ( !v382 || (LOBYTE(v6) = *(_BYTE *)(a1 + 49), (v6 & 4) == 0) )
      {
        v5 = a1;
        goto LABEL_1005;
      }
      if ( v300 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v317) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v318) + 776) & 0x4000) != 0 )
        {
          goto LABEL_815;
        }
      }
      else if ( !(unsigned int)IsDPIDWMSysMet(30LL)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v321) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v322) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v323 = 0)
               : (v323 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                 !v323) )
      {
LABEL_815:
        if ( (unsigned int)IsDPIDWMSysMet(30LL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v319) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v320 = 0)
            : (v320 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
              v320) )
        {
          v324 = (_DWORD *)(gpsi + 2776LL);
        }
        else
        {
          v324 = (_DWORD *)(gpsi + 2000LL);
        }
LABEL_831:
        v326 = IsDPIAbsoluteSysMet(45LL);
        if ( v326 )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v325) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v327) + 776) & 0x4000) != 0 )
          {
            goto LABEL_834;
          }
        }
        else if ( !(unsigned int)IsDPIDWMSysMet(v325)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v330) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v331) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 ? (v332 = 0)
                 : (v332 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 416)
                                                 + 8LL)
                                     + 260LL) & 1),
                   !v332) )
        {
LABEL_834:
          if ( (unsigned int)IsDPIDWMSysMet(45LL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v328) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v329 = 0)
              : (v329 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                v329) )
          {
            v333 = (_DWORD *)(gpsi + 2836LL);
          }
          else
          {
            v333 = (_DWORD *)(gpsi + 2060LL);
          }
LABEL_850:
          v334 = (unsigned int)(*v333 - *v324);
          v397 += v334;
          if ( v384 )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v334) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v335) + 776) & 0x4000) != 0 )
            {
              goto LABEL_853;
            }
          }
          else if ( !(unsigned int)IsDPIDWMSysMet(30LL)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v337) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v338) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                   ? (v336 = 0LL)
                   : (v336 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                               + 416)
                                                   + 8LL)
                                       + 260LL) & 1),
                     !(_DWORD)v336) )
          {
LABEL_853:
            if ( (unsigned int)IsDPIDWMSysMet(30LL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v336) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v336 = 0LL)
                : (v336 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                  (_DWORD)v336) )
            {
              v339 = (_DWORD *)(gpsi + 2776LL);
            }
            else
            {
              v339 = (_DWORD *)(gpsi + 2000LL);
            }
LABEL_869:
            if ( v384 )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v336) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v340) + 776) & 0x4000) != 0 )
              {
                goto LABEL_872;
              }
            }
            else if ( !(unsigned int)IsDPIDWMSysMet(30LL)
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v343) + 776) & 0x2000) != 0
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v344) + 776) & 0x4000) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                     ? (v345 = 0)
                     : (v345 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                 + 416)
                                                     + 8LL)
                                         + 260LL) & 1),
                       !v345) )
            {
LABEL_872:
              if ( (unsigned int)IsDPIDWMSysMet(30LL)
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v341) + 776) & 0x2000) != 0
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                  ? (v342 = 0)
                  : (v342 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 416)
                                                  + 8LL)
                                      + 260LL) & 1),
                    v342) )
              {
                v346 = (int *)(gpsi + 2776LL);
              }
              else
              {
                v346 = (int *)(gpsi + 2000LL);
              }
LABEL_888:
              v347 = *v389 + v389[2] - *v339;
              v280 = a2;
              NtGdiBitBltInternal(
                a2,
                v397,
                v396,
                *v346,
                v389[3],
                *(_QWORD *)(gpDispInfo + 32LL),
                v347,
                v389[1],
                13369376,
                0,
                0);
              if ( !(unsigned int)IS_UI_LANGID() )
              {
                v348 = gpsi;
                LOBYTE(v6) = 13;
                if ( *(_WORD *)(gpsi + 7300LL) != 1037 )
                  goto LABEL_723;
              }
              LOBYTE(v6) = *(_BYTE *)(a1 + 50);
              if ( (v6 & 0x40) == 0 )
                goto LABEL_723;
              if ( v326 )
              {
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v348) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v349) + 776) & 0x4000) != 0 )
                {
                  goto LABEL_894;
                }
              }
              else if ( !(unsigned int)IsDPIDWMSysMet(45LL)
                     || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v351) + 776) & 0x2000) != 0
                     || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v352) + 776) & 0x4000) != 0
                     || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                       ? (v350 = 0LL)
                       : (v350 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                   + 416)
                                                       + 8LL)
                                           + 260LL) & 1),
                         !(_DWORD)v350) )
              {
LABEL_894:
                if ( (unsigned int)IsDPIDWMSysMet(45LL)
                  && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v350) + 776) & 0x2000) != 0
                  && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                    ? (v350 = 0LL)
                    : (v350 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                + 416)
                                                    + 8LL)
                                        + 260LL) & 1),
                      (_DWORD)v350) )
                {
                  v353 = gpsi + 2836LL;
                }
                else
                {
                  v353 = gpsi + 2060LL;
                }
LABEL_910:
                v391 = (_DWORD *)v353;
                if ( v384 )
                {
                  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v350) + 776) & 0x2000) != 0
                    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v354) + 776) & 0x4000) != 0 )
                  {
                    goto LABEL_913;
                  }
                }
                else if ( !(unsigned int)IsDPIDWMSysMet(30LL)
                       || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v356) + 776) & 0x2000) != 0
                       || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v357) + 776) & 0x4000) != 0
                       || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                         ? (v355 = 0LL)
                         : (v355 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                     + 416)
                                                         + 8LL)
                                             + 260LL) & 1),
                           !(_DWORD)v355) )
                {
LABEL_913:
                  if ( (unsigned int)IsDPIDWMSysMet(30LL)
                    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v355) + 776) & 0x2000) != 0
                    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                      ? (v355 = 0LL)
                      : (v355 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                  + 416)
                                                      + 8LL)
                                          + 260LL) & 1),
                        (_DWORD)v355) )
                  {
                    v358 = (_DWORD *)(gpsi + 2776LL);
                  }
                  else
                  {
                    v358 = (_DWORD *)(gpsi + 2000LL);
                  }
LABEL_929:
                  if ( v326 )
                  {
                    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v355) + 776) & 0x2000) != 0
                      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v359) + 776) & 0x4000) != 0 )
                    {
                      goto LABEL_932;
                    }
                  }
                  else if ( !(unsigned int)IsDPIDWMSysMet(45LL)
                         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v361) + 776) & 0x2000) != 0
                         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v362) + 776) & 0x4000) != 0
                         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                           ? (v360 = 0LL)
                           : (v360 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                       + 416)
                                                           + 8LL)
                                               + 260LL) & 1),
                             !(_DWORD)v360) )
                  {
LABEL_932:
                    if ( (unsigned int)IsDPIDWMSysMet(45LL)
                      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v360) + 776) & 0x2000) != 0
                      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                        ? (v360 = 0LL)
                        : (v360 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                    + 416)
                                                        + 8LL)
                                            + 260LL) & 1),
                          (_DWORD)v360) )
                    {
                      v363 = (_DWORD *)(gpsi + 2836LL);
                    }
                    else
                    {
                      v363 = (_DWORD *)(gpsi + 2060LL);
                    }
LABEL_948:
                    if ( v384 )
                    {
                      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v360) + 776) & 0x2000) != 0
                        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v364) + 776) & 0x4000) != 0 )
                      {
                        goto LABEL_951;
                      }
                    }
                    else if ( !(unsigned int)IsDPIDWMSysMet(30LL)
                           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v366) + 776) & 0x2000) != 0
                           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v367) + 776) & 0x4000) != 0
                           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                             ? (v365 = 0LL)
                             : (v365 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                         + 416)
                                                             + 8LL)
                                                 + 260LL) & 1),
                               !(_DWORD)v365) )
                    {
LABEL_951:
                      if ( (unsigned int)IsDPIDWMSysMet(30LL)
                        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v365) + 776) & 0x2000) != 0
                        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                          ? (v365 = 0LL)
                          : (v365 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                      + 416)
                                                          + 8LL)
                                              + 260LL) & 1),
                            (_DWORD)v365) )
                      {
                        v368 = (_DWORD *)(gpsi + 2776LL);
                      }
                      else
                      {
                        v368 = (_DWORD *)(gpsi + 2000LL);
                      }
LABEL_967:
                      if ( v326 )
                      {
                        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v365) + 776) & 0x2000) != 0
                          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v369) + 776) & 0x4000) != 0 )
                        {
                          goto LABEL_970;
                        }
                      }
                      else if ( !(unsigned int)IsDPIDWMSysMet(45LL)
                             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v371) + 776) & 0x2000) != 0
                             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v372) + 776) & 0x4000) != 0
                             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                               ? (v370 = 0LL)
                               : (v370 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                           + 416)
                                                               + 8LL)
                                                   + 260LL) & 1),
                                 !(_DWORD)v370) )
                      {
LABEL_970:
                        if ( (unsigned int)IsDPIDWMSysMet(45LL)
                          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v370) + 776) & 0x2000) != 0
                          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                            ? (v370 = 0LL)
                            : (v370 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                        + 416)
                                                            + 8LL)
                                                + 260LL) & 1),
                              (_DWORD)v370) )
                        {
                          v373 = (_DWORD *)(gpsi + 2836LL);
                        }
                        else
                        {
                          v373 = (_DWORD *)(gpsi + 2060LL);
                        }
LABEL_986:
                        if ( v326 )
                        {
                          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v370) + 776) & 0x2000) != 0
                            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v374) + 776) & 0x4000) != 0 )
                          {
                            goto LABEL_989;
                          }
                        }
                        else if ( !(unsigned int)IsDPIDWMSysMet(45LL)
                               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v377) + 776) & 0x2000) != 0
                               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v378) + 776) & 0x4000) != 0
                               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                 ? (v379 = 0)
                                 : (v379 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                             + 416)
                                                                 + 8LL)
                                                     + 260LL) & 1),
                                   !v379) )
                        {
LABEL_989:
                          if ( (unsigned int)IsDPIDWMSysMet(45LL)
                            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v375) + 776) & 0x2000) != 0
                            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                              ? (v376 = 0)
                              : (v376 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                          + 416)
                                                              + 8LL)
                                                  + 260LL) & 1),
                                v376) )
                          {
                            v281 = (_DWORD *)(gpsi + 2836LL);
                          }
                          else
                          {
                            v281 = (_DWORD *)(gpsi + 2060LL);
                          }
                          goto LABEL_722;
                        }
                        v281 = (_DWORD *)(gpsi + 2448LL);
LABEL_722:
                        v280 = a2;
                        LOBYTE(v6) = NtGdiBitBltInternal(
                                       a2,
                                       v397 - *v281,
                                       v396 + 2,
                                       *v368 - 2 * *v373,
                                       v389[3] - 4,
                                       *(_QWORD *)(gpDispInfo + 32LL),
                                       *v363 + *v389 + v389[2] - *v358,
                                       *v391 + v389[1],
                                       -2134114272,
                                       0,
                                       0);
LABEL_723:
                        v5 = a1;
                        v132 = v382;
                        goto LABEL_1006;
                      }
                      v373 = (_DWORD *)(gpsi + 2448LL);
                      goto LABEL_986;
                    }
                    v368 = (_DWORD *)(gpsi + 2388LL);
                    goto LABEL_967;
                  }
                  v363 = (_DWORD *)(gpsi + 2448LL);
                  goto LABEL_948;
                }
                v358 = (_DWORD *)(gpsi + 2388LL);
                goto LABEL_929;
              }
              v353 = gpsi + 2448LL;
              goto LABEL_910;
            }
            v346 = (int *)(gpsi + 2388LL);
            goto LABEL_888;
          }
          v339 = (_DWORD *)(gpsi + 2388LL);
          goto LABEL_869;
        }
        v333 = (_DWORD *)(gpsi + 2448LL);
        goto LABEL_850;
      }
      v324 = (_DWORD *)(gpsi + 2388LL);
      goto LABEL_831;
    }
    v316 = (_DWORD *)(gpsi + 2388LL);
    goto LABEL_810;
  }
  v132 = v382;
LABEL_1005:
  v280 = a2;
LABEL_1006:
  if ( (a3 & 0xC) != 0 )
  {
    v380 = (unsigned int)xxxDrawCaptionTemp(
                           v5,
                           v280,
                           &v395,
                           0LL,
                           0LL,
                           0LL,
                           a3 | (v132 >> 4) & 2 | (v392 != 0 ? 0x20 : 0)) == 0;
    LOBYTE(v6) = SetOrClrWF(v380, v5, 1800LL, 1LL);
  }
  return v6;
}
