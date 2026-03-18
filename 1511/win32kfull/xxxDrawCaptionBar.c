/*
 * XREFs of xxxDrawCaptionBar @ 0x1C00CAFD0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     xxxRedrawTitle @ 0x1C0081B30 (xxxRedrawTitle.c)
 *     xxxDWP_DoNCActivate @ 0x1C00CADC0 (xxxDWP_DoNCActivate.c)
 *     xxxDrawWindowFrame @ 0x1C00CBB20 (xxxDrawWindowFrame.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1C003C84C (GrePolyPatBlt.c)
 *     NtGdiPatBlt @ 0x1C00412C0 (NtGdiPatBlt.c)
 *     NtGdiBitBltInternal @ 0x1C0048C50 (NtGdiBitBltInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ClearHungFlag @ 0x1C0067F28 (ClearHungFlag.c)
 *     DrawEdge @ 0x1C0071B9C (DrawEdge.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     GetAppCompatFlags2 @ 0x1C00722A8 (GetAppCompatFlags2.c)
 *     GetRect @ 0x1C0077D54 (GetRect.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     xxxMNCanClose @ 0x1C00CB3C0 (xxxMNCanClose.c)
 *     IsVisible @ 0x1C00CBE50 (IsVisible.c)
 *     GetWindowBorders @ 0x1C00CBEDC (GetWindowBorders.c)
 *     GetWindowFrameMetric @ 0x1C00CC204 (GetWindowFrameMetric.c)
 *     DrawFrame @ 0x1C00CC21C (DrawFrame.c)
 *     BitBltSysBmp @ 0x1C00FB8D4 (BitBltSysBmp.c)
 *     IS_UI_LANGID @ 0x1C00FBA78 (IS_UI_LANGID.c)
 *     FixHDCBITSBmp @ 0x1C00FBAA4 (FixHDCBITSBmp.c)
 *     GetResizeBorderWidth @ 0x1C0101F40 (GetResizeBorderWidth.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     xxxDrawCaptionTemp @ 0x1C0237D58 (xxxDrawCaptionTemp.c)
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
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  _DWORD *v16; // rbx
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  _DWORD *v20; // rdx
  int v21; // ecx
  int v22; // ebx
  __int64 v23; // rdi
  unsigned __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int *v27; // rbx
  unsigned __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  _DWORD *v31; // rdx
  int v32; // ecx
  unsigned __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // ecx
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // ecx
  _DWORD *v40; // rbx
  unsigned __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v44; // ecx
  __int64 v45; // rcx
  __int64 v46; // rcx
  int v47; // ecx
  _DWORD *v48; // rcx
  unsigned __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  int v52; // ecx
  __int64 v53; // rcx
  __int64 v54; // rcx
  unsigned __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  int v59; // ecx
  __int64 v60; // rcx
  __int64 v61; // rcx
  int v63; // eax
  unsigned __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rcx
  int v67; // ecx
  __int64 v68; // rcx
  __int64 v69; // rcx
  int v70; // ecx
  _DWORD *v71; // rcx
  int v72; // edi
  unsigned __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rcx
  int v76; // ecx
  __int64 v77; // rcx
  __int64 v78; // rcx
  int v79; // ecx
  _DWORD *v80; // rbx
  unsigned __int64 v81; // rcx
  __int64 v82; // rcx
  __int64 v83; // rcx
  int v84; // ecx
  __int64 v85; // rcx
  __int64 v86; // rcx
  int v87; // ecx
  _DWORD *v88; // rdx
  int v89; // ecx
  int v90; // eax
  int v91; // ecx
  __int64 v92; // rcx
  __int64 v93; // rcx
  int v95; // ecx
  __int64 v96; // rcx
  __int64 v97; // rcx
  int v99; // ecx
  __int64 v100; // rcx
  __int64 v101; // rcx
  int v103; // ecx
  __int64 v104; // rcx
  __int64 v105; // rcx
  int v107; // ecx
  unsigned __int64 v108; // rcx
  __int64 v109; // rcx
  __int64 v110; // rcx
  int v111; // ecx
  __int64 v112; // rcx
  __int64 v113; // rcx
  int v114; // ecx
  _DWORD *v115; // rcx
  unsigned __int64 v116; // rcx
  __int64 v117; // rcx
  __int64 v118; // rcx
  int v119; // ecx
  __int64 v120; // rcx
  __int64 v121; // rcx
  int v122; // ecx
  unsigned __int64 v123; // rcx
  __int64 v124; // rcx
  __int64 v125; // rcx
  __int64 v126; // rcx
  __int64 v128; // rcx
  _DWORD *v129; // rax
  __int64 v130; // rcx
  int v131; // ecx
  unsigned __int8 v132; // di
  int v133; // r15d
  unsigned __int64 v134; // rcx
  __int64 v135; // rcx
  __int64 v136; // rcx
  int v137; // ecx
  __int64 v138; // rcx
  __int64 v139; // rcx
  int v140; // ecx
  _DWORD *v141; // rcx
  unsigned __int64 v142; // rcx
  __int64 v143; // rcx
  __int64 v144; // rcx
  int v145; // ecx
  __int64 v146; // rcx
  __int64 v147; // rcx
  int v148; // ecx
  _DWORD *v149; // rcx
  unsigned __int64 v150; // rcx
  __int64 v151; // rcx
  __int64 v152; // rcx
  int v153; // ecx
  __int64 v154; // rcx
  __int64 v155; // rcx
  int v156; // ecx
  unsigned __int64 v157; // rcx
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
  unsigned __int64 v172; // rcx
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
  int v183; // ecx
  __int64 v184; // rcx
  __int64 v185; // rcx
  int v186; // ecx
  int *v187; // rcx
  int v188; // edi
  unsigned int v189; // r8d
  __int64 v190; // rcx
  __int64 v191; // rcx
  __int64 v192; // rcx
  __int64 v193; // rcx
  __int64 v194; // rcx
  _DWORD *v196; // rcx
  __int64 v197; // rcx
  int v198; // ecx
  __int64 v199; // rcx
  __int64 v200; // rcx
  int v201; // ecx
  __int64 v202; // rcx
  __int64 v203; // rcx
  int v204; // ecx
  int *v205; // rcx
  unsigned int v206; // r9d
  __int64 v207; // rcx
  unsigned int v208; // r8d
  __int64 v209; // rcx
  __int64 v210; // rcx
  __int64 v211; // rcx
  __int64 v212; // rcx
  int v213; // ecx
  __int64 v214; // rcx
  __int64 v215; // rcx
  int v216; // ecx
  _DWORD *v217; // rcx
  __int64 v218; // rcx
  __int64 v219; // rcx
  int v220; // ecx
  __int64 v221; // rcx
  __int64 v222; // rcx
  int v223; // ecx
  int *v224; // rcx
  __int64 v225; // rcx
  __int64 v226; // rcx
  int v227; // ecx
  __int64 v228; // rcx
  __int64 v229; // rcx
  int v230; // ecx
  _DWORD *v231; // rcx
  __int64 v232; // rcx
  __int64 v233; // rcx
  int v234; // ecx
  __int64 v235; // rcx
  __int64 v236; // rcx
  int v237; // ecx
  int *v238; // rcx
  __int64 v239; // rax
  __int64 v240; // rcx
  __int64 v241; // rcx
  __int64 v242; // rcx
  _DWORD *v244; // rcx
  __int64 v245; // rcx
  int v246; // ecx
  __int64 v247; // rcx
  __int64 v248; // rcx
  int v249; // ecx
  __int64 v250; // rcx
  __int64 v251; // rcx
  int v252; // ecx
  _DWORD *v253; // rcx
  unsigned __int64 v254; // rcx
  __int64 v255; // rcx
  __int64 v256; // rcx
  int v257; // ecx
  __int64 v258; // rcx
  __int64 v259; // rcx
  int v260; // ecx
  _DWORD *v261; // rcx
  unsigned __int64 v262; // rcx
  __int64 v263; // rcx
  __int64 v264; // rcx
  int v265; // ecx
  __int64 v266; // rcx
  __int64 v267; // rcx
  int v268; // ecx
  int v269; // r15d
  __int64 v270; // rcx
  __int64 v271; // rcx
  int v272; // ecx
  __int64 v273; // rcx
  __int64 v274; // rcx
  int v275; // ecx
  int *v276; // rcx
  int v277; // eax
  __int64 v278; // rcx
  __int64 v279; // rcx
  int v280; // ecx
  __int64 v281; // rcx
  __int64 v282; // rcx
  int v283; // ecx
  _DWORD *v284; // rcx
  __int64 v285; // rcx
  __int64 v286; // rcx
  int v287; // ecx
  __int64 v288; // rcx
  __int64 v289; // rcx
  int v290; // ecx
  int *v291; // rcx
  int v292; // eax
  HDC v293; // rbx
  _DWORD *v294; // rdi
  __int64 v295; // rax
  unsigned __int64 v296; // rcx
  __int64 v297; // rcx
  __int64 v298; // rcx
  int v299; // ecx
  __int64 v300; // rcx
  __int64 v301; // rcx
  int v302; // ecx
  _DWORD *v303; // rbx
  unsigned __int64 v304; // rcx
  __int64 v305; // rcx
  __int64 v306; // rcx
  int v307; // ecx
  __int64 v308; // rcx
  __int64 v309; // rcx
  int v310; // ecx
  _DWORD *v311; // rcx
  int v312; // edi
  int v313; // ebx
  unsigned __int64 v314; // rcx
  __int64 v315; // rcx
  __int64 v316; // rcx
  int v317; // ecx
  __int64 v318; // rcx
  __int64 v319; // rcx
  int v320; // ecx
  _DWORD *v321; // rcx
  __int64 v322; // rcx
  __int64 v323; // rcx
  __int64 v324; // rcx
  int v325; // ecx
  __int64 v326; // rcx
  __int64 v327; // rcx
  int v328; // ecx
  _DWORD *v329; // rcx
  __int64 v330; // rcx
  __int64 v331; // rcx
  __int64 v332; // rcx
  int v333; // ecx
  __int64 v334; // rcx
  __int64 v335; // rcx
  int v336; // ecx
  _DWORD *v337; // rbx
  unsigned __int64 v338; // rcx
  int v339; // edi
  __int64 v340; // rcx
  __int64 v341; // rcx
  int v342; // ecx
  __int64 v343; // rcx
  __int64 v344; // rcx
  int v345; // ecx
  _DWORD *v346; // rcx
  __int64 v347; // rcx
  __int64 v348; // rcx
  __int64 v349; // rcx
  __int64 v350; // rcx
  __int64 v351; // rcx
  _DWORD *v352; // rbx
  __int64 v353; // rcx
  __int64 v354; // rcx
  int v355; // ecx
  __int64 v356; // rcx
  __int64 v357; // rcx
  int v358; // ecx
  int *v359; // r8
  int v360; // edx
  __int64 v361; // rcx
  __int64 v362; // rcx
  __int64 v363; // rcx
  __int64 v364; // rcx
  __int64 v365; // rcx
  __int64 v366; // rax
  __int64 v367; // rcx
  __int64 v368; // rcx
  __int64 v369; // rcx
  __int64 v370; // rcx
  _DWORD *v371; // r13
  __int64 v372; // rcx
  __int64 v373; // rcx
  __int64 v374; // rcx
  __int64 v375; // rcx
  _DWORD *v376; // r15
  __int64 v377; // rcx
  __int64 v378; // rcx
  __int64 v379; // rcx
  __int64 v380; // rcx
  _DWORD *v381; // r14
  __int64 v382; // rcx
  __int64 v383; // rcx
  __int64 v384; // rcx
  __int64 v385; // rcx
  _DWORD *v386; // rsi
  __int64 v387; // rcx
  __int64 v388; // rcx
  int v389; // ecx
  __int64 v390; // rcx
  __int64 v391; // rcx
  int v392; // ecx
  BOOL v393; // ecx
  unsigned int v395; // [rsp+60h] [rbp-A0h]
  int v397; // [rsp+70h] [rbp-90h]
  int v398; // [rsp+70h] [rbp-90h]
  int v400; // [rsp+80h] [rbp-80h]
  int v401; // [rsp+80h] [rbp-80h]
  int v402; // [rsp+88h] [rbp-78h]
  _DWORD *v403; // [rsp+88h] [rbp-78h]
  __int64 v404; // [rsp+90h] [rbp-70h]
  _DWORD *v405; // [rsp+90h] [rbp-70h]
  int v406; // [rsp+98h] [rbp-68h]
  __int64 v408; // [rsp+A0h] [rbp-60h]
  _DWORD v409[4]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v410; // [rsp+B8h] [rbp-48h]
  _DWORD v411[4]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v412; // [rsp+D0h] [rbp-30h]
  LONG right; // [rsp+D8h] [rbp-28h]
  int v414; // [rsp+DCh] [rbp-24h]
  int v415; // [rsp+E0h] [rbp-20h]
  int v416; // [rsp+E4h] [rbp-1Ch]
  __int64 v417; // [rsp+E8h] [rbp-18h]
  RECT v418; // [rsp+F0h] [rbp-10h] BYREF

  v3 = a3;
  v4 = a2;
  v402 = 0;
  v5 = a1;
  v408 = 0LL;
  if ( (a3 & 0x800) == 0 )
  {
    LODWORD(v6) = IsVisible(a1);
    if ( !(_DWORD)v6 )
      return v6;
  }
  ClearHungFlag((struct tagWND *)a1, 0x310u);
  GetRect(v5, (__int64)&v418, 34);
  if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) != 0x80000010 )
  {
    v406 = 0;
    v400 = v3 & 1;
    if ( (v3 & 1) != 0 )
      v7 = *(_QWORD *)(gpsi + 3712LL);
    else
      v7 = *(_QWORD *)(gpsi + 3720LL);
  }
  else
  {
    v406 = 1;
    v400 = v3 & 1;
    if ( (v3 & 1) != 0 )
      v7 = *(_QWORD *)(gpsi + 3912LL);
    else
      v7 = *(_QWORD *)(gpsi + 3920LL);
  }
  v404 = v7;
  v8 = xxxMNCanClose(v5);
  v9 = 0;
  if ( !v8 )
    v9 = 16;
  v10 = *(_BYTE *)(v5 + 54);
  v395 = v9;
  if ( (v10 & 1) == 0 )
  {
    v9 |= 8u;
LABEL_11:
    v395 = v9;
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
      goto LABEL_15;
    v11 = v9 | 1;
  }
  else
  {
    v11 = v9 | 4;
  }
  v395 = v11;
  if ( (*(_BYTE *)(v5 + 55) & 0x20) == 0 )
  {
LABEL_15:
    if ( (*(_BYTE *)(v5 + 49) & 3) == 0 || (v397 = 15, (*(_BYTE *)(v5 + 44) & 8) != 0) )
      v397 = 6;
    if ( (v3 & 0x8000) == 0 )
    {
      WindowBorders = GetWindowBorders(*(unsigned int *)(v5 + 52), *(unsigned int *)(v5 + 48));
      if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) == 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v100) + 776) & 0x4000) == 0 )
        {
LABEL_237:
          v16 = (_DWORD *)(gpsi + 2292LL);
          goto LABEL_22;
        }
      }
      else if ( IsDPIDWMSysMet(v13)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v101) + 776) & 0x4000) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                          + 244LL) & 1 )
      {
        goto LABEL_237;
      }
      if ( IsDPIDWMSysMet(6uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v103 = 0)
          : (v103 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v103) )
      {
        v16 = (_DWORD *)(gpsi + 2680LL);
      }
      else
      {
        v16 = (_DWORD *)(gpsi + 1904LL);
      }
LABEL_22:
      if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x2000) == 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v104) + 776) & 0x4000) == 0 )
        {
LABEL_253:
          v20 = (_DWORD *)(gpsi + 2288LL);
LABEL_26:
          v21 = WindowBorders * *v16;
          LODWORD(v6) = -(WindowBorders * *v20);
          v418.left += WindowBorders * *v20;
          v418.right += v6;
          v418.top += v21;
          goto LABEL_27;
        }
      }
      else if ( IsDPIDWMSysMet(v17)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v105) + 776) & 0x4000) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                          + 244LL) & 1 )
      {
        goto LABEL_253;
      }
      if ( IsDPIDWMSysMet(5uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v107 = 0)
          : (v107 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v107) )
      {
        v20 = (_DWORD *)(gpsi + 2676LL);
      }
      else
      {
        v20 = (_DWORD *)(gpsi + 1900LL);
      }
      goto LABEL_26;
    }
    LODWORD(v6) = GetWindowFrameMetric();
    v22 = v6;
    if ( (*(_BYTE *)(v5 + 49) & 1) != 0 )
    {
      LOBYTE(v6) = DrawEdge(v4, &v418, 5u, 0x200Fu);
      v23 = a1;
    }
    else
    {
      v23 = a1;
      if ( (*(_BYTE *)(a1 + 50) & 2) != 0 )
        LOBYTE(v6) = DrawEdge(v4, &v418, 2u, 0x200Fu);
    }
    if ( (*(_BYTE *)(v23 + 54) & 4) == 0 )
    {
      if ( v22 <= 0
        || (LOBYTE(v6) = !_bittest((const signed __int32 *)(v23 + 52), 0x12u),
            (((*(_DWORD *)(v23 + 52) & 0xC00000) != 12582912) & (unsigned __int8)v6) != 0)
        || (LODWORD(v6) = GetAppCompatFlags2(0x9900u), (v6 & 0x30000000) != 0) )
      {
LABEL_36:
        if ( (*(_BYTE *)(v23 + 54) & 0xC0) == 0 && (*(_BYTE *)(v23 + 48) & 1) == 0 )
        {
LABEL_27:
          v5 = a1;
          if ( (*(_BYTE *)(a1 + 40) & 8) == 0 )
            return v6;
          if ( *(char *)(a1 + 48) < 0 )
          {
            v395 |= 0x20u;
            if ( (unsigned int)IsDPIAbsoluteSysMet(0x35uLL) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v108) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v109) + 776) & 0x4000) != 0 )
              {
                goto LABEL_264;
              }
            }
            else if ( !IsDPIDWMSysMet(v108)
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v112) + 776) & 0x2000) != 0
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v113) + 776) & 0x4000) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                     ? (v114 = 0)
                     : (v114 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                 + 408)
                                                     + 8LL)
                                         + 244LL) & 1),
                       !v114) )
            {
LABEL_264:
              if ( IsDPIDWMSysMet(0x35uLL)
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v110) + 776) & 0x2000) != 0
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  ? (v111 = 0)
                  : (v111 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                    v111) )
              {
                v115 = (_DWORD *)(gpsi + 2868LL);
              }
              else
              {
                v115 = (_DWORD *)(gpsi + 2092LL);
              }
              goto LABEL_280;
            }
            v115 = (_DWORD *)(gpsi + 2480LL);
LABEL_280:
            v402 = 41;
            goto LABEL_300;
          }
          if ( (unsigned int)IsDPIAbsoluteSysMet(0x1FuLL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v116) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v117) + 776) & 0x4000) != 0 )
            {
              goto LABEL_284;
            }
          }
          else if ( !IsDPIDWMSysMet(v116)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v120) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v121) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                   ? (v122 = 0)
                   : (v122 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                               + 408)
                                                   + 8LL)
                                       + 244LL) & 1),
                     !v122) )
          {
LABEL_284:
            if ( IsDPIDWMSysMet(0x1FuLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v118) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v119 = 0)
                : (v119 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  v119) )
            {
              v115 = (_DWORD *)(gpsi + 2780LL);
            }
            else
            {
              v115 = (_DWORD *)(gpsi + 2004LL);
            }
LABEL_300:
            v418.bottom = v418.top + *v115;
            v409[1] = v418.bottom;
            v409[0] = v418.left;
            v409[2] = v418.right - v418.left;
            if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v123) + 776) & 0x2000) == 0
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v124) + 776) & 0x4000) == 0 )
              {
LABEL_311:
                v128 = gpsi;
                v129 = (_DWORD *)(gpsi + 2292LL);
LABEL_320:
                v409[3] = *v129;
                v410 = *(_QWORD *)(v128 + 8LL * v397 + 3696);
                GrePolyPatBlt(a2, 0xF00021u, (struct _POLYPATBLT *)v409, 1u);
                LOBYTE(v6) = GreSelectBrush(a2, v404);
                goto LABEL_321;
              }
            }
            else if ( IsDPIDWMSysMet(v123)
                   && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v125) + 776) & 0x2000) == 0
                   && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v126) + 776) & 0x4000) == 0
                   && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                   && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1 )
            {
              goto LABEL_311;
            }
            if ( IsDPIDWMSysMet(6uLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v130) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v131 = 0)
                : (v131 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  v131) )
            {
              v128 = gpsi;
              v129 = (_DWORD *)(gpsi + 2680LL);
            }
            else
            {
              v128 = gpsi;
              v129 = (_DWORD *)(gpsi + 1904LL);
            }
            goto LABEL_320;
          }
          v115 = (_DWORD *)(gpsi + 2392LL);
          goto LABEL_300;
        }
        DrawFrame(a2);
        if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x2000) == 0
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v92) + 776) & 0x4000) == 0 )
          {
LABEL_205:
            v27 = (int *)(gpsi + 2292LL);
            goto LABEL_41;
          }
        }
        else if ( IsDPIDWMSysMet(v24)
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x2000) == 0
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v93) + 776) & 0x4000) == 0
               && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                            + 244LL) & 1 )
        {
          goto LABEL_205;
        }
        if ( IsDPIDWMSysMet(6uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v95 = 0)
            : (v95 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v95) )
        {
          v27 = (int *)(gpsi + 2680LL);
        }
        else
        {
          v27 = (int *)(gpsi + 1904LL);
        }
LABEL_41:
        if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x2000) == 0
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v96) + 776) & 0x4000) == 0 )
          {
LABEL_221:
            v31 = (_DWORD *)(gpsi + 2288LL);
LABEL_45:
            v32 = *v27;
            LODWORD(v6) = -*v31;
            v418.left += *v31;
            v418.right += v6;
            v418.top += v32;
            goto LABEL_27;
          }
        }
        else if ( IsDPIDWMSysMet(v28)
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x2000) == 0
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v97) + 776) & 0x4000) == 0
               && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                            + 244LL) & 1 )
        {
          goto LABEL_221;
        }
        if ( IsDPIDWMSysMet(5uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v99 = 0)
            : (v99 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v99) )
        {
          v31 = (_DWORD *)(gpsi + 2676LL);
        }
        else
        {
          v31 = (_DWORD *)(gpsi + 1900LL);
        }
        goto LABEL_45;
      }
    }
    v72 = v22 + GetResizeBorderWidth();
    DrawFrame(a2);
    if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v73) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v74) + 776) & 0x4000) != 0 )
      {
        goto LABEL_160;
      }
    }
    else if ( !IsDPIDWMSysMet(v73)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v77) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v78) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v79 = 0)
             : (v79 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v79) )
    {
LABEL_160:
      if ( IsDPIDWMSysMet(6uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v75) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v76 = 0)
          : (v76 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v76) )
      {
        v80 = (_DWORD *)(gpsi + 2680LL);
      }
      else
      {
        v80 = (_DWORD *)(gpsi + 1904LL);
      }
LABEL_176:
      if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v81) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v82) + 776) & 0x4000) != 0 )
        {
          goto LABEL_179;
        }
      }
      else if ( !IsDPIDWMSysMet(v81)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v85) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v86) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v87 = 0)
               : (v87 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v87) )
      {
LABEL_179:
        if ( IsDPIDWMSysMet(5uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v83) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v84 = 0)
            : (v84 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v84) )
        {
          v88 = (_DWORD *)(gpsi + 2676LL);
        }
        else
        {
          v88 = (_DWORD *)(gpsi + 1900LL);
        }
        goto LABEL_195;
      }
      v88 = (_DWORD *)(gpsi + 2288LL);
LABEL_195:
      v89 = v72 * *v80;
      v90 = v72 * *v88;
      v23 = a1;
      v91 = -v89;
      v418.top -= v91;
      LODWORD(v6) = -v90;
      v418.left -= v6;
      v418.right += v6;
      v418.bottom += v91;
      goto LABEL_36;
    }
    v80 = (_DWORD *)(gpsi + 2292LL);
    goto LABEL_176;
  }
  if ( v3 < 0 )
  {
    DrawEdge(v4, &v418, 5u, 0x200Fu);
    DrawFrame(v4);
    if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x4000) != 0 )
      {
        goto LABEL_62;
      }
    }
    else if ( !IsDPIDWMSysMet(v33)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v39 = 0)
             : (v39 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v39) )
    {
LABEL_62:
      if ( IsDPIDWMSysMet(6uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v36 = 0)
          : (v36 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v36) )
      {
        v40 = (_DWORD *)(gpsi + 2680LL);
        v4 = a2;
      }
      else
      {
        v40 = (_DWORD *)(gpsi + 1904LL);
      }
LABEL_78:
      if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v41) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v42) + 776) & 0x4000) != 0 )
        {
          goto LABEL_81;
        }
      }
      else if ( !IsDPIDWMSysMet(v41)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v45) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v47 = 0)
               : (v47 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v47) )
      {
LABEL_81:
        if ( IsDPIDWMSysMet(5uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v43) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v44 = 0)
            : (v44 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v44) )
        {
          v48 = (_DWORD *)(gpsi + 2676LL);
        }
        else
        {
          v48 = (_DWORD *)(gpsi + 1900LL);
        }
        goto LABEL_97;
      }
      v48 = (_DWORD *)(gpsi + 2288LL);
LABEL_97:
      v5 = a1;
      goto LABEL_136;
    }
    v40 = (_DWORD *)(gpsi + 2292LL);
    goto LABEL_78;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(8uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v49) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v50) + 776) & 0x4000) != 0 )
    {
      goto LABEL_101;
    }
LABEL_112:
    v40 = (_DWORD *)(gpsi + 2300LL);
    goto LABEL_117;
  }
  if ( IsDPIDWMSysMet(v49)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v53) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v54) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_112;
  }
LABEL_101:
  if ( IsDPIDWMSysMet(8uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v51) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v52 = 0)
      : (v52 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v52) )
  {
    v40 = (_DWORD *)(gpsi + 2688LL);
  }
  else
  {
    v40 = (_DWORD *)(gpsi + 1912LL);
  }
LABEL_117:
  if ( (unsigned int)IsDPIAbsoluteSysMet(7uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v56) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v57) + 776) & 0x4000) != 0 )
    {
      goto LABEL_120;
    }
LABEL_131:
    v48 = (_DWORD *)(gpsi + 2296LL);
    goto LABEL_136;
  }
  if ( IsDPIDWMSysMet(v56)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v60) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v61) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_131;
  }
LABEL_120:
  if ( IsDPIDWMSysMet(7uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v58) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v59 = 0)
      : (v59 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v59) )
  {
    v48 = (_DWORD *)(gpsi + 2684LL);
  }
  else
  {
    v48 = (_DWORD *)(gpsi + 1908LL);
  }
LABEL_136:
  v63 = -*v48;
  v418.left += *v48;
  v418.right += v63;
  v418.top += *v40;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x1FuLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v64) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v65) + 776) & 0x4000) != 0 )
    {
      goto LABEL_139;
    }
  }
  else if ( !IsDPIDWMSysMet(v64)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v68) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v69) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           ? (v70 = 0)
           : (v70 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v70) )
  {
LABEL_139:
    if ( IsDPIDWMSysMet(0x1FuLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v66) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v67 = 0)
        : (v67 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v67) )
    {
      v71 = (_DWORD *)(gpsi + 2780LL);
    }
    else
    {
      v71 = (_DWORD *)(gpsi + 2004LL);
    }
    goto LABEL_155;
  }
  v71 = (_DWORD *)(gpsi + 2392LL);
LABEL_155:
  v418.bottom = v418.top + *v71;
  v6 = GreSelectBrush(v4, v7);
  v408 = v6;
LABEL_321:
  if ( (*(_BYTE *)(v5 + 54) & 8) != 0 || (*(_BYTE *)(v5 + 45) & 2) == 0 )
  {
    v133 = 1;
    if ( (a3 & 0x1000) == 0 )
    {
      v132 = v395;
      if ( !v395 || (v395 & 0xC) != 12 && (v395 & 0x20) == 0 )
      {
        v133 = 3;
        goto LABEL_350;
      }
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v134) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v135) + 776) & 0x4000) != 0 )
        {
          goto LABEL_330;
        }
      }
      else if ( !IsDPIDWMSysMet(v134)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v138) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v139) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v140 = 0)
               : (v140 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                 !v140) )
      {
LABEL_330:
        if ( IsDPIDWMSysMet(0x2DuLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v136) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v137 = 0)
            : (v137 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
              v137) )
        {
          v141 = (_DWORD *)(gpsi + 2836LL);
        }
        else
        {
          v141 = (_DWORD *)(gpsi + 2060LL);
        }
LABEL_346:
        v418.right -= *v141;
        if ( v395 == 12 && (*(_BYTE *)(v5 + 49) & 4) != 0 )
          v133 = 2;
LABEL_350:
        if ( (v395 & 0x20) != 0 )
        {
          if ( (unsigned int)IsDPIAbsoluteSysMet(0x34uLL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v142) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v143) + 776) & 0x4000) != 0 )
            {
              goto LABEL_354;
            }
          }
          else if ( !IsDPIDWMSysMet(v142)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v146) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v147) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                   ? (v148 = 0)
                   : (v148 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                               + 408)
                                                   + 8LL)
                                       + 244LL) & 1),
                     !v148) )
          {
LABEL_354:
            if ( IsDPIDWMSysMet(0x34uLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v144) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v145 = 0)
                : (v145 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  v145) )
            {
              v149 = (_DWORD *)(gpsi + 2864LL);
            }
            else
            {
              v149 = (_DWORD *)(gpsi + 2088LL);
            }
            goto LABEL_389;
          }
          v149 = (_DWORD *)(gpsi + 2476LL);
LABEL_389:
          LODWORD(v6) = *v149;
          v418.right -= *v149 * v133;
          goto LABEL_1039;
        }
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x1EuLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v150) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v151) + 776) & 0x4000) != 0 )
          {
            goto LABEL_373;
          }
        }
        else if ( !IsDPIDWMSysMet(v150)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v154) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v155) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                 ? (v156 = 0)
                 : (v156 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                   !v156) )
        {
LABEL_373:
          if ( IsDPIDWMSysMet(0x1EuLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v152) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v153 = 0)
              : (v153 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                v153) )
          {
            v149 = (_DWORD *)(gpsi + 2776LL);
          }
          else
          {
            v149 = (_DWORD *)(gpsi + 2000LL);
          }
          goto LABEL_389;
        }
        v149 = (_DWORD *)(gpsi + 2388LL);
        goto LABEL_389;
      }
      v141 = (_DWORD *)(gpsi + 2448LL);
      goto LABEL_346;
    }
    if ( v395 && v395 != 12 )
    {
      v401 = IsDPIAbsoluteSysMet(0x2EuLL);
      if ( v401 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v157) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v158) + 776) & 0x4000) != 0 )
        {
          goto LABEL_395;
        }
      }
      else if ( !IsDPIDWMSysMet(v157)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v161) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v162) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v163 = 0)
               : (v163 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                 !v163) )
      {
LABEL_395:
        if ( IsDPIDWMSysMet(0x2EuLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v159) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v160 = 0)
            : (v160 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
              v160) )
        {
          v164 = (_DWORD *)(gpsi + 2840LL);
        }
        else
        {
          v164 = (_DWORD *)(gpsi + 2064LL);
        }
LABEL_411:
        v418.top += *v164;
        if ( v401 )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v164) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v165) + 776) & 0x4000) != 0 )
          {
            goto LABEL_414;
          }
        }
        else if ( !IsDPIDWMSysMet(0x2EuLL)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v168) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v169) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                 ? (v170 = 0)
                 : (v170 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                   !v170) )
        {
LABEL_414:
          if ( IsDPIDWMSysMet(0x2EuLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v166) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v167 = 0)
              : (v167 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                v167) )
          {
            v171 = (_DWORD *)(gpsi + 2840LL);
          }
          else
          {
            v171 = (_DWORD *)(gpsi + 2064LL);
          }
LABEL_430:
          v418.bottom -= *v171;
          v173 = IsDPIAbsoluteSysMet(0x2DuLL);
          if ( v173 )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v172) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v174) + 776) & 0x4000) != 0 )
            {
              goto LABEL_433;
            }
          }
          else if ( !IsDPIDWMSysMet(v172)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v177) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v178) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                   ? (v179 = 0)
                   : (v179 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                               + 408)
                                                   + 8LL)
                                       + 244LL) & 1),
                     !v179) )
          {
LABEL_433:
            if ( IsDPIDWMSysMet(0x2DuLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v175) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v176 = 0)
                : (v176 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  v176) )
            {
              v180 = (_DWORD *)(gpsi + 2836LL);
            }
            else
            {
              v180 = (_DWORD *)(gpsi + 2060LL);
            }
LABEL_449:
            v418.right -= *v180;
            if ( v173 )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v180) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v181) + 776) & 0x4000) != 0 )
              {
                goto LABEL_452;
              }
            }
            else if ( !IsDPIDWMSysMet(0x2DuLL)
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v184) + 776) & 0x2000) != 0
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v185) + 776) & 0x4000) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                     ? (v186 = 0)
                     : (v186 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                 + 408)
                                                     + 8LL)
                                         + 244LL) & 1),
                       !v186) )
            {
LABEL_452:
              if ( IsDPIDWMSysMet(0x2DuLL)
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v182) + 776) & 0x2000) != 0
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  ? (v183 = 0)
                  : (v183 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                    v183) )
              {
                v187 = (int *)(gpsi + 2836LL);
              }
              else
              {
                v187 = (int *)(gpsi + 2060LL);
              }
LABEL_468:
              v188 = v418.bottom - v418.top;
              NtGdiPatBlt(a2, v418.right, v418.top, *v187, v418.bottom - v418.top, 15728673);
              v189 = v402;
              if ( (v395 & 0x10) != 0 )
                v189 = v402 + 3;
              if ( *(_DWORD *)(a1 + 344)
                || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0
                || *(_WORD *)(gpsi + 7286LL) == 96 )
              {
                v190 = gpsi + 4260LL;
              }
              else
              {
                v190 = gpsi + 5748LL;
              }
              v418.right -= *(_DWORD *)(v190 + 16LL * v189 + 8);
              BitBltSysBmp(a2);
              v191 = v395;
              if ( (v395 & 0x20) != 0 || (v395 & 0xC) == 0xC )
              {
LABEL_571:
                if ( (v191 & 0x1C) == 0 || (v395 & 0x20) != 0 || (*(_BYTE *)(a1 + 49) & 4) == 0 )
                  goto LABEL_618;
                if ( v173 )
                {
                  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v191) + 776) & 0x2000) != 0
                    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v225) + 776) & 0x4000) != 0 )
                  {
                    goto LABEL_577;
                  }
                }
                else if ( !IsDPIDWMSysMet(0x2DuLL)
                       || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v228) + 776) & 0x2000) != 0
                       || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v229) + 776) & 0x4000) != 0
                       || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                         ? (v230 = 0)
                         : (v230 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                     + 408)
                                                         + 8LL)
                                             + 244LL) & 1),
                           !v230) )
                {
LABEL_577:
                  if ( IsDPIDWMSysMet(0x2DuLL)
                    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v226) + 776) & 0x2000) != 0
                    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                      ? (v227 = 0)
                      : (v227 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                  + 408)
                                                      + 8LL)
                                          + 244LL) & 1),
                        v227) )
                  {
                    v231 = (_DWORD *)(gpsi + 2836LL);
                  }
                  else
                  {
                    v231 = (_DWORD *)(gpsi + 2060LL);
                  }
LABEL_593:
                  v418.right -= *v231;
                  if ( v173 )
                  {
                    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v231) + 776) & 0x2000) != 0
                      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v232) + 776) & 0x4000) != 0 )
                    {
                      goto LABEL_596;
                    }
                  }
                  else if ( !IsDPIDWMSysMet(0x2DuLL)
                         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v235) + 776) & 0x2000) != 0
                         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v236) + 776) & 0x4000) != 0
                         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                           ? (v237 = 0)
                           : (v237 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                       + 408)
                                                           + 8LL)
                                               + 244LL) & 1),
                             !v237) )
                  {
LABEL_596:
                    if ( IsDPIDWMSysMet(0x2DuLL)
                      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v233) + 776) & 0x2000) != 0
                      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                        ? (v234 = 0)
                        : (v234 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                    + 408)
                                                        + 8LL)
                                            + 244LL) & 1),
                          v234) )
                    {
                      v238 = (int *)(gpsi + 2836LL);
                    }
                    else
                    {
                      v238 = (int *)(gpsi + 2060LL);
                    }
                    goto LABEL_612;
                  }
                  v238 = (int *)(gpsi + 2448LL);
LABEL_612:
                  NtGdiPatBlt(a2, v418.right, v418.top, *v238, v188, 15728673);
                  if ( *(_DWORD *)(a1 + 344)
                    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0
                    || *(_WORD *)(gpsi + 7286LL) == 96 )
                  {
                    v239 = gpsi + 4260LL;
                  }
                  else
                  {
                    v239 = gpsi + 5748LL;
                  }
                  v418.right -= *(_DWORD *)(v239 + 184);
                  BitBltSysBmp(a2);
                  ++v133;
LABEL_618:
                  if ( v401 )
                  {
                    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v191) + 776) & 0x2000) == 0
                      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v240) + 776) & 0x4000) == 0 )
                    {
LABEL_629:
                      v244 = (_DWORD *)(gpsi + 2452LL);
                      goto LABEL_638;
                    }
                  }
                  else if ( IsDPIDWMSysMet(0x2EuLL)
                         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v241) + 776) & 0x2000) == 0
                         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v242) + 776) & 0x4000) == 0
                         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1 )
                  {
                    goto LABEL_629;
                  }
                  if ( IsDPIDWMSysMet(0x2EuLL)
                    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v245) + 776) & 0x2000) != 0
                    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                      ? (v246 = 0)
                      : (v246 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                  + 408)
                                                      + 8LL)
                                          + 244LL) & 1),
                        v246) )
                  {
                    v244 = (_DWORD *)(gpsi + 2840LL);
                  }
                  else
                  {
                    v244 = (_DWORD *)(gpsi + 2064LL);
                  }
LABEL_638:
                  v418.top -= *v244;
                  if ( v401 )
                  {
                    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v244) + 776) & 0x2000) != 0
                      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v247) + 776) & 0x4000) != 0 )
                    {
                      goto LABEL_641;
                    }
                  }
                  else if ( !IsDPIDWMSysMet(0x2EuLL)
                         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v250) + 776) & 0x2000) != 0
                         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v251) + 776) & 0x4000) != 0
                         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                           ? (v252 = 0)
                           : (v252 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                       + 408)
                                                           + 8LL)
                                               + 244LL) & 1),
                             !v252) )
                  {
LABEL_641:
                    if ( IsDPIDWMSysMet(0x2EuLL)
                      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v248) + 776) & 0x2000) != 0
                      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                        ? (v249 = 0)
                        : (v249 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                    + 408)
                                                        + 8LL)
                                            + 244LL) & 1),
                          v249) )
                    {
                      v253 = (_DWORD *)(gpsi + 2840LL);
                    }
                    else
                    {
                      v253 = (_DWORD *)(gpsi + 2064LL);
                    }
LABEL_657:
                    v418.bottom += *v253;
                    if ( (v395 & 0x20) != 0 )
                    {
                      if ( (unsigned int)IsDPIAbsoluteSysMet(0x34uLL) )
                      {
                        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v254) + 776) & 0x2000) != 0
                          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v255) + 776) & 0x4000) != 0 )
                        {
                          goto LABEL_661;
                        }
                      }
                      else if ( !IsDPIDWMSysMet(v254)
                             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v258) + 776) & 0x2000) != 0
                             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v259) + 776) & 0x4000) != 0
                             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                               ? (v260 = 0)
                               : (v260 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                           + 408)
                                                               + 8LL)
                                                   + 244LL) & 1),
                                 !v260) )
                      {
LABEL_661:
                        if ( IsDPIDWMSysMet(0x34uLL)
                          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v256) + 776) & 0x2000) != 0
                          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                            ? (v257 = 0)
                            : (v257 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                        + 408)
                                                            + 8LL)
                                                + 244LL) & 1),
                              v257) )
                        {
                          v261 = (_DWORD *)(gpsi + 2864LL);
                        }
                        else
                        {
                          v261 = (_DWORD *)(gpsi + 2088LL);
                        }
                        goto LABEL_696;
                      }
                      v261 = (_DWORD *)(gpsi + 2476LL);
                      goto LABEL_696;
                    }
                    if ( (unsigned int)IsDPIAbsoluteSysMet(0x1EuLL) )
                    {
                      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v262) + 776) & 0x2000) != 0
                        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v263) + 776) & 0x4000) != 0 )
                      {
                        goto LABEL_680;
                      }
                    }
                    else if ( !IsDPIDWMSysMet(v262)
                           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v266) + 776) & 0x2000) != 0
                           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v267) + 776) & 0x4000) != 0
                           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                             ? (v268 = 0)
                             : (v268 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                         + 408)
                                                             + 8LL)
                                                 + 244LL) & 1),
                               !v268) )
                    {
LABEL_680:
                      if ( IsDPIDWMSysMet(0x1EuLL)
                        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v264) + 776) & 0x2000) != 0
                        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                          ? (v265 = 0)
                          : (v265 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                      + 408)
                                                          + 8LL)
                                              + 244LL) & 1),
                            v265) )
                      {
                        v261 = (_DWORD *)(gpsi + 2776LL);
                      }
                      else
                      {
                        v261 = (_DWORD *)(gpsi + 2000LL);
                      }
LABEL_696:
                      v269 = *v261 * v133;
                      v411[0] = v418.right;
                      v411[1] = v418.top;
                      v411[2] = v269;
                      if ( v401 )
                      {
                        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v261) + 776) & 0x2000) != 0
                          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v270) + 776) & 0x4000) != 0 )
                        {
                          goto LABEL_699;
                        }
                      }
                      else if ( !IsDPIDWMSysMet(0x2EuLL)
                             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v273) + 776) & 0x2000) != 0
                             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v274) + 776) & 0x4000) != 0
                             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                               ? (v275 = 0)
                               : (v275 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                           + 408)
                                                               + 8LL)
                                                   + 244LL) & 1),
                                 !v275) )
                      {
LABEL_699:
                        if ( IsDPIDWMSysMet(0x2EuLL)
                          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v271) + 776) & 0x2000) != 0
                          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                            ? (v272 = 0)
                            : (v272 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                        + 408)
                                                            + 8LL)
                                                + 244LL) & 1),
                              v272) )
                        {
                          v276 = (int *)(gpsi + 2840LL);
                        }
                        else
                        {
                          v276 = (int *)(gpsi + 2064LL);
                        }
LABEL_715:
                        v277 = *v276;
                        v412 = 0LL;
                        v411[3] = v277;
                        right = v418.right;
                        if ( v401 )
                        {
                          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v276) + 776) & 0x2000) != 0
                            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v278) + 776) & 0x4000) != 0 )
                          {
                            goto LABEL_718;
                          }
                        }
                        else if ( !IsDPIDWMSysMet(0x2EuLL)
                               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v281) + 776) & 0x2000) != 0
                               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v282) + 776) & 0x4000) != 0
                               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                 ? (v283 = 0)
                                 : (v283 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                             + 408)
                                                                 + 8LL)
                                                     + 244LL) & 1),
                                   !v283) )
                        {
LABEL_718:
                          if ( IsDPIDWMSysMet(0x2EuLL)
                            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v279) + 776) & 0x2000) != 0
                            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                              ? (v280 = 0)
                              : (v280 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                          + 408)
                                                              + 8LL)
                                                  + 244LL) & 1),
                                v280) )
                          {
                            v284 = (_DWORD *)(gpsi + 2840LL);
                          }
                          else
                          {
                            v284 = (_DWORD *)(gpsi + 2064LL);
                          }
LABEL_734:
                          v414 = v418.bottom - *v284;
                          v415 = v269;
                          if ( v401 )
                          {
                            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v284) + 776) & 0x2000) != 0
                              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v285) + 776) & 0x4000) != 0 )
                            {
                              goto LABEL_737;
                            }
                          }
                          else if ( !IsDPIDWMSysMet(0x2EuLL)
                                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v288) + 776) & 0x2000) != 0
                                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v289) + 776) & 0x4000) != 0
                                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                   ? (v290 = 0)
                                   : (v290 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                               + 408)
                                                                   + 8LL)
                                                       + 244LL) & 1),
                                     !v290) )
                          {
LABEL_737:
                            if ( IsDPIDWMSysMet(0x2EuLL)
                              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v286) + 776) & 0x2000) != 0
                              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                ? (v287 = 0)
                                : (v287 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                            + 408)
                                                                + 8LL)
                                                    + 244LL) & 1),
                                  v287) )
                            {
                              v291 = (int *)(gpsi + 2840LL);
                            }
                            else
                            {
                              v291 = (int *)(gpsi + 2064LL);
                            }
LABEL_753:
                            v292 = *v291;
                            v293 = a2;
                            v417 = 0LL;
                            v416 = v292;
                            GrePolyPatBlt(a2, 0xF00021u, (struct _POLYPATBLT *)v411, 2u);
                            LOBYTE(v6) = v408;
                            if ( v408 )
                              LOBYTE(v6) = GreSelectBrush(a2, v408);
                            goto LABEL_757;
                          }
                          v291 = (int *)(gpsi + 2452LL);
                          goto LABEL_753;
                        }
                        v284 = (_DWORD *)(gpsi + 2452LL);
                        goto LABEL_734;
                      }
                      v276 = (int *)(gpsi + 2452LL);
                      goto LABEL_715;
                    }
                    v261 = (_DWORD *)(gpsi + 2388LL);
                    goto LABEL_696;
                  }
                  v253 = (_DWORD *)(gpsi + 2452LL);
                  goto LABEL_657;
                }
                v231 = (_DWORD *)(gpsi + 2448LL);
                goto LABEL_593;
              }
              if ( v173 )
              {
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v395) + 776) & 0x2000) == 0
                  && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v192) + 776) & 0x4000) == 0 )
                {
LABEL_488:
                  v196 = (_DWORD *)(gpsi + 2448LL);
                  goto LABEL_497;
                }
              }
              else if ( IsDPIDWMSysMet(0x2DuLL)
                     && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v193) + 776) & 0x2000) == 0
                     && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v194) + 776) & 0x4000) == 0
                     && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                     && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1 )
              {
                goto LABEL_488;
              }
              if ( IsDPIDWMSysMet(0x2DuLL)
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v197) + 776) & 0x2000) != 0
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  ? (v198 = 0)
                  : (v198 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                    v198) )
              {
                v196 = (_DWORD *)(gpsi + 2836LL);
              }
              else
              {
                v196 = (_DWORD *)(gpsi + 2060LL);
              }
LABEL_497:
              v418.right -= *v196;
              if ( v173 )
              {
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v196) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v199) + 776) & 0x4000) != 0 )
                {
                  goto LABEL_500;
                }
              }
              else if ( !IsDPIDWMSysMet(0x2DuLL)
                     || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v202) + 776) & 0x2000) != 0
                     || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v203) + 776) & 0x4000) != 0
                     || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                       ? (v204 = 0)
                       : (v204 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                   + 408)
                                                       + 8LL)
                                           + 244LL) & 1),
                         !v204) )
              {
LABEL_500:
                if ( IsDPIDWMSysMet(0x2DuLL)
                  && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v200) + 776) & 0x2000) != 0
                  && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                    ? (v201 = 0)
                    : (v201 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                + 408)
                                                    + 8LL)
                                        + 244LL) & 1),
                      v201) )
                {
                  v205 = (int *)(gpsi + 2836LL);
                }
                else
                {
                  v205 = (int *)(gpsi + 2060LL);
                }
LABEL_516:
                NtGdiPatBlt(a2, v418.right, v418.top, *v205, v188, 15728673);
                if ( (v395 & 2) != 0 )
                  v206 = 8;
                else
                  v206 = (v395 & 8) != 0 ? 17 : 14;
                if ( *(_DWORD *)(a1 + 344)
                  || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0
                  || *(_WORD *)(gpsi + 7286LL) == 96 )
                {
                  v207 = gpsi + 4260LL;
                }
                else
                {
                  v207 = gpsi + 5748LL;
                }
                v418.right -= *(_DWORD *)(v207 + 16LL * v206 + 8);
                BitBltSysBmp(a2);
                if ( (v395 & 1) != 0 )
                  v208 = 8;
                else
                  v208 = (v395 & 4) != 0 ? 7 : 4;
                if ( *(_DWORD *)(a1 + 344)
                  || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0
                  || *(_WORD *)(gpsi + 7286LL) == 96 )
                {
                  v209 = gpsi + 4260LL;
                }
                else
                {
                  v209 = gpsi + 5748LL;
                }
                v418.right -= *(_DWORD *)(v209 + 16LL * v208 + 8);
                BitBltSysBmp(a2);
                if ( v173 )
                {
                  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v210) + 776) & 0x2000) != 0
                    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v211) + 776) & 0x4000) != 0 )
                  {
                    goto LABEL_535;
                  }
                }
                else if ( !IsDPIDWMSysMet(0x2DuLL)
                       || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v214) + 776) & 0x2000) != 0
                       || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v215) + 776) & 0x4000) != 0
                       || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                         ? (v216 = 0)
                         : (v216 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                     + 408)
                                                         + 8LL)
                                             + 244LL) & 1),
                           !v216) )
                {
LABEL_535:
                  if ( IsDPIDWMSysMet(0x2DuLL)
                    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v212) + 776) & 0x2000) != 0
                    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                      ? (v213 = 0)
                      : (v213 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                  + 408)
                                                      + 8LL)
                                          + 244LL) & 1),
                        v213) )
                  {
                    v217 = (_DWORD *)(gpsi + 2836LL);
                  }
                  else
                  {
                    v217 = (_DWORD *)(gpsi + 2060LL);
                  }
LABEL_551:
                  v418.right -= *v217;
                  if ( v173 )
                  {
                    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v217) + 776) & 0x2000) != 0
                      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v218) + 776) & 0x4000) != 0 )
                    {
                      goto LABEL_554;
                    }
                  }
                  else if ( !IsDPIDWMSysMet(0x2DuLL)
                         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v221) + 776) & 0x2000) != 0
                         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v222) + 776) & 0x4000) != 0
                         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                           ? (v223 = 0)
                           : (v223 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                       + 408)
                                                           + 8LL)
                                               + 244LL) & 1),
                             !v223) )
                  {
LABEL_554:
                    if ( IsDPIDWMSysMet(0x2DuLL)
                      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v219) + 776) & 0x2000) != 0
                      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                        ? (v220 = 0)
                        : (v220 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                    + 408)
                                                        + 8LL)
                                            + 244LL) & 1),
                          v220) )
                    {
                      v224 = (int *)(gpsi + 2836LL);
                    }
                    else
                    {
                      v224 = (int *)(gpsi + 2060LL);
                    }
                    goto LABEL_570;
                  }
                  v224 = (int *)(gpsi + 2448LL);
LABEL_570:
                  NtGdiPatBlt(a2, v418.right, v418.top, *v224, v188, 15728673);
                  v191 = v395;
                  v133 = 3;
                  goto LABEL_571;
                }
                v217 = (_DWORD *)(gpsi + 2448LL);
                goto LABEL_551;
              }
              v205 = (int *)(gpsi + 2448LL);
              goto LABEL_516;
            }
            v187 = (int *)(gpsi + 2448LL);
            goto LABEL_468;
          }
          v180 = (_DWORD *)(gpsi + 2448LL);
          goto LABEL_449;
        }
        v171 = (_DWORD *)(gpsi + 2452LL);
        goto LABEL_430;
      }
      v164 = (_DWORD *)(gpsi + 2452LL);
      goto LABEL_411;
    }
    if ( *(_DWORD *)(v5 + 344)
      || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0
      || *(_WORD *)(gpsi + 7286LL) == 96 )
    {
      v295 = gpsi + 4260LL;
    }
    else
    {
      v295 = gpsi + 5748LL;
    }
    v403 = (_DWORD *)(v295 + 624);
    if ( v395 )
    {
      v398 = IsDPIAbsoluteSysMet(0x1EuLL);
      if ( v398 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v296) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v297) + 776) & 0x4000) != 0 )
        {
          goto LABEL_767;
        }
      }
      else if ( !IsDPIDWMSysMet(v296)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v300) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v301) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v302 = 0)
               : (v302 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                 !v302) )
      {
LABEL_767:
        if ( IsDPIDWMSysMet(0x1EuLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v298) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v299 = 0)
            : (v299 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
              v299) )
        {
          v303 = (_DWORD *)(gpsi + 2776LL);
        }
        else
        {
          v303 = (_DWORD *)(gpsi + 2000LL);
        }
LABEL_783:
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v304) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v305) + 776) & 0x4000) != 0 )
          {
            goto LABEL_786;
          }
        }
        else if ( !IsDPIDWMSysMet(v304)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v308) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v309) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                 ? (v310 = 0)
                 : (v310 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                   !v310) )
        {
LABEL_786:
          if ( IsDPIDWMSysMet(0x2DuLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v306) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v307 = 0)
              : (v307 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                v307) )
          {
            v311 = (_DWORD *)(gpsi + 2836LL);
          }
          else
          {
            v311 = (_DWORD *)(gpsi + 2060LL);
          }
          goto LABEL_802;
        }
        v311 = (_DWORD *)(gpsi + 2448LL);
LABEL_802:
        v312 = *v303 + *v311;
        v313 = v398;
        goto LABEL_823;
      }
      v303 = (_DWORD *)(gpsi + 2388LL);
      goto LABEL_783;
    }
    v398 = IsDPIAbsoluteSysMet(0x1EuLL);
    v313 = v398;
    if ( v398 )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v314) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v315) + 776) & 0x4000) != 0 )
      {
        goto LABEL_806;
      }
    }
    else if ( !IsDPIDWMSysMet(v314)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v318) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v319) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v320 = 0)
             : (v320 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                             + 8LL)
                                 + 244LL) & 1),
               !v320) )
    {
LABEL_806:
      if ( IsDPIDWMSysMet(0x1EuLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v316) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v317 = 0)
          : (v317 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v317) )
      {
        v321 = (_DWORD *)(gpsi + 2776LL);
      }
      else
      {
        v321 = (_DWORD *)(gpsi + 2000LL);
      }
      goto LABEL_822;
    }
    v321 = (_DWORD *)(gpsi + 2388LL);
LABEL_822:
    v312 = 3 * *v321;
LABEL_823:
    if ( !v400 )
      v403 += 4;
    v418.right -= v312;
    FixHDCBITSBmp();
    if ( v313 )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v322) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v323) + 776) & 0x4000) != 0 )
      {
        goto LABEL_828;
      }
    }
    else if ( !IsDPIDWMSysMet(0x1EuLL)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v326) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v327) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v328 = 0)
             : (v328 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                             + 8LL)
                                 + 244LL) & 1),
               !v328) )
    {
LABEL_828:
      if ( IsDPIDWMSysMet(0x1EuLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v324) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v325 = 0)
          : (v325 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v325) )
      {
        v329 = (_DWORD *)(gpsi + 2776LL);
      }
      else
      {
        v329 = (_DWORD *)(gpsi + 2000LL);
      }
LABEL_844:
      LOBYTE(v6) = NtGdiBitBltInternal(
                     a2,
                     v418.right,
                     v418.top,
                     v312,
                     v403[3],
                     *(HDC *)(gpDispInfo + 32LL),
                     *v403 + v403[2] - v312 - *v329,
                     v403[1],
                     0xCC0020u,
                     0,
                     0);
      v132 = v395;
      if ( !v395 || (LOBYTE(v6) = *(_BYTE *)(a1 + 49), (v6 & 4) == 0) )
      {
        v5 = a1;
        goto LABEL_1039;
      }
      if ( v313 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v330) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v331) + 776) & 0x4000) != 0 )
        {
          goto LABEL_849;
        }
      }
      else if ( !IsDPIDWMSysMet(0x1EuLL)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v334) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v335) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v336 = 0)
               : (v336 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                 !v336) )
      {
LABEL_849:
        if ( IsDPIDWMSysMet(0x1EuLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v332) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v333 = 0)
            : (v333 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
              v333) )
        {
          v337 = (_DWORD *)(gpsi + 2776LL);
        }
        else
        {
          v337 = (_DWORD *)(gpsi + 2000LL);
        }
LABEL_865:
        v339 = IsDPIAbsoluteSysMet(0x2DuLL);
        if ( v339 )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v338) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v340) + 776) & 0x4000) != 0 )
          {
            goto LABEL_868;
          }
        }
        else if ( !IsDPIDWMSysMet(v338)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v343) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v344) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                 ? (v345 = 0)
                 : (v345 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                   !v345) )
        {
LABEL_868:
          if ( IsDPIDWMSysMet(0x2DuLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v341) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v342 = 0)
              : (v342 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                v342) )
          {
            v346 = (_DWORD *)(gpsi + 2836LL);
          }
          else
          {
            v346 = (_DWORD *)(gpsi + 2060LL);
          }
LABEL_884:
          v347 = (unsigned int)(*v346 - *v337);
          v418.right += v347;
          if ( v398 )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v347) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v348) + 776) & 0x4000) != 0 )
            {
              goto LABEL_887;
            }
          }
          else if ( !IsDPIDWMSysMet(0x1EuLL)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v350) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v351) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                   ? (v349 = 0LL)
                   : (v349 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                               + 408)
                                                   + 8LL)
                                       + 244LL) & 1),
                     !(_DWORD)v349) )
          {
LABEL_887:
            if ( IsDPIDWMSysMet(0x1EuLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v349) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v349 = 0LL)
                : (v349 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  (_DWORD)v349) )
            {
              v352 = (_DWORD *)(gpsi + 2776LL);
            }
            else
            {
              v352 = (_DWORD *)(gpsi + 2000LL);
            }
LABEL_903:
            if ( v398 )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v349) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v353) + 776) & 0x4000) != 0 )
              {
                goto LABEL_906;
              }
            }
            else if ( !IsDPIDWMSysMet(0x1EuLL)
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v356) + 776) & 0x2000) != 0
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v357) + 776) & 0x4000) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                     ? (v358 = 0)
                     : (v358 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                 + 408)
                                                     + 8LL)
                                         + 244LL) & 1),
                       !v358) )
            {
LABEL_906:
              if ( IsDPIDWMSysMet(0x1EuLL)
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v354) + 776) & 0x2000) != 0
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  ? (v355 = 0)
                  : (v355 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                    v355) )
              {
                v359 = (int *)(gpsi + 2776LL);
              }
              else
              {
                v359 = (int *)(gpsi + 2000LL);
              }
LABEL_922:
              v360 = *v403 + v403[2] - *v352;
              v293 = a2;
              NtGdiBitBltInternal(
                a2,
                v418.right,
                v418.top,
                *v359,
                v403[3],
                *(HDC *)(gpDispInfo + 32LL),
                v360,
                v403[1],
                0xCC0020u,
                0,
                0);
              if ( !(unsigned int)IS_UI_LANGID() )
              {
                v361 = gpsi;
                LOBYTE(v6) = 13;
                if ( *(_WORD *)(gpsi + 7300LL) != 1037 )
                  goto LABEL_757;
              }
              LOBYTE(v6) = *(_BYTE *)(a1 + 50);
              if ( (v6 & 0x40) == 0 )
                goto LABEL_757;
              if ( v339 )
              {
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v361) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v362) + 776) & 0x4000) != 0 )
                {
                  goto LABEL_928;
                }
              }
              else if ( !IsDPIDWMSysMet(0x2DuLL)
                     || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v364) + 776) & 0x2000) != 0
                     || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v365) + 776) & 0x4000) != 0
                     || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                       ? (v363 = 0LL)
                       : (v363 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                   + 408)
                                                       + 8LL)
                                           + 244LL) & 1),
                         !(_DWORD)v363) )
              {
LABEL_928:
                if ( IsDPIDWMSysMet(0x2DuLL)
                  && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v363) + 776) & 0x2000) != 0
                  && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                    ? (v363 = 0LL)
                    : (v363 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                + 408)
                                                    + 8LL)
                                        + 244LL) & 1),
                      (_DWORD)v363) )
                {
                  v366 = gpsi + 2836LL;
                }
                else
                {
                  v366 = gpsi + 2060LL;
                }
LABEL_944:
                v405 = (_DWORD *)v366;
                if ( v398 )
                {
                  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v363) + 776) & 0x2000) != 0
                    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v367) + 776) & 0x4000) != 0 )
                  {
                    goto LABEL_947;
                  }
                }
                else if ( !IsDPIDWMSysMet(0x1EuLL)
                       || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v369) + 776) & 0x2000) != 0
                       || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v370) + 776) & 0x4000) != 0
                       || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                         ? (v368 = 0LL)
                         : (v368 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                     + 408)
                                                         + 8LL)
                                             + 244LL) & 1),
                           !(_DWORD)v368) )
                {
LABEL_947:
                  if ( IsDPIDWMSysMet(0x1EuLL)
                    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v368) + 776) & 0x2000) != 0
                    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                      ? (v368 = 0LL)
                      : (v368 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                  + 408)
                                                      + 8LL)
                                          + 244LL) & 1),
                        (_DWORD)v368) )
                  {
                    v371 = (_DWORD *)(gpsi + 2776LL);
                  }
                  else
                  {
                    v371 = (_DWORD *)(gpsi + 2000LL);
                  }
LABEL_963:
                  if ( v339 )
                  {
                    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v368) + 776) & 0x2000) != 0
                      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v372) + 776) & 0x4000) != 0 )
                    {
                      goto LABEL_966;
                    }
                  }
                  else if ( !IsDPIDWMSysMet(0x2DuLL)
                         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v374) + 776) & 0x2000) != 0
                         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v375) + 776) & 0x4000) != 0
                         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                           ? (v373 = 0LL)
                           : (v373 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                       + 408)
                                                           + 8LL)
                                               + 244LL) & 1),
                             !(_DWORD)v373) )
                  {
LABEL_966:
                    if ( IsDPIDWMSysMet(0x2DuLL)
                      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v373) + 776) & 0x2000) != 0
                      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                        ? (v373 = 0LL)
                        : (v373 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                    + 408)
                                                        + 8LL)
                                            + 244LL) & 1),
                          (_DWORD)v373) )
                    {
                      v376 = (_DWORD *)(gpsi + 2836LL);
                    }
                    else
                    {
                      v376 = (_DWORD *)(gpsi + 2060LL);
                    }
LABEL_982:
                    if ( v398 )
                    {
                      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v373) + 776) & 0x2000) != 0
                        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v377) + 776) & 0x4000) != 0 )
                      {
                        goto LABEL_985;
                      }
                    }
                    else if ( !IsDPIDWMSysMet(0x1EuLL)
                           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v379) + 776) & 0x2000) != 0
                           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v380) + 776) & 0x4000) != 0
                           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                             ? (v378 = 0LL)
                             : (v378 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                         + 408)
                                                             + 8LL)
                                                 + 244LL) & 1),
                               !(_DWORD)v378) )
                    {
LABEL_985:
                      if ( IsDPIDWMSysMet(0x1EuLL)
                        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v378) + 776) & 0x2000) != 0
                        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                          ? (v378 = 0LL)
                          : (v378 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                      + 408)
                                                          + 8LL)
                                              + 244LL) & 1),
                            (_DWORD)v378) )
                      {
                        v381 = (_DWORD *)(gpsi + 2776LL);
                      }
                      else
                      {
                        v381 = (_DWORD *)(gpsi + 2000LL);
                      }
LABEL_1001:
                      if ( v339 )
                      {
                        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v378) + 776) & 0x2000) != 0
                          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v382) + 776) & 0x4000) != 0 )
                        {
                          goto LABEL_1004;
                        }
                      }
                      else if ( !IsDPIDWMSysMet(0x2DuLL)
                             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v384) + 776) & 0x2000) != 0
                             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v385) + 776) & 0x4000) != 0
                             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                               ? (v383 = 0LL)
                               : (v383 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                           + 408)
                                                               + 8LL)
                                                   + 244LL) & 1),
                                 !(_DWORD)v383) )
                      {
LABEL_1004:
                        if ( IsDPIDWMSysMet(0x2DuLL)
                          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v383) + 776) & 0x2000) != 0
                          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                            ? (v383 = 0LL)
                            : (v383 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                        + 408)
                                                            + 8LL)
                                                + 244LL) & 1),
                              (_DWORD)v383) )
                        {
                          v386 = (_DWORD *)(gpsi + 2836LL);
                        }
                        else
                        {
                          v386 = (_DWORD *)(gpsi + 2060LL);
                        }
LABEL_1020:
                        if ( v339 )
                        {
                          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v383) + 776) & 0x2000) != 0
                            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v387) + 776) & 0x4000) != 0 )
                          {
                            goto LABEL_1023;
                          }
                        }
                        else if ( !IsDPIDWMSysMet(0x2DuLL)
                               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v390) + 776) & 0x2000) != 0
                               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v391) + 776) & 0x4000) != 0
                               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                 ? (v392 = 0)
                                 : (v392 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                             + 408)
                                                                 + 8LL)
                                                     + 244LL) & 1),
                                   !v392) )
                        {
LABEL_1023:
                          if ( IsDPIDWMSysMet(0x2DuLL)
                            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v388) + 776) & 0x2000) != 0
                            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                              ? (v389 = 0)
                              : (v389 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                          + 408)
                                                              + 8LL)
                                                  + 244LL) & 1),
                                v389) )
                          {
                            v294 = (_DWORD *)(gpsi + 2836LL);
                          }
                          else
                          {
                            v294 = (_DWORD *)(gpsi + 2060LL);
                          }
                          goto LABEL_756;
                        }
                        v294 = (_DWORD *)(gpsi + 2448LL);
LABEL_756:
                        v293 = a2;
                        LOBYTE(v6) = NtGdiBitBltInternal(
                                       a2,
                                       v418.right - *v294,
                                       v418.top + 2,
                                       *v381 - 2 * *v386,
                                       v403[3] - 4,
                                       *(HDC *)(gpDispInfo + 32LL),
                                       *v376 + *v403 + v403[2] - *v371,
                                       *v405 + v403[1],
                                       0x80CC0020,
                                       0,
                                       0);
LABEL_757:
                        v5 = a1;
                        v132 = v395;
                        goto LABEL_1040;
                      }
                      v386 = (_DWORD *)(gpsi + 2448LL);
                      goto LABEL_1020;
                    }
                    v381 = (_DWORD *)(gpsi + 2388LL);
                    goto LABEL_1001;
                  }
                  v376 = (_DWORD *)(gpsi + 2448LL);
                  goto LABEL_982;
                }
                v371 = (_DWORD *)(gpsi + 2388LL);
                goto LABEL_963;
              }
              v366 = gpsi + 2448LL;
              goto LABEL_944;
            }
            v359 = (int *)(gpsi + 2388LL);
            goto LABEL_922;
          }
          v352 = (_DWORD *)(gpsi + 2388LL);
          goto LABEL_903;
        }
        v346 = (_DWORD *)(gpsi + 2448LL);
        goto LABEL_884;
      }
      v337 = (_DWORD *)(gpsi + 2388LL);
      goto LABEL_865;
    }
    v329 = (_DWORD *)(gpsi + 2388LL);
    goto LABEL_844;
  }
  v132 = v395;
LABEL_1039:
  v293 = a2;
LABEL_1040:
  if ( (a3 & 0xC) != 0 )
  {
    v393 = xxxDrawCaptionTemp(v5, v293, &v418, 0LL, 0LL, 0LL, a3 | (v132 >> 4) & 2 | (v406 != 0 ? 0x20 : 0)) == 0;
    LOBYTE(v6) = SetOrClrWF(v393, (_DWORD *)v5, 0x708u, 1);
  }
  return v6;
}
