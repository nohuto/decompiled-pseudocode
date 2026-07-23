/*
 * XREFs of PropertyEval @ 0x1404E51A4
 * Callers:
 *     FilterEvalStrict @ 0x1404E4F24 (FilterEvalStrict.c)
 *     FilterEvalImpliedAnd @ 0x1404E8884 (FilterEvalImpliedAnd.c)
 * Callees:
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     ArrayContains @ 0x14023B43C (ArrayContains.c)
 *     StringListContains @ 0x1404BBD28 (StringListContains.c)
 *     CompareFileTimeType @ 0x1406E3E28 (CompareFileTimeType.c)
 *     StringListElementSubstringMatch @ 0x1406E4B4C (StringListElementSubstringMatch.c)
 *     SubstringMatch @ 0x1406E4C40 (SubstringMatch.c)
 */

__int64 __fastcall PropertyEval(
        unsigned int a1,
        wchar_t *a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        const wchar_t *Buf2,
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
  int v17; // eax
  bool v18; // zf
  int v19; // edx
  bool v20; // zf
  unsigned int v21; // ecx
  unsigned int v22; // r9d
  unsigned int v23; // r9d
  unsigned int v24; // r9d
  unsigned int v25; // r9d
  bool v26; // zf
  bool v27; // sf
  bool v28; // of
  bool v29; // sf
  bool v30; // of
  bool v31; // sf
  bool v32; // of
  bool v33; // zf
  bool v34; // sf
  bool v35; // of
  unsigned int v36; // r9d
  unsigned int v37; // r9d
  unsigned int v38; // r9d
  unsigned int v39; // r9d
  int v40; // ecx
  bool v41; // zf
  bool v42; // sf
  bool v43; // of
  __int64 v44; // rcx
  int v45; // ecx
  bool v46; // sf
  bool v47; // of
  __int64 v48; // rcx
  int v49; // ecx
  bool v50; // sf
  bool v51; // of
  __int64 v52; // rcx
  int v53; // ecx
  bool v54; // zf
  bool v55; // sf
  bool v56; // of
  __int64 v57; // rcx
  int v58; // ecx
  unsigned int v59; // r9d
  unsigned int v60; // r9d
  unsigned int v61; // r9d
  unsigned int v62; // r9d
  unsigned int v63; // r9d
  unsigned int v64; // r9d
  unsigned int v65; // r9d
  unsigned int v66; // r9d
  unsigned int v67; // r9d
  unsigned int v68; // r9d
  unsigned int v69; // r9d
  unsigned int v70; // r9d
  bool v71; // zf
  __int64 v72; // rcx
  unsigned int v73; // r9d
  unsigned int v74; // r9d
  unsigned int v75; // r9d
  unsigned int v76; // r9d
  __m128i v77; // xmm1
  unsigned int v78; // r9d
  unsigned int v79; // r9d
  unsigned int v80; // r9d
  unsigned int v81; // r9d
  __int64 v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // rcx
  unsigned int v86; // eax
  double v87; // xmm1_8
  bool v88; // cf
  __m128i v89; // xmm0
  unsigned int v90; // eax
  double v91; // xmm0_8
  __m128i v92; // xmm0
  float v93; // xmm0_4
  int v94; // ecx
  __m128i v95; // xmm1
  unsigned int v96; // eax
  double v97; // xmm1_8
  bool v98; // cf
  bool v99; // zf
  __m128i v100; // xmm0
  unsigned int v101; // eax
  double v102; // xmm0_8
  unsigned int v103; // eax
  __m128i v104; // xmm0
  unsigned int v105; // eax
  double v106; // xmm0_8
  float v107; // xmm1_4
  unsigned int v108; // r9d
  unsigned int v109; // r9d
  unsigned int v110; // r9d
  unsigned int v111; // r9d
  __m128i v112; // xmm1
  unsigned int v113; // eax
  float v114; // xmm1_4
  __m128i v115; // xmm1
  unsigned int v116; // eax
  float v117; // xmm1_4
  __m128i v118; // xmm0
  unsigned int v119; // eax
  float v120; // xmm0_4
  __m128i v121; // xmm0
  unsigned int v122; // eax
  float v123; // xmm0_4
  unsigned int v124; // r9d
  unsigned int v125; // r9d
  unsigned int v126; // r9d
  unsigned int v127; // r9d
  unsigned __int64 v128; // rcx
  bool v129; // cf
  bool v130; // zf
  unsigned __int64 v131; // rcx
  bool v132; // cf
  unsigned __int64 v133; // rcx
  bool v134; // cf
  unsigned __int64 v135; // rcx
  bool v136; // cf
  bool v137; // zf
  __int64 v138; // rcx
  unsigned int v139; // r9d
  unsigned int v140; // r9d
  unsigned int v141; // r9d
  unsigned int v142; // r9d
  unsigned int v143; // ecx
  unsigned int v144; // ecx
  unsigned int v145; // ecx
  unsigned int v146; // ecx
  int v147; // ecx
  unsigned int v148; // r9d
  unsigned int v149; // r9d
  unsigned int v150; // r9d
  unsigned int v151; // r9d
  int v152; // ecx
  int v153; // ecx
  int v154; // ecx
  int v155; // ecx
  unsigned int v156; // r9d
  unsigned int v157; // r9d
  unsigned int v158; // r9d
  unsigned int v159; // r9d
  unsigned int v160; // r9d
  unsigned int v161; // r9d
  unsigned int v162; // r9d
  unsigned int v163; // r9d
  int v164; // edx
  int v165; // ecx
  int v166; // edx
  int v167; // ecx
  int v168; // edx
  int v169; // ecx
  int v170; // edx
  int v171; // ecx
  int v172; // edx
  int v173; // ecx
  unsigned int v174; // r9d
  unsigned int v175; // r9d
  unsigned int v176; // r9d
  unsigned int v177; // r9d
  wchar_t v178; // cx
  bool v179; // cf
  bool v180; // zf
  unsigned __int64 v181; // rcx
  bool v182; // cf
  unsigned __int64 v183; // rcx
  bool v184; // cf
  unsigned __int64 v185; // rcx
  wchar_t v186; // cx
  bool v187; // cf
  bool v188; // zf
  unsigned __int64 v189; // rcx
  wchar_t v190; // cx
  unsigned int v191; // r9d
  unsigned int v192; // r9d
  unsigned int v193; // r9d
  unsigned int v194; // r9d
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
  unsigned int v207; // eax
  unsigned int v208; // r9d
  unsigned int v209; // r9d
  unsigned int v210; // r9d
  unsigned int v211; // r9d
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
  wchar_t v232; // cx
  __int16 v233; // cx
  __int16 v234; // cx
  wchar_t v235; // cx
  unsigned int v236; // r9d
  unsigned int v237; // r9d
  unsigned int v238; // r9d
  unsigned int v239; // r9d
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
  wchar_t v268; // cx
  wchar_t v269; // cx
  __int16 v270; // cx
  unsigned int v271; // r9d
  unsigned int v272; // r9d
  unsigned int v273; // r9d
  unsigned int v274; // r9d
  __int16 v275; // cx
  __int16 v276; // cx
  __int16 v277; // cx
  __int16 v278; // cx
  unsigned int v279; // r9d
  unsigned int v280; // r9d
  unsigned int v281; // r9d
  unsigned int v282; // r9d
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
  unsigned int v351; // ecx
  unsigned int v352; // ecx
  unsigned int v353; // ecx
  unsigned int v354; // ecx
  unsigned int v355; // r9d
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
  bool v383; // zf
  bool v384; // zf
  double v385; // xmm0_8
  double v386; // xmm1_8
  double v387; // xmm0_8
  double v388; // xmm1_8
  double v389; // xmm1_8
  __m128i v390; // xmm0
  unsigned int v391; // ecx
  __m128i v392; // xmm1
  unsigned int v393; // ecx
  __m128i v394; // xmm0
  unsigned int v395; // ecx
  __m128i v396; // xmm1
  unsigned int v397; // ecx
  __m128i v398; // xmm1
  unsigned int v399; // ecx
  unsigned int v400; // r9d
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
  float v424; // xmm0_4
  float v425; // xmm1_4
  float v426; // xmm0_4
  float v427; // xmm1_4
  unsigned int v428; // r9d
  unsigned int v429; // r9d
  unsigned int v430; // r9d
  unsigned int v431; // r9d
  __m128i v432; // xmm0
  unsigned int v433; // ecx
  __m128i v434; // xmm1
  unsigned int v435; // ecx
  __m128i v436; // xmm0
  unsigned int v437; // ecx
  __m128i v438; // xmm1
  unsigned int v439; // ecx
  __m128i v440; // xmm1
  unsigned int v441; // ecx
  unsigned int v442; // r9d
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
  int v522; // eax
  bool v523; // zf
  unsigned int v524; // r9d
  unsigned int v525; // r9d
  unsigned int v526; // r9d
  unsigned int v527; // r9d
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
    goto LABEL_40;
  v15 = 1;
  if ( v12 == 1 )
  {
    v17 = a1 != 0;
    goto LABEL_22;
  }
  if ( !a1 || !a5 )
    goto LABEL_14;
  if ( a1 > 0x1003 )
  {
    if ( a1 != 4109 )
    {
      if ( a1 != 8210 || ((a5 - 18) & 0xFFFFDFFF) != 0 )
        goto LABEL_40;
      switch ( v12 )
      {
        case 0x1000u:
          v17 = StringListContains(a2, a5, Buf2, v14);
          break;
        case 2u:
          v384 = v14 == 0;
LABEL_836:
          if ( !v384 )
            goto LABEL_40;
          goto LABEL_837;
        case 0x2000u:
        case 0x3000u:
        case 0x4000u:
          v17 = StringListElementSubstringMatch((_DWORD)a2, a5, (_DWORD)Buf2, v14, v12);
          break;
        default:
          goto LABEL_40;
      }
LABEL_22:
      *a8 = v17;
      goto LABEL_14;
    }
    if ( ((a5 - 13) & 0xFFFFEFFF) != 0 )
      goto LABEL_40;
    if ( v12 != 2 )
    {
      if ( v12 != 0x10000000 )
        goto LABEL_40;
      v17 = ArrayContains((__int64)a2, v9, (__int64)Buf2, a7);
      goto LABEL_22;
    }
LABEL_837:
    if ( (_DWORD)v9 != a7 )
      goto LABEL_12;
    v20 = memcmp(a2, Buf2, v9) == 0;
    goto LABEL_38;
  }
  if ( a1 == 4099 )
  {
LABEL_834:
    v384 = v12 == 2;
    goto LABEL_836;
  }
  if ( a1 <= 0xD )
  {
    if ( a1 == 13 )
    {
      if ( a5 == 13 && v12 == 2 )
      {
        if ( *(_DWORD *)a2 == *(_DWORD *)Buf2
          && *((_DWORD *)a2 + 1) == *((_DWORD *)Buf2 + 1)
          && *((_DWORD *)a2 + 2) == *((_DWORD *)Buf2 + 2) )
        {
          v20 = *((_DWORD *)a2 + 3) == *((_DWORD *)Buf2 + 3);
          goto LABEL_38;
        }
LABEL_12:
        v15 = 0;
LABEL_13:
        *a8 = v15;
        goto LABEL_14;
      }
LABEL_40:
      v13 = -1073741637;
      goto LABEL_14;
    }
    if ( a1 <= 7 )
    {
      if ( a1 != 7 )
      {
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
                              {
                                v22 = v12 - 2;
                                if ( v22 )
                                {
                                  v23 = v22 - 1;
                                  if ( v23 )
                                  {
                                    v24 = v23 - 1;
                                    if ( v24 )
                                    {
                                      v25 = v24 - 1;
                                      if ( v25 )
                                      {
                                        if ( v25 != 1 )
                                          goto LABEL_40;
                                        v28 = __OFSUB__(*(_DWORD *)a2, *(_DWORD *)Buf2);
                                        v26 = *(_DWORD *)a2 == *(_DWORD *)Buf2;
                                        v27 = *(_DWORD *)a2 - *(_DWORD *)Buf2 < 0;
                                        goto LABEL_65;
                                      }
                                      v30 = __OFSUB__(*(_DWORD *)a2, *(_DWORD *)Buf2);
                                      v29 = *(_DWORD *)a2 - *(_DWORD *)Buf2 < 0;
LABEL_68:
                                      v19 = v29 == v30;
                                      goto LABEL_34;
                                    }
                                    v32 = __OFSUB__(*(_DWORD *)a2, *(_DWORD *)Buf2);
                                    v31 = *(_DWORD *)a2 - *(_DWORD *)Buf2 < 0;
LABEL_71:
                                    v19 = v31 ^ v32;
                                    goto LABEL_34;
                                  }
                                  v35 = __OFSUB__(*(_DWORD *)a2, *(_DWORD *)Buf2);
                                  v33 = *(_DWORD *)a2 == *(_DWORD *)Buf2;
                                  v34 = *(_DWORD *)a2 - *(_DWORD *)Buf2 < 0;
LABEL_74:
                                  v19 = !(v34 ^ v35 | v33);
                                  goto LABEL_34;
                                }
                                goto LABEL_1344;
                              }
LABEL_729:
                              if ( v21 != 1 )
                                goto LABEL_40;
LABEL_730:
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
                                        goto LABEL_40;
                                      v129 = *(_DWORD *)a2 < *(_DWORD *)Buf2;
                                      v130 = *(_DWORD *)a2 == *(_DWORD *)Buf2;
                                      goto LABEL_226;
                                    }
                                    v132 = *(_DWORD *)a2 < *(_DWORD *)Buf2;
LABEL_231:
                                    v19 = !v132;
                                    goto LABEL_34;
                                  }
                                  v134 = *(_DWORD *)a2 < *(_DWORD *)Buf2;
                                  goto LABEL_236;
                                }
                                v136 = *(_DWORD *)a2 < *(_DWORD *)Buf2;
                                v137 = *(_DWORD *)a2 == *(_DWORD *)Buf2;
                                goto LABEL_241;
                              }
