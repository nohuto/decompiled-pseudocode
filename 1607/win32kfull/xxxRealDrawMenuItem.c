/*
 * XREFs of xxxRealDrawMenuItem @ 0x1C023882C
 * Callers:
 *     xxxDrawState @ 0x1C0235770 (xxxDrawState.c)
 * Callees:
 *     GreCreateDIBitmapReal @ 0x1C003B1A0 (GreCreateDIBitmapReal.c)
 *     NtGdiBitBltInternal @ 0x1C003E620 (NtGdiBitBltInternal.c)
 *     NtGdiAlphaBlend @ 0x1C00423F0 (NtGdiAlphaBlend.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     GreExtGetObjectW @ 0x1C004BBB8 (GreExtGetObjectW.c)
 *     MNGetpItemIndex @ 0x1C006B8B4 (MNGetpItemIndex.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x1C00A07A8 (GreDecBitmapExclusiveRefCnt.c)
 *     HMValidateHandleNoRip @ 0x1C00A9D84 (HMValidateHandleNoRip.c)
 *     xxxGetWindowSmIcon @ 0x1C00AB130 (xxxGetWindowSmIcon.c)
 *     _DrawIconEx @ 0x1C00B0C5C (_DrawIconEx.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C00B48AC (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z.c)
 *     ?MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C00B4BBC (-MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C00B92A4 (xxxPSMGetTextExtent.c)
 *     BitBltSysBmp @ 0x1C011D69C (BitBltSysBmp.c)
 *     FixHDCBITSBmp @ 0x1C011D850 (FixHDCBITSBmp.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?SetupFakeMDIAppStuff@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0225450 (-SetupFakeMDIAppStuff@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     BltColor @ 0x1C0235644 (BltColor.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0235F40 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     ?xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0236810 (-xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMTextOut @ 0x1C023C4C4 (xxxPSMTextOut.c)
 *     FindCharPosition @ 0x1C0245FB8 (FindCharPosition.c)
 */

