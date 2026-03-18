/*
 * XREFs of PropertyEval @ 0x14043F594
 * Callers:
 *     FilterEvalStrict @ 0x14043F314 (FilterEvalStrict.c)
 *     FilterEvalImpliedAnd @ 0x1404405B4 (FilterEvalImpliedAnd.c)
 * Callees:
 *     _wcsicmp @ 0x1401723FC (_wcsicmp.c)
 *     memcmp @ 0x140172AE0 (memcmp.c)
 *     ArrayContains @ 0x14026FD48 (ArrayContains.c)
 *     StringListContains @ 0x1405463B8 (StringListContains.c)
 *     CompareFileTimeType @ 0x14071D764 (CompareFileTimeType.c)
 *     StringListElementSubstringMatch @ 0x14071E4B4 (StringListElementSubstringMatch.c)
 *     SubstringMatch @ 0x14071E5A8 (SubstringMatch.c)
 */

__int64 __fastcall PropertyEval(
        unsigned int a1,
        wchar_t *a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        wchar_t *Str2,
        unsigned int a7,
        int *a8)
{
  int v8; // ebx
  size_t v9; // r11
  int v11; // r15d
  unsigned int v12; // r9d
  unsigned int v13; // esi
  int v14; // r8d
  int v15; // r14d
  bool v17; // zf
  int v18; // eax
  bool v19; // zf
  int v20; // edx
  unsigned int v21; // ecx
  unsigned int v22; // r9d
  unsigned int v23; // r9d
  unsigned int v24; // r9d
  bool v25; // cf
  int v26; // eax
  bool v27; // zf
  int v28; // ecx
  unsigned int v29; // r9d
  unsigned int v30; // r9d
  unsigned int v31; // r9d
  unsigned int v32; // r9d
  bool v33; // zf
  bool v34; // sf
  bool v35; // of
  bool v36; // sf
  bool v37; // of
  bool v38; // sf
  bool v39; // of
  bool v40; // zf
  bool v41; // sf
  bool v42; // of
  unsigned int v43; // r9d
  unsigned int v44; // r9d
  unsigned int v45; // r9d
  unsigned int v46; // r9d
  int v47; // ecx
  bool v48; // zf
  bool v49; // sf
  bool v50; // of
  __int64 v51; // rcx
  int v52; // ecx
  bool v53; // sf
  bool v54; // of
  __int64 v55; // rcx
  int v56; // ecx
  bool v57; // sf
  bool v58; // of
  __int64 v59; // rcx
  int v60; // ecx
  bool v61; // zf
  bool v62; // sf
  bool v63; // of
  __int64 v64; // rcx
  int v65; // ecx
  unsigned int v66; // r9d
  unsigned int v67; // r9d
  unsigned int v68; // r9d
  unsigned int v69; // r9d
  unsigned int v70; // r9d
  unsigned int v71; // r9d
  unsigned int v72; // r9d
  unsigned int v73; // r9d
  unsigned int v74; // r9d
  unsigned int v75; // r9d
  unsigned int v76; // r9d
  unsigned int v77; // r9d
  bool v78; // zf
  __int64 v79; // rcx
  unsigned int v80; // r9d
  unsigned int v81; // r9d
  unsigned int v82; // r9d
  unsigned int v83; // r9d
  __m128i v84; // xmm1
  unsigned int v85; // r9d
  unsigned int v86; // r9d
  unsigned int v87; // r9d
  unsigned int v88; // r9d
  __int64 v89; // rcx
  __int64 v90; // rcx
  __int64 v91; // rcx
  __int64 v92; // rcx
  unsigned int v93; // eax
  double v94; // xmm1_8
  bool v95; // cf
  __m128i v96; // xmm0
  unsigned int v97; // eax
  double v98; // xmm0_8
  __m128i v99; // xmm0
  float v100; // xmm0_4
  __m128i v101; // xmm1
  unsigned int v102; // eax
  double v103; // xmm1_8
  bool v104; // cf
  bool v105; // zf
  __m128i v106; // xmm0
  unsigned int v107; // eax
  double v108; // xmm0_8
  __m128i v109; // xmm0
  unsigned int v110; // eax
  double v111; // xmm0_8
  float v112; // xmm1_4
  unsigned int v113; // r9d
  unsigned int v114; // r9d
  unsigned int v115; // r9d
  unsigned int v116; // r9d
  __m128i v117; // xmm1
  unsigned int v118; // eax
  float v119; // xmm1_4
  __m128i v120; // xmm1
  unsigned int v121; // eax
  float v122; // xmm1_4
  __m128i v123; // xmm0
  unsigned int v124; // eax
  float v125; // xmm0_4
  __m128i v126; // xmm0
  unsigned int v127; // eax
  float v128; // xmm0_4
  unsigned int v129; // r9d
  unsigned int v130; // r9d
  unsigned int v131; // r9d
  unsigned int v132; // r9d
  unsigned __int64 v133; // rcx
  bool v134; // cf
  bool v135; // zf
  unsigned __int64 v136; // rcx
  bool v137; // cf
  unsigned __int64 v138; // rcx
  unsigned __int64 v139; // rcx
  bool v140; // cf
  bool v141; // zf
  __int64 v142; // rcx
  unsigned int v143; // r9d
  unsigned int v144; // r9d
  unsigned int v145; // r9d
  unsigned int v146; // r9d
  unsigned int v147; // ecx
  unsigned int v148; // ecx
  unsigned int v149; // ecx
  unsigned int v150; // ecx
  int v151; // ecx
  unsigned int v152; // r9d
  unsigned int v153; // r9d
  unsigned int v154; // r9d
  unsigned int v155; // r9d
  int v156; // ecx
  int v157; // ecx
  int v158; // ecx
  int v159; // ecx
  unsigned int v160; // r9d
  unsigned int v161; // r9d
  unsigned int v162; // r9d
  unsigned int v163; // r9d
  unsigned int v164; // r9d
  unsigned int v165; // r9d
  unsigned int v166; // r9d
  unsigned int v167; // r9d
  int v168; // edx
  int v169; // ecx
  int v170; // edx
  int v171; // ecx
  int v172; // edx
  int v173; // ecx
  int v174; // edx
  int v175; // ecx
  int v176; // edx
  int v177; // ecx
  unsigned int v178; // r9d
  unsigned int v179; // r9d
  unsigned int v180; // r9d
  unsigned int v181; // r9d
  wchar_t v182; // cx
  bool v183; // cf
  bool v184; // zf
  unsigned __int64 v185; // rcx
  bool v186; // cf
  unsigned __int64 v187; // rcx
  bool v188; // cf
  unsigned __int64 v189; // rcx
  wchar_t v190; // cx
  bool v191; // cf
  bool v192; // zf
  unsigned __int64 v193; // rcx
  wchar_t v194; // cx
  unsigned int v195; // r9d
  unsigned int v196; // r9d
  unsigned int v197; // r9d
  unsigned int v198; // r9d
  unsigned int v199; // r9d
  unsigned int v200; // r9d
  unsigned int v201; // r9d
  unsigned int v202; // r9d
  unsigned int v203; // r9d
  unsigned int v204; // r9d
  unsigned int v205; // r9d
  unsigned int v206; // r9d
  unsigned int v207; // r9d
  unsigned int v208; // r9d
  unsigned int v209; // r9d
  unsigned int v210; // r9d
  unsigned int v211; // eax
  unsigned int v212; // r9d
  unsigned int v213; // r9d
  unsigned int v214; // r9d
  unsigned int v215; // r9d
  unsigned int v216; // r9d
  unsigned int v217; // r9d
  unsigned int v218; // r9d
  unsigned int v219; // r9d
  unsigned int v220; // r9d
  unsigned int v221; // r9d
  unsigned int v222; // r9d
  unsigned int v223; // r9d
  unsigned int v224; // r9d
  unsigned int v225; // r9d
  unsigned int v226; // r9d
  unsigned int v227; // r9d
  unsigned int v228; // r9d
  unsigned int v229; // r9d
  unsigned int v230; // r9d
  unsigned int v231; // r9d
  unsigned int v232; // r9d
  unsigned int v233; // r9d
  unsigned int v234; // r9d
  unsigned int v235; // r9d
  wchar_t v236; // cx
  __int16 v237; // cx
  __int16 v238; // cx
  wchar_t v239; // cx
  unsigned int v240; // r9d
  unsigned int v241; // r9d
  unsigned int v242; // r9d
  unsigned int v243; // r9d
  unsigned int v244; // r9d
  unsigned int v245; // r9d
  unsigned int v246; // r9d
  unsigned int v247; // r9d
  unsigned int v248; // r9d
  unsigned int v249; // r9d
  unsigned int v250; // r9d
  unsigned int v251; // r9d
  unsigned int v252; // r9d
  unsigned int v253; // r9d
  unsigned int v254; // r9d
  unsigned int v255; // r9d
  unsigned int v256; // r9d
  unsigned int v257; // r9d
  unsigned int v258; // r9d
  unsigned int v259; // r9d
  unsigned int v260; // r9d
  unsigned int v261; // r9d
  unsigned int v262; // r9d
  unsigned int v263; // r9d
  unsigned int v264; // r9d
  unsigned int v265; // r9d
  unsigned int v266; // r9d
  unsigned int v267; // r9d
  unsigned int v268; // r9d
  unsigned int v269; // r9d
  unsigned int v270; // r9d
  unsigned int v271; // r9d
  wchar_t v272; // cx
  wchar_t v273; // cx
  __int16 v274; // cx
  unsigned int v275; // r9d
  unsigned int v276; // r9d
  unsigned int v277; // r9d
  unsigned int v278; // r9d
  __int16 v279; // cx
  __int16 v280; // cx
  __int16 v281; // cx
  __int16 v282; // cx
  unsigned int v283; // r9d
  unsigned int v284; // r9d
  unsigned int v285; // r9d
  unsigned int v286; // r9d
  unsigned int v287; // r9d
  unsigned int v288; // r9d
  unsigned int v289; // r9d
  unsigned int v290; // r9d
  unsigned int v291; // r9d
  unsigned int v292; // r9d
  unsigned int v293; // r9d
  unsigned int v294; // r9d
  unsigned int v295; // r9d
  unsigned int v296; // r9d
  unsigned int v297; // r9d
  unsigned int v298; // r9d
  unsigned int v299; // r9d
  unsigned int v300; // r9d
  unsigned int v301; // r9d
  unsigned int v302; // r9d
  unsigned int v303; // r9d
  unsigned int v304; // r9d
  unsigned int v305; // r9d
  unsigned int v306; // r9d
  unsigned int v307; // r9d
  unsigned int v308; // r9d
  unsigned int v309; // r9d
  unsigned int v310; // r9d
  unsigned int v311; // r9d
  unsigned int v312; // r9d
  unsigned int v313; // r9d
  unsigned int v314; // r9d
  unsigned int v315; // r9d
  unsigned int v316; // r9d
  unsigned int v317; // r9d
  unsigned int v318; // r9d
  unsigned int v319; // r9d
  unsigned int v320; // r9d
  unsigned int v321; // r9d
  unsigned int v322; // r9d
  unsigned int v323; // r9d
  unsigned int v324; // r9d
  unsigned int v325; // r9d
  unsigned int v326; // r9d
  unsigned int v327; // r9d
  unsigned int v328; // r9d
  unsigned int v329; // r9d
  unsigned int v330; // r9d
  unsigned int v331; // r9d
  unsigned int v332; // r9d
  unsigned int v333; // r9d
  unsigned int v334; // r9d
  unsigned int v335; // r9d
  unsigned int v336; // r9d
  unsigned int v337; // r9d
  unsigned int v338; // r9d
  unsigned int v339; // r9d
  unsigned int v340; // r9d
  unsigned int v341; // r9d
  unsigned int v342; // r9d
  unsigned int v343; // r9d
  unsigned int v344; // r9d
  unsigned int v345; // r9d
  unsigned int v346; // r9d
  unsigned int v347; // r9d
  unsigned int v348; // r9d
  unsigned int v349; // r9d
  unsigned int v350; // r9d
  unsigned int v351; // r9d
  unsigned int v352; // ecx
  unsigned int v353; // ecx
  unsigned int v354; // ecx
  unsigned int v355; // ecx
  unsigned int v356; // r9d
  unsigned int v357; // r9d
  unsigned int v358; // r9d
  unsigned int v359; // r9d
  unsigned int v360; // r9d
  unsigned int v361; // r9d
  unsigned int v362; // r9d
  unsigned int v363; // r9d
  unsigned int v364; // r9d
  unsigned int v365; // r9d
  unsigned int v366; // r9d
  unsigned int v367; // r9d
  unsigned int v368; // r9d
  unsigned int v369; // r9d
  unsigned int v370; // r9d
  unsigned int v371; // r9d
  unsigned int v372; // r9d
  unsigned int v373; // r9d
  unsigned int v374; // r9d
  unsigned int v375; // r9d
  unsigned int v376; // r9d
  unsigned int v377; // r9d
  unsigned int v378; // r9d
  unsigned int v379; // r9d
  unsigned int v380; // r9d
  unsigned int v381; // r9d
  unsigned int v382; // r9d
  unsigned int v383; // r9d
  bool v384; // zf
  bool v385; // zf
  double v386; // xmm0_8
  double v387; // xmm1_8
  double v388; // xmm0_8
  double v389; // xmm1_8
  double v390; // xmm1_8
  __m128i v391; // xmm0
  unsigned int v392; // ecx
  __m128i v393; // xmm1
  unsigned int v394; // ecx
  __m128i v395; // xmm0
  unsigned int v396; // ecx
  __m128i v397; // xmm1
  unsigned int v398; // ecx
  __m128i v399; // xmm1
  unsigned int v400; // ecx
  unsigned int v401; // r9d
  unsigned int v402; // r9d
  unsigned int v403; // r9d
  unsigned int v404; // r9d
  unsigned int v405; // r9d
  unsigned int v406; // r9d
  unsigned int v407; // r9d
  unsigned int v408; // r9d
  unsigned int v409; // r9d
  unsigned int v410; // r9d
  unsigned int v411; // r9d
  unsigned int v412; // r9d
  unsigned int v413; // r9d
  unsigned int v414; // r9d
  unsigned int v415; // r9d
  unsigned int v416; // r9d
  unsigned int v417; // r9d
  unsigned int v418; // r9d
  unsigned int v419; // r9d
  unsigned int v420; // r9d
  unsigned int v421; // r9d
  unsigned int v422; // r9d
  unsigned int v423; // r9d
  unsigned int v424; // r9d
  float v425; // xmm0_4
  float v426; // xmm1_4
  float v427; // xmm0_4
  float v428; // xmm1_4
  unsigned int v429; // r9d
  unsigned int v430; // r9d
  unsigned int v431; // r9d
  unsigned int v432; // r9d
  __m128i v433; // xmm0
  unsigned int v434; // ecx
  __m128i v435; // xmm1
  unsigned int v436; // ecx
  __m128i v437; // xmm0
  unsigned int v438; // ecx
  __m128i v439; // xmm1
  unsigned int v440; // ecx
  __m128i v441; // xmm1
  unsigned int v442; // ecx
  unsigned int v443; // r9d
  unsigned int v444; // r9d
  unsigned int v445; // r9d
  unsigned int v446; // r9d
  unsigned int v447; // r9d
  unsigned int v448; // r9d
  unsigned int v449; // r9d
  unsigned int v450; // r9d
  unsigned int v451; // r9d
  unsigned int v452; // r9d
  unsigned int v453; // r9d
  unsigned int v454; // r9d
  unsigned int v455; // r9d
  unsigned int v456; // r9d
  unsigned int v457; // r9d
  unsigned int v458; // r9d
  unsigned int v459; // r9d
  unsigned int v460; // r9d
  unsigned int v461; // r9d
  unsigned int v462; // r9d
  unsigned int v463; // r9d
  unsigned int v464; // r9d
  unsigned int v465; // r9d
  unsigned int v466; // r9d
  unsigned int v467; // r9d
  unsigned int v468; // r9d
  unsigned int v469; // r9d
  unsigned int v470; // r9d
  unsigned int v471; // r9d
  unsigned int v472; // r9d
  unsigned int v473; // r9d
  unsigned int v474; // r9d
  unsigned int v475; // r9d
  unsigned int v476; // r9d
  unsigned int v477; // r9d
  unsigned int v478; // r9d
  unsigned int v479; // r9d
  unsigned int v480; // r9d
  unsigned int v481; // r9d
  unsigned int v482; // r9d
  unsigned int v483; // r9d
  unsigned int v484; // r9d
  unsigned int v485; // r9d
  unsigned int v486; // r9d
  unsigned int v487; // r9d
  unsigned int v488; // r9d
  unsigned int v489; // r9d
  unsigned int v490; // r9d
  unsigned int v491; // r9d
  unsigned int v492; // r9d
  unsigned int v493; // r9d
  unsigned int v494; // r9d
  unsigned int v495; // r9d
  unsigned int v496; // r9d
  unsigned int v497; // r9d
  unsigned int v498; // r9d
  unsigned int v499; // r9d
  unsigned int v500; // r9d
  unsigned int v501; // r9d
  unsigned int v502; // r9d
  unsigned int v503; // r9d
  unsigned int v504; // r9d
  unsigned int v505; // r9d
  unsigned int v506; // r9d
  unsigned int v507; // r9d
  unsigned int v508; // r9d
  unsigned int v509; // r9d
  unsigned int v510; // r9d
  unsigned int v511; // r9d
  unsigned int v512; // r9d
  unsigned int v513; // r9d
  unsigned int v514; // r9d
  unsigned int v515; // r9d
  unsigned int v516; // r9d
  unsigned int v517; // r9d
  unsigned int v518; // r9d
  unsigned int v519; // r9d
  unsigned int v520; // r9d
  unsigned int v521; // r9d
  unsigned int v522; // r9d
  unsigned int v523; // r9d
  unsigned int v524; // r9d
  unsigned int v525; // r9d
  unsigned int v526; // r9d
  unsigned int v527; // eax
  unsigned int v528; // r9d
  unsigned int v529; // r9d
  unsigned int v530; // r9d
  unsigned int v531; // r9d
  unsigned int v532; // r9d
  unsigned int v533; // r9d
  unsigned int v534; // r9d
  unsigned int v535; // r9d
  unsigned int v536; // r9d
  unsigned int v537; // r9d
  unsigned int v538; // r9d
  unsigned int v539; // r9d
  unsigned int v540; // r9d
  unsigned int v541; // r9d
  unsigned int v542; // r9d
  unsigned int v543; // r9d
  unsigned int v544; // r9d
  unsigned int v545; // r9d
  unsigned int v546; // r9d
  unsigned int v547; // r9d
  unsigned int v548; // r9d
  unsigned int v549; // r9d
  unsigned int v550; // r9d
  unsigned int v551; // r9d
  unsigned int v552; // r9d
  unsigned int v553; // r9d
  unsigned int v554; // r9d
  unsigned int v555; // r9d
  unsigned int v556; // r9d
  unsigned int v557; // r9d
  unsigned int v558; // r9d
  unsigned int v559; // r9d
  unsigned int v560; // r9d
  unsigned int v561; // r9d
  unsigned int v562; // r9d
  unsigned int v563; // r9d
  unsigned int v564; // r9d
  unsigned int v565; // r9d
  unsigned int v566; // r9d
  unsigned int v567; // r9d
  unsigned int v568; // r9d
  unsigned int v569; // r9d
  unsigned int v570; // r9d
  unsigned int v571; // r9d
  bool v572; // zf
  __int64 v573; // rcx

  v8 = 0;
  v9 = a3;
  v11 = a4 & 0x10000;
  v12 = a4 & 0xF000FFFF;
  *a8 = 0;
  v13 = 0;
  v14 = a4 & 0x20000;
  if ( v14 && a1 != 18 && a1 != 8210 && a1 != 25 )
    goto LABEL_73;
  v15 = 1;
  if ( v12 == 1 )
  {
    v18 = a1 != 0;
    goto LABEL_23;
  }
  if ( a1 && a5 )
  {
    if ( a1 > 0x1003 )
    {
      if ( a1 == 4109 )
      {
        if ( ((a5 - 13) & 0xFFFFEFFF) != 0 )
          goto LABEL_73;
        if ( v12 == 2 )
          goto LABEL_68;
        if ( v12 != 0x10000000 )
          goto LABEL_73;
        v18 = ArrayContains((__int64)a2, v9, (__int64)Str2, a7);
      }
      else
      {
        if ( a1 != 8210 || ((a5 - 18) & 0xFFFFDFFF) != 0 )
          goto LABEL_73;
        switch ( v12 )
        {
          case 0x1000u:
            v18 = StringListContains(a2);
            break;
          case 2u:
            v385 = v14 == 0;
LABEL_847:
            if ( !v385 )
              goto LABEL_73;
            goto LABEL_68;
          case 0x2000u:
          case 0x3000u:
          case 0x4000u:
            v18 = StringListElementSubstringMatch((_DWORD)a2, a5, (_DWORD)Str2, v14, v12);
            break;
          default:
            goto LABEL_73;
        }
      }
      goto LABEL_23;
    }
    if ( a1 == 4099 )
    {
LABEL_845:
      v385 = v12 == 2;
      goto LABEL_847;
    }
    if ( a1 <= 0xD )
    {
      if ( a1 == 13 )
      {
        if ( a5 == 13 && v12 == 2 )
        {
          if ( *(_DWORD *)a2 == *(_DWORD *)Str2
            && *((_DWORD *)a2 + 1) == *((_DWORD *)Str2 + 1)
            && *((_DWORD *)a2 + 2) == *((_DWORD *)Str2 + 2) )
          {
            v17 = *((_DWORD *)a2 + 3) == *((_DWORD *)Str2 + 3);
            goto LABEL_20;
          }
LABEL_12:
          v15 = 0;
LABEL_13:
          *a8 = v15;
          goto LABEL_14;
        }
LABEL_73:
        v13 = -1073741637;
        goto LABEL_14;
      }
      if ( a1 <= 7 )
      {
        if ( a1 == 7 )
        {
          if ( v12 - 7 > 1 )
          {
            if ( a5 <= 8 )
            {
              if ( a5 != 8 )
              {
                if ( a5 != 2 )
                {
                  if ( a5 != 3 )
                  {
                    if ( a5 != 4 )
                    {
                      if ( a5 != 5 )
                      {
                        v21 = a5 - 6;
                        if ( a5 == 6 )
                          goto LABEL_51;
                        goto LABEL_50;
                      }
                      v348 = v12 - 2;
                      if ( v348 )
                      {
                        v349 = v348 - 1;
                        if ( v349 )
                        {
                          v350 = v349 - 1;
                          if ( v350 )
                          {
                            v351 = v350 - 1;
                            if ( v351 )
                            {
                              if ( v351 != 1 )
                                goto LABEL_73;
                              v352 = *Str2;
                              goto LABEL_756;
                            }
                            v353 = *Str2;
                            goto LABEL_759;
                          }
                          v354 = *Str2;
                          goto LABEL_762;
                        }
                        v355 = *Str2;
                        goto LABEL_765;
                      }
                      goto LABEL_130;
                    }
                    v356 = v12 - 2;
                    if ( v356 )
                    {
                      v357 = v356 - 1;
                      if ( v357 )
                      {
                        v358 = v357 - 1;
                        if ( v358 )
                        {
                          v359 = v358 - 1;
                          if ( v359 )
                          {
                            if ( v359 != 1 )
                              goto LABEL_73;
                            v352 = (__int16)*Str2;
                            goto LABEL_756;
                          }
                          v353 = (__int16)*Str2;
LABEL_759:
                          v186 = *(_DWORD *)a2 < v353;
                          goto LABEL_347;
                        }
                        v354 = (__int16)*Str2;
LABEL_762:
                        v188 = *(_DWORD *)a2 < v354;
                        goto LABEL_351;
                      }
                      v355 = (__int16)*Str2;
LABEL_765:
                      v191 = *(_DWORD *)a2 < v355;
                      v192 = *(_DWORD *)a2 == v355;
                      goto LABEL_355;
                    }
LABEL_140:
                    v65 = (__int16)*Str2;
                    goto LABEL_158;
                  }
                  v360 = v12 - 2;
                  if ( v360 )
                  {
                    v361 = v360 - 1;
                    if ( !v361 )
                    {
                      v355 = *(unsigned __int8 *)Str2;
                      goto LABEL_765;
                    }
                    v362 = v361 - 1;
                    if ( !v362 )
                    {
                      v354 = *(unsigned __int8 *)Str2;
                      goto LABEL_762;
                    }
                    v363 = v362 - 1;
                    if ( !v363 )
                    {
                      v353 = *(unsigned __int8 *)Str2;
                      goto LABEL_759;
                    }
                    if ( v363 != 1 )
                      goto LABEL_73;
                    v352 = *(unsigned __int8 *)Str2;
                    goto LABEL_756;
                  }
LABEL_150:
                  v65 = *(unsigned __int8 *)Str2;
                  goto LABEL_158;
                }
                v364 = v12 - 2;
                if ( v364 )
                {
                  v365 = v364 - 1;
                  if ( !v365 )
                  {
                    v355 = *(char *)Str2;
                    goto LABEL_765;
                  }
                  v366 = v365 - 1;
                  if ( !v366 )
                  {
                    v354 = *(char *)Str2;
                    goto LABEL_762;
                  }
                  v367 = v366 - 1;
                  if ( !v367 )
                  {
                    v353 = *(char *)Str2;
                    goto LABEL_759;
                  }
                  if ( v367 != 1 )
                    goto LABEL_73;
                  v352 = *(char *)Str2;
LABEL_756:
                  v183 = *(_DWORD *)a2 < v352;
                  v184 = *(_DWORD *)a2 == v352;
                  goto LABEL_343;
                }
LABEL_157:
                v65 = *(char *)Str2;
                goto LABEL_158;
              }
LABEL_801:
              v372 = v12 - 2;
              if ( v372 )
              {
                v373 = v372 - 1;
                if ( v373 )
                {
                  v374 = v373 - 1;
                  if ( v374 )
                  {
                    v375 = v374 - 1;
                    if ( v375 )
                    {
                      if ( v375 != 1 )
                        goto LABEL_73;
                      v89 = *(unsigned int *)a2;
LABEL_807:
                      v35 = __OFSUB__(v89, *(_QWORD *)Str2);
                      v33 = v89 == *(_QWORD *)Str2;
                      v34 = v89 - *(_QWORD *)Str2 < 0;
                      goto LABEL_92;
                    }
                    v90 = *(unsigned int *)a2;
                    goto LABEL_809;
                  }
                  v91 = *(unsigned int *)a2;
                  goto LABEL_811;
                }
                v92 = *(unsigned int *)a2;
                goto LABEL_813;
              }
              goto LABEL_739;
            }
            if ( a5 != 9 )
            {
              if ( a5 != 10 )
              {
                if ( a5 != 11 )
                {
                  if ( a5 == 14 )
                    goto LABEL_801;
                  if ( a5 != 15 )
                    goto LABEL_73;
                }
                v368 = v12 - 2;
                if ( v368 )
                {
                  v369 = v368 - 1;
                  if ( v369 )
                  {
                    v370 = v369 - 1;
                    if ( v370 )
                    {
                      v371 = v370 - 1;
                      if ( v371 )
                      {
                        if ( v371 != 1 )
                          goto LABEL_73;
                        v94 = (double)*(int *)a2;
                        goto LABEL_184;
                      }
                      v98 = (double)*(int *)a2;
LABEL_190:
                      v95 = v98 < *(double *)Str2;
                      goto LABEL_194;
                    }
                    v103 = (double)*(int *)a2;
                    goto LABEL_200;
                  }
                  v108 = (double)*(int *)a2;
LABEL_206:
                  v104 = v108 < *(double *)Str2;
                  v105 = v108 == *(double *)Str2;
                  goto LABEL_208;
                }
                v111 = (double)*(int *)a2;
                goto LABEL_214;
              }
              v376 = v12 - 2;
              if ( v376 )
              {
                v377 = v376 - 1;
                if ( v377 )
                {
                  v378 = v377 - 1;
                  if ( v378 )
                  {
                    v379 = v378 - 1;
                    if ( v379 )
                    {
                      if ( v379 != 1 )
                        goto LABEL_73;
                      v119 = (float)*(int *)a2;
                      goto LABEL_225;
                    }
                    v100 = (float)*(int *)a2;
LABEL_193:
                    v95 = v100 < *(float *)Str2;
                    goto LABEL_194;
                  }
                  v122 = (float)*(int *)a2;
LABEL_231:
                  v104 = *(float *)Str2 < v122;
                  v105 = *(float *)Str2 == v122;
                  goto LABEL_208;
                }
                v125 = (float)*(int *)a2;
LABEL_237:
                v104 = v125 < *(float *)Str2;
                v105 = v125 == *(float *)Str2;
                goto LABEL_208;
              }
              v128 = (float)*(int *)a2;
              goto LABEL_243;
            }
            v380 = v12 - 2;
            if ( !v380 )
            {
LABEL_739:
              v142 = *(unsigned int *)a2;
              goto LABEL_740;
            }
            v381 = v380 - 1;
            if ( v381 )
            {
              v382 = v381 - 1;
              if ( v382 )
              {
                v383 = v382 - 1;
                if ( v383 )
                {
                  if ( v383 != 1 )
                    goto LABEL_73;
                  v133 = *(unsigned int *)a2;
LABEL_250:
                  v134 = v133 < *(_QWORD *)Str2;
                  v135 = v133 == *(_QWORD *)Str2;
                  goto LABEL_251;
                }
                v136 = *(unsigned int *)a2;
                goto LABEL_254;
              }
              v138 = *(unsigned int *)a2;
              goto LABEL_259;
            }
            v139 = *(unsigned int *)a2;
            goto LABEL_262;
          }
          if ( a5 != 7 )
            goto LABEL_73;
          if ( v12 != 7 )
          {
            v18 = *(_DWORD *)Str2 | *(_DWORD *)a2;
            goto LABEL_23;
          }
          v28 = *(_DWORD *)Str2 & *(_DWORD *)a2;
LABEL_64:
          *a8 = v28;
          goto LABEL_14;
        }
        if ( a1 != 1 )
        {
          if ( a1 != 2 )
          {
            if ( a1 != 3 )
            {
              if ( a1 != 4 )
              {
                if ( a1 != 5 )
                {
                  if ( a5 <= 8 )
                  {
                    if ( a5 != 8 )
                    {
                      switch ( a5 )
                      {
                        case 2u:
                          v74 = v12 - 2;
                          if ( !v74 )
                            goto LABEL_157;
                          v75 = v74 - 1;
                          if ( !v75 )
                          {
                            v60 = *(char *)Str2;
                            goto LABEL_126;
                          }
                          v76 = v75 - 1;
                          if ( !v76 )
                          {
                            v56 = *(char *)Str2;
                            goto LABEL_120;
                          }
                          v77 = v76 - 1;
                          if ( !v77 )
                          {
                            v52 = *(char *)Str2;
                            goto LABEL_114;
                          }
                          if ( v77 != 1 )
                            goto LABEL_73;
                          v47 = *(char *)Str2;
                          break;
                        case 3u:
                          v70 = v12 - 2;
                          if ( !v70 )
                            goto LABEL_150;
                          v71 = v70 - 1;
                          if ( !v71 )
                          {
                            v60 = *(unsigned __int8 *)Str2;
                            goto LABEL_126;
                          }
                          v72 = v71 - 1;
                          if ( !v72 )
                          {
                            v56 = *(unsigned __int8 *)Str2;
                            goto LABEL_120;
                          }
                          v73 = v72 - 1;
                          if ( !v73 )
                          {
                            v52 = *(unsigned __int8 *)Str2;
                            goto LABEL_114;
                          }
                          if ( v73 != 1 )
                            goto LABEL_73;
                          v47 = *(unsigned __int8 *)Str2;
                          break;
                        case 4u:
                          v66 = v12 - 2;
                          if ( !v66 )
                            goto LABEL_140;
                          v67 = v66 - 1;
                          if ( v67 )
                          {
                            v68 = v67 - 1;
                            if ( v68 )
                            {
                              v69 = v68 - 1;
                              if ( v69 )
                              {
                                if ( v69 != 1 )
                                  goto LABEL_73;
                                v47 = (__int16)*Str2;
                                break;
                              }
                              v52 = (__int16)*Str2;
LABEL_114:
                              v54 = __OFSUB__(*(_DWORD *)a2, v52);
                              v53 = *(_DWORD *)a2 - v52 < 0;
LABEL_117:
                              v18 = v53 == v54;
                              goto LABEL_23;
                            }
                            v56 = (__int16)*Str2;
LABEL_120:
                            v58 = __OFSUB__(*(_DWORD *)a2, v56);
                            v57 = *(_DWORD *)a2 - v56 < 0;
LABEL_123:
                            v18 = v57 ^ v58;
                            goto LABEL_23;
                          }
                          v60 = (__int16)*Str2;
LABEL_126:
                          v63 = __OFSUB__(*(_DWORD *)a2, v60);
                          v61 = *(_DWORD *)a2 == v60;
                          v62 = *(_DWORD *)a2 - v60 < 0;
LABEL_129:
                          v18 = !(v62 ^ v63 | v61);
                          goto LABEL_23;
                        case 5u:
                          v43 = v12 - 2;
                          if ( !v43 )
                          {
LABEL_130:
                            v65 = *Str2;
LABEL_158:
                            v78 = *(_DWORD *)a2 == v65;
LABEL_161:
                            v18 = v78;
                            goto LABEL_23;
                          }
                          v44 = v43 - 1;
                          if ( v44 )
                          {
                            v45 = v44 - 1;
                            if ( v45 )
                            {
                              v46 = v45 - 1;
                              if ( v46 )
                              {
                                if ( v46 != 1 )
                                  goto LABEL_73;
                                v47 = *Str2;
                                break;
                              }
                              v52 = *Str2;
                              goto LABEL_114;
                            }
                            v56 = *Str2;
                            goto LABEL_120;
                          }
                          v60 = *Str2;
                          goto LABEL_126;
                        default:
                          v21 = a5 - 6;
                          if ( a5 != 6 )
                          {
LABEL_50:
                            if ( v21 != 1 )
                              goto LABEL_73;
LABEL_51:
                            v22 = v12 - 2;
                            if ( v22 )
                            {
                              v23 = v22 - 1;
                              if ( v23 )
                              {
                                v24 = v23 - 1;
                                if ( !v24 )
                                {
                                  v25 = *(_DWORD *)a2 < *(_DWORD *)Str2;
LABEL_55:
                                  v20 = v25;
                                  goto LABEL_34;
                                }
                                v347 = v24 - 1;
                                if ( v347 )
                                {
                                  if ( v347 != 1 )
                                    goto LABEL_73;
                                  v134 = *(_DWORD *)a2 < *(_DWORD *)Str2;
                                  v135 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                                  goto LABEL_251;
                                }
                                v137 = *(_DWORD *)a2 < *(_DWORD *)Str2;
LABEL_256:
                                v20 = !v137;
                                goto LABEL_34;
                              }
                              v140 = *(_DWORD *)a2 < *(_DWORD *)Str2;
                              v141 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                              goto LABEL_264;
                            }
                            goto LABEL_67;
                          }
                          v29 = v12 - 2;
                          if ( v29 )
                          {
                            v30 = v29 - 1;
                            if ( v30 )
                            {
                              v31 = v30 - 1;
                              if ( v31 )
                              {
                                v32 = v31 - 1;
                                if ( v32 )
                                {
                                  if ( v32 != 1 )
                                    goto LABEL_73;
                                  v35 = __OFSUB__(*(_DWORD *)a2, *(_DWORD *)Str2);
                                  v33 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                                  v34 = *(_DWORD *)a2 - *(_DWORD *)Str2 < 0;
                                  goto LABEL_92;
                                }
                                v37 = __OFSUB__(*(_DWORD *)a2, *(_DWORD *)Str2);
                                v36 = *(_DWORD *)a2 - *(_DWORD *)Str2 < 0;
                                goto LABEL_95;
                              }
                              v39 = __OFSUB__(*(_DWORD *)a2, *(_DWORD *)Str2);
                              v38 = *(_DWORD *)a2 - *(_DWORD *)Str2 < 0;
LABEL_98:
                              v20 = v38 ^ v39;
                              goto LABEL_34;
                            }
                            v42 = __OFSUB__(*(_DWORD *)a2, *(_DWORD *)Str2);
                            v40 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                            v41 = *(_DWORD *)a2 - *(_DWORD *)Str2 < 0;
LABEL_101:
                            v20 = !(v41 ^ v42 | v40);
                            goto LABEL_34;
                          }
LABEL_67:
                          v19 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                          goto LABEL_33;
                      }
                      v50 = __OFSUB__(*(_DWORD *)a2, v47);
                      v48 = *(_DWORD *)a2 == v47;
                      v49 = *(_DWORD *)a2 - v47 < 0;
LABEL_111:
                      v18 = v49 ^ v50 | v48;
                      goto LABEL_23;
                    }
LABEL_173:
                    v85 = v12 - 2;
                    if ( v85 )
                    {
                      v86 = v85 - 1;
                      if ( v86 )
                      {
                        v87 = v86 - 1;
                        if ( v87 )
                        {
                          v88 = v87 - 1;
                          if ( v88 )
                          {
                            if ( v88 != 1 )
                              goto LABEL_73;
                            v89 = *(int *)a2;
                            goto LABEL_807;
                          }
                          v90 = *(int *)a2;
LABEL_809:
                          v37 = __OFSUB__(v90, *(_QWORD *)Str2);
                          v36 = v90 - *(_QWORD *)Str2 < 0;
                          goto LABEL_95;
                        }
                        v91 = *(int *)a2;
                        goto LABEL_811;
                      }
                      v92 = *(int *)a2;
                      goto LABEL_813;
                    }
                    goto LABEL_265;
                  }
                  if ( a5 == 9 )
                  {
                    v129 = v12 - 2;
                    if ( v129 )
                    {
                      v130 = v129 - 1;
                      if ( v130 )
                      {
                        v131 = v130 - 1;
                        if ( v131 )
                        {
                          v132 = v131 - 1;
                          if ( v132 )
                          {
                            if ( v132 != 1 )
                              goto LABEL_73;
                            v133 = *(int *)a2;
                            goto LABEL_250;
                          }
                          v136 = *(int *)a2;
                          goto LABEL_254;
                        }
                        v138 = *(int *)a2;
                        goto LABEL_259;
                      }
                      v139 = *(int *)a2;
                      goto LABEL_262;
                    }
LABEL_265:
                    v142 = *(int *)a2;
LABEL_740:
                    v19 = v142 == *(_QWORD *)Str2;
                    goto LABEL_33;
                  }
                  if ( a5 != 10 )
                  {
                    if ( a5 != 11 )
                    {
                      if ( a5 == 14 )
                        goto LABEL_173;
                      if ( a5 != 15 )
                        goto LABEL_73;
                    }
                    v80 = v12 - 2;
                    if ( v80 )
                    {
                      v81 = v80 - 1;
                      if ( v81 )
                      {
                        v82 = v81 - 1;
                        if ( v82 )
                        {
                          v83 = v82 - 1;
                          if ( v83 )
                          {
                            if ( v83 != 1 )
                              goto LABEL_73;
                            v84 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                            goto LABEL_183;
                          }
                          v96 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_188:
                          *(_QWORD *)&v98 = *(_OWORD *)&_mm_cvtepi32_pd(v96);
                          goto LABEL_190;
                        }
                        v101 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                        goto LABEL_198;
                      }
                      v106 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_204:
                      *(_QWORD *)&v108 = *(_OWORD *)&_mm_cvtepi32_pd(v106);
                      goto LABEL_206;
                    }
                    v109 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                    goto LABEL_212;
                  }
                  v113 = v12 - 2;
                  if ( v113 )
                  {
                    v114 = v113 - 1;
                    if ( v114 )
                    {
                      v115 = v114 - 1;
                      if ( v115 )
                      {
                        v116 = v115 - 1;
                        if ( v116 )
                        {
                          if ( v116 != 1 )
                            goto LABEL_73;
                          v117 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                          goto LABEL_224;
                        }
                        v99 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_192:
                        LODWORD(v100) = _mm_cvtepi32_ps(v99).m128_u32[0];
                        goto LABEL_193;
                      }
                      v120 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_229:
                      LODWORD(v122) = _mm_cvtepi32_ps(v120).m128_u32[0];
                      goto LABEL_231;
                    }
                    v123 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_235:
                    LODWORD(v125) = _mm_cvtepi32_ps(v123).m128_u32[0];
                    goto LABEL_237;
                  }
                  v126 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                  goto LABEL_241;
                }
                if ( a5 <= 8 )
                {
                  if ( a5 != 8 )
                  {
                    if ( a5 != 2 )
                    {
                      if ( a5 != 3 )
                      {
                        if ( a5 != 4 )
                        {
                          if ( a5 != 5 )
                          {
                            if ( a5 != 6 )
                            {
                              if ( a5 != 7 )
                                goto LABEL_73;
                              v143 = v12 - 2;
                              if ( v143 )
                              {
                                v144 = v143 - 1;
                                if ( v144 )
                                {
                                  v145 = v144 - 1;
                                  if ( v145 )
                                  {
                                    v146 = v145 - 1;
                                    if ( v146 )
                                    {
                                      if ( v146 != 1 )
                                        goto LABEL_73;
                                      v147 = *a2;
                                      goto LABEL_280;
                                    }
                                    v148 = *a2;
LABEL_283:
                                    v137 = v148 < *(_DWORD *)Str2;
                                    goto LABEL_256;
                                  }
                                  v149 = *a2;
LABEL_286:
                                  v25 = v149 < *(_DWORD *)Str2;
                                  goto LABEL_55;
                                }
                                v150 = *a2;
LABEL_289:
                                v140 = v150 < *(_DWORD *)Str2;
                                v141 = v150 == *(_DWORD *)Str2;
                                goto LABEL_264;
                              }
                              goto LABEL_290;
                            }
                            v152 = v12 - 2;
                            if ( !v152 )
                            {
LABEL_290:
                              v151 = *a2;
LABEL_292:
                              v19 = v151 == *(_DWORD *)Str2;
                              goto LABEL_33;
                            }
                            v153 = v152 - 1;
                            if ( v153 )
                            {
                              v154 = v153 - 1;
                              if ( v154 )
                              {
                                v155 = v154 - 1;
                                if ( v155 )
                                {
                                  if ( v155 != 1 )
                                    goto LABEL_73;
                                  v156 = *a2;
                                  goto LABEL_299;
                                }
                                v157 = *a2;
LABEL_302:
                                v37 = __OFSUB__(v157, *(_DWORD *)Str2);
                                v36 = v157 - *(_DWORD *)Str2 < 0;
                                goto LABEL_95;
                              }
                              v158 = *a2;
LABEL_305:
                              v39 = __OFSUB__(v158, *(_DWORD *)Str2);
                              v38 = v158 - *(_DWORD *)Str2 < 0;
                              goto LABEL_98;
                            }
                            v159 = *a2;
LABEL_308:
                            v42 = __OFSUB__(v159, *(_DWORD *)Str2);
                            v40 = v159 == *(_DWORD *)Str2;
                            v41 = v159 - *(_DWORD *)Str2 < 0;
                            goto LABEL_101;
                          }
                          v160 = v12 - 2;
                          if ( v160 )
                          {
                            v161 = v160 - 1;
                            if ( v161 )
                            {
                              v162 = v161 - 1;
                              if ( !v162 )
                              {
                                v25 = *a2 < *Str2;
                                goto LABEL_55;
                              }
                              v163 = v162 - 1;
                              if ( v163 )
                              {
                                if ( v163 != 1 )
                                  goto LABEL_73;
                                v134 = *a2 < *Str2;
                                v135 = *a2 == *Str2;
                                goto LABEL_251;
                              }
                              v137 = *a2 < *Str2;
                              goto LABEL_256;
                            }
                            v140 = *a2 < *Str2;
                            v141 = *a2 == *Str2;
                            goto LABEL_264;
                          }
LABEL_318:
                          v19 = *a2 == *Str2;
                          goto LABEL_33;
                        }
                        v164 = v12 - 2;
                        if ( v164 )
                        {
                          v165 = v164 - 1;
                          if ( v165 )
                          {
                            v166 = v165 - 1;
                            if ( v166 )
                            {
                              v167 = v166 - 1;
                              if ( v167 )
                              {
                                if ( v167 != 1 )
                                  goto LABEL_73;
                                v168 = *a2;
                                v169 = (__int16)*Str2;
                                goto LABEL_325;
                              }
                              v170 = *a2;
                              v171 = (__int16)*Str2;
LABEL_328:
                              v54 = __OFSUB__(v170, v171);
                              v53 = v170 - v171 < 0;
                              goto LABEL_117;
                            }
                            v172 = *a2;
                            v173 = (__int16)*Str2;
LABEL_331:
                            v58 = __OFSUB__(v172, v173);
                            v57 = v172 - v173 < 0;
                            goto LABEL_123;
                          }
                          v174 = *a2;
                          v175 = (__int16)*Str2;
LABEL_334:
                          v63 = __OFSUB__(v174, v175);
                          v61 = v174 == v175;
                          v62 = v174 - v175 < 0;
                          goto LABEL_129;
                        }
                        v176 = *a2;
                        v177 = (__int16)*Str2;
LABEL_379:
                        v78 = v176 == v177;
                        goto LABEL_161;
                      }
                      v178 = v12 - 2;
                      if ( v178 )
                      {
                        v179 = v178 - 1;
                        if ( v179 )
                        {
                          v180 = v179 - 1;
                          if ( v180 )
                          {
                            v181 = v180 - 1;
                            if ( v181 )
                            {
                              if ( v181 != 1 )
                                goto LABEL_73;
                              v182 = *(unsigned __int8 *)Str2;
                              v183 = *a2 < v182;
                              v184 = *a2 == v182;
                              goto LABEL_343;
                            }
                            v186 = *a2 < *(unsigned __int8 *)Str2;
LABEL_347:
                            v18 = !v186;
                            goto LABEL_23;
                          }
                          v188 = *a2 < *(unsigned __int8 *)Str2;
LABEL_351:
                          v18 = v188;
                          goto LABEL_23;
                        }
                        v190 = *(unsigned __int8 *)Str2;
                        v191 = *a2 < v190;
                        v192 = *a2 == v190;
LABEL_355:
                        v18 = !v191 && !v192;
                        goto LABEL_23;
                      }
                      goto LABEL_356;
                    }
                    v195 = v12 - 2;
                    if ( v195 )
                    {
                      v196 = v195 - 1;
                      if ( v196 )
                      {
                        v197 = v196 - 1;
                        if ( v197 )
                        {
                          v198 = v197 - 1;
                          if ( v198 )
                          {
                            if ( v198 != 1 )
                              goto LABEL_73;
                            v168 = *a2;
                            goto LABEL_365;
                          }
                          v170 = *a2;
                          goto LABEL_368;
                        }
                        v172 = *a2;
                        goto LABEL_371;
                      }
                      v174 = *a2;
                      goto LABEL_374;
                    }
                    v176 = *a2;
                    goto LABEL_377;
                  }
                  goto LABEL_391;
                }
                if ( a5 == 9 )
                {
                  v212 = v12 - 2;
                  if ( v212 )
                  {
                    v213 = v212 - 1;
                    if ( v213 )
                    {
                      v214 = v213 - 1;
                      if ( v214 )
                      {
                        v215 = v214 - 1;
                        if ( v215 )
                        {
                          if ( v215 != 1 )
                            goto LABEL_73;
                          v133 = *a2;
                          goto LABEL_250;
                        }
                        v136 = *a2;
                        goto LABEL_254;
                      }
                      v138 = *a2;
                      goto LABEL_259;
                    }
                    v139 = *a2;
                    goto LABEL_262;
                  }
LABEL_418:
                  v142 = *a2;
                  goto LABEL_740;
                }
                if ( a5 != 10 )
                {
                  if ( a5 != 11 )
                  {
                    if ( a5 == 14 )
                    {
LABEL_391:
                      v203 = v12 - 2;
                      if ( v203 )
                      {
                        v204 = v203 - 1;
                        if ( v204 )
                        {
                          v205 = v204 - 1;
                          if ( v205 )
                          {
                            v206 = v205 - 1;
                            if ( v206 )
                            {
                              if ( v206 != 1 )
                                goto LABEL_73;
                              v89 = *a2;
                              goto LABEL_807;
                            }
                            v90 = *a2;
                            goto LABEL_809;
                          }
                          v91 = *a2;
LABEL_811:
                          v39 = __OFSUB__(v91, *(_QWORD *)Str2);
                          v38 = v91 - *(_QWORD *)Str2 < 0;
                          goto LABEL_98;
                        }
                        v92 = *a2;
LABEL_813:
                        v42 = __OFSUB__(v92, *(_QWORD *)Str2);
                        v40 = v92 == *(_QWORD *)Str2;
                        v41 = v92 - *(_QWORD *)Str2 < 0;
                        goto LABEL_101;
                      }
                      goto LABEL_418;
                    }
                    if ( a5 != 15 )
                      goto LABEL_73;
                  }
                  v199 = v12 - 2;
                  if ( v199 )
                  {
                    v200 = v199 - 1;
                    if ( v200 )
                    {
                      v201 = v200 - 1;
                      if ( v201 )
                      {
                        v202 = v201 - 1;
                        if ( v202 )
                        {
                          if ( v202 != 1 )
                            goto LABEL_73;
                          v93 = *a2;
                          goto LABEL_182;
                        }
                        v97 = *a2;
LABEL_187:
                        v96 = _mm_cvtsi32_si128(v97);
                        goto LABEL_188;
                      }
                      v102 = *a2;
LABEL_197:
                      v101 = _mm_cvtsi32_si128(v102);
LABEL_198:
                      *(_QWORD *)&v103 = *(_OWORD *)&_mm_cvtepi32_pd(v101);
LABEL_200:
                      v104 = *(double *)Str2 < v103;
                      v105 = *(double *)Str2 == v103;
                      goto LABEL_208;
                    }
                    v107 = *a2;
LABEL_203:
                    v106 = _mm_cvtsi32_si128(v107);
                    goto LABEL_204;
                  }
                  v110 = *a2;
LABEL_211:
                  v109 = _mm_cvtsi32_si128(v110);
LABEL_212:
                  *(_QWORD *)&v111 = *(_OWORD *)&_mm_cvtepi32_pd(v109);
LABEL_214:
                  v17 = v111 == *(double *)Str2;
                  goto LABEL_20;
                }
                v207 = v12 - 2;
                if ( v207 )
                {
                  v208 = v207 - 1;
                  if ( v208 )
                  {
                    v209 = v208 - 1;
                    if ( v209 )
                    {
                      v210 = v209 - 1;
                      if ( v210 )
                      {
                        if ( v210 != 1 )
                          goto LABEL_73;
                        v118 = *a2;
                        goto LABEL_223;
                      }
                      v211 = *a2;
LABEL_408:
                      v99 = _mm_cvtsi32_si128(v211);
                      goto LABEL_192;
                    }
                    v121 = *a2;
LABEL_228:
                    v120 = _mm_cvtsi32_si128(v121);
                    goto LABEL_229;
                  }
                  v124 = *a2;
LABEL_234:
                  v123 = _mm_cvtsi32_si128(v124);
                  goto LABEL_235;
                }
                v127 = *a2;
LABEL_240:
                v126 = _mm_cvtsi32_si128(v127);
LABEL_241:
                LODWORD(v128) = _mm_cvtepi32_ps(v126).m128_u32[0];
LABEL_243:
                v17 = v128 == *(float *)Str2;
                goto LABEL_20;
              }
              if ( a5 <= 8 )
              {
                if ( a5 != 8 )
                {
                  switch ( a5 )
                  {
                    case 2u:
                      v240 = v12 - 2;
                      if ( !v240 )
                      {
                        v194 = *(char *)Str2;
                        goto LABEL_358;
                      }
                      v241 = v240 - 1;
                      if ( v241 )
                      {
                        v242 = v241 - 1;
                        if ( v242 )
                        {
                          v243 = v242 - 1;
                          if ( v243 )
                          {
                            if ( v243 != 1 )
                              goto LABEL_73;
                            v236 = *(char *)Str2;
LABEL_480:
                            v50 = __OFSUB__(*a2, v236);
                            v48 = *a2 == v236;
                            v49 = (__int16)(*a2 - v236) < 0;
                            goto LABEL_111;
                          }
                          v237 = *(char *)Str2;
LABEL_483:
                          v54 = __OFSUB__(*a2, v237);
                          v53 = (__int16)(*a2 - v237) < 0;
                          goto LABEL_117;
                        }
                        v238 = *(char *)Str2;
LABEL_486:
                        v58 = __OFSUB__(*a2, v238);
                        v57 = (__int16)(*a2 - v238) < 0;
                        goto LABEL_123;
                      }
                      v239 = *(char *)Str2;
                      break;
                    case 3u:
                      v232 = v12 - 2;
                      if ( !v232 )
                      {
LABEL_356:
                        v194 = *(unsigned __int8 *)Str2;
LABEL_358:
                        v78 = *a2 == v194;
                        goto LABEL_161;
                      }
                      v233 = v232 - 1;
                      if ( v233 )
                      {
                        v234 = v233 - 1;
                        if ( v234 )
                        {
                          v235 = v234 - 1;
                          if ( v235 )
                          {
                            if ( v235 != 1 )
                              goto LABEL_73;
                            v236 = *(unsigned __int8 *)Str2;
                            goto LABEL_480;
                          }
                          v237 = *(unsigned __int8 *)Str2;
                          goto LABEL_483;
                        }
                        v238 = *(unsigned __int8 *)Str2;
                        goto LABEL_486;
                      }
                      v239 = *(unsigned __int8 *)Str2;
                      break;
                    case 4u:
                      v228 = v12 - 2;
                      if ( !v228 )
                        goto LABEL_318;
                      v229 = v228 - 1;
                      if ( !v229 )
                      {
                        v42 = __OFSUB__(*a2, *Str2);
                        v40 = *a2 == *Str2;
                        v41 = (__int16)(*a2 - *Str2) < 0;
                        goto LABEL_101;
                      }
                      v230 = v229 - 1;
                      if ( !v230 )
                      {
                        v39 = __OFSUB__(*a2, *Str2);
                        v38 = (__int16)(*a2 - *Str2) < 0;
                        goto LABEL_98;
                      }
                      v231 = v230 - 1;
                      if ( v231 )
                      {
                        if ( v231 != 1 )
                          goto LABEL_73;
                        v35 = __OFSUB__(*a2, *Str2);
                        v33 = *a2 == *Str2;
                        v34 = (__int16)(*a2 - *Str2) < 0;
                        goto LABEL_92;
                      }
                      v37 = __OFSUB__(*a2, *Str2);
                      v36 = (__int16)(*a2 - *Str2) < 0;
LABEL_95:
                      v20 = v36 == v37;
                      goto LABEL_34;
                    case 5u:
                      v224 = v12 - 2;
                      if ( v224 )
                      {
                        v225 = v224 - 1;
                        if ( v225 )
                        {
                          v226 = v225 - 1;
                          if ( v226 )
                          {
                            v227 = v226 - 1;
                            if ( v227 )
                            {
                              if ( v227 != 1 )
                                goto LABEL_73;
                              v168 = (__int16)*a2;
                              goto LABEL_452;
                            }
                            v170 = (__int16)*a2;
                            goto LABEL_455;
                          }
                          v172 = (__int16)*a2;
                          goto LABEL_458;
                        }
                        v174 = (__int16)*a2;
                        goto LABEL_461;
                      }
                      v176 = (__int16)*a2;
                      goto LABEL_464;
                    case 6u:
                      v220 = v12 - 2;
                      if ( !v220 )
                        goto LABEL_436;
                      v221 = v220 - 1;
                      if ( !v221 )
                      {
                        v159 = (__int16)*a2;
                        goto LABEL_308;
                      }
                      v222 = v221 - 1;
                      if ( !v222 )
                      {
                        v158 = (__int16)*a2;
                        goto LABEL_305;
                      }
                      v223 = v222 - 1;
                      if ( !v223 )
                      {
                        v157 = (__int16)*a2;
                        goto LABEL_302;
                      }
                      if ( v223 != 1 )
                        goto LABEL_73;
                      v156 = (__int16)*a2;
LABEL_299:
                      v35 = __OFSUB__(v156, *(_DWORD *)Str2);
                      v33 = v156 == *(_DWORD *)Str2;
                      v34 = v156 - *(_DWORD *)Str2 < 0;
LABEL_92:
                      v20 = v34 ^ v35 | v33;
                      goto LABEL_34;
                    case 7u:
                      v216 = v12 - 2;
                      if ( v216 )
                      {
                        v217 = v216 - 1;
                        if ( !v217 )
                        {
                          v150 = (__int16)*a2;
                          goto LABEL_289;
                        }
                        v218 = v217 - 1;
                        if ( !v218 )
                        {
                          v149 = (__int16)*a2;
                          goto LABEL_286;
                        }
                        v219 = v218 - 1;
                        if ( !v219 )
                        {
                          v148 = (__int16)*a2;
                          goto LABEL_283;
                        }
                        if ( v219 != 1 )
                          goto LABEL_73;
                        v147 = (__int16)*a2;
                        goto LABEL_280;
                      }
LABEL_436:
                      v151 = (__int16)*a2;
                      goto LABEL_292;
                    default:
                      goto LABEL_73;
                  }
                  v63 = __OFSUB__(*a2, v239);
                  v61 = *a2 == v239;
                  v62 = (__int16)(*a2 - v239) < 0;
                  goto LABEL_129;
                }
                goto LABEL_507;
              }
              if ( a5 == 9 )
              {
                v256 = v12 - 2;
                if ( v256 )
                {
                  v257 = v256 - 1;
                  if ( v257 )
                  {
                    v258 = v257 - 1;
                    if ( v258 )
                    {
                      v259 = v258 - 1;
                      if ( v259 )
                      {
                        if ( v259 != 1 )
                          goto LABEL_73;
                        v133 = (__int16)*a2;
                        goto LABEL_250;
                      }
                      v136 = (__int16)*a2;
                      goto LABEL_254;
                    }
                    v138 = (__int16)*a2;
                    goto LABEL_259;
                  }
                  v139 = (__int16)*a2;
                  goto LABEL_262;
                }
LABEL_539:
                v142 = (__int16)*a2;
                goto LABEL_740;
              }
              if ( a5 != 10 )
              {
                if ( a5 != 11 )
                {
                  if ( a5 == 14 )
                  {
LABEL_507:
                    v248 = v12 - 2;
                    if ( v248 )
                    {
                      v249 = v248 - 1;
                      if ( v249 )
                      {
                        v250 = v249 - 1;
                        if ( v250 )
                        {
                          v251 = v250 - 1;
                          if ( v251 )
                          {
                            if ( v251 != 1 )
                              goto LABEL_73;
                            v89 = (__int16)*a2;
                            goto LABEL_807;
                          }
                          v90 = (__int16)*a2;
                          goto LABEL_809;
                        }
                        v91 = (__int16)*a2;
                        goto LABEL_811;
                      }
                      v92 = (__int16)*a2;
                      goto LABEL_813;
                    }
                    goto LABEL_539;
                  }
                  if ( a5 != 15 )
                    goto LABEL_73;
                }
                v244 = v12 - 2;
                if ( !v244 )
                {
                  v110 = (__int16)*a2;
                  goto LABEL_211;
                }
                v245 = v244 - 1;
                if ( !v245 )
                {
                  v107 = (__int16)*a2;
                  goto LABEL_203;
                }
                v246 = v245 - 1;
                if ( !v246 )
                {
                  v102 = (__int16)*a2;
                  goto LABEL_197;
                }
                v247 = v246 - 1;
                if ( !v247 )
                {
                  v97 = (__int16)*a2;
                  goto LABEL_187;
                }
                if ( v247 != 1 )
                  goto LABEL_73;
                v93 = (__int16)*a2;
LABEL_182:
                v84 = _mm_cvtsi32_si128(v93);
LABEL_183:
                *(_QWORD *)&v94 = *(_OWORD *)&_mm_cvtepi32_pd(v84);
                goto LABEL_184;
              }
              v252 = v12 - 2;
              if ( !v252 )
              {
                v127 = (__int16)*a2;
                goto LABEL_240;
              }
              v253 = v252 - 1;
              if ( !v253 )
              {
                v124 = (__int16)*a2;
                goto LABEL_234;
              }
              v254 = v253 - 1;
              if ( !v254 )
              {
                v121 = (__int16)*a2;
                goto LABEL_228;
              }
              v255 = v254 - 1;
              if ( !v255 )
              {
                v211 = (__int16)*a2;
                goto LABEL_408;
              }
              if ( v255 != 1 )
                goto LABEL_73;
              v118 = (__int16)*a2;
LABEL_223:
              v117 = _mm_cvtsi32_si128(v118);
LABEL_224:
              LODWORD(v119) = _mm_cvtepi32_ps(v117).m128_u32[0];
              goto LABEL_225;
            }
            if ( a5 <= 8 )
            {
              if ( a5 != 8 )
              {
                if ( a5 == 2 )
                {
                  v287 = v12 - 2;
                  if ( v287 )
                  {
                    v288 = v287 - 1;
                    if ( v288 )
                    {
                      v289 = v288 - 1;
                      if ( v289 )
                      {
                        v290 = v289 - 1;
                        if ( v290 )
                        {
                          if ( v290 != 1 )
                            goto LABEL_73;
                          v168 = *(unsigned __int8 *)a2;
LABEL_365:
                          v169 = *(char *)Str2;
                          goto LABEL_325;
                        }
                        v170 = *(unsigned __int8 *)a2;
LABEL_368:
                        v171 = *(char *)Str2;
                        goto LABEL_328;
                      }
                      v172 = *(unsigned __int8 *)a2;
LABEL_371:
                      v173 = *(char *)Str2;
                      goto LABEL_331;
                    }
                    v174 = *(unsigned __int8 *)a2;
LABEL_374:
                    v175 = *(char *)Str2;
                    goto LABEL_334;
                  }
                  v176 = *(unsigned __int8 *)a2;
LABEL_377:
                  v177 = *(char *)Str2;
                  goto LABEL_379;
                }
                if ( a5 != 3 )
                {
                  if ( a5 != 4 )
                  {
                    if ( a5 != 5 )
                    {
                      if ( a5 == 6 )
                      {
                        v264 = v12 - 2;
                        if ( v264 )
                        {
                          v265 = v264 - 1;
                          if ( !v265 )
                          {
                            v159 = *(unsigned __int8 *)a2;
                            goto LABEL_308;
                          }
                          v266 = v265 - 1;
                          if ( !v266 )
                          {
                            v158 = *(unsigned __int8 *)a2;
                            goto LABEL_305;
                          }
                          v267 = v266 - 1;
                          if ( !v267 )
                          {
                            v157 = *(unsigned __int8 *)a2;
                            goto LABEL_302;
                          }
                          if ( v267 != 1 )
                            goto LABEL_73;
                          v156 = *(unsigned __int8 *)a2;
                          goto LABEL_299;
                        }
                      }
                      else
                      {
                        if ( a5 != 7 )
                          goto LABEL_73;
                        v260 = v12 - 2;
                        if ( v260 )
                        {
                          v261 = v260 - 1;
                          if ( !v261 )
                          {
                            v150 = *(unsigned __int8 *)a2;
                            goto LABEL_289;
                          }
                          v262 = v261 - 1;
                          if ( !v262 )
                          {
                            v149 = *(unsigned __int8 *)a2;
                            goto LABEL_286;
                          }
                          v263 = v262 - 1;
                          if ( !v263 )
                          {
                            v148 = *(unsigned __int8 *)a2;
                            goto LABEL_283;
                          }
                          if ( v263 != 1 )
                            goto LABEL_73;
                          v147 = *(unsigned __int8 *)a2;
                          goto LABEL_280;
                        }
                      }
                      v151 = *(unsigned __int8 *)a2;
                      goto LABEL_292;
                    }
                    v268 = v12 - 2;
                    if ( v268 )
                    {
                      v269 = v268 - 1;
                      if ( v269 )
                      {
                        v270 = v269 - 1;
                        if ( !v270 )
                        {
                          v25 = *(unsigned __int8 *)a2 < *Str2;
                          goto LABEL_55;
                        }
                        v271 = v270 - 1;
                        if ( v271 )
                        {
                          if ( v271 != 1 )
                            goto LABEL_73;
                          v272 = *(unsigned __int8 *)a2;
                          v134 = v272 < *Str2;
                          v135 = v272 == *Str2;
                          goto LABEL_251;
                        }
                        v137 = *(unsigned __int8 *)a2 < *Str2;
                        goto LABEL_256;
                      }
                      v273 = *(unsigned __int8 *)a2;
                      v140 = v273 < *Str2;
                      v141 = v273 == *Str2;
                      goto LABEL_264;
                    }
                    goto LABEL_576;
                  }
                  v275 = v12 - 2;
                  if ( !v275 )
                  {
LABEL_576:
                    v274 = *(unsigned __int8 *)a2;
LABEL_578:
                    v19 = v274 == (__int16)*Str2;
                    goto LABEL_33;
                  }
                  v276 = v275 - 1;
                  if ( v276 )
                  {
                    v277 = v276 - 1;
                    if ( v277 )
                    {
                      v278 = v277 - 1;
                      if ( v278 )
                      {
                        if ( v278 != 1 )
                          goto LABEL_73;
                        v279 = *(unsigned __int8 *)a2;
                        goto LABEL_585;
                      }
                      v280 = *(unsigned __int8 *)a2;
                      goto LABEL_588;
                    }
                    v281 = *(unsigned __int8 *)a2;
                    goto LABEL_591;
                  }
                  v282 = *(unsigned __int8 *)a2;
                  goto LABEL_594;
                }
                v283 = v12 - 2;
                if ( v283 )
                {
                  v284 = v283 - 1;
                  if ( v284 )
                  {
                    v285 = v284 - 1;
                    if ( !v285 )
                    {
                      v25 = *(_BYTE *)a2 < *(_BYTE *)Str2;
                      goto LABEL_55;
                    }
                    v286 = v285 - 1;
                    if ( v286 )
                    {
                      if ( v286 != 1 )
                        goto LABEL_73;
                      v134 = *(_BYTE *)a2 < *(_BYTE *)Str2;
                      v135 = *(_BYTE *)a2 == *(_BYTE *)Str2;
                      goto LABEL_251;
                    }
                    v137 = *(_BYTE *)a2 < *(_BYTE *)Str2;
                    goto LABEL_256;
                  }
                  v140 = *(_BYTE *)a2 < *(_BYTE *)Str2;
                  v141 = *(_BYTE *)a2 == *(_BYTE *)Str2;
LABEL_264:
                  v20 = !v140 && !v141;
                  goto LABEL_34;
                }
                goto LABEL_32;
              }
              goto LABEL_619;
            }
            if ( a5 == 9 )
            {
              v303 = v12 - 2;
              if ( v303 )
              {
                v304 = v303 - 1;
                if ( v304 )
                {
                  v305 = v304 - 1;
                  if ( v305 )
                  {
                    v306 = v305 - 1;
                    if ( v306 )
                    {
                      if ( v306 != 1 )
                        goto LABEL_73;
                      v133 = *(unsigned __int8 *)a2;
                      goto LABEL_250;
                    }
                    v136 = *(unsigned __int8 *)a2;
                    goto LABEL_254;
                  }
                  v138 = *(unsigned __int8 *)a2;
                  goto LABEL_259;
                }
                v139 = *(unsigned __int8 *)a2;
                goto LABEL_262;
              }
LABEL_651:
              v142 = *(unsigned __int8 *)a2;
              goto LABEL_740;
            }
            if ( a5 == 10 )
            {
              v299 = v12 - 2;
              if ( !v299 )
              {
                v127 = *(unsigned __int8 *)a2;
                goto LABEL_240;
              }
              v300 = v299 - 1;
              if ( !v300 )
              {
                v124 = *(unsigned __int8 *)a2;
                goto LABEL_234;
              }
              v301 = v300 - 1;
              if ( !v301 )
              {
                v121 = *(unsigned __int8 *)a2;
                goto LABEL_228;
              }
              v302 = v301 - 1;
              if ( !v302 )
              {
                v211 = *(unsigned __int8 *)a2;
                goto LABEL_408;
              }
              if ( v302 != 1 )
                goto LABEL_73;
              v118 = *(unsigned __int8 *)a2;
              goto LABEL_223;
            }
            if ( a5 != 11 )
            {
              if ( a5 == 14 )
              {
LABEL_619:
                v295 = v12 - 2;
                if ( v295 )
                {
                  v296 = v295 - 1;
                  if ( v296 )
                  {
                    v297 = v296 - 1;
                    if ( v297 )
                    {
                      v298 = v297 - 1;
                      if ( v298 )
                      {
                        if ( v298 != 1 )
                          goto LABEL_73;
                        v89 = *(unsigned __int8 *)a2;
                        goto LABEL_807;
                      }
                      v90 = *(unsigned __int8 *)a2;
                      goto LABEL_809;
                    }
                    v91 = *(unsigned __int8 *)a2;
                    goto LABEL_811;
                  }
                  v92 = *(unsigned __int8 *)a2;
                  goto LABEL_813;
                }
                goto LABEL_651;
              }
              if ( a5 != 15 )
                goto LABEL_73;
            }
            v291 = v12 - 2;
            if ( !v291 )
            {
              v110 = *(unsigned __int8 *)a2;
              goto LABEL_211;
            }
            v292 = v291 - 1;
            if ( !v292 )
            {
              v107 = *(unsigned __int8 *)a2;
              goto LABEL_203;
            }
            v293 = v292 - 1;
            if ( !v293 )
            {
              v102 = *(unsigned __int8 *)a2;
              goto LABEL_197;
            }
            v294 = v293 - 1;
            if ( !v294 )
            {
              v97 = *(unsigned __int8 *)a2;
              goto LABEL_187;
            }
            if ( v294 != 1 )
              goto LABEL_73;
            v93 = *(unsigned __int8 *)a2;
            goto LABEL_182;
          }
          if ( a5 <= 8 )
          {
            if ( a5 != 8 )
            {
              if ( a5 != 2 )
              {
                if ( a5 == 3 )
                {
                  v323 = v12 - 2;
                  if ( !v323 )
                  {
                    v176 = *(char *)a2;
                    v177 = *(unsigned __int8 *)Str2;
                    goto LABEL_379;
                  }
                  v324 = v323 - 1;
                  if ( !v324 )
                  {
                    v174 = *(char *)a2;
                    v175 = *(unsigned __int8 *)Str2;
                    goto LABEL_334;
                  }
                  v325 = v324 - 1;
                  if ( !v325 )
                  {
                    v172 = *(char *)a2;
                    v173 = *(unsigned __int8 *)Str2;
                    goto LABEL_331;
                  }
                  v326 = v325 - 1;
                  if ( !v326 )
                  {
                    v170 = *(char *)a2;
                    v171 = *(unsigned __int8 *)Str2;
                    goto LABEL_328;
                  }
                  if ( v326 != 1 )
                    goto LABEL_73;
                  v168 = *(char *)a2;
                  v169 = *(unsigned __int8 *)Str2;
LABEL_325:
                  v50 = __OFSUB__(v168, v169);
                  v48 = v168 == v169;
                  v49 = v168 - v169 < 0;
                  goto LABEL_111;
                }
                if ( a5 != 4 )
                {
                  if ( a5 != 5 )
                  {
                    if ( a5 == 6 )
                    {
                      v311 = v12 - 2;
                      if ( v311 )
                      {
                        v312 = v311 - 1;
                        if ( !v312 )
                        {
                          v159 = *(char *)a2;
                          goto LABEL_308;
                        }
                        v313 = v312 - 1;
                        if ( !v313 )
                        {
                          v158 = *(char *)a2;
                          goto LABEL_305;
                        }
                        v314 = v313 - 1;
                        if ( !v314 )
                        {
                          v157 = *(char *)a2;
                          goto LABEL_302;
                        }
                        if ( v314 != 1 )
                          goto LABEL_73;
                        v156 = *(char *)a2;
                        goto LABEL_299;
                      }
                    }
                    else
                    {
                      if ( a5 != 7 )
                        goto LABEL_73;
                      v307 = v12 - 2;
                      if ( v307 )
                      {
                        v308 = v307 - 1;
                        if ( !v308 )
                        {
                          v150 = *(char *)a2;
                          goto LABEL_289;
                        }
                        v309 = v308 - 1;
                        if ( !v309 )
                        {
                          v149 = *(char *)a2;
                          goto LABEL_286;
                        }
                        v310 = v309 - 1;
                        if ( !v310 )
                        {
                          v148 = *(char *)a2;
                          goto LABEL_283;
                        }
                        if ( v310 != 1 )
                          goto LABEL_73;
                        v147 = *(char *)a2;
LABEL_280:
                        v134 = v147 < *(_DWORD *)Str2;
                        v135 = v147 == *(_DWORD *)Str2;
                        goto LABEL_251;
                      }
                    }
                    v151 = *(char *)a2;
                    goto LABEL_292;
                  }
                  v315 = v12 - 2;
                  if ( v315 )
                  {
                    v316 = v315 - 1;
                    if ( v316 )
                    {
                      v317 = v316 - 1;
                      if ( v317 )
                      {
                        v318 = v317 - 1;
                        if ( v318 )
                        {
                          if ( v318 != 1 )
                            goto LABEL_73;
                          v168 = *(char *)a2;
LABEL_452:
                          v169 = *Str2;
                          goto LABEL_325;
                        }
                        v170 = *(char *)a2;
LABEL_455:
                        v171 = *Str2;
                        goto LABEL_328;
                      }
                      v172 = *(char *)a2;
LABEL_458:
                      v173 = *Str2;
                      goto LABEL_331;
                    }
                    v174 = *(char *)a2;
LABEL_461:
                    v175 = *Str2;
                    goto LABEL_334;
                  }
                  v176 = *(char *)a2;
LABEL_464:
                  v177 = *Str2;
                  goto LABEL_379;
                }
                v319 = v12 - 2;
                if ( !v319 )
                {
                  v274 = *(char *)a2;
                  goto LABEL_578;
                }
                v320 = v319 - 1;
                if ( v320 )
                {
                  v321 = v320 - 1;
                  if ( v321 )
                  {
                    v322 = v321 - 1;
                    if ( v322 )
                    {
                      if ( v322 != 1 )
                        goto LABEL_73;
                      v279 = *(char *)a2;
LABEL_585:
                      v35 = __OFSUB__(v279, *Str2);
                      v33 = v279 == (__int16)*Str2;
                      v34 = (__int16)(v279 - *Str2) < 0;
                      goto LABEL_92;
                    }
                    v280 = *(char *)a2;
LABEL_588:
                    v37 = __OFSUB__(v280, *Str2);
                    v36 = (__int16)(v280 - *Str2) < 0;
                    goto LABEL_95;
                  }
                  v281 = *(char *)a2;
LABEL_591:
                  v39 = __OFSUB__(v281, *Str2);
                  v38 = (__int16)(v281 - *Str2) < 0;
                  goto LABEL_98;
                }
                v282 = *(char *)a2;
LABEL_594:
                v42 = __OFSUB__(v282, *Str2);
                v40 = v282 == (__int16)*Str2;
                v41 = (__int16)(v282 - *Str2) < 0;
                goto LABEL_101;
              }
              v327 = v12 - 2;
              if ( v327 )
              {
                v328 = v327 - 1;
                if ( !v328 )
                {
                  v42 = __OFSUB__(*(_BYTE *)a2, *(_BYTE *)Str2);
                  v40 = *(_BYTE *)a2 == *(_BYTE *)Str2;
                  v41 = (char)(*(_BYTE *)a2 - *(_BYTE *)Str2) < 0;
                  goto LABEL_101;
                }
                v329 = v328 - 1;
                if ( !v329 )
                {
                  v39 = __OFSUB__(*(_BYTE *)a2, *(_BYTE *)Str2);
                  v38 = (char)(*(_BYTE *)a2 - *(_BYTE *)Str2) < 0;
                  goto LABEL_98;
                }
                v330 = v329 - 1;
                if ( v330 )
                {
                  if ( v330 != 1 )
                    goto LABEL_73;
                  v35 = __OFSUB__(*(_BYTE *)a2, *(_BYTE *)Str2);
                  v33 = *(_BYTE *)a2 == *(_BYTE *)Str2;
                  v34 = (char)(*(_BYTE *)a2 - *(_BYTE *)Str2) < 0;
                  goto LABEL_92;
                }
                v37 = __OFSUB__(*(_BYTE *)a2, *(_BYTE *)Str2);
                v36 = (char)(*(_BYTE *)a2 - *(_BYTE *)Str2) < 0;
                goto LABEL_95;
              }
LABEL_32:
              v19 = *(_BYTE *)a2 == *(_BYTE *)Str2;
LABEL_33:
              v20 = v19;
LABEL_34:
              *a8 = v20;
              goto LABEL_14;
            }
            goto LABEL_707;
          }
          if ( a5 == 9 )
          {
            v343 = v12 - 2;
            if ( v343 )
            {
              v344 = v343 - 1;
              if ( v344 )
              {
                v345 = v344 - 1;
                if ( v345 )
                {
                  v346 = v345 - 1;
                  if ( v346 )
                  {
                    if ( v346 != 1 )
                      goto LABEL_73;
                    v133 = *(char *)a2;
                    goto LABEL_250;
                  }
                  v136 = *(char *)a2;
LABEL_254:
                  v137 = v136 < *(_QWORD *)Str2;
                  goto LABEL_256;
                }
                v138 = *(char *)a2;
LABEL_259:
                v25 = v138 < *(_QWORD *)Str2;
                goto LABEL_55;
              }
              v139 = *(char *)a2;
LABEL_262:
              v140 = v139 < *(_QWORD *)Str2;
              v141 = v139 == *(_QWORD *)Str2;
              goto LABEL_264;
            }
LABEL_738:
            v142 = *(char *)a2;
            goto LABEL_740;
          }
          if ( a5 == 10 )
          {
            v339 = v12 - 2;
            if ( !v339 )
            {
              v127 = *(char *)a2;
              goto LABEL_240;
            }
            v340 = v339 - 1;
            if ( !v340 )
            {
              v124 = *(char *)a2;
              goto LABEL_234;
            }
            v341 = v340 - 1;
            if ( !v341 )
            {
              v121 = *(char *)a2;
              goto LABEL_228;
            }
            v342 = v341 - 1;
            if ( !v342 )
            {
              v211 = *(char *)a2;
              goto LABEL_408;
            }
            if ( v342 != 1 )
              goto LABEL_73;
            v118 = *(char *)a2;
            goto LABEL_223;
          }
          if ( a5 != 11 )
          {
            if ( a5 == 14 )
            {
LABEL_707:
              v335 = v12 - 2;
              if ( v335 )
              {
                v336 = v335 - 1;
                if ( v336 )
                {
                  v337 = v336 - 1;
                  if ( v337 )
                  {
                    v338 = v337 - 1;
                    if ( v338 )
                    {
                      if ( v338 != 1 )
                        goto LABEL_73;
                      v89 = *(char *)a2;
                      goto LABEL_807;
                    }
                    v90 = *(char *)a2;
                    goto LABEL_809;
                  }
                  v91 = *(char *)a2;
                  goto LABEL_811;
                }
                v92 = *(char *)a2;
                goto LABEL_813;
              }
              goto LABEL_738;
            }
            if ( a5 != 15 )
              goto LABEL_73;
          }
          v331 = v12 - 2;
          if ( !v331 )
          {
            v110 = *(char *)a2;
            goto LABEL_211;
          }
          v332 = v331 - 1;
          if ( !v332 )
          {
            v107 = *(char *)a2;
            goto LABEL_203;
          }
          v333 = v332 - 1;
          if ( !v333 )
          {
            v102 = *(char *)a2;
            goto LABEL_197;
          }
          v334 = v333 - 1;
          if ( !v334 )
          {
            v97 = *(char *)a2;
            goto LABEL_187;
          }
          if ( v334 != 1 )
            goto LABEL_73;
          v93 = *(char *)a2;
          goto LABEL_182;
        }
        if ( a5 != 1 || v12 != 2 )
          goto LABEL_73;
        if ( a2 )
          goto LABEL_12;
        v17 = Str2 == 0LL;
LABEL_20:
        if ( v17 )
          goto LABEL_13;
        goto LABEL_12;
      }
      if ( a1 != 8 )
      {
        if ( a1 != 9 )
        {
          if ( a1 != 10 )
          {
            if ( a1 != 11 )
            {
              v384 = a5 == 12;
              goto LABEL_844;
            }
LABEL_1239:
            if ( a5 <= 8 )
            {
              if ( a5 != 8 )
              {
                switch ( a5 )
                {
                  case 2u:
                    v413 = v12 - 2;
                    if ( !v413 )
                    {
                      v400 = *(char *)Str2;
                      goto LABEL_872;
                    }
                    v414 = v413 - 1;
                    if ( !v414 )
                    {
                      v398 = *(char *)Str2;
                      goto LABEL_868;
                    }
                    v415 = v414 - 1;
                    if ( !v415 )
                    {
                      v396 = *(char *)Str2;
                      goto LABEL_864;
                    }
                    v416 = v415 - 1;
                    if ( !v416 )
                    {
                      v394 = *(char *)Str2;
                      goto LABEL_860;
                    }
                    if ( v416 != 1 )
                      goto LABEL_73;
                    v392 = *(char *)Str2;
                    break;
                  case 3u:
                    v409 = v12 - 2;
                    if ( !v409 )
                    {
                      v400 = *(unsigned __int8 *)Str2;
                      goto LABEL_872;
                    }
                    v410 = v409 - 1;
                    if ( !v410 )
                    {
                      v398 = *(unsigned __int8 *)Str2;
                      goto LABEL_868;
                    }
                    v411 = v410 - 1;
                    if ( !v411 )
                    {
                      v396 = *(unsigned __int8 *)Str2;
                      goto LABEL_864;
                    }
                    v412 = v411 - 1;
                    if ( !v412 )
                    {
                      v394 = *(unsigned __int8 *)Str2;
                      goto LABEL_860;
                    }
                    if ( v412 != 1 )
                      goto LABEL_73;
                    v392 = *(unsigned __int8 *)Str2;
                    break;
                  case 4u:
                    v405 = v12 - 2;
                    if ( !v405 )
                    {
                      v400 = (__int16)*Str2;
                      goto LABEL_872;
                    }
                    v406 = v405 - 1;
                    if ( !v406 )
                    {
                      v398 = (__int16)*Str2;
                      goto LABEL_868;
                    }
                    v407 = v406 - 1;
                    if ( !v407 )
                    {
                      v396 = (__int16)*Str2;
                      goto LABEL_864;
                    }
                    v408 = v407 - 1;
                    if ( !v408 )
                    {
                      v394 = (__int16)*Str2;
                      goto LABEL_860;
                    }
                    if ( v408 != 1 )
                      goto LABEL_73;
                    v392 = (__int16)*Str2;
                    break;
                  case 5u:
                    v401 = v12 - 2;
                    if ( v401 )
                    {
                      v402 = v401 - 1;
                      if ( v402 )
                      {
                        v403 = v402 - 1;
                        if ( v403 )
                        {
                          v404 = v403 - 1;
                          if ( v404 )
                          {
                            if ( v404 != 1 )
                              goto LABEL_73;
                            v392 = *Str2;
                            break;
                          }
                          v394 = *Str2;
LABEL_860:
                          v393 = _mm_cvtsi32_si128(v394);
                          goto LABEL_861;
                        }
                        v396 = *Str2;
LABEL_864:
                        v395 = _mm_cvtsi32_si128(v396);
                        goto LABEL_865;
                      }
                      v398 = *Str2;
LABEL_868:
                      v397 = _mm_cvtsi32_si128(v398);
                      goto LABEL_869;
                    }
                    v400 = *Str2;
LABEL_872:
                    v399 = _mm_cvtsi32_si128(v400);
                    goto LABEL_873;
                  case 6u:
                    v532 = v12 - 2;
                    if ( v532 )
                    {
                      v533 = v532 - 1;
                      if ( v533 )
                      {
                        v534 = v533 - 1;
                        if ( v534 )
                        {
                          v535 = v534 - 1;
                          if ( v535 )
                          {
                            if ( v535 != 1 )
                              goto LABEL_73;
                            v391 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                            goto LABEL_857;
                          }
                          v393 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
LABEL_861:
                          *(_QWORD *)&v387 = *(_OWORD *)&_mm_cvtepi32_pd(v393);
                          goto LABEL_933;
                        }
                        v395 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
LABEL_865:
                        *(_QWORD *)&v388 = *(_OWORD *)&_mm_cvtepi32_pd(v395);
                        goto LABEL_936;
                      }
                      v397 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
LABEL_869:
                      *(_QWORD *)&v389 = *(_OWORD *)&_mm_cvtepi32_pd(v397);
                      goto LABEL_939;
                    }
                    v399 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
LABEL_873:
                    *(_QWORD *)&v390 = *(_OWORD *)&_mm_cvtepi32_pd(v399);
                    goto LABEL_854;
                  case 7u:
                    v528 = v12 - 2;
                    if ( v528 )
                    {
                      v529 = v528 - 1;
                      if ( v529 )
                      {
                        v530 = v529 - 1;
                        if ( v530 )
                        {
                          v531 = v530 - 1;
                          if ( v531 )
                          {
                            if ( v531 != 1 )
                              goto LABEL_73;
                            v386 = (double)*(int *)Str2;
                            goto LABEL_930;
                          }
                          v387 = (double)*(int *)Str2;
LABEL_933:
                          v186 = *(double *)a2 < v387;
                          goto LABEL_347;
                        }
                        v388 = (double)*(int *)Str2;
LABEL_936:
                        v191 = v388 < *(double *)a2;
                        v192 = v388 == *(double *)a2;
                        goto LABEL_355;
                      }
                      v389 = (double)*(int *)Str2;
LABEL_939:
                      v191 = *(double *)a2 < v389;
                      v192 = *(double *)a2 == v389;
                      goto LABEL_355;
                    }
                    v390 = (double)*(int *)Str2;
LABEL_854:
                    v17 = *(double *)a2 == v390;
                    goto LABEL_20;
                  default:
                    goto LABEL_73;
                }
                v391 = _mm_cvtsi32_si128(v392);
LABEL_857:
                *(_QWORD *)&v386 = *(_OWORD *)&_mm_cvtepi32_pd(v391);
                goto LABEL_930;
              }
              goto LABEL_1265;
            }
            if ( a5 == 9 )
            {
              v544 = v12 - 2;
              if ( !v544 )
              {
                v390 = (double)(int)*(_QWORD *)Str2;
                if ( *(__int64 *)Str2 < 0 )
                  v390 = v390 + 1.844674407370955e19;
                goto LABEL_854;
              }
              v545 = v544 - 1;
              if ( !v545 )
              {
                v389 = (double)(int)*(_QWORD *)Str2;
                if ( *(__int64 *)Str2 < 0 )
                  v389 = v389 + 1.844674407370955e19;
                goto LABEL_939;
              }
              v546 = v545 - 1;
              if ( !v546 )
              {
                v388 = (double)(int)*(_QWORD *)Str2;
                if ( *(__int64 *)Str2 < 0 )
                  v388 = v388 + 1.844674407370955e19;
                goto LABEL_936;
              }
              v547 = v546 - 1;
              if ( !v547 )
              {
                v387 = (double)(int)*(_QWORD *)Str2;
                if ( *(__int64 *)Str2 < 0 )
                  v387 = v387 + 1.844674407370955e19;
                goto LABEL_933;
              }
              if ( v547 != 1 )
                goto LABEL_73;
              v386 = (double)(int)*(_QWORD *)Str2;
              if ( *(__int64 *)Str2 < 0 )
                v386 = v386 + 1.844674407370955e19;
              goto LABEL_930;
            }
            if ( a5 == 10 )
            {
              v540 = v12 - 2;
              if ( !v540 )
              {
                v390 = *(float *)Str2;
                goto LABEL_854;
              }
              v541 = v540 - 1;
              if ( !v541 )
              {
                v389 = *(float *)Str2;
                goto LABEL_939;
              }
              v542 = v541 - 1;
              if ( !v542 )
              {
                v388 = *(float *)Str2;
                goto LABEL_936;
              }
              v543 = v542 - 1;
              if ( !v543 )
              {
                v387 = *(float *)Str2;
                goto LABEL_933;
              }
              if ( v543 != 1 )
                goto LABEL_73;
              v386 = *(float *)Str2;
              goto LABEL_930;
            }
            if ( a5 != 11 )
            {
              if ( a5 == 14 )
              {
LABEL_1265:
                v536 = v12 - 2;
                if ( !v536 )
                {
                  v390 = (double)(int)*(_QWORD *)Str2;
                  goto LABEL_854;
                }
                v537 = v536 - 1;
                if ( !v537 )
                {
                  v389 = (double)(int)*(_QWORD *)Str2;
                  goto LABEL_939;
                }
                v538 = v537 - 1;
                if ( !v538 )
                {
                  v388 = (double)(int)*(_QWORD *)Str2;
                  goto LABEL_936;
                }
                v539 = v538 - 1;
                if ( !v539 )
                {
                  v387 = (double)(int)*(_QWORD *)Str2;
                  goto LABEL_933;
                }
                if ( v539 != 1 )
                  goto LABEL_73;
                v386 = (double)(int)*(_QWORD *)Str2;
LABEL_930:
                v186 = v386 < *(double *)a2;
                goto LABEL_347;
              }
              if ( a5 != 15 )
                goto LABEL_73;
            }
            v417 = v12 - 2;
            if ( v417 )
            {
              v418 = v417 - 1;
              if ( v418 )
              {
                v419 = v418 - 1;
                if ( v419 )
                {
                  v420 = v419 - 1;
                  if ( v420 )
                  {
                    if ( v420 != 1 )
                      goto LABEL_73;
                    v95 = *(double *)Str2 < *(double *)a2;
                    goto LABEL_194;
                  }
                  v98 = *(double *)a2;
                  goto LABEL_190;
                }
                v104 = *(double *)Str2 < *(double *)a2;
                v105 = *(double *)Str2 == *(double *)a2;
LABEL_208:
                v28 = !v104 && !v105;
                goto LABEL_64;
              }
              v108 = *(double *)a2;
              goto LABEL_206;
            }
            v111 = *(double *)a2;
            goto LABEL_214;
          }
          if ( a5 <= 8 )
          {
            if ( a5 != 8 )
            {
              switch ( a5 )
              {
                case 2u:
                  v455 = v12 - 2;
                  if ( !v455 )
                  {
                    v442 = *(char *)Str2;
                    goto LABEL_981;
                  }
                  v456 = v455 - 1;
                  if ( !v456 )
                  {
                    v440 = *(char *)Str2;
                    goto LABEL_977;
                  }
                  v457 = v456 - 1;
                  if ( !v457 )
                  {
                    v438 = *(char *)Str2;
                    goto LABEL_973;
                  }
                  v458 = v457 - 1;
                  if ( !v458 )
                  {
                    v436 = *(char *)Str2;
                    goto LABEL_969;
                  }
                  if ( v458 != 1 )
                    goto LABEL_73;
                  v434 = *(char *)Str2;
                  break;
                case 3u:
                  v451 = v12 - 2;
                  if ( !v451 )
                  {
                    v442 = *(unsigned __int8 *)Str2;
                    goto LABEL_981;
                  }
                  v452 = v451 - 1;
                  if ( !v452 )
                  {
                    v440 = *(unsigned __int8 *)Str2;
                    goto LABEL_977;
                  }
                  v453 = v452 - 1;
                  if ( !v453 )
                  {
                    v438 = *(unsigned __int8 *)Str2;
                    goto LABEL_973;
                  }
                  v454 = v453 - 1;
                  if ( !v454 )
                  {
                    v436 = *(unsigned __int8 *)Str2;
                    goto LABEL_969;
                  }
                  if ( v454 != 1 )
                    goto LABEL_73;
                  v434 = *(unsigned __int8 *)Str2;
                  break;
                case 4u:
                  v447 = v12 - 2;
                  if ( !v447 )
                  {
                    v442 = (__int16)*Str2;
                    goto LABEL_981;
                  }
                  v448 = v447 - 1;
                  if ( !v448 )
                  {
                    v440 = (__int16)*Str2;
                    goto LABEL_977;
                  }
                  v449 = v448 - 1;
                  if ( !v449 )
                  {
                    v438 = (__int16)*Str2;
                    goto LABEL_973;
                  }
                  v450 = v449 - 1;
                  if ( !v450 )
                  {
                    v436 = (__int16)*Str2;
                    goto LABEL_969;
                  }
                  if ( v450 != 1 )
                    goto LABEL_73;
                  v434 = (__int16)*Str2;
                  break;
                case 5u:
                  v443 = v12 - 2;
                  if ( v443 )
                  {
                    v444 = v443 - 1;
                    if ( v444 )
                    {
                      v445 = v444 - 1;
                      if ( v445 )
                      {
                        v446 = v445 - 1;
                        if ( v446 )
                        {
                          if ( v446 != 1 )
                            goto LABEL_73;
                          v434 = *Str2;
                          break;
                        }
                        v436 = *Str2;
LABEL_969:
                        v435 = _mm_cvtsi32_si128(v436);
                        goto LABEL_970;
                      }
                      v438 = *Str2;
LABEL_973:
                      v437 = _mm_cvtsi32_si128(v438);
                      goto LABEL_974;
                    }
                    v440 = *Str2;
LABEL_977:
                    v439 = _mm_cvtsi32_si128(v440);
                    goto LABEL_978;
                  }
                  v442 = *Str2;
LABEL_981:
                  v441 = _mm_cvtsi32_si128(v442);
                  goto LABEL_982;
                case 6u:
                  v429 = v12 - 2;
                  if ( v429 )
                  {
                    v430 = v429 - 1;
                    if ( v430 )
                    {
                      v431 = v430 - 1;
                      if ( v431 )
                      {
                        v432 = v431 - 1;
                        if ( v432 )
                        {
                          if ( v432 != 1 )
                            goto LABEL_73;
                          v433 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                          goto LABEL_966;
                        }
                        v435 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
LABEL_970:
                        LODWORD(v426) = _mm_cvtepi32_ps(v435).m128_u32[0];
                        goto LABEL_1062;
                      }
                      v437 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
LABEL_974:
                      LODWORD(v427) = _mm_cvtepi32_ps(v437).m128_u32[0];
                      goto LABEL_1065;
                    }
                    v439 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
LABEL_978:
                    LODWORD(v428) = _mm_cvtepi32_ps(v439).m128_u32[0];
                    goto LABEL_1068;
                  }
                  v441 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
LABEL_982:
                  LODWORD(v112) = _mm_cvtepi32_ps(v441).m128_u32[0];
                  goto LABEL_216;
                case 7u:
                  v421 = v12 - 2;
                  if ( v421 )
                  {
                    v422 = v421 - 1;
                    if ( v422 )
                    {
                      v423 = v422 - 1;
                      if ( v423 )
                      {
                        v424 = v423 - 1;
                        if ( v424 )
                        {
                          if ( v424 != 1 )
                            goto LABEL_73;
                          v425 = (float)*(int *)Str2;
                          goto LABEL_1059;
                        }
                        v426 = (float)*(int *)Str2;
LABEL_1062:
                        v186 = *(float *)a2 < v426;
                        goto LABEL_347;
                      }
                      v427 = (float)*(int *)Str2;
LABEL_1065:
                      v191 = v427 < *(float *)a2;
                      v192 = v427 == *(float *)a2;
                      goto LABEL_355;
                    }
                    v428 = (float)*(int *)Str2;
LABEL_1068:
                    v191 = *(float *)a2 < v428;
                    v192 = *(float *)a2 == v428;
                    goto LABEL_355;
                  }
                  v112 = (float)*(int *)Str2;
LABEL_216:
                  v17 = *(float *)a2 == v112;
                  goto LABEL_20;
                default:
                  goto LABEL_73;
              }
              v433 = _mm_cvtsi32_si128(v434);
LABEL_966:
              LODWORD(v425) = _mm_cvtepi32_ps(v433).m128_u32[0];
              goto LABEL_1059;
            }
            goto LABEL_1030;
          }
          if ( a5 == 9 )
          {
            v471 = v12 - 2;
            if ( !v471 )
            {
              v112 = (float)(int)*(_QWORD *)Str2;
              if ( *(__int64 *)Str2 < 0 )
                v112 = v112 + 1.8446744e19;
              goto LABEL_216;
            }
            v472 = v471 - 1;
            if ( !v472 )
            {
              v428 = (float)(int)*(_QWORD *)Str2;
              if ( *(__int64 *)Str2 < 0 )
                v428 = v428 + 1.8446744e19;
              goto LABEL_1068;
            }
            v473 = v472 - 1;
            if ( !v473 )
            {
              v427 = (float)(int)*(_QWORD *)Str2;
              if ( *(__int64 *)Str2 < 0 )
                v427 = v427 + 1.8446744e19;
              goto LABEL_1065;
            }
            v474 = v473 - 1;
            if ( !v474 )
            {
              v426 = (float)(int)*(_QWORD *)Str2;
              if ( *(__int64 *)Str2 < 0 )
                v426 = v426 + 1.8446744e19;
              goto LABEL_1062;
            }
            if ( v474 != 1 )
              goto LABEL_73;
            v425 = (float)(int)*(_QWORD *)Str2;
            if ( *(__int64 *)Str2 < 0 )
              v425 = v425 + 1.8446744e19;
            goto LABEL_1059;
          }
          if ( a5 == 10 )
          {
            v467 = v12 - 2;
            if ( v467 )
            {
              v468 = v467 - 1;
              if ( v468 )
              {
                v469 = v468 - 1;
                if ( !v469 )
                {
                  v104 = *(float *)Str2 < *(float *)a2;
                  v105 = *(float *)Str2 == *(float *)a2;
                  goto LABEL_208;
                }
                v470 = v469 - 1;
                if ( v470 )
                {
                  if ( v470 != 1 )
                    goto LABEL_73;
                  v95 = *(float *)Str2 < *(float *)a2;
                  goto LABEL_194;
                }
                v100 = *(float *)a2;
                goto LABEL_193;
              }
              v125 = *(float *)a2;
              goto LABEL_237;
            }
            v128 = *(float *)a2;
            goto LABEL_243;
          }
          if ( a5 != 11 )
          {
            if ( a5 == 14 )
            {
LABEL_1030:
              v463 = v12 - 2;
              if ( !v463 )
              {
                v112 = (float)(int)*(_QWORD *)Str2;
                goto LABEL_216;
              }
              v464 = v463 - 1;
              if ( !v464 )
              {
                v428 = (float)(int)*(_QWORD *)Str2;
                goto LABEL_1068;
              }
              v465 = v464 - 1;
              if ( !v465 )
              {
                v427 = (float)(int)*(_QWORD *)Str2;
                goto LABEL_1065;
              }
              v466 = v465 - 1;
              if ( !v466 )
              {
                v426 = (float)(int)*(_QWORD *)Str2;
                goto LABEL_1062;
              }
              if ( v466 != 1 )
                goto LABEL_73;
              v425 = (float)(int)*(_QWORD *)Str2;
LABEL_1059:
              v186 = v425 < *(float *)a2;
              goto LABEL_347;
            }
            if ( a5 != 15 )
              goto LABEL_73;
          }
          v459 = v12 - 2;
          if ( !v459 )
          {
            v111 = *(float *)a2;
            goto LABEL_214;
          }
          v460 = v459 - 1;
          if ( !v460 )
          {
            v108 = *(float *)a2;
            goto LABEL_206;
          }
          v461 = v460 - 1;
          if ( !v461 )
          {
            v103 = *(float *)a2;
            goto LABEL_200;
          }
          v462 = v461 - 1;
          if ( !v462 )
          {
            v98 = *(float *)a2;
            goto LABEL_190;
          }
          if ( v462 != 1 )
            goto LABEL_73;
          v94 = *(float *)a2;
LABEL_184:
          v95 = *(double *)Str2 < v94;
LABEL_194:
          v28 = !v95;
          goto LABEL_64;
        }
        if ( a5 <= 8 )
        {
          if ( a5 != 8 )
          {
            if ( a5 != 2 )
            {
              if ( a5 != 3 )
              {
                if ( a5 != 4 )
                {
                  if ( a5 != 5 )
                  {
                    if ( a5 != 6 )
                    {
                      if ( a5 != 7 )
                        goto LABEL_73;
                      v475 = v12 - 2;
                      if ( v475 )
                      {
                        v476 = v475 - 1;
                        if ( v476 )
                        {
                          v477 = v476 - 1;
                          if ( v477 )
                          {
                            v478 = v477 - 1;
                            if ( v478 )
                            {
                              if ( v478 != 1 )
                                goto LABEL_73;
                              v185 = *(unsigned int *)Str2;
                              goto LABEL_342;
                            }
                            v187 = *(unsigned int *)Str2;
LABEL_346:
                            v186 = *(_QWORD *)a2 < v187;
                            goto LABEL_347;
                          }
                          v189 = *(unsigned int *)Str2;
LABEL_350:
                          v188 = *(_QWORD *)a2 < v189;
                          goto LABEL_351;
                        }
                        v193 = *(unsigned int *)Str2;
LABEL_354:
                        v191 = *(_QWORD *)a2 < v193;
                        v192 = *(_QWORD *)a2 == v193;
                        goto LABEL_355;
                      }
                      goto LABEL_1085;
                    }
                    v479 = v12 - 2;
                    if ( v479 )
                    {
                      v480 = v479 - 1;
                      if ( !v480 )
                      {
                        v193 = *(int *)Str2;
                        goto LABEL_354;
                      }
                      v481 = v480 - 1;
                      if ( !v481 )
                      {
                        v189 = *(int *)Str2;
                        goto LABEL_350;
                      }
                      v482 = v481 - 1;
                      if ( !v482 )
                      {
                        v187 = *(int *)Str2;
                        goto LABEL_346;
                      }
                      if ( v482 != 1 )
                        goto LABEL_73;
                      v185 = *(int *)Str2;
LABEL_342:
                      v183 = *(_QWORD *)a2 < v185;
                      v184 = *(_QWORD *)a2 == v185;
LABEL_343:
                      v18 = v183 || v184;
                      goto LABEL_23;
                    }
LABEL_1095:
                    v79 = *(int *)Str2;
                    goto LABEL_160;
                  }
                  v483 = v12 - 2;
                  if ( v483 )
                  {
                    v484 = v483 - 1;
                    if ( !v484 )
                    {
                      v193 = *Str2;
                      goto LABEL_354;
                    }
                    v485 = v484 - 1;
                    if ( !v485 )
                    {
                      v189 = *Str2;
                      goto LABEL_350;
                    }
                    v486 = v485 - 1;
                    if ( !v486 )
                    {
                      v187 = *Str2;
                      goto LABEL_346;
                    }
                    if ( v486 != 1 )
                      goto LABEL_73;
                    v185 = *Str2;
                    goto LABEL_342;
                  }
LABEL_1105:
                  v79 = *Str2;
                  goto LABEL_160;
                }
                v487 = v12 - 2;
                if ( v487 )
                {
                  v488 = v487 - 1;
                  if ( !v488 )
                  {
                    v193 = (__int16)*Str2;
                    goto LABEL_354;
                  }
                  v489 = v488 - 1;
                  if ( !v489 )
                  {
                    v189 = (__int16)*Str2;
                    goto LABEL_350;
                  }
                  v490 = v489 - 1;
                  if ( !v490 )
                  {
                    v187 = (__int16)*Str2;
                    goto LABEL_346;
                  }
                  if ( v490 != 1 )
                    goto LABEL_73;
                  v185 = (__int16)*Str2;
                  goto LABEL_342;
                }
LABEL_1115:
                v79 = (__int16)*Str2;
                goto LABEL_160;
              }
              v491 = v12 - 2;
              if ( v491 )
              {
                v492 = v491 - 1;
                if ( !v492 )
                {
                  v193 = *(unsigned __int8 *)Str2;
                  goto LABEL_354;
                }
                v493 = v492 - 1;
                if ( !v493 )
                {
                  v189 = *(unsigned __int8 *)Str2;
                  goto LABEL_350;
                }
                v494 = v493 - 1;
                if ( !v494 )
                {
                  v187 = *(unsigned __int8 *)Str2;
                  goto LABEL_346;
                }
                if ( v494 != 1 )
                  goto LABEL_73;
                v185 = *(unsigned __int8 *)Str2;
                goto LABEL_342;
              }
LABEL_1125:
              v79 = *(unsigned __int8 *)Str2;
              goto LABEL_160;
            }
            v495 = v12 - 2;
            if ( v495 )
            {
              v496 = v495 - 1;
              if ( !v496 )
              {
                v193 = *(char *)Str2;
                goto LABEL_354;
              }
              v497 = v496 - 1;
              if ( !v497 )
              {
                v189 = *(char *)Str2;
                goto LABEL_350;
              }
              v498 = v497 - 1;
              if ( !v498 )
              {
                v187 = *(char *)Str2;
                goto LABEL_346;
              }
              if ( v498 != 1 )
                goto LABEL_73;
              v185 = *(char *)Str2;
              goto LABEL_342;
            }
LABEL_159:
            v79 = *(char *)Str2;
LABEL_160:
            v78 = *(_QWORD *)a2 == v79;
            goto LABEL_161;
          }
          goto LABEL_1147;
        }
        if ( a5 == 9 )
          goto LABEL_1147;
        if ( a5 != 10 )
        {
          if ( a5 == 11 )
          {
LABEL_1140:
            v499 = v12 - 2;
            if ( !v499 )
            {
              v111 = (double)(int)*(_QWORD *)a2;
              if ( *(__int64 *)a2 < 0 )
                v111 = v111 + 1.844674407370955e19;
              goto LABEL_214;
            }
            v500 = v499 - 1;
            if ( !v500 )
            {
              v108 = (double)(int)*(_QWORD *)a2;
              if ( *(__int64 *)a2 < 0 )
                v108 = v108 + 1.844674407370955e19;
              goto LABEL_206;
            }
            v501 = v500 - 1;
            if ( !v501 )
            {
              v103 = (double)(int)*(_QWORD *)a2;
              if ( *(__int64 *)a2 < 0 )
                v103 = v103 + 1.844674407370955e19;
              goto LABEL_200;
            }
            v502 = v501 - 1;
            if ( !v502 )
            {
              v98 = (double)(int)*(_QWORD *)a2;
              if ( *(__int64 *)a2 < 0 )
                v98 = v98 + 1.844674407370955e19;
              goto LABEL_190;
            }
            if ( v502 != 1 )
              goto LABEL_73;
            v94 = (double)(int)*(_QWORD *)a2;
            if ( *(__int64 *)a2 < 0 )
              v94 = v94 + 1.844674407370955e19;
            goto LABEL_184;
          }
          if ( a5 != 14 )
          {
            if ( a5 != 15 )
              goto LABEL_73;
            goto LABEL_1140;
          }
LABEL_1147:
          v503 = v12 - 2;
          if ( v503 )
          {
            v504 = v503 - 1;
            if ( !v504 )
            {
              v140 = *(_QWORD *)a2 < *(_QWORD *)Str2;
              v141 = *(_QWORD *)a2 == *(_QWORD *)Str2;
              goto LABEL_264;
            }
            v505 = v504 - 1;
            if ( !v505 )
            {
              v25 = *(_QWORD *)a2 < *(_QWORD *)Str2;
              goto LABEL_55;
            }
            v506 = v505 - 1;
            if ( !v506 )
            {
              v137 = *(_QWORD *)a2 < *(_QWORD *)Str2;
              goto LABEL_256;
            }
            if ( v506 != 1 )
              goto LABEL_73;
            v134 = *(_QWORD *)a2 < *(_QWORD *)Str2;
            v135 = *(_QWORD *)a2 == *(_QWORD *)Str2;
LABEL_251:
            v20 = v134 || v135;
            goto LABEL_34;
          }
          goto LABEL_1224;
        }
        v507 = v12 - 2;
        if ( !v507 )
        {
          v128 = (float)(int)*(_QWORD *)a2;
          if ( *(__int64 *)a2 < 0 )
            v128 = v128 + 1.8446744e19;
          goto LABEL_243;
        }
        v508 = v507 - 1;
        if ( !v508 )
        {
          v125 = (float)(int)*(_QWORD *)a2;
          if ( *(__int64 *)a2 < 0 )
            v125 = v125 + 1.8446744e19;
          goto LABEL_237;
        }
        v509 = v508 - 1;
        if ( !v509 )
        {
          v122 = (float)(int)*(_QWORD *)a2;
          if ( *(__int64 *)a2 < 0 )
            v122 = v122 + 1.8446744e19;
          goto LABEL_231;
        }
        v510 = v509 - 1;
        if ( !v510 )
        {
          v100 = (float)(int)*(_QWORD *)a2;
          if ( *(__int64 *)a2 < 0 )
            v100 = v100 + 1.8446744e19;
          goto LABEL_193;
        }
        if ( v510 != 1 )
          goto LABEL_73;
        v119 = (float)(int)*(_QWORD *)a2;
        if ( *(__int64 *)a2 < 0 )
          v119 = v119 + 1.8446744e19;
LABEL_225:
        v95 = *(float *)Str2 < v119;
        goto LABEL_194;
      }
LABEL_1283:
      if ( a5 <= 8 )
      {
        if ( a5 != 8 )
        {
          switch ( a5 )
          {
            case 2u:
              v568 = v12 - 2;
              if ( !v568 )
                goto LABEL_159;
              v569 = v568 - 1;
              if ( !v569 )
              {
                v64 = *(char *)Str2;
                goto LABEL_128;
              }
              v570 = v569 - 1;
              if ( !v570 )
              {
                v59 = *(char *)Str2;
                goto LABEL_122;
              }
              v571 = v570 - 1;
              if ( !v571 )
              {
                v55 = *(char *)Str2;
                goto LABEL_116;
              }
              if ( v571 != 1 )
                goto LABEL_73;
              v51 = *(char *)Str2;
              break;
            case 3u:
              v564 = v12 - 2;
              if ( !v564 )
                goto LABEL_1125;
              v565 = v564 - 1;
              if ( !v565 )
              {
                v64 = *(unsigned __int8 *)Str2;
                goto LABEL_128;
              }
              v566 = v565 - 1;
              if ( !v566 )
              {
                v59 = *(unsigned __int8 *)Str2;
                goto LABEL_122;
              }
              v567 = v566 - 1;
              if ( !v567 )
              {
                v55 = *(unsigned __int8 *)Str2;
                goto LABEL_116;
              }
              if ( v567 != 1 )
                goto LABEL_73;
              v51 = *(unsigned __int8 *)Str2;
              break;
            case 4u:
              v560 = v12 - 2;
              if ( !v560 )
                goto LABEL_1115;
              v561 = v560 - 1;
              if ( !v561 )
              {
                v64 = (__int16)*Str2;
                goto LABEL_128;
              }
              v562 = v561 - 1;
              if ( !v562 )
              {
                v59 = (__int16)*Str2;
                goto LABEL_122;
              }
              v563 = v562 - 1;
              if ( !v563 )
              {
                v55 = (__int16)*Str2;
                goto LABEL_116;
              }
              if ( v563 != 1 )
                goto LABEL_73;
              v51 = (__int16)*Str2;
              break;
            case 5u:
              v556 = v12 - 2;
              if ( !v556 )
                goto LABEL_1105;
              v557 = v556 - 1;
              if ( !v557 )
              {
                v64 = *Str2;
                goto LABEL_128;
              }
              v558 = v557 - 1;
              if ( !v558 )
              {
                v59 = *Str2;
                goto LABEL_122;
              }
              v559 = v558 - 1;
              if ( !v559 )
              {
                v55 = *Str2;
                goto LABEL_116;
              }
              if ( v559 != 1 )
                goto LABEL_73;
              v51 = *Str2;
              break;
            case 6u:
              v552 = v12 - 2;
              if ( !v552 )
                goto LABEL_1095;
              v553 = v552 - 1;
              if ( !v553 )
              {
                v64 = *(int *)Str2;
                goto LABEL_128;
              }
              v554 = v553 - 1;
              if ( !v554 )
              {
                v59 = *(int *)Str2;
                goto LABEL_122;
              }
              v555 = v554 - 1;
              if ( !v555 )
              {
                v55 = *(int *)Str2;
                goto LABEL_116;
              }
              if ( v555 != 1 )
                goto LABEL_73;
              v51 = *(int *)Str2;
              break;
            case 7u:
              v548 = v12 - 2;
              if ( !v548 )
              {
LABEL_1085:
                v79 = *(unsigned int *)Str2;
                goto LABEL_160;
              }
              v549 = v548 - 1;
              if ( v549 )
              {
                v550 = v549 - 1;
                if ( v550 )
                {
                  v551 = v550 - 1;
                  if ( v551 )
                  {
                    if ( v551 != 1 )
                      goto LABEL_73;
                    v51 = *(unsigned int *)Str2;
                    break;
                  }
                  v55 = *(unsigned int *)Str2;
LABEL_116:
                  v54 = __OFSUB__(*(_QWORD *)a2, v55);
                  v53 = *(_QWORD *)a2 - v55 < 0;
                  goto LABEL_117;
                }
                v59 = *(unsigned int *)Str2;
LABEL_122:
                v58 = __OFSUB__(*(_QWORD *)a2, v59);
                v57 = *(_QWORD *)a2 - v59 < 0;
                goto LABEL_123;
              }
              v64 = *(unsigned int *)Str2;
LABEL_128:
              v63 = __OFSUB__(*(_QWORD *)a2, v64);
              v61 = *(_QWORD *)a2 == v64;
              v62 = *(_QWORD *)a2 - v64 < 0;
              goto LABEL_129;
            default:
              goto LABEL_73;
          }
          v50 = __OFSUB__(*(_QWORD *)a2, v51);
          v48 = *(_QWORD *)a2 == v51;
          v49 = *(_QWORD *)a2 - v51 < 0;
          goto LABEL_111;
        }
LABEL_1199:
        v511 = v12 - 2;
        if ( v511 )
        {
          v512 = v511 - 1;
          if ( !v512 )
          {
            v42 = __OFSUB__(*(_QWORD *)a2, *(_QWORD *)Str2);
            v40 = *(_QWORD *)a2 == *(_QWORD *)Str2;
            v41 = (__int64)(*(_QWORD *)a2 - *(_QWORD *)Str2) < 0;
            goto LABEL_101;
          }
          v513 = v512 - 1;
          if ( !v513 )
          {
            v39 = __OFSUB__(*(_QWORD *)a2, *(_QWORD *)Str2);
            v38 = (__int64)(*(_QWORD *)a2 - *(_QWORD *)Str2) < 0;
            goto LABEL_98;
          }
          v514 = v513 - 1;
          if ( v514 )
          {
            if ( v514 != 1 )
              goto LABEL_73;
            v35 = __OFSUB__(*(_QWORD *)a2, *(_QWORD *)Str2);
            v33 = *(_QWORD *)a2 == *(_QWORD *)Str2;
            v34 = (__int64)(*(_QWORD *)a2 - *(_QWORD *)Str2) < 0;
            goto LABEL_92;
          }
          v37 = __OFSUB__(*(_QWORD *)a2, *(_QWORD *)Str2);
          v36 = (__int64)(*(_QWORD *)a2 - *(_QWORD *)Str2) < 0;
          goto LABEL_95;
        }
LABEL_1224:
        v19 = *(_QWORD *)a2 == *(_QWORD *)Str2;
        goto LABEL_33;
      }
      if ( a5 == 9 )
        goto LABEL_1147;
      if ( a5 == 10 )
      {
        v519 = v12 - 2;
        if ( !v519 )
        {
          v128 = (float)(int)*(_QWORD *)a2;
          goto LABEL_243;
        }
        v520 = v519 - 1;
        if ( !v520 )
        {
          v125 = (float)(int)*(_QWORD *)a2;
          goto LABEL_237;
        }
        v521 = v520 - 1;
        if ( !v521 )
        {
          v122 = (float)(int)*(_QWORD *)a2;
          goto LABEL_231;
        }
        v522 = v521 - 1;
        if ( !v522 )
        {
          v100 = (float)(int)*(_QWORD *)a2;
          goto LABEL_193;
        }
        if ( v522 != 1 )
          goto LABEL_73;
        v119 = (float)(int)*(_QWORD *)a2;
        goto LABEL_225;
      }
      if ( a5 != 11 )
      {
        if ( a5 == 14 )
          goto LABEL_1199;
        if ( a5 != 15 )
          goto LABEL_73;
      }
      v515 = v12 - 2;
      if ( !v515 )
      {
        v111 = (double)(int)*(_QWORD *)a2;
        goto LABEL_214;
      }
      v516 = v515 - 1;
      if ( !v516 )
      {
        v108 = (double)(int)*(_QWORD *)a2;
        goto LABEL_206;
      }
      v517 = v516 - 1;
      if ( !v517 )
      {
        v103 = (double)(int)*(_QWORD *)a2;
        goto LABEL_200;
      }
      v518 = v517 - 1;
      if ( !v518 )
      {
        v98 = (double)(int)*(_QWORD *)a2;
        goto LABEL_190;
      }
      if ( v518 != 1 )
        goto LABEL_73;
      v94 = (double)(int)*(_QWORD *)a2;
      goto LABEL_184;
    }
    if ( a1 <= 0x14 )
    {
      if ( a1 >= 0x13 )
        goto LABEL_73;
      switch ( a1 )
      {
        case 0xEu:
          goto LABEL_1283;
        case 0xFu:
          goto LABEL_1239;
        case 0x10u:
          if ( a5 != 16 )
            goto LABEL_73;
          v523 = v12 - 2;
          if ( v523 )
          {
            v524 = v523 - 1;
            if ( v524 )
            {
              v525 = v524 - 1;
              if ( v525 )
              {
                v526 = v525 - 1;
                if ( v526 )
                {
                  if ( v526 != 1 )
                    goto LABEL_73;
                  v527 = CompareFileTimeType(a2, Str2) + 1;
                }
                else
                {
                  v527 = CompareFileTimeType(a2, Str2);
                }
                v28 = v527 <= 1;
                goto LABEL_64;
              }
              v27 = (unsigned int)CompareFileTimeType(a2, Str2) == -1;
            }
            else
            {
              v27 = (unsigned int)CompareFileTimeType(a2, Str2) == 1;
            }
LABEL_63:
            v28 = v27;
            goto LABEL_64;
          }
          v26 = CompareFileTimeType(a2, Str2);
LABEL_62:
          v27 = v26 == 0;
          goto LABEL_63;
        case 0x11u:
          if ( a5 != 17 || v12 != 2 )
            goto LABEL_73;
          goto LABEL_32;
      }
      if ( a5 != 18 )
        goto LABEL_73;
      if ( v12 == 2 )
      {
LABEL_58:
        if ( !v14 )
        {
LABEL_68:
          if ( (_DWORD)v9 != a7 )
            goto LABEL_12;
          v17 = memcmp(a2, Str2, v9) == 0;
          goto LABEL_20;
        }
        if ( !(_DWORD)v9 || (_DWORD)v9 != a7 )
        {
          *a8 = 0;
          goto LABEL_14;
        }
        v26 = wcsicmp(a2, Str2);
        goto LABEL_62;
      }
      if ( v12 - 9 > 2 )
        goto LABEL_73;
      v18 = SubstringMatch(a2, Str2);
LABEL_23:
      *a8 = v18;
      goto LABEL_14;
    }
    if ( a1 != 21 )
    {
      switch ( a1 )
      {
        case 0x16u:
          v572 = a5 == 22;
          break;
        case 0x17u:
          v384 = a5 == 23;
LABEL_844:
          if ( !v384 )
            goto LABEL_73;
          goto LABEL_845;
        case 0x18u:
          v572 = a5 == 24;
          break;
        default:
          if ( a1 != 25 || a5 != 25 && a5 != 18 || v12 != 2 )
            goto LABEL_73;
          goto LABEL_58;
      }
      if ( !v572 || v12 != 2 )
        goto LABEL_73;
      goto LABEL_67;
    }
    if ( a5 == 21 && v12 == 2 )
    {
      if ( *((_DWORD *)a2 + 4) != *((_DWORD *)Str2 + 4) )
        goto LABEL_12;
      v573 = *(_QWORD *)a2 - *(_QWORD *)Str2;
      if ( *(_QWORD *)a2 == *(_QWORD *)Str2 )
        v573 = *((_QWORD *)a2 + 1) - *((_QWORD *)Str2 + 1);
      v17 = v573 == 0;
      goto LABEL_20;
    }
  }
LABEL_14:
  if ( v11 )
  {
    LOBYTE(v8) = *a8 == 0;
    *a8 = v8;
  }
  return v13;
}