LABEL_1344:
                              v18 = *(_DWORD *)a2 == *(_DWORD *)Buf2;
                              goto LABEL_33;
                            }
                            v36 = v12 - 2;
                            if ( v36 )
                            {
                              v37 = v36 - 1;
                              if ( v37 )
                              {
                                v38 = v37 - 1;
                                if ( v38 )
                                {
                                  v39 = v38 - 1;
                                  if ( v39 )
                                  {
                                    if ( v39 != 1 )
                                      goto LABEL_40;
                                    v40 = *Buf2;
                                    goto LABEL_81;
                                  }
                                  v45 = *Buf2;
                                  goto LABEL_87;
                                }
                                v49 = *Buf2;
                                goto LABEL_93;
                              }
                              v53 = *Buf2;
                              goto LABEL_99;
                            }
                            goto LABEL_103;
                          }
                          v59 = v12 - 2;
                          if ( v59 )
                          {
                            v60 = v59 - 1;
                            if ( v60 )
                            {
                              v61 = v60 - 1;
                              if ( v61 )
                              {
                                v62 = v61 - 1;
                                if ( v62 )
                                {
                                  if ( v62 != 1 )
                                    goto LABEL_40;
                                  v40 = *(__int16 *)Buf2;
                                  goto LABEL_81;
                                }
                                v45 = *(__int16 *)Buf2;
LABEL_87:
                                v47 = __OFSUB__(*(_DWORD *)a2, v45);
                                v46 = *(_DWORD *)a2 - v45 < 0;
LABEL_90:
                                v17 = v46 == v47;
                                goto LABEL_22;
                              }
                              v49 = *(__int16 *)Buf2;
LABEL_93:
                              v51 = __OFSUB__(*(_DWORD *)a2, v49);
                              v50 = *(_DWORD *)a2 - v49 < 0;
LABEL_96:
                              v17 = v50 ^ v51;
                              goto LABEL_22;
                            }
                            v53 = *(__int16 *)Buf2;
LABEL_99:
                            v56 = __OFSUB__(*(_DWORD *)a2, v53);
                            v54 = *(_DWORD *)a2 == v53;
                            v55 = *(_DWORD *)a2 - v53 < 0;
LABEL_102:
                            v17 = !(v55 ^ v56 | v54);
                            goto LABEL_22;
                          }
LABEL_113:
                          v58 = *(__int16 *)Buf2;
                          goto LABEL_131;
                        }
                        v63 = v12 - 2;
                        if ( v63 )
                        {
                          v64 = v63 - 1;
                          if ( !v64 )
                          {
                            v53 = *(unsigned __int8 *)Buf2;
                            goto LABEL_99;
                          }
                          v65 = v64 - 1;
                          if ( !v65 )
                          {
                            v49 = *(unsigned __int8 *)Buf2;
                            goto LABEL_93;
                          }
                          v66 = v65 - 1;
                          if ( !v66 )
                          {
                            v45 = *(unsigned __int8 *)Buf2;
                            goto LABEL_87;
                          }
                          if ( v66 != 1 )
                            goto LABEL_40;
                          v40 = *(unsigned __int8 *)Buf2;
                          goto LABEL_81;
                        }
LABEL_123:
                        v58 = *(unsigned __int8 *)Buf2;
                        goto LABEL_131;
                      }
                      v67 = v12 - 2;
                      if ( v67 )
                      {
                        v68 = v67 - 1;
                        if ( !v68 )
                        {
                          v53 = *(char *)Buf2;
                          goto LABEL_99;
                        }
                        v69 = v68 - 1;
                        if ( !v69 )
                        {
                          v49 = *(char *)Buf2;
                          goto LABEL_93;
                        }
                        v70 = v69 - 1;
                        if ( !v70 )
                        {
                          v45 = *(char *)Buf2;
                          goto LABEL_87;
                        }
                        if ( v70 != 1 )
                          goto LABEL_40;
                        v40 = *(char *)Buf2;
LABEL_81:
                        v43 = __OFSUB__(*(_DWORD *)a2, v40);
                        v41 = *(_DWORD *)a2 == v40;
                        v42 = *(_DWORD *)a2 - v40 < 0;
LABEL_84:
                        v17 = v42 ^ v43 | v41;
                        goto LABEL_22;
                      }
LABEL_130:
                      v58 = *(char *)Buf2;
                      goto LABEL_131;
                    }
LABEL_146:
                    v78 = v12 - 2;
                    if ( v78 )
                    {
                      v79 = v78 - 1;
                      if ( v79 )
                      {
                        v80 = v79 - 1;
                        if ( v80 )
                        {
                          v81 = v80 - 1;
                          if ( v81 )
                          {
                            if ( v81 != 1 )
                              goto LABEL_40;
                            v82 = *(int *)a2;
                            goto LABEL_796;
                          }
                          v83 = *(int *)a2;
LABEL_798:
                          v30 = __OFSUB__(v83, *(_QWORD *)Buf2);
                          v29 = v83 - *(_QWORD *)Buf2 < 0;
                          goto LABEL_68;
                        }
                        v84 = *(int *)a2;
LABEL_800:
                        v32 = __OFSUB__(v84, *(_QWORD *)Buf2);
                        v31 = v84 - *(_QWORD *)Buf2 < 0;
                        goto LABEL_71;
                      }
                      v85 = *(int *)a2;
LABEL_802:
                      v35 = __OFSUB__(v85, *(_QWORD *)Buf2);
                      v33 = v85 == *(_QWORD *)Buf2;
                      v34 = v85 - *(_QWORD *)Buf2 < 0;
                      goto LABEL_74;
                    }
                    goto LABEL_242;
                  }
                  if ( a5 != 9 )
                  {
                    if ( a5 != 10 )
                    {
                      if ( a5 != 11 )
                      {
                        if ( a5 == 14 )
                          goto LABEL_146;
                        if ( a5 != 15 )
                          goto LABEL_40;
                      }
                      v73 = v12 - 2;
                      if ( v73 )
                      {
                        v74 = v73 - 1;
                        if ( v74 )
                        {
                          v75 = v74 - 1;
                          if ( v75 )
                          {
                            v76 = v75 - 1;
                            if ( v76 )
                            {
                              if ( v76 != 1 )
                                goto LABEL_40;
                              v77 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                              goto LABEL_156;
                            }
                            v89 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                            goto LABEL_161;
                          }
                          v95 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                          goto LABEL_171;
                        }
                        v100 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                        goto LABEL_177;
                      }
                      v104 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                      goto LABEL_187;
                    }
                    v108 = v12 - 2;
                    if ( v108 )
                    {
                      v109 = v108 - 1;
                      if ( v109 )
                      {
                        v110 = v109 - 1;
                        if ( v110 )
                        {
                          v111 = v110 - 1;
                          if ( v111 )
                          {
                            if ( v111 != 1 )
                              goto LABEL_40;
                            v112 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                            goto LABEL_199;
                          }
                          v92 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                          goto LABEL_165;
                        }
                        v115 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                        goto LABEL_204;
                      }
                      v118 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                      goto LABEL_210;
                    }
                    v121 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                    goto LABEL_216;
                  }
                  v124 = v12 - 2;
                  if ( !v124 )
                  {
LABEL_242:
                    v138 = *(int *)a2;
LABEL_716:
                    v18 = v138 == *(_QWORD *)Buf2;
                    goto LABEL_33;
                  }
                  v125 = v124 - 1;
                  if ( v125 )
                  {
                    v126 = v125 - 1;
                    if ( v126 )
                    {
                      v127 = v126 - 1;
                      if ( v127 )
                      {
                        if ( v127 != 1 )
                          goto LABEL_40;
                        v128 = *(int *)a2;
                        goto LABEL_225;
                      }
                      v131 = *(int *)a2;
LABEL_229:
                      v132 = v131 < *(_QWORD *)Buf2;
                      goto LABEL_231;
                    }
                    v133 = *(int *)a2;
LABEL_234:
                    v134 = v133 < *(_QWORD *)Buf2;
                    goto LABEL_236;
                  }
                  v135 = *(int *)a2;
LABEL_239:
                  v136 = v135 < *(_QWORD *)Buf2;
                  v137 = v135 == *(_QWORD *)Buf2;
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
                                goto LABEL_40;
                              v139 = v12 - 2;
                              if ( v139 )
                              {
                                v140 = v139 - 1;
                                if ( v140 )
                                {
                                  v141 = v140 - 1;
                                  if ( v141 )
                                  {
                                    v142 = v141 - 1;
                                    if ( v142 )
                                    {
                                      if ( v142 != 1 )
                                        goto LABEL_40;
                                      v143 = *a2;
                                      goto LABEL_257;
                                    }
                                    v144 = *a2;
LABEL_260:
                                    v132 = v144 < *(_DWORD *)Buf2;
                                    goto LABEL_231;
                                  }
                                  v145 = *a2;
LABEL_263:
                                  v134 = v145 < *(_DWORD *)Buf2;
                                  goto LABEL_236;
                                }
                                v146 = *a2;
LABEL_266:
                                v136 = v146 < *(_DWORD *)Buf2;
                                v137 = v146 == *(_DWORD *)Buf2;
                                goto LABEL_241;
                              }
                              goto LABEL_267;
                            }
                            v148 = v12 - 2;
                            if ( !v148 )
                            {
LABEL_267:
                              v147 = *a2;
LABEL_269:
                              v18 = v147 == *(_DWORD *)Buf2;
                              goto LABEL_33;
                            }
                            v149 = v148 - 1;
                            if ( v149 )
                            {
                              v150 = v149 - 1;
                              if ( v150 )
                              {
                                v151 = v150 - 1;
                                if ( v151 )
                                {
                                  if ( v151 != 1 )
                                    goto LABEL_40;
                                  v152 = *a2;
                                  goto LABEL_276;
                                }
                                v153 = *a2;
LABEL_279:
                                v30 = __OFSUB__(v153, *(_DWORD *)Buf2);
                                v29 = v153 - *(_DWORD *)Buf2 < 0;
                                goto LABEL_68;
                              }
                              v154 = *a2;
LABEL_282:
                              v32 = __OFSUB__(v154, *(_DWORD *)Buf2);
                              v31 = v154 - *(_DWORD *)Buf2 < 0;
                              goto LABEL_71;
                            }
                            v155 = *a2;
LABEL_285:
                            v35 = __OFSUB__(v155, *(_DWORD *)Buf2);
                            v33 = v155 == *(_DWORD *)Buf2;
                            v34 = v155 - *(_DWORD *)Buf2 < 0;
                            goto LABEL_74;
                          }
                          v156 = v12 - 2;
                          if ( v156 )
                          {
                            v157 = v156 - 1;
                            if ( v157 )
                            {
                              v158 = v157 - 1;
                              if ( v158 )
                              {
                                v159 = v158 - 1;
                                if ( v159 )
                                {
                                  if ( v159 != 1 )
                                    goto LABEL_40;
                                  v129 = *a2 < *Buf2;
                                  v130 = *a2 == *Buf2;
                                  goto LABEL_226;
                                }
                                v132 = *a2 < *Buf2;
                                goto LABEL_231;
                              }
                              v134 = *a2 < *Buf2;
                              goto LABEL_236;
                            }
                            v136 = *a2 < *Buf2;
                            v137 = *a2 == *Buf2;
                            goto LABEL_241;
                          }
LABEL_295:
                          v18 = *a2 == *Buf2;
                          goto LABEL_33;
                        }
                        v160 = v12 - 2;
                        if ( v160 )
                        {
                          v161 = v160 - 1;
                          if ( v161 )
                          {
                            v162 = v161 - 1;
                            if ( v162 )
                            {
                              v163 = v162 - 1;
                              if ( v163 )
                              {
                                if ( v163 != 1 )
                                  goto LABEL_40;
                                v164 = *a2;
                                v165 = *(__int16 *)Buf2;
                                goto LABEL_302;
                              }
                              v166 = *a2;
                              v167 = *(__int16 *)Buf2;
LABEL_305:
                              v47 = __OFSUB__(v166, v167);
                              v46 = v166 - v167 < 0;
                              goto LABEL_90;
                            }
                            v168 = *a2;
                            v169 = *(__int16 *)Buf2;
LABEL_308:
                            v51 = __OFSUB__(v168, v169);
                            v50 = v168 - v169 < 0;
                            goto LABEL_96;
                          }
                          v170 = *a2;
                          v171 = *(__int16 *)Buf2;
LABEL_311:
                          v56 = __OFSUB__(v170, v171);
                          v54 = v170 == v171;
                          v55 = v170 - v171 < 0;
                          goto LABEL_102;
                        }
                        v172 = *a2;
                        v173 = *(__int16 *)Buf2;