__int64 __fastcall xxxRealDrawMenuItem(HDC a1, __int64 *a2, int a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r14
  LONG v7; // esi
  __int64 v9; // r8
  HDC v10; // r10
  int v11; // r15d
  __int64 v12; // rdx
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  int v15; // edi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // r8
  int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r8
  int v32; // ecx
  unsigned int *v33; // rcx
  unsigned int v34; // ebx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // r8
  int v42; // ecx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // r8
  int v52; // ecx
  _DWORD *v53; // rcx
  __int64 v54; // rcx
  unsigned int v55; // edi
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  unsigned int v60; // ebx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  bool v65; // zf
  int v66; // eax
  int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rbx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // rdx
  __int64 v79; // r8
  int v80; // ecx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rdx
  __int64 v89; // r8
  int v90; // ecx
  _DWORD *v91; // rcx
  _QWORD *v92; // rax
  __int64 v93; // rax
  int *v94; // rdi
  LONG v95; // ebx
  int v96; // r15d
  unsigned int v97; // r15d
  __int64 v98; // rdx
  unsigned __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rdx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rdx
  __int64 v110; // r8
  __int64 v111; // r9
  int v112; // ecx
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
  _DWORD *v124; // rcx
  __int64 v125; // rdx
  unsigned __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // r8
  __int64 v132; // r9
  __int64 v133; // rdx
  __int64 v134; // r8
  __int64 v135; // r9
  __int64 v136; // rdx
  __int64 v137; // r8
  __int64 v138; // r9
  int v139; // ecx
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
  _DWORD *v151; // rcx
  __int64 v152; // rdx
  unsigned __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // r9
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // r9
  __int64 v160; // rdx
  __int64 v161; // r8
  __int64 v162; // r9
  __int64 v163; // rdx
  __int64 v164; // r8
  __int64 v165; // r9
  int v166; // ecx
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
  unsigned int *v178; // rcx
  __int64 v179; // rax
  __int64 v180; // r8
  __int64 WindowSmIcon; // r15
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // rdx
  unsigned __int64 v185; // rcx
  __int64 v186; // r8
  __int64 v187; // r9
  __int64 v188; // rdx
  __int64 v189; // rcx
  __int64 v190; // r8
  __int64 v191; // r9
  __int64 v192; // rdx
  __int64 v193; // r8
  __int64 v194; // r9
  __int64 v195; // rdx
  __int64 v196; // r8
  __int64 v197; // r9
  int v198; // ecx
  __int64 v199; // rdx
  __int64 v200; // rcx
  __int64 v201; // r8
  __int64 v202; // r9
  __int64 v203; // rdx
  __int64 v204; // r8
  __int64 v205; // r9
  __int64 v206; // rdx
  __int64 v207; // r8
  __int64 v208; // r9
  int v209; // ecx
  _DWORD *v210; // rcx
  unsigned int v211; // r12d
  __int64 v212; // rdx
  unsigned __int64 v213; // rcx
  int v214; // edi
  __int64 v215; // r8
  __int64 v216; // r9
  __int64 v217; // rdx
  __int64 v218; // rcx
  __int64 v219; // r8
  __int64 v220; // r9
  __int64 v221; // rdx
  __int64 v222; // r8
  __int64 v223; // r9
  __int64 v224; // rdx
  __int64 v225; // r8
  __int64 v226; // r9
  int v227; // ecx
  __int64 v228; // rdx
  __int64 v229; // rcx
  __int64 v230; // r8
  __int64 v231; // r9
  __int64 v232; // rdx
  __int64 v233; // r8
  __int64 v234; // r9
  __int64 v235; // rdx
  __int64 v236; // r8
  __int64 v237; // r9
  int v238; // ecx
  _DWORD *v239; // rcx
  unsigned int v240; // r13d
  __int64 v241; // rdx
  unsigned __int64 v242; // rcx
  __int64 v243; // r8
  __int64 v244; // r9
  __int64 v245; // rdx
  __int64 v246; // rcx
  __int64 v247; // r8
  __int64 v248; // r9
  __int64 v249; // rdx
  __int64 v250; // rcx
  __int64 v251; // r8
  __int64 v252; // r9
  __int64 v253; // rdx
  __int64 v254; // r8
  __int64 v255; // r9
  LONG *v256; // rbx
  __int64 v257; // rdx
  __int64 v258; // rcx
  __int64 v259; // r8
  __int64 v260; // r9
  __int64 v261; // rdx
  __int64 v262; // r8
  __int64 v263; // r9
  __int64 v264; // rdx
  __int64 v265; // r8
  __int64 v266; // r9
  int v267; // ecx
  __int64 v268; // rdx
  __int64 v269; // rcx
  __int64 v270; // r8
  __int64 v271; // r9
  __int64 v272; // rdx
  __int64 v273; // r8
  __int64 v274; // r9
  __int64 v275; // rdx
  __int64 v276; // r8
  __int64 v277; // r9
  int v278; // ecx
  __int64 v279; // rcx
  _DWORD *v280; // rax
  int v281; // ebx
  int v282; // edi
  int v283; // r13d
  __int64 v284; // rdx
  unsigned __int64 v285; // rcx
  int v286; // ebx
  __int64 v287; // r8
  __int64 v288; // r9
  __int64 v289; // rdx
  __int64 v290; // r8
  __int64 v291; // r9
  __int64 v292; // rcx
  int v293; // ecx
  __int64 v294; // rdx
  __int64 v295; // rcx
  __int64 v296; // r8
  __int64 v297; // r9
  __int64 v298; // rdx
  __int64 v299; // r8
  __int64 v300; // r9
  int v301; // ecx
  int *v302; // rcx
  __int64 v303; // rcx
  __int64 v304; // r8
  __int64 v305; // r9
  __int64 v306; // r8
  __int64 v307; // r9
  __int64 v308; // r8
  __int64 v309; // r9
  int v310; // ecx
  __int64 v311; // rdx
  __int64 v312; // rcx
  __int64 v313; // r8
  __int64 v314; // r9
  __int64 v315; // rdx
  __int64 v316; // r8
  __int64 v317; // r9
  __int64 v318; // r8
  __int64 v319; // r9
  int v320; // ecx
  int ObjectW; // eax
  __int64 v322; // rdx
  __int64 v323; // r15
  __int64 v324; // r12
  XLATEOBJ *CompatibleDC; // rbx
  unsigned int v326; // edx
  __int64 v327; // rax
  int v328; // r11d
  unsigned __int8 *v329; // r9
  __int64 v330; // r10
  int v331; // r8d
  unsigned int v332; // eax
  __int64 v333; // rdx
  _DWORD *v334; // rcx
  __int64 v335; // r9
  unsigned __int16 *v336; // r12
  int v337; // r13d
  __int64 v338; // rdx
  unsigned __int64 v339; // rcx
  __int64 v340; // r8
  __int64 v341; // r9
  __int64 v342; // rcx
  __int64 v343; // r8
  __int64 v344; // r9
  __int64 v345; // r8
  __int64 v346; // r9
  __int64 v347; // r8
  __int64 v348; // r9
  int v349; // ecx
  __int64 v350; // rdx
  __int64 v351; // rcx
  __int64 v352; // r8
  __int64 v353; // r9
  __int64 v354; // rdx
  __int64 v355; // r8
  __int64 v356; // r9
  __int64 v357; // r8
  __int64 v358; // r9
  int v359; // ecx
  int v360; // r15d
  __int64 v361; // rdx
  unsigned __int64 v362; // rcx
  __int64 v363; // r8
  __int64 v364; // r9
  __int64 v365; // rdx
  __int64 v366; // rcx
  __int64 v367; // r8
  __int64 v368; // r9
  __int64 v369; // r8
  __int64 v370; // r9
  __int64 v371; // r8
  __int64 v372; // r9
  __int64 v373; // rdx
  __int64 v374; // rcx
  __int64 v375; // r8
  __int64 v376; // r9
  __int64 v377; // rdx
  __int64 v378; // r8
  __int64 v379; // r9
  __int64 v380; // r8
  __int64 v381; // r9
  _DWORD *v382; // rbx
  int v383; // edi
  __int64 v384; // rdx
  __int64 v385; // rcx
  __int64 v386; // rdx
  __int64 v387; // rcx
  int v388; // edi
  unsigned int v389; // r9d
  __int64 DPIMetrics; // rax
  __int64 CharPosition; // r15
  unsigned int v392; // r10d
  __int64 v393; // rdi
  __int64 v394; // rdx
  __int64 v395; // rcx
  __int64 v396; // r8
  __int64 v397; // r9
  __int64 v398; // rdx
  __int64 v399; // r8
  __int64 v400; // r9
  __int64 v401; // rdx
  __int64 v402; // r8
  __int64 v403; // r9
  int v404; // ecx
  __int64 v405; // rbx
  __int64 v406; // rdx
  unsigned __int64 v407; // rcx
  __int64 v408; // r8
  __int64 v409; // r9
  __int64 v410; // rdx
  __int64 v411; // rcx
  __int64 v412; // r8
  __int64 v413; // r9
  __int64 v414; // r8
  __int64 v415; // r9
  __int64 v416; // r8
  __int64 v417; // r9
  int v418; // ecx
  __int64 v419; // rdx
  __int64 v420; // rcx
  __int64 v421; // r8
  __int64 v422; // r9
  __int64 v423; // rdx
  __int64 v424; // r8
  __int64 v425; // r9
  __int64 v426; // r8
  __int64 v427; // r9
  _DWORD *v429; // rcx
  int v430; // ebx
  struct tagMENU *v431; // r10
  int v432; // ebx
  int v433; // ecx
  __int64 v434; // rax
  HDC v435; // rdi
  __int64 v436; // rdi
  __int64 v437; // rdx
  __int64 v438; // rcx
  __int64 v439; // r8
  __int64 v440; // r9
  __int64 v441; // rdx
  __int64 v442; // r8
  __int64 v443; // r9
  __int64 v444; // rdx
  int v445; // ecx
  __int64 v446; // rdx
  __int64 v447; // rcx
  int v448; // ebx
  int v449; // ebx
  int v450; // edx
  _QWORD *v451; // rdx
  __int64 v452; // rdx
  __int64 v453; // rcx
  int *v454; // rbx
  int v455; // r10d
  int v456; // ecx
  int v457; // r9d
  unsigned int v459; // [rsp+70h] [rbp-90h]
  int v460; // [rsp+74h] [rbp-8Ch]
  unsigned int v462; // [rsp+80h] [rbp-80h]
  int v463; // [rsp+80h] [rbp-80h]
  struct tagMENU *v464; // [rsp+88h] [rbp-78h]
  int v465; // [rsp+90h] [rbp-70h]
  int v466; // [rsp+90h] [rbp-70h]
  __int64 v467; // [rsp+90h] [rbp-70h]
  int v468; // [rsp+98h] [rbp-68h]
  int v469; // [rsp+9Ch] [rbp-64h]
  __int64 v470; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v471; // [rsp+A8h] [rbp-58h] BYREF
  struct tagSIZE v472; // [rsp+B0h] [rbp-50h] BYREF
  struct tagSIZE v473; // [rsp+B8h] [rbp-48h] BYREF
  struct tagSIZE v474; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v475[3]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v476[12]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int16 v477[24]; // [rsp+110h] [rbp+10h] BYREF
  int v478; // [rsp+140h] [rbp+40h]

  v6 = a2[1];
  v7 = 0;
  v9 = *a2;
  v10 = a1;
  v465 = a4;
  v11 = 0;
  v65 = (*(_DWORD *)(*a2 + 40) & 1) == 0;
  v12 = *(_DWORD *)(*a2 + 40) & 1;
  v469 = 0;
  v459 = v12;
  v468 = 0;
  v464 = (struct tagMENU *)v9;
  if ( !v65 )
  {
    v15 = IsDPIAbsoluteSysMet(0x2DuLL);
    if ( v15 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v14, v13, v16, v17) & 0xF) != 0 )
        goto LABEL_4;
    }
    else if ( !IsDPIDWMSysMet(v14)
           || (W32GetCurrentThreadDpiAwarenessContext(v25, v24, v26, v27) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29, v30) + 408)
             ? (v32 = 0)
             : (v32 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v18,
                                                            v31,
                                                            a4)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v32) )
    {
LABEL_4:
      if ( IsDPIDWMSysMet(0x2DuLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v19, v18, v20, a4) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v21, a4) + 408)
          ? (v23 = 0)
          : (v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v18,
                                                         v22,
                                                         a4)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v23) )
      {
        v33 = (unsigned int *)(gpsi + 2836LL);
      }
      else
      {
        v33 = (unsigned int *)(gpsi + 2060LL);
      }