LABEL_356:
                        v71 = v172 == v173;
                        goto LABEL_134;
                      }
                      v174 = v12 - 2;
                      if ( v174 )
                      {
                        v175 = v174 - 1;
                        if ( v175 )
                        {
                          v176 = v175 - 1;
                          if ( v176 )
                          {
                            v177 = v176 - 1;
                            if ( v177 )
                            {
                              if ( v177 != 1 )
                                goto LABEL_40;
                              v178 = *(unsigned __int8 *)Buf2;
                              v179 = *a2 < v178;
                              v180 = *a2 == v178;
                              goto LABEL_320;
                            }
                            v182 = *a2 < *(unsigned __int8 *)Buf2;
LABEL_324:
                            v17 = !v182;
                            goto LABEL_22;
                          }
                          v184 = *a2 < *(unsigned __int8 *)Buf2;
LABEL_328:
                          v17 = v184;
                          goto LABEL_22;
                        }
                        v186 = *(unsigned __int8 *)Buf2;
                        v187 = *a2 < v186;
                        v188 = *a2 == v186;
LABEL_332:
                        v17 = !v187 && !v188;
                        goto LABEL_22;
                      }
                      goto LABEL_333;
                    }
                    v191 = v12 - 2;
                    if ( v191 )
                    {
                      v192 = v191 - 1;
                      if ( v192 )
                      {
                        v193 = v192 - 1;
                        if ( v193 )
                        {
                          v194 = v193 - 1;
                          if ( v194 )
                          {
                            if ( v194 != 1 )
                              goto LABEL_40;
                            v164 = *a2;
                            goto LABEL_342;
                          }
                          v166 = *a2;
                          goto LABEL_345;
                        }
                        v168 = *a2;
                        goto LABEL_348;
                      }
                      v170 = *a2;
                      goto LABEL_351;
                    }
                    v172 = *a2;
                    goto LABEL_354;
                  }
LABEL_368:
                  v199 = v12 - 2;
                  if ( v199 )
                  {
                    v200 = v199 - 1;
                    if ( !v200 )
                    {
                      v85 = *a2;
                      goto LABEL_802;
                    }
                    v201 = v200 - 1;
                    if ( !v201 )
                    {
                      v84 = *a2;
                      goto LABEL_800;
                    }
                    v202 = v201 - 1;
                    if ( !v202 )
                    {
                      v83 = *a2;
                      goto LABEL_798;
                    }
                    if ( v202 != 1 )
                      goto LABEL_40;
                    v82 = *a2;
LABEL_796:
                    v28 = __OFSUB__(v82, *(_QWORD *)Buf2);
                    v26 = v82 == *(_QWORD *)Buf2;
                    v27 = v82 - *(_QWORD *)Buf2 < 0;
                    goto LABEL_65;
                  }
LABEL_395:
                  v138 = *a2;
                  goto LABEL_716;
                }
                if ( a5 != 9 )
                {
                  if ( a5 != 10 )
                  {
                    if ( a5 != 11 )
                    {
                      if ( a5 == 14 )
                        goto LABEL_368;
                      if ( a5 != 15 )
                        goto LABEL_40;
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
                              goto LABEL_40;
                            v86 = *a2;
                            goto LABEL_155;
                          }
                          v90 = *a2;
LABEL_160:
                          v89 = _mm_cvtsi32_si128(v90);
LABEL_161:
                          *(_QWORD *)&v91 = *(_OWORD *)&_mm_cvtepi32_pd(v89);
                          goto LABEL_163;
                        }
                        v96 = *a2;
LABEL_170:
                        v95 = _mm_cvtsi32_si128(v96);
LABEL_171:
                        *(_QWORD *)&v97 = *(_OWORD *)&_mm_cvtepi32_pd(v95);
LABEL_173:
                        v98 = *(double *)Buf2 < v97;
                        v99 = *(double *)Buf2 == v97;
                        goto LABEL_181;
                      }
                      v101 = *a2;
LABEL_176:
                      v100 = _mm_cvtsi32_si128(v101);
LABEL_177:
                      *(_QWORD *)&v102 = *(_OWORD *)&_mm_cvtepi32_pd(v100);
                      goto LABEL_179;
                    }
                    v105 = *a2;
LABEL_186:
                    v104 = _mm_cvtsi32_si128(v105);
LABEL_187:
                    *(_QWORD *)&v106 = *(_OWORD *)&_mm_cvtepi32_pd(v104);
LABEL_189:
                    v20 = v106 == *(double *)Buf2;
                    goto LABEL_38;
                  }
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
                            goto LABEL_40;
                          v113 = *a2;
                          goto LABEL_198;
                        }
                        v207 = *a2;
LABEL_385:
                        v92 = _mm_cvtsi32_si128(v207);
LABEL_165:
                        LODWORD(v93) = _mm_cvtepi32_ps(v92).m128_u32[0];
                        goto LABEL_166;
                      }
                      v116 = *a2;
LABEL_203:
                      v115 = _mm_cvtsi32_si128(v116);
LABEL_204:
                      LODWORD(v117) = _mm_cvtepi32_ps(v115).m128_u32[0];
LABEL_206:
                      v98 = *(float *)Buf2 < v117;
                      v99 = *(float *)Buf2 == v117;
                      goto LABEL_181;
                    }
                    v119 = *a2;
LABEL_209:
                    v118 = _mm_cvtsi32_si128(v119);
LABEL_210:
                    LODWORD(v120) = _mm_cvtepi32_ps(v118).m128_u32[0];
LABEL_212:
                    v98 = v120 < *(float *)Buf2;
                    v99 = v120 == *(float *)Buf2;
                    goto LABEL_181;
                  }
                  v122 = *a2;
LABEL_215:
                  v121 = _mm_cvtsi32_si128(v122);
LABEL_216:
                  LODWORD(v123) = _mm_cvtepi32_ps(v121).m128_u32[0];
LABEL_218:
                  v20 = v123 == *(float *)Buf2;
                  goto LABEL_38;
                }
                v208 = v12 - 2;
                if ( !v208 )
                  goto LABEL_395;
                v209 = v208 - 1;
                if ( !v209 )
                {
                  v135 = *a2;
                  goto LABEL_239;
                }
                v210 = v209 - 1;
                if ( !v210 )
                {
                  v133 = *a2;
                  goto LABEL_234;
                }
                v211 = v210 - 1;
                if ( !v211 )
                {
                  v131 = *a2;
                  goto LABEL_229;
                }
                if ( v211 != 1 )
                  goto LABEL_40;
                v128 = *a2;
LABEL_225:
                v129 = v128 < *(_QWORD *)Buf2;
                v130 = v128 == *(_QWORD *)Buf2;
                goto LABEL_226;
              }
              if ( a5 <= 8 )
              {
                if ( a5 != 8 )
                {
                  switch ( a5 )
                  {
                    case 2u:
                      v236 = v12 - 2;
                      if ( !v236 )
                      {
                        v190 = *(char *)Buf2;
                        goto LABEL_335;
                      }
                      v237 = v236 - 1;
                      if ( v237 )
                      {
                        v238 = v237 - 1;
                        if ( v238 )
                        {
                          v239 = v238 - 1;
                          if ( v239 )
                          {
                            if ( v239 != 1 )
                              goto LABEL_40;
                            v232 = *(char *)Buf2;
LABEL_457:
                            v43 = __OFSUB__(*a2, v232);
                            v41 = *a2 == v232;
                            v42 = (__int16)(*a2 - v232) < 0;
                            goto LABEL_84;
                          }
                          v233 = *(char *)Buf2;
LABEL_460:
                          v47 = __OFSUB__(*a2, v233);
                          v46 = (__int16)(*a2 - v233) < 0;
                          goto LABEL_90;
                        }
                        v234 = *(char *)Buf2;
LABEL_463:
                        v51 = __OFSUB__(*a2, v234);
                        v50 = (__int16)(*a2 - v234) < 0;
                        goto LABEL_96;
                      }
                      v235 = *(char *)Buf2;
                      break;
                    case 3u:
                      v228 = v12 - 2;
                      if ( !v228 )
                      {
LABEL_333:
                        v190 = *(unsigned __int8 *)Buf2;
LABEL_335:
                        v71 = *a2 == v190;
                        goto LABEL_134;
                      }
                      v229 = v228 - 1;
                      if ( v229 )
                      {
                        v230 = v229 - 1;
                        if ( v230 )
                        {
                          v231 = v230 - 1;
                          if ( v231 )
                          {
                            if ( v231 != 1 )
                              goto LABEL_40;
                            v232 = *(unsigned __int8 *)Buf2;
                            goto LABEL_457;
                          }
                          v233 = *(unsigned __int8 *)Buf2;
                          goto LABEL_460;
                        }
                        v234 = *(unsigned __int8 *)Buf2;
                        goto LABEL_463;
                      }
                      v235 = *(unsigned __int8 *)Buf2;
                      break;
                    case 4u:
                      v224 = v12 - 2;
                      if ( !v224 )
                        goto LABEL_295;
                      v225 = v224 - 1;
                      if ( !v225 )
                      {
                        v35 = __OFSUB__(*a2, *Buf2);
                        v33 = *a2 == *Buf2;
                        v34 = (__int16)(*a2 - *Buf2) < 0;
                        goto LABEL_74;
                      }
                      v226 = v225 - 1;
                      if ( !v226 )
                      {
                        v32 = __OFSUB__(*a2, *Buf2);
                        v31 = (__int16)(*a2 - *Buf2) < 0;
                        goto LABEL_71;
                      }
                      v227 = v226 - 1;
                      if ( !v227 )
                      {
                        v30 = __OFSUB__(*a2, *Buf2);
                        v29 = (__int16)(*a2 - *Buf2) < 0;
                        goto LABEL_68;
                      }
                      if ( v227 != 1 )
                        goto LABEL_40;
                      v28 = __OFSUB__(*a2, *Buf2);
                      v26 = *a2 == *Buf2;
                      v27 = (__int16)(*a2 - *Buf2) < 0;
LABEL_65:
                      v19 = v27 ^ v28 | v26;
                      goto LABEL_34;
                    case 5u:
                      v220 = v12 - 2;
                      if ( v220 )
                      {
                        v221 = v220 - 1;
                        if ( v221 )
                        {
                          v222 = v221 - 1;
                          if ( v222 )
                          {
                            v223 = v222 - 1;
                            if ( v223 )
                            {
                              if ( v223 != 1 )
                                goto LABEL_40;
                              v164 = (__int16)*a2;
                              goto LABEL_429;
                            }
                            v166 = (__int16)*a2;
                            goto LABEL_432;
                          }
                          v168 = (__int16)*a2;
                          goto LABEL_435;
                        }
                        v170 = (__int16)*a2;
                        goto LABEL_438;
                      }
                      v172 = (__int16)*a2;
                      goto LABEL_441;
                    case 6u:
                      v216 = v12 - 2;
                      if ( !v216 )
                        goto LABEL_413;
                      v217 = v216 - 1;
                      if ( !v217 )
                      {
                        v155 = (__int16)*a2;
                        goto LABEL_285;
                      }
                      v218 = v217 - 1;
                      if ( !v218 )
                      {
                        v154 = (__int16)*a2;
                        goto LABEL_282;
                      }
                      v219 = v218 - 1;
                      if ( !v219 )
                      {
                        v153 = (__int16)*a2;
                        goto LABEL_279;
                      }
                      if ( v219 != 1 )
                        goto LABEL_40;
                      v152 = (__int16)*a2;
LABEL_276:
                      v28 = __OFSUB__(v152, *(_DWORD *)Buf2);
                      v26 = v152 == *(_DWORD *)Buf2;
                      v27 = v152 - *(_DWORD *)Buf2 < 0;
                      goto LABEL_65;
                    case 7u:
                      v212 = v12 - 2;
                      if ( v212 )
                      {
                        v213 = v212 - 1;
                        if ( !v213 )
                        {
                          v146 = (__int16)*a2;
                          goto LABEL_266;
                        }
                        v214 = v213 - 1;
                        if ( !v214 )
                        {
                          v145 = (__int16)*a2;
                          goto LABEL_263;
                        }
                        v215 = v214 - 1;
                        if ( !v215 )
                        {
                          v144 = (__int16)*a2;
                          goto LABEL_260;
                        }
                        if ( v215 != 1 )
                          goto LABEL_40;
                        v143 = (__int16)*a2;
                        goto LABEL_257;
                      }
LABEL_413:
                      v147 = (__int16)*a2;
                      goto LABEL_269;
                    default:
                      goto LABEL_40;
                  }
                  v56 = __OFSUB__(*a2, v235);
                  v54 = *a2 == v235;
                  v55 = (__int16)(*a2 - v235) < 0;
                  goto LABEL_102;
                }
                goto LABEL_484;
              }
              if ( a5 == 9 )
              {
                v252 = v12 - 2;
                if ( v252 )
                {
                  v253 = v252 - 1;
                  if ( !v253 )
                  {
                    v135 = (__int16)*a2;
                    goto LABEL_239;
                  }
                  v254 = v253 - 1;
                  if ( !v254 )
                  {
                    v133 = (__int16)*a2;
                    goto LABEL_234;
                  }
                  v255 = v254 - 1;
                  if ( !v255 )
                  {
                    v131 = (__int16)*a2;
                    goto LABEL_229;
                  }
                  if ( v255 != 1 )
                    goto LABEL_40;
                  v128 = (__int16)*a2;
                  goto LABEL_225;
                }
LABEL_516:
                v138 = (__int16)*a2;
                goto LABEL_716;
              }
              if ( a5 != 10 )
              {
                if ( a5 != 11 )
                {
                  if ( a5 == 14 )
                  {
LABEL_484:
                    v244 = v12 - 2;
                    if ( v244 )
                    {
                      v245 = v244 - 1;
                      if ( !v245 )
                      {
                        v85 = (__int16)*a2;
                        goto LABEL_802;
                      }
                      v246 = v245 - 1;
                      if ( !v246 )
                      {
                        v84 = (__int16)*a2;
                        goto LABEL_800;
                      }
                      v247 = v246 - 1;
                      if ( !v247 )
                      {
                        v83 = (__int16)*a2;
                        goto LABEL_798;
                      }
                      if ( v247 != 1 )
                        goto LABEL_40;
                      v82 = (__int16)*a2;
                      goto LABEL_796;
                    }
                    goto LABEL_516;
                  }
                  if ( a5 != 15 )
                    goto LABEL_40;
                }
                v240 = v12 - 2;
                if ( !v240 )
                {
                  v105 = (__int16)*a2;
                  goto LABEL_186;
                }
                v241 = v240 - 1;
                if ( !v241 )
                {
                  v101 = (__int16)*a2;
                  goto LABEL_176;
                }
                v242 = v241 - 1;
                if ( !v242 )
                {
                  v96 = (__int16)*a2;
                  goto LABEL_170;
                }
                v243 = v242 - 1;
                if ( !v243 )
                {
                  v90 = (__int16)*a2;
                  goto LABEL_160;
                }
                if ( v243 != 1 )
                  goto LABEL_40;
                v86 = (__int16)*a2;
LABEL_155:
                v77 = _mm_cvtsi32_si128(v86);
LABEL_156:
                *(_QWORD *)&v87 = *(_OWORD *)&_mm_cvtepi32_pd(v77);
LABEL_157:
                v88 = *(double *)Buf2 < v87;
LABEL_167:
                v94 = !v88;
LABEL_183:
                *a8 = v94;
                goto LABEL_14;
              }
              v248 = v12 - 2;
              if ( !v248 )
              {
                v122 = (__int16)*a2;
                goto LABEL_215;
              }
              v249 = v248 - 1;
              if ( !v249 )
              {
                v119 = (__int16)*a2;
                goto LABEL_209;
              }
              v250 = v249 - 1;
              if ( !v250 )
              {
                v116 = (__int16)*a2;
                goto LABEL_203;
              }
              v251 = v250 - 1;
              if ( !v251 )
              {
                v207 = (__int16)*a2;
                goto LABEL_385;
              }
              if ( v251 != 1 )
                goto LABEL_40;
              v113 = (__int16)*a2;
LABEL_198:
              v112 = _mm_cvtsi32_si128(v113);
LABEL_199:
              LODWORD(v114) = _mm_cvtepi32_ps(v112).m128_u32[0];
LABEL_200:
              v88 = *(float *)Buf2 < v114;
              goto LABEL_167;
            }
            if ( a5 <= 8 )
            {
              if ( a5 != 8 )
              {
                if ( a5 == 2 )
                {
                  v283 = v12 - 2;
                  if ( v283 )
                  {
                    v284 = v283 - 1;
                    if ( v284 )
                    {
                      v285 = v284 - 1;
                      if ( v285 )
                      {
                        v286 = v285 - 1;
                        if ( v286 )
                        {
                          if ( v286 != 1 )
                            goto LABEL_40;
                          v164 = *(unsigned __int8 *)a2;
LABEL_342:
                          v165 = *(char *)Buf2;
                          goto LABEL_302;
                        }
                        v166 = *(unsigned __int8 *)a2;
LABEL_345:
                        v167 = *(char *)Buf2;
                        goto LABEL_305;
                      }
                      v168 = *(unsigned __int8 *)a2;
LABEL_348:
                      v169 = *(char *)Buf2;
                      goto LABEL_308;
                    }
                    v170 = *(unsigned __int8 *)a2;
LABEL_351:
                    v171 = *(char *)Buf2;
                    goto LABEL_311;
                  }
                  v172 = *(unsigned __int8 *)a2;
LABEL_354:
                  v173 = *(char *)Buf2;
                  goto LABEL_356;
                }
                if ( a5 != 3 )
                {
                  if ( a5 != 4 )
                  {
                    if ( a5 != 5 )
                    {
                      if ( a5 == 6 )
                      {
                        v260 = v12 - 2;
                        if ( v260 )
                        {
                          v261 = v260 - 1;
                          if ( !v261 )
                          {
                            v155 = *(unsigned __int8 *)a2;
                            goto LABEL_285;
                          }
                          v262 = v261 - 1;
                          if ( !v262 )
                          {
                            v154 = *(unsigned __int8 *)a2;
                            goto LABEL_282;
                          }
                          v263 = v262 - 1;
                          if ( !v263 )
                          {
                            v153 = *(unsigned __int8 *)a2;
                            goto LABEL_279;
                          }
                          if ( v263 != 1 )
                            goto LABEL_40;
                          v152 = *(unsigned __int8 *)a2;
                          goto LABEL_276;
                        }
                      }
                      else
                      {
                        if ( a5 != 7 )
                          goto LABEL_40;
                        v256 = v12 - 2;
                        if ( v256 )
                        {
                          v257 = v256 - 1;
                          if ( !v257 )
                          {
                            v146 = *(unsigned __int8 *)a2;
                            goto LABEL_266;
                          }
                          v258 = v257 - 1;
                          if ( !v258 )
                          {
                            v145 = *(unsigned __int8 *)a2;
                            goto LABEL_263;
                          }
                          v259 = v258 - 1;
                          if ( !v259 )
                          {
                            v144 = *(unsigned __int8 *)a2;
                            goto LABEL_260;
                          }
                          if ( v259 != 1 )
                            goto LABEL_40;
                          v143 = *(unsigned __int8 *)a2;
                          goto LABEL_257;
                        }
                      }
                      v147 = *(unsigned __int8 *)a2;
                      goto LABEL_269;
                    }
                    v264 = v12 - 2;
                    if ( v264 )
                    {
                      v265 = v264 - 1;
                      if ( v265 )
                      {
                        v266 = v265 - 1;
                        if ( v266 )
                        {
                          v267 = v266 - 1;
                          if ( v267 )
                          {
                            if ( v267 != 1 )
                              goto LABEL_40;
                            v268 = *(unsigned __int8 *)a2;
                            v129 = v268 < *Buf2;
                            v130 = v268 == *Buf2;
                            goto LABEL_226;
                          }
                          v132 = *(unsigned __int8 *)a2 < (unsigned int)*Buf2;
                          goto LABEL_231;
                        }
                        v134 = *(unsigned __int8 *)a2 < (unsigned int)*Buf2;
                        goto LABEL_236;
                      }
                      v269 = *(unsigned __int8 *)a2;
                      v136 = v269 < *Buf2;
                      v137 = v269 == *Buf2;
                      goto LABEL_241;
                    }
                    goto LABEL_553;
                  }
                  v271 = v12 - 2;
                  if ( !v271 )
                  {
LABEL_553:
                    v270 = *(unsigned __int8 *)a2;
LABEL_555:
                    v18 = v270 == *Buf2;
                    goto LABEL_33;
                  }
                  v272 = v271 - 1;
                  if ( v272 )
                  {
                    v273 = v272 - 1;
                    if ( v273 )
                    {
                      v274 = v273 - 1;
                      if ( v274 )
                      {
                        if ( v274 != 1 )
                          goto LABEL_40;
                        v275 = *(unsigned __int8 *)a2;
                        goto LABEL_562;
                      }
                      v276 = *(unsigned __int8 *)a2;
                      goto LABEL_565;
                    }
                    v277 = *(unsigned __int8 *)a2;
                    goto LABEL_568;
                  }
                  v278 = *(unsigned __int8 *)a2;
                  goto LABEL_571;
                }
                v279 = v12 - 2;
                if ( v279 )
                {
                  v280 = v279 - 1;
                  if ( v280 )
                  {
                    v281 = v280 - 1;
                    if ( v281 )
                    {
                      v282 = v281 - 1;
                      if ( v282 )
                      {
                        if ( v282 != 1 )
                          goto LABEL_40;
                        v129 = *(_BYTE *)a2 < *(_BYTE *)Buf2;
                        v130 = *(_BYTE *)a2 == *(_BYTE *)Buf2;
                        goto LABEL_226;
                      }
                      v132 = *(_BYTE *)a2 < *(_BYTE *)Buf2;
                      goto LABEL_231;
                    }
                    v134 = *(_BYTE *)a2 < *(_BYTE *)Buf2;
LABEL_236:
                    v19 = v134;
                    goto LABEL_34;
                  }
                  v136 = *(_BYTE *)a2 < *(_BYTE *)Buf2;
                  v137 = *(_BYTE *)a2 == *(_BYTE *)Buf2;
LABEL_241:
                  v19 = !v136 && !v137;
                  goto LABEL_34;
                }
                goto LABEL_32;
              }
              goto LABEL_595;
            }
            if ( a5 == 9 )
            {
              v299 = v12 - 2;
              if ( v299 )
              {
                v300 = v299 - 1;
                if ( !v300 )
                {
                  v135 = *(unsigned __int8 *)a2;
                  goto LABEL_239;
                }
                v301 = v300 - 1;
                if ( !v301 )
                {
                  v133 = *(unsigned __int8 *)a2;
                  goto LABEL_234;
                }
                v302 = v301 - 1;
                if ( !v302 )
                {
                  v131 = *(unsigned __int8 *)a2;
                  goto LABEL_229;
                }
                if ( v302 != 1 )
                  goto LABEL_40;
                v128 = *(unsigned __int8 *)a2;
                goto LABEL_225;
              }
LABEL_627:
              v138 = *(unsigned __int8 *)a2;
              goto LABEL_716;
            }
            if ( a5 == 10 )
            {
              v295 = v12 - 2;
              if ( !v295 )
              {
                v122 = *(unsigned __int8 *)a2;
                goto LABEL_215;
              }
              v296 = v295 - 1;
              if ( !v296 )
              {
                v119 = *(unsigned __int8 *)a2;
                goto LABEL_209;
              }
              v297 = v296 - 1;
              if ( !v297 )
              {
                v116 = *(unsigned __int8 *)a2;
                goto LABEL_203;
              }
              v298 = v297 - 1;
              if ( !v298 )
              {
                v207 = *(unsigned __int8 *)a2;
                goto LABEL_385;
              }
              if ( v298 != 1 )
                goto LABEL_40;
              v113 = *(unsigned __int8 *)a2;
              goto LABEL_198;
            }
            if ( a5 != 11 )
            {
              if ( a5 == 14 )
              {
LABEL_595:
                v291 = v12 - 2;
                if ( v291 )
                {
                  v292 = v291 - 1;
                  if ( !v292 )
                  {
                    v85 = *(unsigned __int8 *)a2;
                    goto LABEL_802;
                  }
                  v293 = v292 - 1;
                  if ( !v293 )
                  {
                    v84 = *(unsigned __int8 *)a2;
                    goto LABEL_800;
                  }
                  v294 = v293 - 1;
                  if ( !v294 )
                  {
                    v83 = *(unsigned __int8 *)a2;
                    goto LABEL_798;
                  }
                  if ( v294 != 1 )
                    goto LABEL_40;
                  v82 = *(unsigned __int8 *)a2;
                  goto LABEL_796;
                }
                goto LABEL_627;
              }
              if ( a5 != 15 )
                goto LABEL_40;
            }
            v287 = v12 - 2;
            if ( !v287 )
            {
              v105 = *(unsigned __int8 *)a2;
              goto LABEL_186;
            }
            v288 = v287 - 1;
            if ( !v288 )
            {
              v101 = *(unsigned __int8 *)a2;
              goto LABEL_176;
            }
            v289 = v288 - 1;
            if ( !v289 )
            {
              v96 = *(unsigned __int8 *)a2;
              goto LABEL_170;
            }
            v290 = v289 - 1;
            if ( !v290 )
            {
              v90 = *(unsigned __int8 *)a2;
              goto LABEL_160;
            }
            if ( v290 != 1 )
              goto LABEL_40;
            v86 = *(unsigned __int8 *)a2;
            goto LABEL_155;
          }
          if ( a5 <= 8 )
          {
            if ( a5 != 8 )
            {
              if ( a5 != 2 )
              {
                if ( a5 == 3 )
                {
                  v319 = v12 - 2;
                  if ( !v319 )
                  {
                    v172 = *(char *)a2;
                    v173 = *(unsigned __int8 *)Buf2;
                    goto LABEL_356;
                  }
                  v320 = v319 - 1;
                  if ( !v320 )
                  {
                    v170 = *(char *)a2;
                    v171 = *(unsigned __int8 *)Buf2;
                    goto LABEL_311;
                  }
                  v321 = v320 - 1;
                  if ( !v321 )
                  {
                    v168 = *(char *)a2;
                    v169 = *(unsigned __int8 *)Buf2;
                    goto LABEL_308;
                  }
                  v322 = v321 - 1;
                  if ( !v322 )
                  {
                    v166 = *(char *)a2;
                    v167 = *(unsigned __int8 *)Buf2;
                    goto LABEL_305;
                  }
                  if ( v322 != 1 )
                    goto LABEL_40;
                  v164 = *(char *)a2;
                  v165 = *(unsigned __int8 *)Buf2;
LABEL_302:
                  v43 = __OFSUB__(v164, v165);
                  v41 = v164 == v165;
                  v42 = v164 - v165 < 0;
                  goto LABEL_84;
                }
                if ( a5 != 4 )
                {
                  if ( a5 != 5 )
                  {
                    if ( a5 == 6 )
                    {
                      v307 = v12 - 2;
                      if ( v307 )
                      {
                        v308 = v307 - 1;
                        if ( !v308 )
                        {
                          v155 = *(char *)a2;
                          goto LABEL_285;
                        }
                        v309 = v308 - 1;
                        if ( !v309 )
                        {
                          v154 = *(char *)a2;
                          goto LABEL_282;
                        }
                        v310 = v309 - 1;
                        if ( !v310 )
                        {
                          v153 = *(char *)a2;
                          goto LABEL_279;
                        }
                        if ( v310 != 1 )
                          goto LABEL_40;
                        v152 = *(char *)a2;
                        goto LABEL_276;
                      }
                    }
                    else
                    {
                      if ( a5 != 7 )
                        goto LABEL_40;
                      v303 = v12 - 2;
                      if ( v303 )
                      {
                        v304 = v303 - 1;
                        if ( !v304 )
                        {
                          v146 = *(char *)a2;
                          goto LABEL_266;
                        }
                        v305 = v304 - 1;
                        if ( !v305 )
                        {
                          v145 = *(char *)a2;
                          goto LABEL_263;
                        }
                        v306 = v305 - 1;
                        if ( !v306 )
                        {
                          v144 = *(char *)a2;
                          goto LABEL_260;
                        }
                        if ( v306 != 1 )
                          goto LABEL_40;
                        v143 = *(char *)a2;
LABEL_257:
                        v129 = v143 < *(_DWORD *)Buf2;
                        v130 = v143 == *(_DWORD *)Buf2;
                        goto LABEL_226;
                      }
                    }
                    v147 = *(char *)a2;
                    goto LABEL_269;
                  }
                  v311 = v12 - 2;
                  if ( v311 )
                  {
                    v312 = v311 - 1;
                    if ( v312 )
                    {
                      v313 = v312 - 1;
                      if ( v313 )
                      {
                        v314 = v313 - 1;
                        if ( v314 )
                        {
                          if ( v314 != 1 )
                            goto LABEL_40;
                          v164 = *(char *)a2;
LABEL_429:
                          v165 = *Buf2;
                          goto LABEL_302;
                        }
                        v166 = *(char *)a2;
LABEL_432:
                        v167 = *Buf2;
                        goto LABEL_305;
                      }
                      v168 = *(char *)a2;
LABEL_435:
                      v169 = *Buf2;
                      goto LABEL_308;
                    }
                    v170 = *(char *)a2;
LABEL_438:
                    v171 = *Buf2;
                    goto LABEL_311;
                  }
                  v172 = *(char *)a2;
LABEL_441:
                  v173 = *Buf2;
                  goto LABEL_356;
                }
                v315 = v12 - 2;
                if ( !v315 )
                {
                  v270 = *(char *)a2;
                  goto LABEL_555;
                }
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
                        goto LABEL_40;
                      v275 = *(char *)a2;
LABEL_562:
                      v28 = __OFSUB__(v275, *Buf2);
                      v26 = v275 == *Buf2;
                      v27 = (__int16)(v275 - *Buf2) < 0;
                      goto LABEL_65;
                    }
                    v276 = *(char *)a2;
LABEL_565:
                    v30 = __OFSUB__(v276, *Buf2);
                    v29 = (__int16)(v276 - *Buf2) < 0;
                    goto LABEL_68;
                  }
                  v277 = *(char *)a2;
LABEL_568:
                  v32 = __OFSUB__(v277, *Buf2);
                  v31 = (__int16)(v277 - *Buf2) < 0;
                  goto LABEL_71;
                }
                v278 = *(char *)a2;