LABEL_19:
      v9 = (__int64)v464;
      v34 = *v33;
      v460 = *v33;
      if ( *((int *)v464 + 10) < 0 )
      {
        if ( v15 )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)v33, v18, (__int64)v464, a4) & 0xF) != 0 )
            goto LABEL_22;
        }
        else if ( !IsDPIDWMSysMet(0x2DuLL)
               || (W32GetCurrentThreadDpiAwarenessContext(v44, v43, v45, v46) & 0xF) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47, v48, v49) + 408)
                 ? (v52 = 0)
                 : (v52 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v50,
                                                                v51,
                                                                a4)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                   !v52) )
        {
LABEL_22:
          if ( IsDPIDWMSysMet(0x2DuLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v36, v35, v37, a4) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v38, v39, a4) + 408)
              ? (v42 = 0)
              : (v42 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v40,
                                                             v41,
                                                             a4)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v42) )
          {
            v53 = (_DWORD *)(gpsi + 2836LL);
          }
          else
          {
            v53 = (_DWORD *)(gpsi + 2060LL);
          }
          goto LABEL_37;
        }
        v53 = (_DWORD *)(gpsi + 2448LL);
LABEL_37:
        v34 += *v53;
        v9 = (__int64)v464;
        v460 = v34;
LABEL_38:
        v10 = a1;
        v12 = v459;
        goto LABEL_39;
      }
      if ( a5 )
      {
        if ( (*(_DWORD *)(v6 + 4) & 8) != 0 )
          v65 = *(_QWORD *)(v6 + 24) == 0LL;
        else
          v65 = *(_QWORD *)(v6 + 32) == 0LL;
        LOBYTE(v11) = !v65;
      }
      else
      {
        v66 = DrawMenuItemCheckMark(a1, (struct tagITEM *)v6, v34, a4);
        v9 = (__int64)v464;
        v11 = v66;
      }
      if ( (*(_DWORD *)(v9 + 40) & 0x4000000) != 0 && *(_QWORD *)(v6 + 104) && !v11 )
        goto LABEL_38;
      if ( (*(_DWORD *)v6 & 0x2000) != 0 )
      {
        v67 = 0;
LABEL_90:
        v34 += v67;
        v460 = v34;
        goto LABEL_38;
      }
      if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)v33, v18, v9, a4) & 0xF) != 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v68, v70, v71) + 408)
          ? (v69 = 0LL)
          : (v69 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v68,
                                                         v70,
                                                         v71)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            !(_DWORD)v69 || (v69 = gpsi, *(_WORD *)(gpsi + 8678LL) == 96)) )
      {
        v72 = gpsi + 5652LL;
      }
      else
      {
        v72 = gpsi + 7140LL;
      }
      if ( v15 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v69, v68, v70, v71) & 0xF) != 0 )
          goto LABEL_74;
      }
      else if ( !IsDPIDWMSysMet(0x2DuLL)
             || (W32GetCurrentThreadDpiAwarenessContext(v82, v81, v83, v84) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v85, v86, v87) + 408)
               ? (v90 = 0)
               : (v90 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v88,
                                                              v89,
                                                              a4)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v90) )
      {
LABEL_74:
        if ( IsDPIDWMSysMet(0x2DuLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v74, v73, v75, a4) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v76, v77, a4) + 408)
            ? (v80 = 0)
            : (v80 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v78,
                                                           v79,
                                                           a4)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v80) )
        {
          v91 = (_DWORD *)(gpsi + 2836LL);
        }
        else
        {
          v91 = (_DWORD *)(gpsi + 2060LL);
        }
        goto LABEL_89;
      }
      v91 = (_DWORD *)(gpsi + 2448LL);
LABEL_89:
      v67 = *v91 + *(_DWORD *)(v72 + 1016);
      v34 = v460;
      v9 = (__int64)v464;
      goto LABEL_90;
    }
    v33 = (unsigned int *)(gpsi + 2448LL);
    goto LABEL_19;
  }
  v34 = 0;
  v460 = 0;
  if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) != 0x80020000 && (*(_DWORD *)(v6 + 4) & 0x80u) != 0 )
  {
    v469 = 1;
    v468 = 1;
  }