LABEL_571:
                v35 = __OFSUB__(v278, *Buf2);
                v33 = v278 == *Buf2;
                v34 = (__int16)(v278 - *Buf2) < 0;
                goto LABEL_74;
              }
              v323 = v12 - 2;
              if ( v323 )
              {
                v324 = v323 - 1;
                if ( !v324 )
                {
                  v35 = __OFSUB__(*(_BYTE *)a2, *(_BYTE *)Buf2);
                  v33 = *(_BYTE *)a2 == *(_BYTE *)Buf2;
                  v34 = (char)(*(_BYTE *)a2 - *(_BYTE *)Buf2) < 0;
                  goto LABEL_74;
                }
                v325 = v324 - 1;
                if ( !v325 )
                {
                  v32 = __OFSUB__(*(_BYTE *)a2, *(_BYTE *)Buf2);
                  v31 = (char)(*(_BYTE *)a2 - *(_BYTE *)Buf2) < 0;
                  goto LABEL_71;
                }
                v326 = v325 - 1;
                if ( !v326 )
                {
                  v30 = __OFSUB__(*(_BYTE *)a2, *(_BYTE *)Buf2);
                  v29 = (char)(*(_BYTE *)a2 - *(_BYTE *)Buf2) < 0;
                  goto LABEL_68;
                }
                if ( v326 != 1 )
                  goto LABEL_40;
                v28 = __OFSUB__(*(_BYTE *)a2, *(_BYTE *)Buf2);
                v26 = *(_BYTE *)a2 == *(_BYTE *)Buf2;
                v27 = (char)(*(_BYTE *)a2 - *(_BYTE *)Buf2) < 0;
                goto LABEL_65;
              }
LABEL_32:
              v18 = *(_BYTE *)a2 == *(_BYTE *)Buf2;
LABEL_33:
              v19 = v18;
LABEL_34:
              *a8 = v19;
              goto LABEL_14;
            }
            goto LABEL_683;
          }
          if ( a5 == 9 )
          {
            v339 = v12 - 2;
            if ( v339 )
            {
              v340 = v339 - 1;
              if ( !v340 )
              {
                v135 = *(char *)a2;
                goto LABEL_239;
              }
              v341 = v340 - 1;
              if ( !v341 )
              {
                v133 = *(char *)a2;
                goto LABEL_234;
              }
              v342 = v341 - 1;
              if ( !v342 )
              {
                v131 = *(char *)a2;
                goto LABEL_229;
              }
              if ( v342 != 1 )
                goto LABEL_40;
              v128 = *(char *)a2;
              goto LABEL_225;
            }
LABEL_714:
            v138 = *(char *)a2;
            goto LABEL_716;
          }
          if ( a5 == 10 )
          {
            v335 = v12 - 2;
            if ( !v335 )
            {
              v122 = *(char *)a2;
              goto LABEL_215;
            }
            v336 = v335 - 1;
            if ( !v336 )
            {
              v119 = *(char *)a2;
              goto LABEL_209;
            }
            v337 = v336 - 1;
            if ( !v337 )
            {
              v116 = *(char *)a2;
              goto LABEL_203;
            }
            v338 = v337 - 1;
            if ( !v338 )
            {
              v207 = *(char *)a2;
              goto LABEL_385;
            }
            if ( v338 != 1 )
              goto LABEL_40;
            v113 = *(char *)a2;
            goto LABEL_198;
          }
          if ( a5 != 11 )
          {
            if ( a5 == 14 )
            {
LABEL_683:
              v331 = v12 - 2;
              if ( v331 )
              {
                v332 = v331 - 1;
                if ( !v332 )
                {
                  v85 = *(char *)a2;
                  goto LABEL_802;
                }
                v333 = v332 - 1;
                if ( !v333 )
                {
                  v84 = *(char *)a2;
                  goto LABEL_800;
                }
                v334 = v333 - 1;
                if ( !v334 )
                {
                  v83 = *(char *)a2;
                  goto LABEL_798;
                }
                if ( v334 != 1 )
                  goto LABEL_40;
                v82 = *(char *)a2;
                goto LABEL_796;
              }
              goto LABEL_714;
            }
            if ( a5 != 15 )
              goto LABEL_40;
          }
          v327 = v12 - 2;
          if ( !v327 )
          {
            v105 = *(char *)a2;
            goto LABEL_186;
          }
          v328 = v327 - 1;
          if ( !v328 )
          {
            v101 = *(char *)a2;
            goto LABEL_176;
          }
          v329 = v328 - 1;
          if ( !v329 )
          {
            v96 = *(char *)a2;
            goto LABEL_170;
          }
          v330 = v329 - 1;
          if ( !v330 )
          {
            v90 = *(char *)a2;
            goto LABEL_160;
          }
          if ( v330 != 1 )
            goto LABEL_40;
          v86 = *(char *)a2;
          goto LABEL_155;
        }
        if ( a5 != 1 || v12 != 2 )
          goto LABEL_40;
        if ( a2 )
          goto LABEL_12;
        v20 = Buf2 == 0LL;
LABEL_38:
        if ( v20 )
          goto LABEL_13;
        goto LABEL_12;
      }
      if ( v12 - 7 <= 1 )
      {
        if ( a5 != 7 )
          goto LABEL_40;
        if ( v12 != 7 )
        {
          v17 = *(_DWORD *)Buf2 | *(_DWORD *)a2;
          goto LABEL_22;
        }
        v94 = *(_DWORD *)Buf2 & *(_DWORD *)a2;
        goto LABEL_183;
      }
      if ( a5 <= 8 )
      {
        if ( a5 != 8 )
        {
          switch ( a5 )
          {
            case 2u:
              v363 = v12 - 2;
              if ( !v363 )
                goto LABEL_130;
              v364 = v363 - 1;
              if ( !v364 )
              {
                v354 = *(char *)Buf2;
                goto LABEL_754;
              }
              v365 = v364 - 1;
              if ( !v365 )
              {
                v353 = *(char *)Buf2;
                goto LABEL_751;
              }
              v366 = v365 - 1;
              if ( !v366 )
              {
                v352 = *(char *)Buf2;
                goto LABEL_748;
              }
              if ( v366 != 1 )
                goto LABEL_40;
              v351 = *(char *)Buf2;
              break;
            case 3u:
              v359 = v12 - 2;
              if ( !v359 )
                goto LABEL_123;
              v360 = v359 - 1;
              if ( !v360 )
              {
                v354 = *(unsigned __int8 *)Buf2;
                goto LABEL_754;
              }
              v361 = v360 - 1;
              if ( !v361 )
              {
                v353 = *(unsigned __int8 *)Buf2;
                goto LABEL_751;
              }
              v362 = v361 - 1;
              if ( !v362 )
              {
                v352 = *(unsigned __int8 *)Buf2;
                goto LABEL_748;
              }
              if ( v362 != 1 )
                goto LABEL_40;
              v351 = *(unsigned __int8 *)Buf2;
              break;
            case 4u:
              v355 = v12 - 2;
              if ( !v355 )
                goto LABEL_113;
              v356 = v355 - 1;
              if ( !v356 )
              {
                v354 = *(__int16 *)Buf2;
                goto LABEL_754;
              }
              v357 = v356 - 1;
              if ( !v357 )
              {
                v353 = *(__int16 *)Buf2;
                goto LABEL_751;
              }
              v358 = v357 - 1;
              if ( !v358 )
              {
                v352 = *(__int16 *)Buf2;
                goto LABEL_748;
              }
              if ( v358 != 1 )
                goto LABEL_40;
              v351 = *(__int16 *)Buf2;
              break;
            case 5u:
              v347 = v12 - 2;
              if ( !v347 )
              {
LABEL_103:
                v58 = *Buf2;
LABEL_131:
                v71 = *(_DWORD *)a2 == v58;
LABEL_134:
                v17 = v71;
                goto LABEL_22;
              }
              v348 = v347 - 1;
              if ( v348 )
              {
                v349 = v348 - 1;
                if ( v349 )
                {
                  v350 = v349 - 1;
                  if ( v350 )
                  {
                    if ( v350 != 1 )
                      goto LABEL_40;
                    v351 = *Buf2;
                    break;
                  }
                  v352 = *Buf2;
LABEL_748:
                  v182 = *(_DWORD *)a2 < v352;
                  goto LABEL_324;
                }
                v353 = *Buf2;
LABEL_751:
                v184 = *(_DWORD *)a2 < v353;
                goto LABEL_328;
              }
              v354 = *Buf2;
LABEL_754:
              v187 = *(_DWORD *)a2 < v354;
              v188 = *(_DWORD *)a2 == v354;
              goto LABEL_332;
            default:
              v21 = a5 - 6;
              if ( a5 == 6 )
                goto LABEL_730;
              goto LABEL_729;
          }
          v179 = *(_DWORD *)a2 < v351;
          v180 = *(_DWORD *)a2 == v351;
          goto LABEL_320;
        }
        goto LABEL_790;
      }
      if ( a5 == 9 )
      {
        v379 = v12 - 2;
        if ( v379 )
        {
          v380 = v379 - 1;
          if ( !v380 )
          {
            v135 = *(unsigned int *)a2;
            goto LABEL_239;
          }
          v381 = v380 - 1;
          if ( !v381 )
          {
            v133 = *(unsigned int *)a2;
            goto LABEL_234;
          }
          v382 = v381 - 1;
          if ( !v382 )
          {
            v131 = *(unsigned int *)a2;
            goto LABEL_229;
          }
          if ( v382 != 1 )
            goto LABEL_40;
          v128 = *(unsigned int *)a2;
          goto LABEL_225;
        }
LABEL_715:
        v138 = *(unsigned int *)a2;
        goto LABEL_716;
      }
      if ( a5 != 10 )
      {
        if ( a5 != 11 )
        {
          if ( a5 == 14 )
          {
LABEL_790:
            v371 = v12 - 2;
            if ( v371 )
            {
              v372 = v371 - 1;
              if ( !v372 )
              {
                v85 = *(unsigned int *)a2;
                goto LABEL_802;
              }
              v373 = v372 - 1;
              if ( !v373 )
              {
                v84 = *(unsigned int *)a2;
                goto LABEL_800;
              }
              v374 = v373 - 1;
              if ( !v374 )
              {
                v83 = *(unsigned int *)a2;
                goto LABEL_798;
              }
              if ( v374 != 1 )
                goto LABEL_40;
              v82 = *(unsigned int *)a2;
              goto LABEL_796;
            }
            goto LABEL_715;
          }
          if ( a5 != 15 )
            goto LABEL_40;
        }
        v367 = v12 - 2;
        if ( !v367 )
        {
          v106 = (double)*(int *)a2;
          goto LABEL_189;
        }
        v368 = v367 - 1;
        if ( !v368 )
        {
          v102 = (double)*(int *)a2;
          goto LABEL_179;
        }
        v369 = v368 - 1;
        if ( !v369 )
        {
          v97 = (double)*(int *)a2;
          goto LABEL_173;
        }
        v370 = v369 - 1;
        if ( v370 )
        {
          if ( v370 != 1 )
            goto LABEL_40;
          v87 = (double)*(int *)a2;
          goto LABEL_157;
        }
        v91 = (double)*(int *)a2;
LABEL_163:
        v88 = v91 < *(double *)Buf2;
        goto LABEL_167;
      }
      v375 = v12 - 2;
      if ( !v375 )
      {
        v123 = (float)*(int *)a2;
        goto LABEL_218;
      }
      v376 = v375 - 1;
      if ( !v376 )
      {
        v120 = (float)*(int *)a2;
        goto LABEL_212;
      }
      v377 = v376 - 1;
      if ( !v377 )
      {
        v117 = (float)*(int *)a2;
        goto LABEL_206;
      }
      v378 = v377 - 1;
      if ( v378 )
      {
        if ( v378 != 1 )
          goto LABEL_40;
        v114 = (float)*(int *)a2;
        goto LABEL_200;
      }
      v93 = (float)*(int *)a2;
LABEL_166:
      v88 = v93 < *(float *)Buf2;
      goto LABEL_167;
    }
    if ( a1 != 8 )
    {
      if ( a1 != 9 )
      {
        if ( a1 != 10 )
        {
          if ( a1 != 11 )
          {
            v383 = a5 == 12;
            goto LABEL_833;
          }
LABEL_1236:
          if ( a5 <= 8 )
          {
            if ( a5 != 8 )
            {
              switch ( a5 )
              {
                case 2u:
                  v412 = v12 - 2;
                  if ( !v412 )
                  {
                    v399 = *(char *)Buf2;
                    goto LABEL_862;
                  }
                  v413 = v412 - 1;
                  if ( !v413 )
                  {
                    v397 = *(char *)Buf2;
                    goto LABEL_858;
                  }
                  v414 = v413 - 1;
                  if ( !v414 )
                  {
                    v395 = *(char *)Buf2;
                    goto LABEL_854;
                  }
                  v415 = v414 - 1;
                  if ( !v415 )
                  {
                    v393 = *(char *)Buf2;
                    goto LABEL_850;
                  }
                  if ( v415 != 1 )
                    goto LABEL_40;
                  v391 = *(char *)Buf2;
                  break;
                case 3u:
                  v408 = v12 - 2;
                  if ( !v408 )
                  {
                    v399 = *(unsigned __int8 *)Buf2;
                    goto LABEL_862;
                  }
                  v409 = v408 - 1;
                  if ( !v409 )
                  {
                    v397 = *(unsigned __int8 *)Buf2;
                    goto LABEL_858;
                  }
                  v410 = v409 - 1;
                  if ( !v410 )
                  {
                    v395 = *(unsigned __int8 *)Buf2;
                    goto LABEL_854;
                  }
                  v411 = v410 - 1;
                  if ( !v411 )
                  {
                    v393 = *(unsigned __int8 *)Buf2;
                    goto LABEL_850;
                  }
                  if ( v411 != 1 )
                    goto LABEL_40;
                  v391 = *(unsigned __int8 *)Buf2;
                  break;
                case 4u:
                  v404 = v12 - 2;
                  if ( !v404 )
                  {
                    v399 = *(__int16 *)Buf2;
                    goto LABEL_862;
                  }
                  v405 = v404 - 1;
                  if ( !v405 )
                  {
                    v397 = *(__int16 *)Buf2;
                    goto LABEL_858;
                  }
                  v406 = v405 - 1;
                  if ( !v406 )
                  {
                    v395 = *(__int16 *)Buf2;
                    goto LABEL_854;
                  }
                  v407 = v406 - 1;
                  if ( !v407 )
                  {
                    v393 = *(__int16 *)Buf2;
                    goto LABEL_850;
                  }
                  if ( v407 != 1 )
                    goto LABEL_40;
                  v391 = *(__int16 *)Buf2;
                  break;
                case 5u:
                  v400 = v12 - 2;
                  if ( v400 )
                  {
                    v401 = v400 - 1;
                    if ( v401 )
                    {
                      v402 = v401 - 1;
                      if ( v402 )
                      {
                        v403 = v402 - 1;
                        if ( v403 )
                        {
                          if ( v403 != 1 )
                            goto LABEL_40;
                          v391 = *Buf2;
                          break;
                        }
                        v393 = *Buf2;
LABEL_850:
                        v392 = _mm_cvtsi32_si128(v393);
                        goto LABEL_851;
                      }
                      v395 = *Buf2;
LABEL_854:
                      v394 = _mm_cvtsi32_si128(v395);
                      goto LABEL_855;
                    }
                    v397 = *Buf2;
LABEL_858:
                    v396 = _mm_cvtsi32_si128(v397);
                    goto LABEL_859;
                  }
                  v399 = *Buf2;
LABEL_862:
                  v398 = _mm_cvtsi32_si128(v399);
                  goto LABEL_863;
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
                            goto LABEL_40;
                          v390 = _mm_cvtsi32_si128(*(_DWORD *)Buf2);
                          goto LABEL_847;
                        }
                        v392 = _mm_cvtsi32_si128(*(_DWORD *)Buf2);
LABEL_851:
                        *(_QWORD *)&v386 = *(_OWORD *)&_mm_cvtepi32_pd(v392);
                        goto LABEL_923;
                      }
                      v394 = _mm_cvtsi32_si128(*(_DWORD *)Buf2);
LABEL_855:
                      *(_QWORD *)&v387 = *(_OWORD *)&_mm_cvtepi32_pd(v394);
                      goto LABEL_926;
                    }
                    v396 = _mm_cvtsi32_si128(*(_DWORD *)Buf2);
LABEL_859:
                    *(_QWORD *)&v388 = *(_OWORD *)&_mm_cvtepi32_pd(v396);
                    goto LABEL_929;
                  }
                  v398 = _mm_cvtsi32_si128(*(_DWORD *)Buf2);
LABEL_863:
                  *(_QWORD *)&v389 = *(_OWORD *)&_mm_cvtepi32_pd(v398);
                  goto LABEL_844;
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
                            goto LABEL_40;
                          v385 = (double)*(int *)Buf2;
                          goto LABEL_920;
                        }
                        v386 = (double)*(int *)Buf2;
LABEL_923:
                        v182 = *(double *)a2 < v386;
                        goto LABEL_324;
                      }
                      v387 = (double)*(int *)Buf2;
LABEL_926:
                      v187 = v387 < *(double *)a2;
                      v188 = v387 == *(double *)a2;
                      goto LABEL_332;
                    }
                    v388 = (double)*(int *)Buf2;
LABEL_929:
                    v187 = *(double *)a2 < v388;
                    v188 = *(double *)a2 == v388;
                    goto LABEL_332;
                  }
                  v389 = (double)*(int *)Buf2;
LABEL_844:
                  v20 = *(double *)a2 == v389;
                  goto LABEL_38;
                default:
                  goto LABEL_40;
              }
              v390 = _mm_cvtsi32_si128(v391);