LABEL_39:
  v54 = *(_QWORD *)(v6 + 104);
  if ( !v54 || v11 && (*(_DWORD *)(v9 + 40) & 0x4000000) != 0 )
    goto LABEL_326;
  if ( a5 )
    goto LABEL_250;
  if ( (*(_DWORD *)(v6 + 4) & 0x20000000) == 0 )
  {
    if ( v54 == -1 )
    {
      xxxSendMenuDrawItemMessage(v10, 1u, (struct tagMENU *)v9, (struct tagITEM *)v6, 1, v34, 0LL);
      goto LABEL_326;
    }
    if ( *(_WORD *)(gptiCurrent + 552LL) <= 0x400u )
    {
      if ( *(_QWORD *)(v6 + 64) && !*(_QWORD *)(v6 + 40)
        || !(_DWORD)v12
        && (v179 = *(_QWORD *)(v9 + 80), v6 == v179)
        && *(_DWORD *)(v9 + 52) > 1u
        && !*(_QWORD *)(v179 + 256)
        && *(_QWORD *)(v6 + 16) )
      {
        while ( 1 )
        {
LABEL_170:
          if ( !*(_QWORD *)(v6 + 64) && *(_QWORD *)(v9 + 72) )
            SetupFakeMDIAppStuff((struct tagMENU *)v9, (struct tagITEM *)v6);
          LOBYTE(v12) = 1;
          v180 = HMValidateHandleNoRip(*(_QWORD *)(v6 + 64), v12, v9, a4);
          if ( v180 )
            break;
          if ( !*(_QWORD *)(v6 + 64) )
            goto LABEL_177;
          v9 = (__int64)v464;
          *(_QWORD *)(v6 + 64) = 0LL;
        }
        v475[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v475;
        v475[1] = v180;
        ++*(_DWORD *)(v180 + 8);
        WindowSmIcon = xxxGetWindowSmIcon((struct tagWND *)v180, 0);
        ThreadUnlock1(v183, v182);
        if ( WindowSmIcon )
          goto LABEL_178;
LABEL_177:
        WindowSmIcon = qword_1C0321A08;
LABEL_178:
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x2EuLL) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v185, v184, v186, v187) & 0xF) != 0 )
            goto LABEL_180;
        }
        else if ( !IsDPIDWMSysMet(v185)
               || (W32GetCurrentThreadDpiAwarenessContext(v200, v199, v201, v202) & 0xF) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v203, v204, v205) + 408)
                 ? (v209 = 0)
                 : (v209 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                 (__int64)KeGetCurrentThread(),
                                                                 v206,
                                                                 v207,
                                                                 v208)
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                   !v209) )
        {
LABEL_180:
          if ( IsDPIDWMSysMet(0x2EuLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v189, v188, v190, v191) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v192, v193, v194) + 408)
              ? (v198 = 0)
              : (v198 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v195,
                                                              v196,
                                                              v197)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                v198) )
          {
            v210 = (_DWORD *)(gpsi + 2840LL);
          }
          else
          {
            v210 = (_DWORD *)(gpsi + 2064LL);
          }
LABEL_195:
          v211 = v465 - *v210;
          v214 = IsDPIAbsoluteSysMet(0x2DuLL);
          if ( v214 )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v213, v212, v215, v216) & 0xF) != 0 )
              goto LABEL_197;
          }
          else if ( !IsDPIDWMSysMet(v213)
                 || (W32GetCurrentThreadDpiAwarenessContext(v229, v228, v230, v231) & 0xF) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v232, v233, v234) + 408)
                   ? (v238 = 0)
                   : (v238 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                   (__int64)KeGetCurrentThread(),
                                                                   v235,
                                                                   v236,
                                                                   v237)
                                                               + 408)
                                                   + 8LL)
                                       + 244LL) & 1),
                     !v238) )
          {
LABEL_197:
            if ( IsDPIDWMSysMet(0x2DuLL)
              && (W32GetCurrentThreadDpiAwarenessContext(v218, v217, v219, v220) & 0xF) == 1
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v221, v222, v223) + 408)
                ? (v227 = 0)
                : (v227 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v224,
                                                                v225,
                                                                v226)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  v227) )
            {
              v239 = (_DWORD *)(gpsi + 2836LL);
            }
            else
            {
              v239 = (_DWORD *)(gpsi + 2060LL);
            }
LABEL_212:
            v240 = a3 - 2 * *v239;
            if ( v459 && v211 < v240 )
              v240 = v211;
            if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext(v242, v241, v243, v244) & 0xF) != 0 )
                goto LABEL_217;
            }
            else if ( !IsDPIDWMSysMet(v242)
                   || (W32GetCurrentThreadDpiAwarenessContext(v250, v249, v251, v252) & 0xF) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v253, v254, v255) + 408)
                     ? (v246 = 0LL)
                     : (v246 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                     (__int64)KeGetCurrentThread(),
                                                                     v245,
                                                                     v247,
                                                                     v248)
                                                                 + 408)
                                                     + 8LL)
                                         + 244LL) & 1),
                       !(_DWORD)v246) )
            {
LABEL_217:
              if ( IsDPIDWMSysMet(6uLL)
                && (W32GetCurrentThreadDpiAwarenessContext(v246, v245, v247, v248) & 0xF) == 1
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v245, v247, v248) + 408)
                  ? (v246 = 0LL)
                  : (v246 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                  (__int64)KeGetCurrentThread(),
                                                                  v245,
                                                                  v247,
                                                                  v248)
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                    (_DWORD)v246) )
              {
                v256 = (LONG *)(gpsi + 2680LL);
              }
              else
              {
                v256 = (LONG *)(gpsi + 1904LL);
              }