LABEL_847:
              *(_QWORD *)&v385 = *(_OWORD *)&_mm_cvtepi32_pd(v390);
              goto LABEL_920;
            }
            goto LABEL_1262;
          }
          if ( a5 == 9 )
          {
            v544 = v12 - 2;
            if ( !v544 )
            {
              v389 = (double)(int)*(_QWORD *)Buf2;
              if ( *(__int64 *)Buf2 < 0 )
                v389 = v389 + 1.844674407370955e19;
              goto LABEL_844;
            }
            v545 = v544 - 1;
            if ( !v545 )
            {
              v388 = (double)(int)*(_QWORD *)Buf2;
              if ( *(__int64 *)Buf2 < 0 )
                v388 = v388 + 1.844674407370955e19;
              goto LABEL_929;
            }
            v546 = v545 - 1;
            if ( !v546 )
            {
              v387 = (double)(int)*(_QWORD *)Buf2;
              if ( *(__int64 *)Buf2 < 0 )
                v387 = v387 + 1.844674407370955e19;
              goto LABEL_926;
            }
            v547 = v546 - 1;
            if ( !v547 )
            {
              v386 = (double)(int)*(_QWORD *)Buf2;
              if ( *(__int64 *)Buf2 < 0 )
                v386 = v386 + 1.844674407370955e19;
              goto LABEL_923;
            }
            if ( v547 != 1 )
              goto LABEL_40;
            v385 = (double)(int)*(_QWORD *)Buf2;
            if ( *(__int64 *)Buf2 < 0 )
              v385 = v385 + 1.844674407370955e19;
            goto LABEL_920;
          }
          if ( a5 == 10 )
          {
            v540 = v12 - 2;
            if ( !v540 )
            {
              v389 = *(float *)Buf2;
              goto LABEL_844;
            }
            v541 = v540 - 1;
            if ( !v541 )
            {
              v388 = *(float *)Buf2;
              goto LABEL_929;
            }
            v542 = v541 - 1;
            if ( !v542 )
            {
              v387 = *(float *)Buf2;
              goto LABEL_926;
            }
            v543 = v542 - 1;
            if ( !v543 )
            {
              v386 = *(float *)Buf2;
              goto LABEL_923;
            }
            if ( v543 != 1 )
              goto LABEL_40;
            v385 = *(float *)Buf2;
            goto LABEL_920;
          }
          if ( a5 != 11 )
          {
            if ( a5 == 14 )
            {
LABEL_1262:
              v536 = v12 - 2;
              if ( !v536 )
              {
                v389 = (double)(int)*(_QWORD *)Buf2;
                goto LABEL_844;
              }
              v537 = v536 - 1;
              if ( !v537 )
              {
                v388 = (double)(int)*(_QWORD *)Buf2;
                goto LABEL_929;
              }
              v538 = v537 - 1;
              if ( !v538 )
              {
                v387 = (double)(int)*(_QWORD *)Buf2;
                goto LABEL_926;
              }
              v539 = v538 - 1;
              if ( !v539 )
              {
                v386 = (double)(int)*(_QWORD *)Buf2;
                goto LABEL_923;
              }
              if ( v539 != 1 )
                goto LABEL_40;
              v385 = (double)(int)*(_QWORD *)Buf2;
LABEL_920:
              v182 = v385 < *(double *)a2;
              goto LABEL_324;
            }
            if ( a5 != 15 )
              goto LABEL_40;
          }
          v416 = v12 - 2;
          if ( v416 )
          {
            v417 = v416 - 1;
            if ( v417 )
            {
              v418 = v417 - 1;
              if ( v418 )
              {
                v419 = v418 - 1;
                if ( v419 )
                {
                  if ( v419 != 1 )
                    goto LABEL_40;
                  v88 = *(double *)Buf2 < *(double *)a2;
                  goto LABEL_167;
                }
                v91 = *(double *)a2;
                goto LABEL_163;
              }
              v98 = *(double *)Buf2 < *(double *)a2;
              v99 = *(double *)Buf2 == *(double *)a2;
LABEL_181:
              v94 = !v98 && !v99;
              goto LABEL_183;
            }
            v102 = *(double *)a2;
LABEL_179:
            v98 = v102 < *(double *)Buf2;
            v99 = v102 == *(double *)Buf2;
            goto LABEL_181;
          }
          v106 = *(double *)a2;
          goto LABEL_189;
        }
        if ( a5 <= 8 )
        {
          if ( a5 != 8 )
          {
            switch ( a5 )
            {
              case 2u:
                v454 = v12 - 2;
                if ( !v454 )
                {
                  v441 = *(char *)Buf2;
                  goto LABEL_971;
                }
                v455 = v454 - 1;
                if ( !v455 )
                {
                  v439 = *(char *)Buf2;
                  goto LABEL_967;
                }
                v456 = v455 - 1;
                if ( !v456 )
                {
                  v437 = *(char *)Buf2;
                  goto LABEL_963;
                }
                v457 = v456 - 1;
                if ( !v457 )
                {
                  v435 = *(char *)Buf2;
                  goto LABEL_959;
                }
                if ( v457 != 1 )
                  goto LABEL_40;
                v433 = *(char *)Buf2;
                break;
              case 3u:
                v450 = v12 - 2;
                if ( !v450 )
                {
                  v441 = *(unsigned __int8 *)Buf2;
                  goto LABEL_971;
                }
                v451 = v450 - 1;
                if ( !v451 )
                {
                  v439 = *(unsigned __int8 *)Buf2;
                  goto LABEL_967;
                }
                v452 = v451 - 1;
                if ( !v452 )
                {
                  v437 = *(unsigned __int8 *)Buf2;
                  goto LABEL_963;
                }
                v453 = v452 - 1;
                if ( !v453 )
                {
                  v435 = *(unsigned __int8 *)Buf2;
                  goto LABEL_959;
                }
                if ( v453 != 1 )
                  goto LABEL_40;
                v433 = *(unsigned __int8 *)Buf2;
                break;
              case 4u:
                v446 = v12 - 2;
                if ( !v446 )
                {
                  v441 = *(__int16 *)Buf2;
                  goto LABEL_971;
                }
                v447 = v446 - 1;
                if ( !v447 )
                {
                  v439 = *(__int16 *)Buf2;
                  goto LABEL_967;
                }
                v448 = v447 - 1;
                if ( !v448 )
                {
                  v437 = *(__int16 *)Buf2;
                  goto LABEL_963;
                }
                v449 = v448 - 1;
                if ( !v449 )
                {
                  v435 = *(__int16 *)Buf2;
                  goto LABEL_959;
                }
                if ( v449 != 1 )
                  goto LABEL_40;
                v433 = *(__int16 *)Buf2;
                break;
              case 5u:
                v442 = v12 - 2;
                if ( v442 )
                {
                  v443 = v442 - 1;
                  if ( v443 )
                  {
                    v444 = v443 - 1;
                    if ( v444 )
                    {
                      v445 = v444 - 1;
                      if ( v445 )
                      {
                        if ( v445 != 1 )
                          goto LABEL_40;
                        v433 = *Buf2;
                        break;
                      }
                      v435 = *Buf2;
LABEL_959:
                      v434 = _mm_cvtsi32_si128(v435);
                      goto LABEL_960;
                    }
                    v437 = *Buf2;
LABEL_963:
                    v436 = _mm_cvtsi32_si128(v437);
                    goto LABEL_964;
                  }
                  v439 = *Buf2;
LABEL_967:
                  v438 = _mm_cvtsi32_si128(v439);
                  goto LABEL_968;
                }
                v441 = *Buf2;
LABEL_971:
                v440 = _mm_cvtsi32_si128(v441);
                goto LABEL_972;
              case 6u:
                v428 = v12 - 2;
                if ( v428 )
                {
                  v429 = v428 - 1;
                  if ( v429 )
                  {
                    v430 = v429 - 1;
                    if ( v430 )
                    {
                      v431 = v430 - 1;
                      if ( v431 )
                      {
                        if ( v431 != 1 )
                          goto LABEL_40;
                        v432 = _mm_cvtsi32_si128(*(_DWORD *)Buf2);
                        goto LABEL_956;
                      }
                      v434 = _mm_cvtsi32_si128(*(_DWORD *)Buf2);
LABEL_960:
                      LODWORD(v425) = _mm_cvtepi32_ps(v434).m128_u32[0];
                      goto LABEL_1052;
                    }
                    v436 = _mm_cvtsi32_si128(*(_DWORD *)Buf2);
LABEL_964:
                    LODWORD(v426) = _mm_cvtepi32_ps(v436).m128_u32[0];
                    goto LABEL_1055;
                  }
                  v438 = _mm_cvtsi32_si128(*(_DWORD *)Buf2);
LABEL_968:
                  LODWORD(v427) = _mm_cvtepi32_ps(v438).m128_u32[0];
                  goto LABEL_1058;
                }
                v440 = _mm_cvtsi32_si128(*(_DWORD *)Buf2);
LABEL_972:
                LODWORD(v107) = _mm_cvtepi32_ps(v440).m128_u32[0];
                goto LABEL_191;
              case 7u:
                v420 = v12 - 2;
                if ( v420 )
                {
                  v421 = v420 - 1;
                  if ( v421 )
                  {
                    v422 = v421 - 1;
                    if ( v422 )
                    {
                      v423 = v422 - 1;
                      if ( v423 )
                      {
                        if ( v423 != 1 )
                          goto LABEL_40;
                        v424 = (float)*(int *)Buf2;
                        goto LABEL_1049;
                      }
                      v425 = (float)*(int *)Buf2;
LABEL_1052:
                      v182 = *(float *)a2 < v425;
                      goto LABEL_324;
                    }
                    v426 = (float)*(int *)Buf2;
LABEL_1055:
                    v187 = v426 < *(float *)a2;
                    v188 = v426 == *(float *)a2;
                    goto LABEL_332;
                  }
                  v427 = (float)*(int *)Buf2;
LABEL_1058:
                  v187 = *(float *)a2 < v427;
                  v188 = *(float *)a2 == v427;
                  goto LABEL_332;
                }
                v107 = (float)*(int *)Buf2;
LABEL_191:
                v20 = *(float *)a2 == v107;
                goto LABEL_38;
              default:
                goto LABEL_40;
            }
            v432 = _mm_cvtsi32_si128(v433);
LABEL_956:
            LODWORD(v424) = _mm_cvtepi32_ps(v432).m128_u32[0];
            goto LABEL_1049;
          }
          goto LABEL_1020;
        }
        if ( a5 == 9 )
        {
          v470 = v12 - 2;
          if ( !v470 )
          {
            v107 = (float)(int)*(_QWORD *)Buf2;
            if ( *(__int64 *)Buf2 < 0 )
              v107 = v107 + 1.8446744e19;
            goto LABEL_191;
          }
          v471 = v470 - 1;
          if ( !v471 )
          {
            v427 = (float)(int)*(_QWORD *)Buf2;
            if ( *(__int64 *)Buf2 < 0 )
              v427 = v427 + 1.8446744e19;
            goto LABEL_1058;
          }
          v472 = v471 - 1;
          if ( !v472 )
          {
            v426 = (float)(int)*(_QWORD *)Buf2;
            if ( *(__int64 *)Buf2 < 0 )
              v426 = v426 + 1.8446744e19;
            goto LABEL_1055;
          }
          v473 = v472 - 1;
          if ( !v473 )
          {
            v425 = (float)(int)*(_QWORD *)Buf2;
            if ( *(__int64 *)Buf2 < 0 )
              v425 = v425 + 1.8446744e19;
            goto LABEL_1052;
          }
          if ( v473 != 1 )
            goto LABEL_40;
          v424 = (float)(int)*(_QWORD *)Buf2;
          if ( *(__int64 *)Buf2 < 0 )
            v424 = v424 + 1.8446744e19;
          goto LABEL_1049;
        }
        if ( a5 == 10 )
        {
          v466 = v12 - 2;
          if ( !v466 )
          {
            v123 = *(float *)a2;
            goto LABEL_218;
          }
          v467 = v466 - 1;
          if ( !v467 )
          {
            v120 = *(float *)a2;
            goto LABEL_212;
          }
          v468 = v467 - 1;
          if ( !v468 )
          {
            v98 = *(float *)Buf2 < *(float *)a2;
            v99 = *(float *)Buf2 == *(float *)a2;
            goto LABEL_181;
          }
          v469 = v468 - 1;
          if ( v469 )
          {
            if ( v469 != 1 )
              goto LABEL_40;
            v88 = *(float *)Buf2 < *(float *)a2;
            goto LABEL_167;
          }
          v93 = *(float *)a2;
          goto LABEL_166;
        }
        if ( a5 != 11 )
        {
          if ( a5 == 14 )
          {
LABEL_1020:
            v462 = v12 - 2;
            if ( !v462 )
            {
              v107 = (float)(int)*(_QWORD *)Buf2;
              goto LABEL_191;
            }
            v463 = v462 - 1;
            if ( !v463 )
            {
              v427 = (float)(int)*(_QWORD *)Buf2;
              goto LABEL_1058;
            }
            v464 = v463 - 1;
            if ( !v464 )
            {
              v426 = (float)(int)*(_QWORD *)Buf2;
              goto LABEL_1055;
            }
            v465 = v464 - 1;
            if ( !v465 )
            {
              v425 = (float)(int)*(_QWORD *)Buf2;
              goto LABEL_1052;
            }
            if ( v465 != 1 )
              goto LABEL_40;
            v424 = (float)(int)*(_QWORD *)Buf2;
LABEL_1049:
            v182 = v424 < *(float *)a2;
            goto LABEL_324;
          }
          if ( a5 != 15 )
            goto LABEL_40;
        }
        v458 = v12 - 2;
        if ( !v458 )
        {
          v106 = *(float *)a2;
          goto LABEL_189;
        }
        v459 = v458 - 1;
        if ( !v459 )
        {
          v102 = *(float *)a2;
          goto LABEL_179;
        }
        v460 = v459 - 1;
        if ( !v460 )
        {
          v97 = *(float *)a2;
          goto LABEL_173;
        }
        v461 = v460 - 1;
        if ( v461 )
        {
          if ( v461 != 1 )
            goto LABEL_40;
          v87 = *(float *)a2;
          goto LABEL_157;
        }
        v91 = *(float *)a2;
        goto LABEL_163;
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
                      goto LABEL_40;
                    v474 = v12 - 2;
                    if ( v474 )
                    {
                      v475 = v474 - 1;
                      if ( v475 )
                      {
                        v476 = v475 - 1;
                        if ( v476 )
                        {
                          v477 = v476 - 1;
                          if ( v477 )
                          {
                            if ( v477 != 1 )
                              goto LABEL_40;
                            v181 = *(unsigned int *)Buf2;
                            goto LABEL_319;
                          }
                          v183 = *(unsigned int *)Buf2;
LABEL_323:
                          v182 = *(_QWORD *)a2 < v183;
                          goto LABEL_324;
                        }
                        v185 = *(unsigned int *)Buf2;
LABEL_327:
                        v184 = *(_QWORD *)a2 < v185;
                        goto LABEL_328;
                      }
                      v189 = *(unsigned int *)Buf2;
LABEL_331:
                      v187 = *(_QWORD *)a2 < v189;
                      v188 = *(_QWORD *)a2 == v189;
                      goto LABEL_332;
                    }
                    goto LABEL_1075;
                  }
                  v478 = v12 - 2;
                  if ( v478 )
                  {
                    v479 = v478 - 1;
                    if ( !v479 )
                    {
                      v189 = *(int *)Buf2;
                      goto LABEL_331;
                    }
                    v480 = v479 - 1;
                    if ( !v480 )
                    {
                      v185 = *(int *)Buf2;
                      goto LABEL_327;
                    }
                    v481 = v480 - 1;
                    if ( !v481 )
                    {
                      v183 = *(int *)Buf2;
                      goto LABEL_323;
                    }
                    if ( v481 != 1 )
                      goto LABEL_40;
                    v181 = *(int *)Buf2;
LABEL_319:
                    v179 = *(_QWORD *)a2 < v181;
                    v180 = *(_QWORD *)a2 == v181;
LABEL_320:
                    v17 = v179 || v180;
                    goto LABEL_22;
                  }
LABEL_1085:
                  v72 = *(int *)Buf2;
                  goto LABEL_133;
                }
                v482 = v12 - 2;
                if ( v482 )
                {
                  v483 = v482 - 1;
                  if ( !v483 )
                  {
                    v189 = *Buf2;
                    goto LABEL_331;
                  }
                  v484 = v483 - 1;
                  if ( !v484 )
                  {
                    v185 = *Buf2;
                    goto LABEL_327;
                  }
                  v485 = v484 - 1;
                  if ( !v485 )
                  {
                    v183 = *Buf2;
                    goto LABEL_323;
                  }
                  if ( v485 != 1 )
                    goto LABEL_40;
                  v181 = *Buf2;
                  goto LABEL_319;
                }
LABEL_1095:
                v72 = *Buf2;
                goto LABEL_133;
              }
              v486 = v12 - 2;
              if ( v486 )
              {
                v487 = v486 - 1;
                if ( !v487 )
                {
                  v189 = *(__int16 *)Buf2;
                  goto LABEL_331;
                }
                v488 = v487 - 1;
                if ( !v488 )
                {
                  v185 = *(__int16 *)Buf2;
                  goto LABEL_327;
                }
                v489 = v488 - 1;
                if ( !v489 )
                {
                  v183 = *(__int16 *)Buf2;
                  goto LABEL_323;
                }
                if ( v489 != 1 )
                  goto LABEL_40;
                v181 = *(__int16 *)Buf2;
                goto LABEL_319;
              }
LABEL_1105:
              v72 = *(__int16 *)Buf2;
              goto LABEL_133;
            }
            v490 = v12 - 2;
            if ( v490 )
            {
              v491 = v490 - 1;
              if ( !v491 )
              {
                v189 = *(unsigned __int8 *)Buf2;
                goto LABEL_331;
              }
              v492 = v491 - 1;
              if ( !v492 )
              {
                v185 = *(unsigned __int8 *)Buf2;
                goto LABEL_327;
              }
              v493 = v492 - 1;
              if ( !v493 )
              {
                v183 = *(unsigned __int8 *)Buf2;
                goto LABEL_323;
              }
              if ( v493 != 1 )
                goto LABEL_40;
              v181 = *(unsigned __int8 *)Buf2;
              goto LABEL_319;
            }
LABEL_1115:
            v72 = *(unsigned __int8 *)Buf2;
            goto LABEL_133;
          }
          v494 = v12 - 2;
          if ( v494 )
          {
            v495 = v494 - 1;
            if ( !v495 )
            {
              v189 = *(char *)Buf2;
              goto LABEL_331;
            }
            v496 = v495 - 1;
            if ( !v496 )
            {
              v185 = *(char *)Buf2;
              goto LABEL_327;
            }
            v497 = v496 - 1;
            if ( !v497 )
            {
              v183 = *(char *)Buf2;
              goto LABEL_323;
            }
            if ( v497 != 1 )
              goto LABEL_40;
            v181 = *(char *)Buf2;
            goto LABEL_319;
          }
LABEL_132:
          v72 = *(char *)Buf2;
LABEL_133:
          v71 = *(_QWORD *)a2 == v72;
          goto LABEL_134;
        }
        goto LABEL_1137;
      }
      if ( a5 != 9 )
      {
        if ( a5 == 10 )
        {
          v506 = v12 - 2;
          if ( !v506 )
          {
            v123 = (float)(int)*(_QWORD *)a2;
            if ( *(__int64 *)a2 < 0 )
              v123 = v123 + 1.8446744e19;
            goto LABEL_218;
          }
          v507 = v506 - 1;
          if ( !v507 )
          {
            v120 = (float)(int)*(_QWORD *)a2;
            if ( *(__int64 *)a2 < 0 )
              v120 = v120 + 1.8446744e19;
            goto LABEL_212;
          }
          v508 = v507 - 1;
          if ( !v508 )
          {
            v117 = (float)(int)*(_QWORD *)a2;
            if ( *(__int64 *)a2 < 0 )
              v117 = v117 + 1.8446744e19;
            goto LABEL_206;
          }
          v509 = v508 - 1;
          if ( v509 )
          {
            if ( v509 != 1 )
              goto LABEL_40;
            v114 = (float)(int)*(_QWORD *)a2;
            if ( *(__int64 *)a2 < 0 )
              v114 = v114 + 1.8446744e19;
            goto LABEL_200;
          }
          v93 = (float)(int)*(_QWORD *)a2;
          if ( *(__int64 *)a2 < 0 )
            v93 = v93 + 1.8446744e19;
          goto LABEL_166;
        }
        if ( a5 == 11 )
        {
LABEL_1130:
          v498 = v12 - 2;
          if ( !v498 )
          {
            v106 = (double)(int)*(_QWORD *)a2;
            if ( *(__int64 *)a2 < 0 )
              v106 = v106 + 1.844674407370955e19;
            goto LABEL_189;
          }
          v499 = v498 - 1;
          if ( !v499 )
          {
            v102 = (double)(int)*(_QWORD *)a2;
            if ( *(__int64 *)a2 < 0 )
              v102 = v102 + 1.844674407370955e19;
            goto LABEL_179;
          }
          v500 = v499 - 1;
          if ( !v500 )
          {
            v97 = (double)(int)*(_QWORD *)a2;
            if ( *(__int64 *)a2 < 0 )
              v97 = v97 + 1.844674407370955e19;
            goto LABEL_173;
          }
          v501 = v500 - 1;
          if ( v501 )
          {
            if ( v501 != 1 )
              goto LABEL_40;
            v87 = (double)(int)*(_QWORD *)a2;
            if ( *(__int64 *)a2 < 0 )
              v87 = v87 + 1.844674407370955e19;
            goto LABEL_157;
          }
          v91 = (double)(int)*(_QWORD *)a2;
          if ( *(__int64 *)a2 < 0 )
            v91 = v91 + 1.844674407370955e19;
          goto LABEL_163;
        }
        if ( a5 != 14 )
        {
          if ( a5 != 15 )
            goto LABEL_40;
          goto LABEL_1130;
        }
      }