LABEL_232:
              if ( v214 )
              {
                if ( (W32GetCurrentThreadDpiAwarenessContext(v246, v245, v247, v248) & 0xF) != 0 )
                  goto LABEL_234;
              }
              else if ( !IsDPIDWMSysMet(0x2DuLL)
                     || (W32GetCurrentThreadDpiAwarenessContext(v269, v268, v270, v271) & 0xF) != 0
                     || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v272, v273, v274) + 408)
                       ? (v278 = 0)
                       : (v278 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                       (__int64)KeGetCurrentThread(),
                                                                       v275,
                                                                       v276,
                                                                       v277)
                                                                   + 408)
                                                       + 8LL)
                                           + 244LL) & 1),
                         !v278) )
              {
LABEL_234:
                if ( IsDPIDWMSysMet(0x2DuLL)
                  && (W32GetCurrentThreadDpiAwarenessContext(v258, v257, v259, v260) & 0xF) == 1
                  && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v261, v262, v263) + 408)
                    ? (v267 = 0)
                    : (v267 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                    (__int64)KeGetCurrentThread(),
                                                                    v264,
                                                                    v265,
                                                                    v266)
                                                                + 408)
                                                    + 8LL)
                                        + 244LL) & 1),
                      v267) )
                {
                  v279 = gpsi;
                  v280 = (_DWORD *)(gpsi + 2836LL);
                }
                else
                {
                  v279 = gpsi;
                  v280 = (_DWORD *)(gpsi + 2060LL);
                }
                goto LABEL_249;
              }
              v279 = gpsi;
              v280 = (_DWORD *)(gpsi + 2448LL);
LABEL_249:
              DrawIconEx(a1, v460 + 2 * *v280, *v256, WindowSmIcon, v240, v211, 0, *(_QWORD *)(v279 + 5120), 19);
              goto LABEL_326;
            }
            v256 = (LONG *)(gpsi + 2292LL);
            goto LABEL_232;
          }
          v239 = (_DWORD *)(gpsi + 2448LL);
          goto LABEL_212;
        }
        v210 = (_DWORD *)(gpsi + 2452LL);
        goto LABEL_195;
      }
    }
LABEL_250:
    v281 = *(_DWORD *)(v6 + 112);
    v462 = v281;
    if ( (_DWORD)v12 )
    {
      v282 = *(_DWORD *)(v6 + 116);
      v96 = v460;
      if ( *(_DWORD *)(v6 + 84) - v282 <= 0 )
        v283 = 0;
      else
        v283 = (*(_DWORD *)(v6 + 84) - v282) / 2;
      goto LABEL_294;
    }
    v286 = IsDPIAbsoluteSysMet(0x37uLL);
    if ( v286 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v285, v284, v287, v288) & 0xF) != 0 )
        goto LABEL_256;
    }
    else if ( !IsDPIDWMSysMet(v285)
           || (W32GetCurrentThreadDpiAwarenessContext(v295, v294, v296, v297) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v298, v299, v300) + 408)
             ? (v301 = 0)
             : (v301 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v289,
                                                             v290,
                                                             v291)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
               !v301) )
    {
LABEL_256:
      if ( IsDPIDWMSysMet(0x37uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v292, v289, v290, v291) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v289, v290, v291) + 408)
          ? (v293 = 0)
          : (v293 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v289,
                                                          v290,
                                                          v291)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v293) )
      {
        v302 = (int *)(gpsi + 2876LL);
      }
      else
      {
        v302 = (int *)(gpsi + 2100LL);
      }
LABEL_271:
      v282 = *(_DWORD *)(v6 + 116);
      if ( v282 > *v302 )
      {
LABEL_290:
        v283 = 0;
        if ( *(_QWORD *)(v6 + 40) )
        {
          v96 = *(_DWORD *)(GetDPIMetrics(v302, v289) + 48) + v460;
          v460 = v96;
        }
        else
        {
          v96 = v460;
        }
        v281 = v462;
LABEL_294:
        v470 = GreSelectBitmap(ghdcMem2, *(_QWORD *)(v6 + 104));
        if ( !v470 )
          goto LABEL_327;
        ObjectW = GreExtGetObjectW(*(struct HLFONT__ **)(v6 + 104), 104, v477);
        if ( !a5 || *(_DWORD *)v6 == 4 )
        {
          if ( ObjectW != 104 || v477[23] != 32 || v478 || *(_DWORD *)v6 == 4 )
          {
            if ( v477[8] * v477[9] == 1 )
              v332 = 12060490;
            else
              v332 = (unsigned int)MNDrawHilite(v464, (struct tagITEM *)v6) != 0 ? 3342344 : 13369376;
            NtGdiBitBltInternal(a1, v96 + v469, v283 + v468, v281, v282, ghdcMem2, 0, 0, v332, 0xFFFFFF, 0);
          }
          goto LABEL_325;
        }
        v323 = 0LL;
        v466 = 33488896;
        v324 = 0LL;
        if ( a6 )
        {
          v471 = 0LL;
          CompatibleDC = (XLATEOBJ *)GreCreateCompatibleDC(a1, v322);
          if ( !CompatibleDC )
          {
LABEL_310:
            if ( a6 )
            {
              if ( v324 != -1 )
                GreSelectBitmap(CompatibleDC, v324);
              if ( v323 )
              {
                GreDecBitmapExclusiveRefCnt(v323, v322);
                GreDeleteObject(v323);
              }
              if ( CompatibleDC )
                GreDeleteDC(CompatibleDC);
            }
LABEL_325:
            GreSelectBitmap(ghdcMem2, v470);
            goto LABEL_326;
          }
          memset(v476, 0, 0x2CuLL);
          v476[1] = v462;
          v476[0] = 40;
          v476[2] = v282;
          *(_QWORD *)&v476[3] = 2097153LL;
          v327 = GreCreateDIBitmapReal((HDC)CompatibleDC, v326, 0LL, v476, 0, 0x2Cu, 0, 0LL, 0, 0LL, 0, 0LL, &v471);
          v323 = v327;
          if ( v327 )
          {
            v324 = GreSelectBitmap(CompatibleDC, v327);
            if ( v324 != -1 )
            {
              NtGdiAlphaBlend((POINTL)CompatibleDC, 0, 0, v462, v282, ghdcMem2, 0, 0, v462, v282, 33488896);
              v328 = v462;
              if ( (int)(v462 * v282) > 0 )
              {
                v329 = (unsigned __int8 *)v471;
                v330 = v462 * v282;
                do
                {
                  v322 = 29 * v329[2] + 150 * (unsigned int)v329[1];
                  v331 = (int)(v322 + 77 * *v329 + 129) >> 8;
                  *(_DWORD *)v329 = v331 | ((v331 | ((v331 | (v329[3] << 8)) << 8)) << 8);
                  v329 += 4;
                  --v330;
                }
                while ( v330 );
                v328 = v462;
              }
              BYTE2(v466) = 102;
              goto LABEL_308;
            }
          }
        }
        else
        {
          CompatibleDC = (XLATEOBJ *)ghdcMem2;
        }
        v328 = v462;
LABEL_308:
        if ( CompatibleDC )
          NtGdiAlphaBlend((POINTL)a1, v469 + v460, v283 + v468, v328, v282, CompatibleDC, 0, 0, v328, v282, v466);
        goto LABEL_310;
      }
      if ( v286 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)v302, v289, v290, v291) & 0xF) != 0 )
          goto LABEL_274;
      }
      else if ( !IsDPIDWMSysMet(0x37uLL)
             || (W32GetCurrentThreadDpiAwarenessContext(v312, v311, v313, v314) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v315, v316, v317) + 408)
               ? (v320 = 0)
               : (v320 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v289,
                                                               v318,
                                                               v319)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                 !v320) )
      {
LABEL_274:
        if ( IsDPIDWMSysMet(0x37uLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v303, v289, v304, v305) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v289, v306, v307) + 408)
            ? (v310 = 0)
            : (v310 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v289,
                                                            v308,
                                                            v309)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
              v310) )
        {
          v302 = (int *)(gpsi + 2876LL);
        }
        else
        {
          v302 = (int *)(gpsi + 2100LL);
        }
        goto LABEL_289;
      }
      v302 = (int *)(gpsi + 2488LL);
LABEL_289:
      v282 = *v302;
      goto LABEL_290;
    }
    v302 = (int *)(gpsi + 2488LL);
    goto LABEL_271;
  }
  if ( v54 == 1 )
    goto LABEL_170;
  v55 = v34;
  v56 = v54 - 2;
  if ( !v56 )
  {
    v97 = 26;
LABEL_140:
    if ( (*(_DWORD *)(v6 + 4) & 0x80u) != 0 )
      ++v97;
LABEL_142:
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2EuLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v153, v152, v154, v155) & 0xF) != 0 )
        goto LABEL_144;
    }
    else if ( !IsDPIDWMSysMet(v153)
           || (W32GetCurrentThreadDpiAwarenessContext(v168, v167, v169, v170) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v171, v172, v173) + 408)
             ? (v177 = 0)
             : (v177 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v174,
                                                             v175,
                                                             v176)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
               !v177) )
    {
LABEL_144:
      if ( IsDPIDWMSysMet(0x2EuLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v157, v156, v158, v159) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v160, v161, v162) + 408)
          ? (v166 = 0)
          : (v166 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v163,
                                                          v164,
                                                          v165)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v166) )
      {
        v178 = (unsigned int *)(gpsi + 2840LL);
      }
      else
      {
        v178 = (unsigned int *)(gpsi + 2064LL);
      }
      goto LABEL_159;
    }
    v178 = (unsigned int *)(gpsi + 2452LL);
LABEL_159:
    BitBltSysBmp(a1, v55, *v178, v97);
LABEL_326:
    v96 = v460;
    goto LABEL_327;
  }
  v57 = v56 - 1;
  if ( !v57 )
  {
    v97 = 22;
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v126, v125, v127, v128) & 0xF) != 0 )
        goto LABEL_123;
    }
    else if ( !IsDPIDWMSysMet(v126)
           || (W32GetCurrentThreadDpiAwarenessContext(v141, v140, v142, v143) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v144, v145, v146) + 408)
             ? (v150 = 0)
             : (v150 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v147,
                                                             v148,
                                                             v149)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
               !v150) )
    {
LABEL_123:
      if ( IsDPIDWMSysMet(0x2DuLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v130, v129, v131, v132) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v133, v134, v135) + 408)
          ? (v139 = 0)
          : (v139 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v136,
                                                          v137,
                                                          v138)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v139) )
      {
        v151 = (_DWORD *)(gpsi + 2836LL);
      }
      else
      {
        v151 = (_DWORD *)(gpsi + 2060LL);
      }
      goto LABEL_138;
    }
    v151 = (_DWORD *)(gpsi + 2448LL);
LABEL_138:
    v55 = v34 + *v151;
    goto LABEL_140;
  }
  v58 = v57 - 2;
  if ( !v58 )
  {
    v97 = 18;
    goto LABEL_140;
  }
  v59 = v58 - 1;
  if ( !v59 )
  {
    v97 = 21;
    goto LABEL_142;
  }
  if ( v59 == 1 )
  {
    v97 = 25;
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v99, v98, v100, v101) & 0xF) != 0 )
        goto LABEL_103;
    }
    else if ( !IsDPIDWMSysMet(v99)
           || (W32GetCurrentThreadDpiAwarenessContext(v114, v113, v115, v116) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v117, v118, v119) + 408)
             ? (v123 = 0)
             : (v123 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v120,
                                                             v121,
                                                             v122)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
               !v123) )
    {
LABEL_103:
      if ( IsDPIDWMSysMet(0x2DuLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v103, v102, v104, v105) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v106, v107, v108) + 408)
          ? (v112 = 0)
          : (v112 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v109,
                                                          v110,
                                                          v111)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v112) )
      {
        v124 = (_DWORD *)(gpsi + 2836LL);
      }
      else
      {
        v124 = (_DWORD *)(gpsi + 2060LL);
      }
      goto LABEL_118;
    }
    v124 = (_DWORD *)(gpsi + 2448LL);
LABEL_118:
    v55 = v34 + *v124;
    goto LABEL_142;
  }
  v60 = *(_DWORD *)(v6 + 104) + 79;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v59, v12, v9, a4) & 0xF) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v61, v63, v64) + 408)
      ? (v62 = 0LL)
      : (v62 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v61, v63, v64)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        !(_DWORD)v62) )
  {
    v92 = (_QWORD *)gpsi;
    goto LABEL_99;
  }
  v92 = (_QWORD *)gpsi;
  v62 = gpsi;
  if ( *(_WORD *)(gpsi + 8678LL) == 96 )
  {
LABEL_99:
    v93 = *v92 + 5652LL;
    goto LABEL_100;
  }
  v93 = gpsi + 7140LL;