LABEL_1137:
      v502 = v12 - 2;
      if ( v502 )
      {
        v503 = v502 - 1;
        if ( !v503 )
        {
          v136 = *(_QWORD *)a2 < *(_QWORD *)Buf2;
          v137 = *(_QWORD *)a2 == *(_QWORD *)Buf2;
          goto LABEL_241;
        }
        v504 = v503 - 1;
        if ( !v504 )
        {
          v134 = *(_QWORD *)a2 < *(_QWORD *)Buf2;
          goto LABEL_236;
        }
        v505 = v504 - 1;
        if ( !v505 )
        {
          v132 = *(_QWORD *)a2 < *(_QWORD *)Buf2;
          goto LABEL_231;
        }
        if ( v505 != 1 )
          goto LABEL_40;
        v129 = *(_QWORD *)a2 < *(_QWORD *)Buf2;
        v130 = *(_QWORD *)a2 == *(_QWORD *)Buf2;
LABEL_226:
        v19 = v129 || v130;
        goto LABEL_34;
      }
      goto LABEL_1214;
    }
LABEL_1280:
    if ( a5 <= 8 )
    {
      if ( a5 != 8 )
      {
        switch ( a5 )
        {
          case 2u:
            v568 = v12 - 2;
            if ( !v568 )
              goto LABEL_132;
            v569 = v568 - 1;
            if ( !v569 )
            {
              v57 = *(char *)Buf2;
              goto LABEL_101;
            }
            v570 = v569 - 1;
            if ( !v570 )
            {
              v52 = *(char *)Buf2;
              goto LABEL_95;
            }
            v571 = v570 - 1;
            if ( !v571 )
            {
              v48 = *(char *)Buf2;
              goto LABEL_89;
            }
            if ( v571 != 1 )
              goto LABEL_40;
            v44 = *(char *)Buf2;
            break;
          case 3u:
            v564 = v12 - 2;
            if ( !v564 )
              goto LABEL_1115;
            v565 = v564 - 1;
            if ( !v565 )
            {
              v57 = *(unsigned __int8 *)Buf2;
              goto LABEL_101;
            }
            v566 = v565 - 1;
            if ( !v566 )
            {
              v52 = *(unsigned __int8 *)Buf2;
              goto LABEL_95;
            }
            v567 = v566 - 1;
            if ( !v567 )
            {
              v48 = *(unsigned __int8 *)Buf2;
              goto LABEL_89;
            }
            if ( v567 != 1 )
              goto LABEL_40;
            v44 = *(unsigned __int8 *)Buf2;
            break;
          case 4u:
            v560 = v12 - 2;
            if ( !v560 )
              goto LABEL_1105;
            v561 = v560 - 1;
            if ( !v561 )
            {
              v57 = *(__int16 *)Buf2;
              goto LABEL_101;
            }
            v562 = v561 - 1;
            if ( !v562 )
            {
              v52 = *(__int16 *)Buf2;
              goto LABEL_95;
            }
            v563 = v562 - 1;
            if ( !v563 )
            {
              v48 = *(__int16 *)Buf2;
              goto LABEL_89;
            }
            if ( v563 != 1 )
              goto LABEL_40;
            v44 = *(__int16 *)Buf2;
            break;
          case 5u:
            v556 = v12 - 2;
            if ( !v556 )
              goto LABEL_1095;
            v557 = v556 - 1;
            if ( !v557 )
            {
              v57 = *Buf2;
              goto LABEL_101;
            }
            v558 = v557 - 1;
            if ( !v558 )
            {
              v52 = *Buf2;
              goto LABEL_95;
            }
            v559 = v558 - 1;
            if ( !v559 )
            {
              v48 = *Buf2;
              goto LABEL_89;
            }
            if ( v559 != 1 )
              goto LABEL_40;
            v44 = *Buf2;
            break;
          case 6u:
            v552 = v12 - 2;
            if ( !v552 )
              goto LABEL_1085;
            v553 = v552 - 1;
            if ( !v553 )
            {
              v57 = *(int *)Buf2;
              goto LABEL_101;
            }
            v554 = v553 - 1;
            if ( !v554 )
            {
              v52 = *(int *)Buf2;
              goto LABEL_95;
            }
            v555 = v554 - 1;
            if ( !v555 )
            {
              v48 = *(int *)Buf2;
              goto LABEL_89;
            }
            if ( v555 != 1 )
              goto LABEL_40;
            v44 = *(int *)Buf2;
            break;
          case 7u:
            v548 = v12 - 2;
            if ( !v548 )
            {
LABEL_1075:
              v72 = *(unsigned int *)Buf2;
              goto LABEL_133;
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
                    goto LABEL_40;
                  v44 = *(unsigned int *)Buf2;
                  break;
                }
                v48 = *(unsigned int *)Buf2;
LABEL_89:
                v47 = __OFSUB__(*(_QWORD *)a2, v48);
                v46 = *(_QWORD *)a2 - v48 < 0;
                goto LABEL_90;
              }
              v52 = *(unsigned int *)Buf2;
LABEL_95:
              v51 = __OFSUB__(*(_QWORD *)a2, v52);
              v50 = *(_QWORD *)a2 - v52 < 0;
              goto LABEL_96;
            }
            v57 = *(unsigned int *)Buf2;
LABEL_101:
            v56 = __OFSUB__(*(_QWORD *)a2, v57);
            v54 = *(_QWORD *)a2 == v57;
            v55 = *(_QWORD *)a2 - v57 < 0;
            goto LABEL_102;
          default:
            goto LABEL_40;
        }
        v43 = __OFSUB__(*(_QWORD *)a2, v44);
        v41 = *(_QWORD *)a2 == v44;
        v42 = *(_QWORD *)a2 - v44 < 0;
        goto LABEL_84;
      }
LABEL_1189:
      v510 = v12 - 2;
      if ( v510 )
      {
        v511 = v510 - 1;
        if ( !v511 )
        {
          v35 = __OFSUB__(*(_QWORD *)a2, *(_QWORD *)Buf2);
          v33 = *(_QWORD *)a2 == *(_QWORD *)Buf2;
          v34 = (__int64)(*(_QWORD *)a2 - *(_QWORD *)Buf2) < 0;
          goto LABEL_74;
        }
        v512 = v511 - 1;
        if ( !v512 )
        {
          v32 = __OFSUB__(*(_QWORD *)a2, *(_QWORD *)Buf2);
          v31 = (__int64)(*(_QWORD *)a2 - *(_QWORD *)Buf2) < 0;
          goto LABEL_71;
        }
        v513 = v512 - 1;
        if ( !v513 )
        {
          v30 = __OFSUB__(*(_QWORD *)a2, *(_QWORD *)Buf2);
          v29 = (__int64)(*(_QWORD *)a2 - *(_QWORD *)Buf2) < 0;
          goto LABEL_68;
        }
        if ( v513 != 1 )
          goto LABEL_40;
        v28 = __OFSUB__(*(_QWORD *)a2, *(_QWORD *)Buf2);
        v26 = *(_QWORD *)a2 == *(_QWORD *)Buf2;
        v27 = (__int64)(*(_QWORD *)a2 - *(_QWORD *)Buf2) < 0;
        goto LABEL_65;
      }
LABEL_1214:
      v18 = *(_QWORD *)a2 == *(_QWORD *)Buf2;
      goto LABEL_33;
    }
    if ( a5 == 9 )
      goto LABEL_1137;
    if ( a5 == 10 )
    {
      v518 = v12 - 2;
      if ( !v518 )
      {
        v123 = (float)(int)*(_QWORD *)a2;
        goto LABEL_218;
      }
      v519 = v518 - 1;
      if ( !v519 )
      {
        v120 = (float)(int)*(_QWORD *)a2;
        goto LABEL_212;
      }
      v520 = v519 - 1;
      if ( !v520 )
      {
        v117 = (float)(int)*(_QWORD *)a2;
        goto LABEL_206;
      }
      v521 = v520 - 1;
      if ( v521 )
      {
        if ( v521 != 1 )
          goto LABEL_40;
        v114 = (float)(int)*(_QWORD *)a2;
        goto LABEL_200;
      }
      v93 = (float)(int)*(_QWORD *)a2;
      goto LABEL_166;
    }
    if ( a5 != 11 )
    {
      if ( a5 == 14 )
        goto LABEL_1189;
      if ( a5 != 15 )
        goto LABEL_40;
    }
    v514 = v12 - 2;
    if ( !v514 )
    {
      v106 = (double)(int)*(_QWORD *)a2;
      goto LABEL_189;
    }
    v515 = v514 - 1;
    if ( !v515 )
    {
      v102 = (double)(int)*(_QWORD *)a2;
      goto LABEL_179;
    }
    v516 = v515 - 1;
    if ( !v516 )
    {
      v97 = (double)(int)*(_QWORD *)a2;
      goto LABEL_173;
    }
    v517 = v516 - 1;
    if ( v517 )
    {
      if ( v517 != 1 )
        goto LABEL_40;
      v87 = (double)(int)*(_QWORD *)a2;
      goto LABEL_157;
    }
    v91 = (double)(int)*(_QWORD *)a2;
    goto LABEL_163;
  }
  if ( a1 > 0x14 )
  {
    switch ( a1 )
    {
      case 0x15u:
        if ( a5 == 21 && v12 == 2 )
        {
          if ( *((_DWORD *)a2 + 4) != *((_DWORD *)Buf2 + 4) )
            goto LABEL_12;
          v573 = *(_QWORD *)a2 - *(_QWORD *)Buf2;
          if ( *(_QWORD *)a2 == *(_QWORD *)Buf2 )
            v573 = *((_QWORD *)a2 + 1) - *((_QWORD *)Buf2 + 1);
          v20 = v573 == 0;
          goto LABEL_38;
        }
        goto LABEL_14;
      case 0x16u:
        v572 = a5 == 22;
        break;
      case 0x17u:
        v383 = a5 == 23;
LABEL_833:
        if ( !v383 )
          goto LABEL_40;
        goto LABEL_834;
      case 0x18u:
        v572 = a5 == 24;
        break;
      default:
        if ( a1 != 25 || a5 != 25 && a5 != 18 || v12 != 2 )
          goto LABEL_40;
        goto LABEL_1219;
    }
    if ( !v572 || v12 != 2 )
      goto LABEL_40;
    goto LABEL_1344;
  }
  if ( a1 >= 0x13 )
    goto LABEL_40;
  switch ( a1 )
  {
    case 0xEu:
      goto LABEL_1280;
    case 0xFu:
      goto LABEL_1236;
    case 0x10u:
      if ( a5 != 16 )
        goto LABEL_40;
      v524 = v12 - 2;
      if ( v524 )
      {
        v525 = v524 - 1;
        if ( v525 )
        {
          v526 = v525 - 1;
          if ( v526 )
          {
            v527 = v526 - 1;
            if ( v527 )
            {
              if ( v527 != 1 )
                goto LABEL_40;
              v103 = CompareFileTimeType(a2, Buf2) + 1;
            }
            else
            {
              v103 = CompareFileTimeType(a2, Buf2);
            }
            v94 = v103 <= 1;
            goto LABEL_183;
          }
          v523 = (unsigned int)CompareFileTimeType(a2, Buf2) == -1;
        }
        else
        {
          v523 = (unsigned int)CompareFileTimeType(a2, Buf2) == 1;
        }
        goto LABEL_1226;
      }
      v522 = CompareFileTimeType(a2, Buf2);
LABEL_1224:
      v523 = v522 == 0;
LABEL_1226:
      v94 = v523;
      goto LABEL_183;
    case 0x11u:
      if ( a5 != 17 || v12 != 2 )
        goto LABEL_40;
      goto LABEL_32;
  }
  if ( a5 != 18 )
    goto LABEL_40;
  if ( v12 != 2 )
  {
    if ( v12 - 9 > 2 )
      goto LABEL_40;
    v17 = SubstringMatch(a2, Buf2);
    goto LABEL_22;
  }
LABEL_1219:
  if ( !v14 )
    goto LABEL_837;
  if ( (_DWORD)v9 && (_DWORD)v9 == a7 )
  {
    v522 = wcsicmp(a2, Buf2);
    goto LABEL_1224;
  }
  *a8 = 0;
LABEL_14:
  if ( v11 )
  {
    LOBYTE(v8) = *a8 == 0;
    *a8 = v8;
  }
  return v13;
}