LABEL_100:
  v94 = (int *)(v93 + 16LL * v60);
  v95 = (unsigned int)(*(_DWORD *)(v6 + 84) - v94[3]) >> 1;
  FixHDCBITSBmp(v62, v61, v63, v64);
  v96 = v460;
  BltColor(a1, 0LL, *(HDC *)(gpDispInfo + 32LL), v460, v95, v94[2], v94[3], *v94, v94[1], 1);
LABEL_327:
  if ( (unsigned int)MNGetpItemIndex((__int64)v464, v6) == -1 )
    goto LABEL_422;
  if ( a5 )
    goto LABEL_422;
  v336 = *(unsigned __int16 **)(v6 + 40);
  if ( !v336 )
    goto LABEL_422;
  v337 = *(_DWORD *)(v6 + 48);
  if ( !v337 )
    goto LABEL_422;
  v467 = *(_QWORD *)(v6 + 56);
  if ( v459 && *(_DWORD *)(v335 + 64) )
  {
    v460 = *(_DWORD *)(v335 + 64);
    goto LABEL_353;
  }
  if ( *(_QWORD *)(v6 + 104) )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v339, v338, v340, v341) & 0xF) != 0 )
        goto LABEL_337;
    }
    else if ( !IsDPIDWMSysMet(v339)
           || (W32GetCurrentThreadDpiAwarenessContext(v351, v350, v352, v353) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v354, v355, v356) + 408)
             ? (v359 = 0)
             : (v359 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v333,
                                                             v357,
                                                             v358)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
               !v359) )
    {
LABEL_337:
      if ( IsDPIDWMSysMet(0x2DuLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v342, v333, v343, v344) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v333, v345, v346) + 408)
          ? (v349 = 0)
          : (v349 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v333,
                                                          v347,
                                                          v348)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v349) )
      {
        v334 = (_DWORD *)(gpsi + 2836LL);
      }
      else
      {
        v334 = (_DWORD *)(gpsi + 2060LL);
      }
      goto LABEL_352;
    }
    v334 = (_DWORD *)(gpsi + 2448LL);
LABEL_352:
    v460 = *v334 + *(_DWORD *)(v6 + 112) + v96;
  }
LABEL_353:
  v360 = *(_DWORD *)(GetDPIMetrics(v334, v333) + 60);
  v463 = v360;
  if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v362, v361, v363, v364) & 0xF) != 0 )
      goto LABEL_355;
LABEL_365:
    v382 = (_DWORD *)(gpsi + 2292LL);
    goto LABEL_370;
  }
  if ( IsDPIDWMSysMet(v362) && (W32GetCurrentThreadDpiAwarenessContext(v374, v373, v375, v376) & 0xF) == 0 )
  {
    v366 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v377, v378, v379) + 408)
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v365, v380, v381)
                                             + 408)
                                 + 8LL)
                     + 244LL) & 1;
    if ( (_DWORD)v366 )
      goto LABEL_365;
  }
LABEL_355:
  if ( IsDPIDWMSysMet(6uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v366, v365, v367, v368) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v365, v369, v370) + 408)
      ? (v366 = 0LL)
      : (v366 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v365,
                                                      v371,
                                                      v372)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
        (_DWORD)v366) )
  {
    v382 = (_DWORD *)(gpsi + 2680LL);
  }
  else
  {
    v382 = (_DWORD *)(gpsi + 1904LL);
  }
LABEL_370:
  v383 = *(_DWORD *)(v6 + 84) - *(_DWORD *)(GetDPIMetrics(v366, v365) + 60);
  v388 = v383 - *(_DWORD *)(GetDPIMetrics(v385, v384) + 52) - *v382;
  if ( v388 > 0 )
  {
    v386 = (unsigned int)(v388 >> 31);
    v463 = v388 / 2 + v360;
  }
  v389 = v459;
  if ( !v459 && !*(_QWORD *)(v6 + 104) )
  {
    DPIMetrics = GetDPIMetrics(v387, v386);
    v389 = 0;
    v460 += *(_DWORD *)(DPIMetrics + 48);
  }
  if ( *v336 == 8 && !v389 )
  {
    ++v336;
    if ( !--v337 )
    {
      v435 = a1;
      goto LABEL_423;
    }
  }
  CharPosition = (unsigned int)FindCharPosition(v336, 9LL);
  v393 = (unsigned int)FindCharPosition(v336, v392);
  if ( (W32GetCurrentThreadDpiAwarenessContext(v395, v394, v396, v397) & 0xF) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v398, v399, v400) + 408)
      ? (v404 = 0)
      : (v404 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v401,
                                                      v402,
                                                      v403)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
        !v404 || *(_WORD *)(gpsi + 8678LL) == 96) )
  {
    v405 = gpsi + 5652LL;
  }
  else
  {
    v405 = gpsi + 7140LL;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v407, v406, v408, v409) & 0xF) != 0 )
      goto LABEL_388;
LABEL_398:
    v429 = (_DWORD *)(gpsi + 2448LL);
    goto LABEL_403;
  }
  if ( IsDPIDWMSysMet(v407)
    && (W32GetCurrentThreadDpiAwarenessContext(v420, v419, v421, v422) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v423, v424, v425) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v410, v426, v427) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_398;
  }
LABEL_388:
  if ( IsDPIDWMSysMet(0x2DuLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v411, v410, v412, v413) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v410, v414, v415) + 408)
      ? (v418 = 0)
      : (v418 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v410,
                                                      v416,
                                                      v417)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
        v418) )
  {
    v429 = (_DWORD *)(gpsi + 2836LL);
  }
  else
  {
    v429 = (_DWORD *)(gpsi + 2060LL);
  }
LABEL_403:
  v430 = *(_DWORD *)(v6 + 80) - *(_DWORD *)(v405 + 1016) - *v429;
  if ( !(_DWORD)v393 || (_DWORD)v393 == v337 )
  {
    if ( (_DWORD)CharPosition && (_DWORD)v393 == v337 )
    {
      if ( (*(_DWORD *)v6 & 0x2000) != 0 )
      {
        v435 = a1;
        v474 = 0LL;
        xxxPSMGetTextExtent(a1, v336, (unsigned int)CharPosition, &v474);
        if ( (unsigned int)MNGetpItemIndex((__int64)v464, v6) == -1 )
          goto LABEL_423;
        v436 = v467;
        if ( v467 != *(_QWORD *)(v6 + 56) )
          goto LABEL_422;
        v448 = v430 - v474.cx;
        v460 = v448;
        if ( !v459 && !*(_QWORD *)(v6 + 104) )
          v460 = *(_DWORD *)(GetDPIMetrics(v447, v446) + 48) + v448;
      }
      else
      {
        v436 = v467;
      }
      v449 = v463;
      xxxDrawMenuItemText(
        v464,
        (struct tagITEM *)v6,
        a1,
        (unsigned int)(v469 + v460),
        v463 + v468,
        v336,
        CharPosition,
        *((_DWORD *)v464 + 10) & 4);
      if ( (unsigned int)MNGetpItemIndex((__int64)v464, v6) == -1 || v436 != *(_QWORD *)(v6 + 56) )
        goto LABEL_422;
      goto LABEL_444;
    }
    goto LABEL_442;
  }
  if ( (*(_DWORD *)v6 & 0x2000) != 0 && v459 )
  {
    v472 = 0LL;
    xxxPSMGetTextExtent(a1, v336, (unsigned int)v393, &v472);
    if ( (unsigned int)MNGetpItemIndex((__int64)v464, v6) == -1 || v467 != *(_QWORD *)(v6 + 56) )
      goto LABEL_422;
    v460 = v430 - v472.cx;
  }
  else
  {
    v431 = v464;
  }
  xxxDrawMenuItemText(
    v431,
    (struct tagITEM *)v6,
    a1,
    (unsigned int)(v469 + v460),
    v468 + v463,
    v336,
    v393,
    *((_DWORD *)v431 + 10) & 4);
  if ( (unsigned int)MNGetpItemIndex((__int64)v464, v6) == -1 || v467 != *(_QWORD *)(v6 + 56) )
    goto LABEL_422;
  if ( (unsigned int)CharPosition <= (int)v393 + 1 )
  {
LABEL_442:
    v436 = v467;
LABEL_443:
    v449 = v463;
LABEL_444:
    if ( (unsigned int)CharPosition < v337 - 1 )
    {
      if ( (*(_DWORD *)v6 & 0x2000) != 0 && v459 )
      {
        v470 = 0LL;
        xxxPSMGetTextExtent(
          a1,
          &v336[CharPosition + 1],
          (unsigned int)(v337 - CharPosition - 1),
          (struct tagSIZE *)&v470);
        if ( (unsigned int)MNGetpItemIndex((__int64)v464, v6) == -1 || v436 != *(_QWORD *)(v6 + 56) )
          goto LABEL_422;
        v450 = *(_DWORD *)(v6 + 80) - *(_DWORD *)(v6 + 88) - v470;
      }
      else
      {
        v450 = *(_DWORD *)(v6 + 88) + *(_DWORD *)(GetDPIMetrics(v429, v410) + 48);
      }
      v435 = a1;
      xxxPSMTextOut(
        a1,
        v450,
        v449,
        &v336[CharPosition + 1],
        v337 - CharPosition - 1,
        (~*((_BYTE *)v464 + 40) & 4) << 18);
      goto LABEL_423;
    }
LABEL_422:
    v435 = a1;
    goto LABEL_423;
  }
  v65 = (*(_DWORD *)v6 & 0x2000) == 0;
  v473 = 0LL;
  if ( v65 || !v459 )
  {
    xxxPSMGetTextExtent(a1, &v336[v393 + 1], (unsigned int)(CharPosition - v393 - 1), &v473);
    if ( (unsigned int)MNGetpItemIndex((__int64)v464, v6) == -1 || v467 != *(_QWORD *)(v6 + 56) )
    {
      v435 = a1;
      goto LABEL_423;
    }
    v432 = *(_DWORD *)(v6 + 88) - v473.cx;
  }
  else
  {
    v432 = v430 - *(_DWORD *)(v6 + 88);
  }
  v433 = CharPosition - v393 - 1;
  v434 = v393 + 1;
  v435 = a1;
  xxxPSMTextOut(a1, v432, v463, &v336[v434], v433, (~*((_BYTE *)v464 + 40) & 4) << 18);
  if ( (unsigned int)MNGetpItemIndex((__int64)v464, v6) != -1 )
  {
    v436 = v467;
    if ( v467 != *(_QWORD *)(v6 + 56) )
      goto LABEL_422;
    goto LABEL_443;
  }
LABEL_423:
  if ( (unsigned int)MNGetpItemIndex((__int64)v464, v6) == -1 || a5 || !(_DWORD)v440 || !*(_QWORD *)(v6 + 16) )
    return 1LL;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v438, v437, v439, v440) & 0xF) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v441, v442, v443) + 408)
      ? (v445 = 0)
      : (v445 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v444,
                                                      v442,
                                                      v443)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
        !v445) )
  {
    v451 = (_QWORD *)gpsi;
    goto LABEL_459;
  }
  v451 = (_QWORD *)gpsi;
  if ( *(_WORD *)(gpsi + 8678LL) == 96 )
  {
LABEL_459:
    v452 = *v451 + 5652LL;
    goto LABEL_460;
  }
  v452 = gpsi + 7140LL;
LABEL_460:
  v453 = (*(_DWORD *)v6 & 0x2000) != 0 ? 92 : 62;
  v454 = (int *)(v452 + 16LL * (int)v453);
  FixHDCBITSBmp(v453, v452, v442, v443);
  v455 = v454[3];
  v456 = v454[2];
  if ( (*(_DWORD *)(v6 + 84) - v455 - 2) / 2 > 0 )
    v7 = (*(_DWORD *)(v6 + 84) - v455 - 2) / 2;
  if ( (*(_DWORD *)v6 & 0x2000) != 0 )
    v457 = v454[2];
  else
    v457 = *(_DWORD *)(v6 + 80) - v456;
  BltColor(v435, 0LL, *(HDC *)(gpDispInfo + 32LL), v457, v7, v456, v455, *v454, v454[1], 1);
  return 1LL;
}
