/*
 * XREFs of sub_140283BBC @ 0x140283BBC
 * Callers:
 *     FsRtlMdlReadCompleteDevEx @ 0x140277000 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140283BBC @ 0x140283BBC (sub_140283BBC.c)
 *     sub_14079BAE4 @ 0x14079BAE4 (sub_14079BAE4.c)
 * Callees:
 *     sub_14017D2FC @ 0x14017D2FC (sub_14017D2FC.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     sub_140283BBC @ 0x140283BBC (sub_140283BBC.c)
 *     sub_140285DF0 @ 0x140285DF0 (sub_140285DF0.c)
 *     $$ea @ 0x140286C4C ($$ea.c)
 *     sub_14079AC8C @ 0x14079AC8C (sub_14079AC8C.c)
 */

__int64 __fastcall sub_140283BBC(unsigned __int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // r8
  __int64 v5; // rsi
  __int64 result; // rax
  int v7; // ecx
  unsigned int *v8; // rax
  unsigned __int64 v9; // rdi
  unsigned int v10; // r10d
  unsigned __int64 v11; // rax
  unsigned int v12; // ecx
  unsigned int v13; // edx
  int v14; // ebx
  unsigned int v15; // r9d
  unsigned __int64 v16; // r11
  __int64 v17; // rbx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  int v26; // ecx
  unsigned int *v27; // rax
  unsigned int v28; // esi
  unsigned int v29; // r10d
  unsigned __int64 v30; // rax
  unsigned int v31; // ecx
  unsigned int v32; // edx
  int v33; // ebx
  unsigned __int64 v34; // r11
  unsigned int v35; // r9d
  unsigned __int64 v36; // r8
  __int64 v37; // rbx
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  __int64 v43; // rax
  int v44; // eax
  int v45; // eax
  unsigned int v46; // ecx
  int v47; // eax
  unsigned int v48; // edx
  int v49; // esi
  unsigned __int64 v50; // rbx
  int v51; // r8d
  int v52; // eax
  __int64 v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  ULONG_PTR v57; // rax
  ULONG_PTR v58; // rbx
  int v59; // edx
  unsigned int v60; // eax
  __int64 v61; // r8
  int v62; // edx
  unsigned __int64 v63; // rcx
  int v64; // edi
  ULONG_PTR v65; // rsi
  _QWORD *v66; // rax
  int v67; // ecx
  __int64 v68; // rdx
  __int64 v69; // rdx
  _QWORD *v70; // r8
  unsigned __int64 v71; // rcx
  const char *v72; // rax
  unsigned __int64 v73; // rdx
  __int64 v74; // r9
  unsigned __int64 v75; // rax
  __int64 v76; // rax
  bool v77; // zf
  unsigned __int64 k; // rax
  __int64 v79; // rcx
  unsigned __int64 v80; // rdi
  unsigned __int64 v81; // rcx
  _QWORD *v82; // rdi
  int v83; // ecx
  _QWORD *v84; // rax
  __int64 v85; // rdx
  unsigned int v86; // r8d
  _QWORD *v87; // rax
  unsigned int v88; // edx
  unsigned __int64 v89; // rcx
  __int64 v90; // rax
  unsigned int *v91; // rdi
  __int64 v92; // r8
  char *v93; // r9
  int v94; // esi
  __int16 v95; // ax
  char *v96; // r8
  int v97; // r11d
  signed __int64 v98; // r10
  __int64 v99; // rdx
  __int64 v100; // rax
  __int64 v101; // xmm1_8
  __int64 *v102; // r10
  unsigned int v103; // r8d
  __int64 *v104; // r11
  __int64 v105; // rcx
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rax
  char *v109; // r8
  int v110; // r11d
  __int64 v111; // rdx
  __int64 v112; // rax
  char *v113; // r8
  int v114; // r11d
  __int64 v115; // rdx
  __int64 v116; // rax
  unsigned int v117; // ecx
  ULONG_PTR v118; // r11
  unsigned int v119; // edx
  unsigned int v120; // eax
  unsigned int v121; // ecx
  unsigned int v122; // ecx
  __int64 v123; // rax
  unsigned int v124; // r10d
  const char *v125; // r8
  ULONG_PTR *v126; // rax
  const char *v127; // rax
  const char *v128; // rcx
  unsigned __int64 v129; // rdx
  unsigned int v130; // edi
  unsigned __int64 v131; // r11
  __int64 v132; // rax
  unsigned __int64 m; // rax
  __int64 v134; // rdx
  __int64 v135; // rdx
  __int64 v136; // rax
  __int64 v137; // rdx
  __int64 v138; // rsi
  int v139; // r8d
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // rax
  __int64 v143; // rax
  unsigned __int64 v144; // rdi
  int v145; // edx
  unsigned int v146; // eax
  __int64 v147; // r8
  int v148; // edx
  unsigned __int64 v149; // rcx
  int v150; // ebx
  ULONG_PTR *v151; // r10
  _DWORD *v152; // r11
  _BYTE *v153; // rsi
  __int64 v154; // r8
  int v155; // ecx
  const char *v156; // rbx
  _QWORD *v157; // rax
  __int64 v158; // rdx
  const char *v159; // rax
  const char *v160; // rcx
  ULONG_PTR v161; // rdx
  int v162; // r9d
  unsigned __int64 v163; // rax
  __int64 v164; // rax
  ULONG_PTR n; // rax
  unsigned __int64 v166; // rsi
  __int64 v167; // rsi
  __int64 v168; // rcx
  __int64 v169; // rdx
  __int64 v170; // rax
  __int64 v171; // rax
  __int64 v172; // rbx
  int v173; // edx
  unsigned int v174; // eax
  __int64 v175; // r8
  int v176; // edx
  unsigned __int64 v177; // rcx
  int v178; // edi
  _QWORD *v179; // rax
  int v180; // ecx
  __int64 v181; // rdx
  __int64 v182; // r10
  unsigned int v183; // edi
  unsigned __int64 v184; // rcx
  const char *v185; // rax
  unsigned int v186; // r9d
  unsigned __int64 v187; // rax
  __int64 v188; // rax
  ULONG_PTR ii; // rax
  unsigned __int64 v190; // rsi
  ULONG_PTR v191; // rdi
  int v192; // eax
  __int64 v193; // rax
  int v194; // ecx
  _QWORD *v195; // rax
  __int64 *v196; // rax
  __int64 v197; // rax
  ULONG_PTR v198; // rdi
  __int64 v199; // rax
  __int64 v200; // r8
  unsigned __int16 v201; // r9
  unsigned int *v202; // rdi
  __int64 v203; // rax
  unsigned int *v204; // r11
  ULONG_PTR *v205; // r10
  unsigned int v206; // esi
  unsigned int *v207; // rcx
  unsigned int v208; // r8d
  unsigned int v209; // eax
  unsigned int v210; // ecx
  unsigned int v211; // edx
  unsigned int v212; // eax
  __int64 v213; // rsi
  __int64 v214; // rdx
  __int64 v215; // rcx
  __int64 v216; // rax
  __int64 v217; // rax
  __int64 v218; // rdi
  int v219; // eax
  __int64 v220; // r8
  __int64 v221; // r9
  __int64 v222; // rdx
  unsigned __int64 v223; // rax
  int v224; // ebx
  void (__fastcall *v225)(__int64); // r8
  __int64 v226; // rcx
  _QWORD *v227; // rax
  __int64 v228; // rdx
  int v229; // r8d
  unsigned int *v230; // r11
  unsigned __int64 v231; // rdx
  unsigned __int64 jj; // rax
  ULONG_PTR v233; // rax
  __int64 v234; // rax
  __int64 v235; // rax
  unsigned __int64 v236; // r9
  unsigned __int64 v237; // r10
  unsigned __int64 v238; // rax
  _DWORD *v239; // rax
  __int64 v240; // rdx
  __int64 v241; // rcx
  char *v242; // r11
  _DWORD *v243; // rbx
  int v244; // r10d
  __int16 v245; // ax
  char *v246; // rdx
  int v247; // r9d
  __int64 v248; // r8
  char v249; // cl
  char v250; // al
  char *v251; // r8
  unsigned int v252; // edx
  char *v253; // r9
  __int64 v254; // rcx
  __int64 v255; // rax
  char v256; // cl
  char v257; // al
  char *v258; // rdx
  int v259; // r9d
  char v260; // cl
  char v261; // al
  char *v262; // rdx
  int v263; // r9d
  char v264; // cl
  char v265; // al
  unsigned int v266; // ecx
  __int64 v267; // rsi
  unsigned __int64 v268; // r8
  unsigned int *v269; // r11
  unsigned int v270; // edx
  unsigned int v271; // eax
  unsigned int v272; // ecx
  unsigned int v273; // r11d
  _QWORD *v274; // r8
  ULONG_PTR *v275; // rdx
  unsigned int v276; // r9d
  ULONG_PTR v277; // r10
  unsigned int *v278; // rcx
  const char *v279; // rax
  unsigned __int64 v280; // rdx
  unsigned int v281; // r9d
  unsigned __int64 v282; // r10
  __int64 v283; // rax
  unsigned __int64 kk; // rax
  unsigned int *v285; // rcx
  unsigned int v286; // eax
  ULONG_PTR v287; // rbx
  _BYTE *v288; // r8
  unsigned int *v289; // r9
  __int64 v290; // rax
  ULONG_PTR *v291; // rdx
  unsigned int v292; // r9d
  unsigned int *v293; // rcx
  unsigned int v294; // r9d
  _QWORD *v295; // r8
  ULONG_PTR v296; // rsi
  unsigned int mm; // r10d
  const char *v298; // rax
  unsigned __int64 v299; // rdx
  unsigned int v300; // r10d
  unsigned __int64 v301; // rax
  __int64 v302; // rax
  unsigned __int64 nn; // rax
  unsigned int v304; // r9d
  unsigned int v305; // eax
  unsigned int v306; // r11d
  const char *v307; // r8
  unsigned int *v308; // rcx
  const char *v309; // r10
  ULONG_PTR *v310; // rdx
  const char *v311; // rax
  unsigned __int64 v312; // rdx
  unsigned int v313; // r9d
  unsigned __int64 v314; // r10
  __int64 v315; // rax
  unsigned __int64 i1; // rax
  unsigned int *v317; // rdx
  __int64 v318; // rax
  __int64 v319; // rax
  __int64 v320; // rcx
  __int64 v321; // rax
  __int64 v322; // rdi
  __int64 v323; // rcx
  __int64 v324; // rdi
  __int64 i2; // rbx
  __int64 v326; // rax
  __int64 v327; // rdx
  unsigned __int64 i; // [rsp+38h] [rbp-D0h]
  unsigned __int64 j; // [rsp+38h] [rbp-D0h]
  ULONG_PTR v330; // [rsp+38h] [rbp-D0h]
  __int64 v331; // [rsp+38h] [rbp-D0h]
  unsigned int v332; // [rsp+38h] [rbp-D0h]
  unsigned int *v333; // [rsp+38h] [rbp-D0h]
  unsigned int v334; // [rsp+40h] [rbp-C8h]
  unsigned int v335; // [rsp+40h] [rbp-C8h]
  unsigned int v336; // [rsp+40h] [rbp-C8h]
  unsigned int v337; // [rsp+40h] [rbp-C8h]
  int v338; // [rsp+44h] [rbp-C4h]
  unsigned int v339; // [rsp+44h] [rbp-C4h]
  unsigned int v340; // [rsp+44h] [rbp-C4h]
  unsigned int v341; // [rsp+48h] [rbp-C0h]
  unsigned int v342; // [rsp+48h] [rbp-C0h]
  unsigned int v343; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v344; // [rsp+50h] [rbp-B8h]
  __int64 v345; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v346; // [rsp+60h] [rbp-A8h]
  unsigned __int64 CurrentIrql; // [rsp+68h] [rbp-A0h]
  ULONG_PTR *v348; // [rsp+70h] [rbp-98h]
  unsigned int *v349; // [rsp+78h] [rbp-90h]
  unsigned int v350; // [rsp+80h] [rbp-88h]
  ULONG_PTR v351; // [rsp+88h] [rbp-80h]
  unsigned __int64 v352; // [rsp+90h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp-70h] BYREF
  __int64 v354; // [rsp+A0h] [rbp-68h]
  unsigned int v355; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v356; // [rsp+B0h] [rbp-58h]
  unsigned int v357; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v358; // [rsp+C0h] [rbp-48h] BYREF
  int v359; // [rsp+C8h] [rbp-40h]
  int v360; // [rsp+CCh] [rbp-3Ch]
  int v361; // [rsp+D0h] [rbp-38h] BYREF
  _DWORD v362[6]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE *v363; // [rsp+F0h] [rbp-18h]
  _BYTE *v364; // [rsp+F8h] [rbp-10h]
  unsigned __int64 v365; // [rsp+108h] [rbp+0h]
  _DWORD *v366; // [rsp+110h] [rbp+8h]
  ULONG_PTR v367; // [rsp+118h] [rbp+10h] BYREF
  __int64 v368; // [rsp+120h] [rbp+18h]
  __int64 v369; // [rsp+128h] [rbp+20h]
  __int64 v370; // [rsp+130h] [rbp+28h]
  char *v371; // [rsp+138h] [rbp+30h]
  __int64 *v372; // [rsp+140h] [rbp+38h]
  char *v373; // [rsp+148h] [rbp+40h]
  char *v374; // [rsp+150h] [rbp+48h]
  char *v375; // [rsp+160h] [rbp+58h]
  char *v376; // [rsp+168h] [rbp+60h]
  char *v377; // [rsp+170h] [rbp+68h]
  ULONG_PTR v378; // [rsp+178h] [rbp+70h]
  unsigned __int64 v379; // [rsp+180h] [rbp+78h]
  ULONG_PTR v380; // [rsp+188h] [rbp+80h]
  __int64 v381; // [rsp+190h] [rbp+88h]
  unsigned int v385; // [rsp+1D8h] [rbp+D0h]
  unsigned int v386; // [rsp+1E0h] [rbp+D8h]
  int v387; // [rsp+1E0h] [rbp+D8h]
  int v388; // [rsp+1E0h] [rbp+D8h]
  int v389; // [rsp+1E0h] [rbp+D8h]
  unsigned int v390; // [rsp+1E0h] [rbp+D8h]
  unsigned int v391; // [rsp+1E0h] [rbp+D8h]
  _QWORD *v392; // [rsp+1E0h] [rbp+D8h]
  unsigned __int16 v393; // [rsp+1E0h] [rbp+D8h]
  int v394; // [rsp+1E0h] [rbp+D8h]

  v352 = *a1;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *, int *))(v352 + 456))(a2, &v358, &v361);
  v4 = 0LL;
  v348 = (ULONG_PTR *)v3;
  v5 = v3;
  if ( !v3 )
    return 3221225595LL;
  v7 = 4;
  v356 = 0LL;
  v8 = &v357;
  do
  {
    *(_BYTE *)v8 = 0;
    v8 = (unsigned int *)((char *)v8 + 1);
    --v7;
  }
  while ( v7 );
  v9 = v352;
  v10 = 0;
  CurrentIrql = v352;
  v386 = *(_DWORD *)(v352 + 1396);
  if ( v386 )
  {
    v11 = *(_QWORD *)(v352 + 1840);
    v12 = v357;
    v13 = HIDWORD(v356);
    v14 = v356;
    for ( i = v11; ; v11 = i )
    {
      v15 = 0;
      v16 = v9;
      if ( v11 )
        v16 = v11;
      v4 = v16 + *(unsigned int *)(v16 + 1392);
      if ( v14 && v13 <= v10 )
      {
        v15 = v13;
        v4 = v16 + v12;
      }
      if ( v15 != v10 )
        break;
LABEL_37:
      LODWORD(v356) = 1;
      v12 = v4 - v16;
      v14 = 1;
      v25 = *(_DWORD *)v4;
      v357 = v4 - v16;
      v13 = v15;
      HIDWORD(v356) = v15;
      if ( (v25 == 1 || v25 == 12) && *(_QWORD *)(v4 + 8) == v5 && *(_DWORD *)(v4 + 16) == v361 )
        goto LABEL_45;
      if ( (unsigned int)(v25 - 33) <= 1 && *(_QWORD *)(v4 + 32) == v358 )
        goto LABEL_45;
      ++v10;
      v4 = 0LL;
      if ( v10 >= v386 )
        goto LABEL_45;
    }
    v17 = v10 - v15;
    v15 = v10;
    while ( 1 )
    {
      v18 = *(_DWORD *)v4;
      if ( *(int *)v4 > 17 )
      {
        switch ( v18 )
        {
          case 19:
LABEL_34:
            v23 = 56LL;
            goto LABEL_35;
          case 28:
            v24 = *(unsigned __int16 *)(v4 + 40);
            goto LABEL_24;
          case 30:
            v23 = (((*(_DWORD *)(v4 + 36) - 1) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*(unsigned __int16 *)(v4 + 40) + 2);
            goto LABEL_35;
        }
        if ( (unsigned int)(v18 - 33) <= 1 )
        {
          v23 = 20
              * (unsigned int)(((*(_DWORD *)(v4 + 32) & 0xFFF) + (unsigned __int64)*(unsigned int *)(v4 + 40) + 4095) >> 12)
              + 48;
          goto LABEL_35;
        }
      }
      else
      {
        if ( v18 == 17 )
          goto LABEL_34;
        v19 = v18 - 1;
        if ( !v19 )
        {
LABEL_26:
          v23 = 4 * (*(_DWORD *)(v4 + 16) / 0xCu) + 48;
          goto LABEL_35;
        }
        v20 = v19 - 6;
        if ( !v20 )
        {
          v23 = (unsigned int)(24 * (*(_DWORD *)(v4 + 24) + 2));
          goto LABEL_35;
        }
        v21 = v20 - 1;
        if ( !v21 )
        {
          v24 = *(unsigned __int16 *)(v4 + 32);
LABEL_24:
          v23 = (v24 + 55) & 0xFFFFFFF8;
          goto LABEL_35;
        }
        v22 = v21 - 2;
        if ( !v22 )
        {
          v23 = (unsigned int)(16 * (*(_DWORD *)(v4 + 28) + 3));
          goto LABEL_35;
        }
        if ( v22 == 2 )
          goto LABEL_26;
      }
      v23 = 48LL;
LABEL_35:
      v4 += v23;
      if ( !--v17 )
      {
        v9 = CurrentIrql;
        v5 = (__int64)v348;
        goto LABEL_37;
      }
    }
  }
LABEL_45:
  if ( v4 )
    return 3221225742LL;
  v349 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, ULONG_PTR *, unsigned int *))(v9 + 456))(
                           a2,
                           &BugCheckParameter2,
                           &v343);
  if ( !v349 )
    goto LABEL_99;
  v26 = 4;
  v354 = 0LL;
  v27 = &v355;
  do
  {
    *(_BYTE *)v27 = 0;
    v27 = (unsigned int *)((char *)v27 + 1);
    --v26;
  }
  while ( v26 );
  v28 = *(_DWORD *)(v9 + 1396);
  v29 = 0;
  v387 = 0;
  v334 = v28;
  if ( v28 )
  {
    v30 = *(_QWORD *)(v9 + 1840);
    v31 = v355;
    v32 = HIDWORD(v354);
    v33 = v354;
    for ( j = v30; ; v30 = j )
    {
      v34 = v9;
      if ( v30 )
        v34 = v30;
      v348 = (ULONG_PTR *)v34;
      v35 = 0;
      v36 = v34 + *(unsigned int *)(v34 + 1392);
      if ( v33 && v32 <= v29 )
      {
        v35 = v32;
        v36 = v34 + v31;
      }
      if ( v35 != v29 )
        break;
LABEL_82:
      LODWORD(v354) = 1;
      v31 = v36 - v34;
      v33 = 1;
      v45 = *(_DWORD *)v36;
      v355 = v36 - v34;
      v32 = v35;
      HIDWORD(v354) = v35;
      if ( (v45 == 1 || v45 == 12) && *(unsigned int **)(v36 + 8) == v349 && *(_DWORD *)(v36 + 16) == v343
        || (unsigned int)(v45 - 33) <= 1 && *(_QWORD *)(v36 + 32) == BugCheckParameter2 )
      {
        goto LABEL_91;
      }
      v387 = ++v29;
      if ( v29 >= v28 )
        goto LABEL_90;
    }
    v37 = v29 - v35;
    v35 = v29;
    while ( 1 )
    {
      v38 = *(_DWORD *)v36;
      if ( *(int *)v36 > 17 )
      {
        switch ( v38 )
        {
          case 19:
LABEL_79:
            v43 = 56LL;
            goto LABEL_80;
          case 28:
            v44 = *(unsigned __int16 *)(v36 + 40);
            goto LABEL_69;
          case 30:
            v43 = (((*(_DWORD *)(v36 + 36) - 1) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*(unsigned __int16 *)(v36 + 40) + 2);
            goto LABEL_80;
        }
        if ( (unsigned int)(v38 - 33) <= 1 )
        {
          v43 = 20
              * (unsigned int)(((*(_DWORD *)(v36 + 32) & 0xFFF) + (unsigned __int64)*(unsigned int *)(v36 + 40) + 4095) >> 12)
              + 48;
          goto LABEL_80;
        }
      }
      else
      {
        if ( v38 == 17 )
          goto LABEL_79;
        v39 = v38 - 1;
        if ( !v39 )
        {
LABEL_71:
          v43 = 4 * (*(_DWORD *)(v36 + 16) / 0xCu) + 48;
          goto LABEL_80;
        }
        v40 = v39 - 6;
        if ( !v40 )
        {
          v43 = (unsigned int)(24 * (*(_DWORD *)(v36 + 24) + 2));
          goto LABEL_80;
        }
        v41 = v40 - 1;
        if ( !v41 )
        {
          v44 = *(unsigned __int16 *)(v36 + 32);
LABEL_69:
          v43 = (v44 + 55) & 0xFFFFFFF8;
          goto LABEL_80;
        }
        v42 = v41 - 2;
        if ( !v42 )
        {
          v43 = (unsigned int)(16 * (*(_DWORD *)(v36 + 28) + 3));
          goto LABEL_80;
        }
        if ( v42 == 2 )
          goto LABEL_71;
      }
      v43 = 48LL;
LABEL_80:
      v36 += v43;
      if ( !--v37 )
      {
        v9 = CurrentIrql;
        v29 = v387;
        LODWORD(v34) = (_DWORD)v348;
        v28 = v334;
        goto LABEL_82;
      }
    }
  }
LABEL_90:
  v36 = 0LL;
LABEL_91:
  v364 = (_BYTE *)v36;
  if ( v36 )
  {
    v46 = -1073741554;
    goto LABEL_497;
  }
  v47 = (*(__int64 (__fastcall **)(__int64))(v9 + 616))(a2);
  v48 = a3;
  v49 = v47;
  v50 = v343;
  v338 = v47;
  v341 = v343;
  if ( (a3 & 2) != 0 && !v47 )
  {
    v46 = 0;
    goto LABEL_498;
  }
  if ( (*(_DWORD *)(v9 + 1672) & 0x40000000) != 0 )
  {
    v46 = sub_14079AC8C(&v352, BugCheckParameter2, a3);
    goto LABEL_497;
  }
  v330 = BugCheckParameter2;
  v345 = (*(__int64 (__fastcall **)(ULONG_PTR))(v9 + 448))(BugCheckParameter2);
  if ( !v345 )
    goto LABEL_99;
  v51 = *(_DWORD *)(v9 + 1580);
  v346 = v50 / 0xC;
  v52 = v49;
  v53 = *(unsigned int *)(v9 + 1356);
  v54 = (unsigned int)v53 + 4 * (unsigned int)(v50 / 0xC) + 48;
  v388 = v52 != 0 ? 12 : 1;
  v55 = v9 & -(__int64)((*(_DWORD *)(v9 + 1672) & 0x20000000) != 0);
  if ( v51 > 1 )
  {
    if ( !v55 )
    {
      v57 = sub_140285DF0(v9, v54);
      goto LABEL_108;
    }
    v56 = *(unsigned int *)((v9 & -(__int64)((*(_DWORD *)(v9 + 1672) & 0x20000000) != 0)) + 0x560);
    goto LABEL_106;
  }
  if ( v55 )
  {
    v56 = *(unsigned int *)((v9 & -(__int64)((*(_DWORD *)(v9 + 1672) & 0x20000000) != 0)) + 0x55C);
LABEL_106:
    v57 = ((__int64 (__fastcall *)(unsigned __int64, __int64))(v55 + v56))(v9, v54);
    goto LABEL_108;
  }
  v57 = ((__int64 (__fastcall *)(unsigned __int64, __int64))sub_140285AAC)(v9, v54);
LABEL_108:
  v351 = v57;
  v58 = v57;
  if ( !v57 )
  {
LABEL_496:
    v46 = -1073741670;
    goto LABEL_497;
  }
  v59 = *(_DWORD *)(v9 + 1672);
  if ( (v59 & 4) == 0 )
  {
    v60 = *(_DWORD *)(v9 + 1356);
    v61 = *(_QWORD *)(v9 + 1328);
    v62 = (v59 & 0x20000000) != 0 ? *(_DWORD *)(v9 + 1580) : 0;
    if ( v60 >= 8 )
    {
      v63 = (unsigned __int64)v60 >> 3;
      do
      {
        *(_QWORD *)v9 = 0LL;
        v60 -= 8;
        v9 += 8LL;
        --v63;
      }
      while ( v63 );
    }
    for ( ; v60; --v60 )
      *(_BYTE *)v9++ = 0;
    v64 = *(_DWORD *)(v58 + 1580);
    *(_DWORD *)(v58 + 1580) = v62;
    if ( v62 == 3 )
    {
      (*(void (__fastcall **)(__int64))(v58 + 792))(v61);
    }
    else if ( v62 == 1 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(v58 + 496))(v61 - 8, *(_QWORD *)(v61 - 8));
    }
    else
    {
      (*(void (__fastcall **)(__int64))(v58 + 240))(v61);
    }
    *(_DWORD *)(v58 + 1580) = v64;
  }
  *(_DWORD *)(v58 + 1672) &= ~4u;
  ++*(_DWORD *)(v58 + 1396);
  v65 = v58 + v53;
  v380 = v65;
  v66 = (_QWORD *)v65;
  v67 = 48;
  v68 = 6LL;
  do
  {
    *v66 = 0LL;
    v67 -= 8;
    ++v66;
    --v68;
  }
  while ( v68 );
  for ( ; v67; --v67 )
  {
    *(_BYTE *)v66 = 0;
    v66 = (_QWORD *)((char *)v66 + 1);
  }
  v69 = (__int64)v349;
  *(_QWORD *)(v65 + 8) = v349;
  *(_DWORD *)v65 = v388;
  if ( v388 == 32 && v341 )
  {
    sub_14017D2FC(v58, v69, v341, v65 + 24);
    v69 = (__int64)v349;
  }
  v70 = (_QWORD *)v69;
  v71 = v69 + v341;
  *(_DWORD *)(v65 + 16) = v341;
  v72 = (const char *)v69;
  if ( v69 < v71 )
  {
    do
    {
      _mm_prefetch(v72, 0);
      v72 += 64;
    }
    while ( (unsigned __int64)v72 < v71 );
  }
  v73 = *(_QWORD *)(v58 + 1408);
  v74 = v341;
  if ( v341 >= 8 )
  {
    v75 = (unsigned __int64)v341 >> 3;
    do
    {
      v74 = (unsigned int)(v74 - 8);
      v73 = __ROL8__(*v70++ ^ v73, *(_DWORD *)(v58 + 1404));
      --v75;
    }
    while ( v75 );
  }
  if ( (_DWORD)v74 )
  {
    do
    {
      v76 = *(unsigned __int8 *)v70;
      v70 = (_QWORD *)((char *)v70 + 1);
      v73 = __ROL8__(v76 ^ v73, *(_DWORD *)(v58 + 1404));
      v77 = (_DWORD)v74 == 1;
      v74 = (unsigned int)(v74 - 1);
    }
    while ( !v77 );
  }
  *(_DWORD *)(v58 + 1424) += v341;
  for ( k = v73; ; v73 = (unsigned int)k ^ (unsigned int)v73 )
  {
    k >>= 31;
    if ( !k )
      break;
  }
  LODWORD(v73) = v73 & 0x7FFFFFFF;
  v378 = v65;
  *(_DWORD *)(v65 + 20) = v73;
  *(_DWORD *)(v58 + 1424) += v341;
  v79 = *(_QWORD *)(v58 + 1088);
  v80 = *(_QWORD *)(v58 + 1064) + 16LL;
  v389 = -1073741275;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD *, __int64))(v58 + 320))(v79, v73, v70, v74);
  v81 = v80 + 24LL * **(unsigned int **)(v58 + 1064);
  while ( *(_QWORD *)(v80 + 8) != v330 )
  {
    v80 += 24LL;
    if ( v80 >= v81 )
    {
      v82 = (_QWORD *)(v65 + 24);
      goto LABEL_142;
    }
  }
  v389 = 0;
  *(_OWORD *)(v65 + 24) = *(_OWORD *)v80;
  v101 = *(_QWORD *)(v80 + 16);
  v82 = (_QWORD *)(v65 + 24);
  *(_QWORD *)(v65 + 40) = v101;
LABEL_142:
  (*(void (__fastcall **)(_QWORD))(v58 + 384))(*(_QWORD *)(v58 + 1088));
  __writecr8((unsigned __int8)CurrentIrql);
  if ( v389 < 0 )
  {
    v83 = 24;
    v84 = v82;
    v85 = 3LL;
    do
    {
      *v84 = 0LL;
      v83 -= 8;
      ++v84;
      --v85;
    }
    while ( v85 );
    for ( ; v83; --v83 )
    {
      *(_BYTE *)v84 = 0;
      v84 = (_QWORD *)((char *)v84 + 1);
    }
    *v82 = 1LL;
  }
  v86 = v346;
  v87 = (_QWORD *)(v65 + 48);
  v348 = (ULONG_PTR *)(v65 + 48);
  v88 = 4 * v346;
  if ( (unsigned int)(4 * v346) >= 8 )
  {
    v89 = (unsigned __int64)v88 >> 3;
    do
    {
      *v87 = -1LL;
      v88 -= 8;
      ++v87;
      --v89;
    }
    while ( v89 );
  }
  for ( ; v88; --v88 )
  {
    *(_BYTE *)v87 = -1;
    v87 = (_QWORD *)((char *)v87 + 1);
  }
  v90 = v86;
  v91 = v349;
  v350 = -1;
  v92 = *v349;
  CurrentIrql = (unsigned __int64)v349;
  v390 = 0;
  v346 = (unsigned __int64)&v349[3 * v90];
  v93 = (char *)(*(__int64 (__fastcall **)(__int64, ULONG_PTR, __int64))(v58 + 472))(v345, v330, v92);
  if ( !v93 )
    goto LABEL_99;
  while ( 2 )
  {
    v94 = 0;
    if ( (*((_DWORD *)v93 + 9) & 0x2000000) != 0
      || *(_DWORD *)v93 == 1414090313 && *((_DWORD *)v93 + 1) == 1195525195
      || *(_DWORD *)v93 == 1162297680 && ((v95 = *((_WORD *)v93 + 2), v95 == 30583) || v95 == 29303 || v95 == 30839) )
    {
      v94 = 1;
    }
    else
    {
      v96 = *(char **)(v58 + 1592);
      v97 = 7;
      v372 = *(__int64 **)(v58 + 1600);
      v98 = v93 - v96;
      v373 = *(char **)(v58 + 1608);
      v374 = *(char **)(v58 + 1616);
      v371 = v96;
      while ( 1 )
      {
        v99 = (unsigned __int8)v96[v98];
        v100 = (unsigned __int8)*v96++;
        if ( v99 != v100 )
          break;
        if ( !--v97 )
        {
LABEL_180:
          v94 = 1;
          goto LABEL_181;
        }
      }
      v102 = v372;
      v103 = 8;
      v104 = (__int64 *)v93;
      while ( 1 )
      {
        v105 = *v104++;
        v106 = *v102++;
        if ( v105 != v106 )
          break;
        v103 -= 8;
        if ( v103 < 8 )
        {
          if ( !v103 )
            goto LABEL_180;
          while ( 1 )
          {
            v107 = *(unsigned __int8 *)v104;
            v104 = (__int64 *)((char *)v104 + 1);
            v108 = *(unsigned __int8 *)v102;
            v102 = (__int64 *)((char *)v102 + 1);
            if ( v107 != v108 )
              goto LABEL_173;
            if ( !--v103 )
              goto LABEL_180;
          }
        }
      }
LABEL_173:
      v109 = v373;
      v110 = 4;
      while ( 1 )
      {
        v111 = (unsigned __int8)v109[v93 - v373];
        v112 = (unsigned __int8)*v109++;
        if ( v111 != v112 )
          break;
        if ( !--v110 )
          goto LABEL_180;
      }
      v113 = v374;
      v114 = 6;
      while ( 1 )
      {
        v115 = (unsigned __int8)v113[v93 - v374];
        v116 = (unsigned __int8)*v113++;
        if ( v115 != v116 )
          break;
        if ( !--v114 )
          goto LABEL_180;
      }
    }
LABEL_181:
    if ( *((int *)v93 + 9) < 0 )
      v94 = 1;
    if ( v94
      && *(_DWORD *)v93 == 1414090313
      && *((_DWORD *)v93 + 1) == 1195525195
      && (*(_DWORD *)(v58 + 1672) & 0x10000000) != 0 )
    {
      v94 = 0;
    }
    v117 = *((_DWORD *)v93 + 2);
    if ( *((_DWORD *)v93 + 4) > v117 )
      v117 = *((_DWORD *)v93 + 4);
    v118 = v330;
    v119 = v117 + *((_DWORD *)v93 + 3);
    v335 = v119;
    do
    {
      v120 = v91[2];
      if ( (v120 & 1) == 0 )
      {
        v121 = v350;
        if ( v120 < v350 )
          v121 = v91[2];
        v350 = v121;
        v122 = v390;
        if ( v120 > v390 )
          v122 = v120;
        v390 = v122;
      }
      v123 = *v91;
      v124 = v91[1] - v123;
      v125 = (const char *)(v118 + v123);
      if ( v94 )
      {
        v126 = v348;
        *(_DWORD *)v348 = 0x80000000;
      }
      else
      {
        v127 = (const char *)(v118 + v123);
        v128 = &v125[v124];
        if ( v125 < v128 )
        {
          do
          {
            _mm_prefetch(v127, 0);
            v127 += 64;
          }
          while ( v127 < v128 );
        }
        v129 = *(_QWORD *)(v58 + 1408);
        v130 = v124;
        if ( v124 >= 8 )
        {
          v131 = (unsigned __int64)v124 >> 3;
          do
          {
            v130 -= 8;
            v129 = __ROL8__(*(_QWORD *)v125 ^ v129, *(_DWORD *)(v58 + 1404));
            v125 += 8;
            --v131;
          }
          while ( v131 );
          v58 = v351;
          v118 = v330;
        }
        if ( v130 )
        {
          do
          {
            v132 = *(unsigned __int8 *)v125++;
            v129 = __ROL8__(v132 ^ v129, *(_DWORD *)(v58 + 1404));
            --v130;
          }
          while ( v130 );
          v118 = v330;
        }
        *(_DWORD *)(v58 + 1424) += v124;
        for ( m = v129; ; LODWORD(v129) = m ^ v129 )
        {
          m >>= 31;
          if ( !m )
            break;
        }
        v126 = v348;
        v91 = (unsigned int *)CurrentIrql;
        *(_DWORD *)v348 = v129 & 0x7FFFFFFF;
        v119 = v335;
      }
      v91 += 3;
      CurrentIrql = (unsigned __int64)v91;
      if ( v91 == (unsigned int *)v346 )
      {
        v134 = v350;
        if ( v350 == -1 && !v390 )
          v134 = 0LL;
        v362[0] = v390 - v134;
        v352 = v58;
        v367 = BugCheckParameter2 + (unsigned int)v134;
        LOBYTE(v134) = 1;
        v368 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD, unsigned int *))(v58 + 440))(
                 BugCheckParameter2,
                 v134,
                 0LL,
                 &v343);
        v135 = v368 != 0 ? v343 : 0;
        v343 = v135;
        v362[1] = v135;
        LOBYTE(v135) = 1;
        v136 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64, unsigned int *))(v58 + 440))(
                 BugCheckParameter2,
                 v135,
                 12LL,
                 &v343);
        v137 = v136;
        v331 = v136;
        v369 = v136;
        LOBYTE(v137) = 1;
        v343 &= -(v136 != 0);
        v391 = v343;
        v362[2] = v343;
        v370 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64, unsigned int *))(v58 + 440))(
                 BugCheckParameter2,
                 v137,
                 10LL,
                 &v343);
        v343 &= -(v370 != 0);
        v138 = *(unsigned int *)(v58 + 1356);
        v139 = *(_DWORD *)(v58 + 1580);
        v362[3] = v343;
        v140 = (unsigned int)(v138 + 192);
        v141 = v58 & -(__int64)((*(_DWORD *)(v58 + 1672) & 0x20000000) != 0);
        if ( v139 <= 1 )
        {
          if ( !v141 )
          {
            v143 = ((__int64 (__fastcall *)(ULONG_PTR, __int64))sub_140285AAC)(v58, v140);
LABEL_229:
            v144 = v143;
            if ( !v143 )
              goto LABEL_496;
            v145 = *(_DWORD *)(v58 + 1672);
            if ( (v145 & 4) == 0 )
            {
              v146 = *(_DWORD *)(v58 + 1356);
              v147 = *(_QWORD *)(v58 + 1328);
              v148 = (v145 & 0x20000000) != 0 ? *(_DWORD *)(v58 + 1580) : 0;
              if ( v146 >= 8 )
              {
                v149 = (unsigned __int64)v146 >> 3;
                do
                {
                  *(_QWORD *)v58 = 0LL;
                  v146 -= 8;
                  v58 += 8LL;
                  --v149;
                }
                while ( v149 );
              }
              for ( ; v146; --v146 )
                *(_BYTE *)v58++ = 0;
              v150 = *(_DWORD *)(v144 + 1580);
              *(_DWORD *)(v144 + 1580) = v148;
              if ( v148 == 3 )
              {
                (*(void (__fastcall **)(__int64))(v144 + 792))(v147);
              }
              else if ( v148 == 1 )
              {
                (*(void (__fastcall **)(__int64, _QWORD))(v144 + 496))(v147 - 8, *(_QWORD *)(v147 - 8));
              }
              else
              {
                (*(void (__fastcall **)(__int64))(v144 + 240))(v147);
              }
              *(_DWORD *)(v144 + 1580) = v150;
            }
            *(_DWORD *)(v144 + 1672) &= ~4u;
            *(_DWORD *)(v144 + 1396) += 4;
            v151 = &v367;
            v152 = v362;
            v153 = (_BYTE *)(v144 + v138);
            v346 = (unsigned __int64)v153;
            v363 = v153;
            v364 = v153;
            v348 = &v367;
            CurrentIrql = (unsigned __int64)v362;
            v345 = 4LL;
            do
            {
              v154 = (unsigned int)*v152;
              v155 = 48;
              v156 = (const char *)*v151;
              v157 = v153;
              LODWORD(v344) = *v152;
              v158 = 6LL;
              do
              {
                *v157 = 0LL;
                v155 -= 8;
                ++v157;
                --v158;
              }
              while ( v158 );
              for ( ; v155; --v155 )
              {
                *(_BYTE *)v157 = 0;
                v157 = (_QWORD *)((char *)v157 + 1);
              }
              *(_DWORD *)v153 = v338 != 0 ? 0xB : 0;
              *((_QWORD *)v153 + 1) = v156;
              v159 = v156;
              v160 = &v156[(unsigned int)v154];
              *((_DWORD *)v153 + 4) = v154;
              if ( v156 < v160 )
              {
                do
                {
                  _mm_prefetch(v159, 0);
                  v159 += 64;
                }
                while ( v159 < v160 );
              }
              v161 = *(_QWORD *)(v144 + 1408);
              v162 = v154;
              if ( (unsigned int)v154 >= 8 )
              {
                v163 = (unsigned __int64)(unsigned int)v154 >> 3;
                do
                {
                  v162 -= 8;
                  v161 = __ROL8__(*(_QWORD *)v156 ^ v161, *(_DWORD *)(v144 + 1404));
                  v156 += 8;
                  --v163;
                }
                while ( v163 );
              }
              if ( v162 )
              {
                do
                {
                  v164 = *(unsigned __int8 *)v156++;
                  v161 = __ROL8__(v164 ^ v161, *(_DWORD *)(v144 + 1404));
                  --v162;
                }
                while ( v162 );
                v151 = v348;
              }
              *(_DWORD *)(v144 + 1424) += v154;
              for ( n = v161 >> 31; n; n >>= 31 )
                v161 = (unsigned int)n ^ (unsigned int)v161;
              LODWORD(v161) = v161 & 0x7FFFFFFF;
              *((_DWORD *)v153 + 5) = v161;
              ++v152;
              *(_DWORD *)(v144 + 1424) += v154;
              v153 += 48;
              ++v151;
              v363 = v153;
              v77 = v345-- == 1;
              CurrentIrql = (unsigned __int64)v152;
              v348 = v151;
            }
            while ( !v77 );
            LODWORD(v344) = a3 & 1;
            v166 = v346 + 96;
            v352 = v144;
            v365 = v346 + 96;
            if ( v346 != -96LL )
            {
              v182 = v331;
              v172 = v144;
              v183 = v391;
              *(_DWORD *)v166 = (v338 != 0) + 13;
              goto LABEL_301;
            }
            v167 = *(unsigned int *)(v144 + 1356);
            v168 = v144 & -(__int64)((*(_DWORD *)(v144 + 1672) & 0x20000000) != 0);
            v169 = (unsigned int)(v167 + 48);
            if ( *(int *)(v144 + 1580) <= 1 )
            {
              if ( !v168 )
              {
                v171 = ((__int64 (__fastcall *)(unsigned __int64, __int64))sub_140285AAC)(v144, v169);
                goto LABEL_268;
              }
              v170 = *(unsigned int *)((v144 & -(__int64)((*(_DWORD *)(v144 + 1672) & 0x20000000) != 0)) + 0x55C);
            }
            else
            {
              if ( !v168 )
              {
                v171 = sub_140285DF0(v144, v169);
LABEL_268:
                v172 = v171;
                if ( !v171 )
                  goto LABEL_496;
                v173 = *(_DWORD *)(v144 + 1672);
                if ( (v173 & 4) == 0 )
                {
                  v174 = *(_DWORD *)(v144 + 1356);
                  v175 = *(_QWORD *)(v144 + 1328);
                  v176 = (v173 & 0x20000000) != 0 ? *(_DWORD *)(v144 + 1580) : 0;
                  if ( v174 >= 8 )
                  {
                    v177 = (unsigned __int64)v174 >> 3;
                    do
                    {
                      *(_QWORD *)v144 = 0LL;
                      v174 -= 8;
                      v144 += 8LL;
                      --v177;
                    }
                    while ( v177 );
                  }
                  for ( ; v174; --v174 )
                    *(_BYTE *)v144++ = 0;
                  v178 = *(_DWORD *)(v172 + 1580);
                  *(_DWORD *)(v172 + 1580) = v176;
                  if ( v176 == 3 )
                  {
                    (*(void (__fastcall **)(__int64))(v172 + 792))(v175);
                  }
                  else if ( v176 == 1 )
                  {
                    (*(void (__fastcall **)(__int64, _QWORD))(v172 + 496))(v175 - 8, *(_QWORD *)(v175 - 8));
                  }
                  else
                  {
                    (*(void (__fastcall **)(__int64))(v172 + 240))(v175);
                  }
                  *(_DWORD *)(v172 + 1580) = v178;
                }
                *(_DWORD *)(v172 + 1672) &= ~4u;
                ++*(_DWORD *)(v172 + 1396);
                v166 = v172 + v167;
                v379 = v166;
                v179 = (_QWORD *)v166;
                v180 = 48;
                v181 = 6LL;
                do
                {
                  *v179 = 0LL;
                  v180 -= 8;
                  ++v179;
                  --v181;
                }
                while ( v181 );
                for ( ; v180; --v180 )
                {
                  *(_BYTE *)v179 = 0;
                  v179 = (_QWORD *)((char *)v179 + 1);
                }
                v182 = v331;
                v183 = v391;
                *(_QWORD *)(v166 + 8) = v331;
                *(_DWORD *)v166 = (v338 != 0) + 13;
                if ( (v338 != 0) == 19 && v391 )
                {
                  sub_14017D2FC(v172, v331, v391, v166 + 24);
                  v182 = v331;
                }
                v154 = v182;
                v184 = v182 + v391;
                *(_DWORD *)(v166 + 16) = v391;
                v185 = (const char *)v182;
                if ( v182 < v184 )
                {
                  do
                  {
                    _mm_prefetch(v185, 0);
                    v185 += 64;
                  }
                  while ( (unsigned __int64)v185 < v184 );
                }
                v161 = *(_QWORD *)(v172 + 1408);
                v186 = v391;
                if ( v391 >= 8 )
                {
                  v187 = (unsigned __int64)v391 >> 3;
                  do
                  {
                    v186 -= 8;
                    v161 = __ROL8__(*(_QWORD *)v154 ^ v161, *(_DWORD *)(v172 + 1404));
                    v154 += 8LL;
                    --v187;
                  }
                  while ( v187 );
                }
                if ( v186 )
                {
                  do
                  {
                    v188 = *(unsigned __int8 *)v154++;
                    v161 = __ROL8__(v188 ^ v161, *(_DWORD *)(v172 + 1404));
                    --v186;
                  }
                  while ( v186 );
                  v182 = v331;
                }
                *(_DWORD *)(v172 + 1424) += v391;
                for ( ii = v161; ; v161 = (unsigned int)ii ^ (unsigned int)v161 )
                {
                  ii >>= 31;
                  if ( !ii )
                    break;
                }
                LODWORD(v161) = v161 & 0x7FFFFFFF;
                v365 = v166;
                *(_DWORD *)(v166 + 20) = v161;
                *(_DWORD *)(v172 + 1424) += v391;
LABEL_301:
                if ( (*(_DWORD *)(v172 + 1672) & 0x40000000) != 0 && v183 )
                  sub_14017D2FC(v172, v182, v183, v166 + 28);
                *(_DWORD *)(v166 + 24) = 0;
                if ( (_DWORD)v344 )
                  *(_DWORD *)(v166 + 24) = 1;
                v190 = v346;
                v191 = BugCheckParameter2;
                v352 = v172;
                v192 = (*(_DWORD *)(v346 + 184) ^ (v338 != 0)) & 1;
                *(_DWORD *)(v346 + 144) = 35;
                *(_DWORD *)(v190 + 184) ^= v192;
                if ( *(_DWORD *)(v190 + 160) >= 0x94u )
                {
                  v392 = *(_QWORD **)(v190 + 152);
                  v193 = (*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, __int64))(v172 + 448))(v191, v161, v154);
                  if ( !v193 )
                    goto LABEL_496;
                  v161 = v191 + *(unsigned int *)(v193 + 80);
                  v154 = (__int64)v392;
                  v194 = *(_DWORD *)(v190 + 184) | 2;
                  *(_DWORD *)(v190 + 184) = v194;
                  v195 = (_QWORD *)v392[14];
                  if ( (unsigned __int64)v195 >= v191 && (unsigned __int64)v195 < v161 )
                  {
                    *(_QWORD *)(v190 + 168) = *v195;
                    *(_DWORD *)(v190 + 184) = v194 | 4;
                  }
                  v196 = (__int64 *)v392[15];
                  if ( (unsigned __int64)v196 >= v191 && (unsigned __int64)v196 < v161 )
                  {
                    v197 = *v196;
                    *(_DWORD *)(v190 + 184) |= 8u;
                    *(_QWORD *)(v190 + 176) = v197;
                  }
                }
                v198 = BugCheckParameter2;
                v352 = v172;
                v77 = (*(_DWORD *)(v172 + 1672) & 0x400000) == 0;
                v351 = BugCheckParameter2;
                if ( v77 )
                  goto LABEL_495;
                v199 = (*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, __int64))(v172 + 448))(
                         BugCheckParameter2,
                         v161,
                         v154);
                v345 = v199;
                v200 = v199;
                if ( !v199 )
                  goto LABEL_99;
                v201 = *(_WORD *)(v199 + 6);
                v393 = v201;
                v332 = v341 / 0xC;
                if ( !v201 )
                {
                  if ( (*(_DWORD *)(v172 + 1672) & 0x200000) == 0 )
                  {
                    v362[5] = 5072;
                    KeBugCheckEx(__ROL4__(5072, 188), 0xAuLL, v198, 0LL, 0LL);
                  }
                  if ( !*(_DWORD *)(v172 + 1536) )
                  {
                    *(_QWORD *)(v172 + 1568) = v198;
                    *(_QWORD *)(v172 + 1544) = v172 - 0x5C5FC0A76E374B18LL;
LABEL_320:
                    *(_QWORD *)(v172 + 1560) = 271LL;
                    *(_DWORD *)(v172 + 1536) = 1;
                    *(_QWORD *)(v172 + 1552) = 0LL;
                  }
                  goto LABEL_99;
                }
                v202 = v349;
                v203 = *(unsigned __int16 *)(v199 + 20);
                v204 = &v349[3 * (v341 / 0xC)];
                v346 = (unsigned __int64)v204;
                v205 = (ULONG_PTR *)(v203 + v200 + 24);
                v206 = 0;
                v348 = v205;
                v207 = (unsigned int *)(v205 + 1);
                CurrentIrql = (unsigned __int64)(v205 + 1);
                do
                {
                  v208 = v207[1];
                  v209 = v207[2];
                  v210 = *v207;
                  LODWORD(v344) = v208;
                  if ( v209 > v210 )
                    v210 = v209;
                  v211 = v208 + v210;
                  v336 = v208 + v210;
                  if ( v206 && v211 < *((_DWORD *)&v205[5 * v206 - 3] - 1) )
                  {
                    if ( (*(_DWORD *)(v172 + 1672) & 0x200000) == 0 )
                    {
                      v362[4] = 5072;
                      KeBugCheckEx(__ROL4__(5072, 188), 0xAuLL, v351, 1uLL, 0LL);
                    }
                    goto LABEL_338;
                  }
                  if ( v202 != v204 )
                  {
                    while ( 1 )
                    {
                      v212 = v202[1];
                      if ( *v202 >= v211 || v212 <= v208 )
                      {
LABEL_332:
                        v201 = v393;
                        goto LABEL_333;
                      }
                      if ( *v202 < v208 || v212 > v211 )
                        break;
                      __ea(v172, v351, &v205[5 * v206], v202);
                      v204 = (unsigned int *)v346;
                      v202 += 3;
                      v211 = v336;
                      v208 = v344;
                      v205 = v348;
                      if ( v202 == (unsigned int *)v346 )
                        goto LABEL_332;
                    }
                    if ( (*(_DWORD *)(v172 + 1672) & 0x200000) == 0 )
                    {
                      v359 = 5072;
                      KeBugCheckEx(__ROL4__(5072, 188), 0xAuLL, v351, 2uLL, 0LL);
                    }
                    goto LABEL_338;
                  }
LABEL_333:
                  ++v206;
                  v207 = (unsigned int *)(CurrentIrql + 40);
                  CurrentIrql += 40LL;
                }
                while ( v206 < v201 );
                if ( v202 != v204 )
                {
                  if ( (*(_DWORD *)(v172 + 1672) & 0x200000) == 0 )
                  {
                    v360 = 5072;
                    KeBugCheckEx(__ROL4__(5072, 188), 0xAuLL, v351, 3uLL, 0LL);
                  }
LABEL_338:
                  if ( *(_DWORD *)(v172 + 1536) )
                    goto LABEL_99;
                  *(_QWORD *)(v172 + 1544) = v172 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v172 + 1568) = v351;
                  goto LABEL_320;
                }
                v213 = *(unsigned int *)(v172 + 1356);
                v214 = (unsigned int)v213 + ((v332 + 6) & 0xFFFFFFF8) + 8 * (3 * v201 + 6);
                v215 = v172 & -(__int64)((*(_DWORD *)(v172 + 1672) & 0x20000000) != 0);
                if ( *(int *)(v172 + 1580) <= 1 )
                {
                  if ( !v215 )
                  {
                    v217 = ((__int64 (__fastcall *)(__int64, __int64))sub_140285AAC)(v172, v214);
                    goto LABEL_350;
                  }
                  v216 = *(unsigned int *)((v172 & -(__int64)((*(_DWORD *)(v172 + 1672) & 0x20000000) != 0)) + 0x55C);
                }
                else
                {
                  if ( !v215 )
                  {
                    v217 = sub_140285DF0(v172, v214);
LABEL_350:
                    v218 = v217;
                    if ( !v217 )
                      goto LABEL_496;
                    v219 = *(_DWORD *)(v172 + 1672);
                    if ( (v219 & 4) == 0 )
                    {
                      v220 = *(unsigned int *)(v172 + 1356);
                      v221 = *(_QWORD *)(v172 + 1328);
                      v222 = *(_DWORD *)(v172 + 1580) & (unsigned int)-((v219 & 0x20000000) != 0);
                      if ( (unsigned int)v220 >= 8 )
                      {
                        v223 = (unsigned __int64)(unsigned int)v220 >> 3;
                        do
                        {
                          *(_QWORD *)v172 = 0LL;
                          v220 = (unsigned int)(v220 - 8);
                          v172 += 8LL;
                          --v223;
                        }
                        while ( v223 );
                      }
                      if ( (_DWORD)v220 )
                      {
                        do
                        {
                          *(_BYTE *)v172++ = 0;
                          v77 = (_DWORD)v220 == 1;
                          v220 = (unsigned int)(v220 - 1);
                        }
                        while ( !v77 );
                      }
                      v224 = *(_DWORD *)(v218 + 1580);
                      *(_DWORD *)(v218 + 1580) = v222;
                      if ( (_DWORD)v222 == 3 )
                      {
                        (*(void (__fastcall **)(__int64, __int64, __int64))(v218 + 792))(v221, v222, v220);
                      }
                      else
                      {
                        v225 = *(void (__fastcall **)(__int64))(v218 + 240);
                        if ( (_DWORD)v222 == 1 )
                          (*(void (__fastcall **)(__int64, _QWORD, void (__fastcall *)(__int64)))(v218 + 496))(
                            v221 - 8,
                            *(_QWORD *)(v221 - 8),
                            v225);
                        else
                          v225(v221);
                      }
                      *(_DWORD *)(v218 + 1580) = v224;
                    }
                    *(_DWORD *)(v218 + 1672) &= ~4u;
                    v226 = v218 + v213;
                    v381 = v218 + v213;
                    ++*(_DWORD *)(v218 + 1396);
                    v227 = (_QWORD *)(v218 + v213);
                    v228 = 6LL;
                    v229 = 48;
                    do
                    {
                      *v227 = 0LL;
                      v229 -= 8;
                      ++v227;
                      --v228;
                    }
                    while ( v228 );
                    for ( ; v229; --v229 )
                    {
                      *(_BYTE *)v227 = 0;
                      v227 = (_QWORD *)((char *)v227 + 1);
                    }
                    v230 = v349;
                    *(_QWORD *)(v226 + 8) = v349;
                    *(_DWORD *)(v226 + 16) = 0;
                    *(_DWORD *)v226 = 30;
                    v231 = *(_QWORD *)(v218 + 1408);
                    for ( jj = v231; ; LODWORD(v231) = jj ^ v231 )
                    {
                      jj >>= 31;
                      if ( !jj )
                        break;
                    }
                    v233 = v351;
                    v172 = v218;
                    *(_DWORD *)(v226 + 20) = v231 & 0x7FFFFFFF;
                    *(_QWORD *)(v226 + 24) = v233;
                    v234 = v345;
                    v345 = v226 + 48;
                    *(_DWORD *)(v226 + 32) = *(_DWORD *)(v234 + 80);
                    *(_DWORD *)(v226 + 36) = v341;
                    *(_WORD *)(v226 + 40) = v393;
                    *(_WORD *)(v226 + 42) ^= (*(_WORD *)(v226 + 42) ^ (v338 != 0)) & 1;
                    v235 = *(unsigned __int16 *)(v226 + 40);
                    v236 = v226 + 48 + ((v332 - 1 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
                    CurrentIrql = v236;
                    v237 = v236 + 24 * v235;
                    v366 = (_DWORD *)v237;
                    v238 = (unsigned __int64)(v230 + 3);
                    if ( !v332 )
                      v238 = v346;
                    v333 = (unsigned int *)v238;
                    if ( v393 )
                    {
                      v239 = (_DWORD *)(v236 + 8);
                      v240 = v393;
                      do
                      {
                        v241 = 2LL;
                        do
                        {
                          *((_QWORD *)v239 - 1) = 0LL;
                          *v239 = 0x80000000;
                          v239 += 3;
                          --v241;
                        }
                        while ( v241 );
                        --v240;
                      }
                      while ( v240 );
                    }
                    if ( v236 != v237 )
                    {
                      v242 = (char *)v348;
                      v243 = (_DWORD *)v236;
                      do
                      {
                        v244 = 0;
                        if ( (*((_DWORD *)v242 + 9) & 0x2000000) != 0
                          || *(_DWORD *)v242 == 1414090313 && *((_DWORD *)v242 + 1) == 1195525195
                          || *(_DWORD *)v242 == 1162297680
                          && ((v245 = *((_WORD *)v242 + 2), v245 == 30583) || v245 == 29303 || v245 == 30839) )
                        {
                          v244 = 1;
                        }
                        else
                        {
                          v246 = *(char **)(v218 + 1592);
                          v247 = 7;
                          v375 = *(char **)(v218 + 1600);
                          v248 = v242 - v246;
                          v376 = *(char **)(v218 + 1608);
                          v377 = *(char **)(v218 + 1616);
                          while ( 1 )
                          {
                            v249 = v246[v248];
                            v250 = *v246++;
                            if ( v249 != v250 )
                              break;
                            if ( !--v247 )
                            {
LABEL_404:
                              v244 = 1;
                              goto LABEL_405;
                            }
                          }
                          v251 = v375;
                          v252 = 8;
                          v253 = v242;
                          while ( 1 )
                          {
                            v254 = *(_QWORD *)v253;
                            v253 += 8;
                            v255 = *(_QWORD *)v251;
                            v251 += 8;
                            if ( v254 != v255 )
                              break;
                            v252 -= 8;
                            if ( v252 < 8 )
                            {
                              if ( !v252 )
                                goto LABEL_404;
                              while ( 1 )
                              {
                                v256 = *v253++;
                                v257 = *v251++;
                                if ( v256 != v257 )
                                  goto LABEL_397;
                                if ( !--v252 )
                                  goto LABEL_404;
                              }
                            }
                          }
LABEL_397:
                          v258 = v376;
                          v259 = 4;
                          while ( 1 )
                          {
                            v260 = v258[v242 - v376];
                            v261 = *v258++;
                            if ( v260 != v261 )
                              break;
                            if ( !--v259 )
                              goto LABEL_404;
                          }
                          v262 = v377;
                          v263 = 6;
                          while ( 1 )
                          {
                            v264 = v262[v242 - v377];
                            v265 = *v262++;
                            if ( v264 != v265 )
                              break;
                            if ( !--v263 )
                              goto LABEL_404;
                          }
                        }
LABEL_405:
                        if ( *((int *)v242 + 9) < 0 )
                          v244 = 1;
                        v394 = v244;
                        if ( v244 && *(_DWORD *)v242 == 1414090313 && *((_DWORD *)v242 + 1) == 1195525195 )
                        {
                          if ( (*(_DWORD *)(v218 + 1672) & 0x10000000) != 0 )
                            v244 = 0;
                          v394 = v244;
                        }
                        v266 = *((_DWORD *)v242 + 2);
                        v267 = *((unsigned int *)v242 + 3);
                        if ( *((_DWORD *)v242 + 4) > v266 )
                          v266 = *((_DWORD *)v242 + 4);
                        v268 = v346;
                        v269 = v349;
                        LODWORD(v344) = v267;
                        v270 = v266 + v267;
                        v342 = v266 + v267;
                        if ( v349 == (unsigned int *)v346 )
                        {
                          v271 = 0;
                          v272 = 0;
                        }
                        else
                        {
                          v271 = *v349;
                          v272 = v349[1];
                        }
                        v337 = v272;
                        v339 = v271;
                        v350 = v267;
                        if ( v349 != (unsigned int *)v346 && v271 > (unsigned int)v267 && v272 <= v270 && !v244 )
                        {
                          *v243 = v267;
                          v273 = v271 - v267;
                          v243[1] = v271;
                          v274 = (_QWORD *)(v351 + v267);
                          v275 = &v367;
                          v276 = 0;
                          v350 = v271;
                          v277 = v351 + v267 + v271 - (unsigned int)v267;
                          v278 = v362;
                          while ( (unsigned __int64)v274 >= *v275 + *v278 || v277 <= *v275 )
                          {
                            ++v275;
                            ++v276;
                            ++v278;
                            if ( v276 >= 4 )
                            {
                              v279 = (const char *)(v351 + v267);
                              if ( (unsigned __int64)v274 < v277 )
                              {
                                do
                                {
                                  _mm_prefetch(v279, 0);
                                  v279 += 64;
                                }
                                while ( (unsigned __int64)v279 < v277 );
                              }
                              v280 = *(_QWORD *)(v218 + 1408);
                              v281 = v273;
                              if ( v273 >= 8 )
                              {
                                v282 = (unsigned __int64)v273 >> 3;
                                do
                                {
                                  v281 -= 8;
                                  v280 = __ROL8__(*v274++ ^ v280, *(_DWORD *)(v218 + 1404));
                                  --v282;
                                }
                                while ( v282 );
                              }
                              for ( ; v281; --v281 )
                              {
                                v283 = *(unsigned __int8 *)v274;
                                v274 = (_QWORD *)((char *)v274 + 1);
                                v280 = __ROL8__(v283 ^ v280, *(_DWORD *)(v218 + 1404));
                              }
                              *(_DWORD *)(v218 + 1424) += v273;
                              for ( kk = v280; ; LODWORD(v280) = kk ^ v280 )
                              {
                                kk >>= 31;
                                if ( !kk )
                                  break;
                              }
                              v243[2] = v280 & 0x7FFFFFFF;
                              break;
                            }
                          }
                          v269 = v349;
                          v268 = v346;
                          LODWORD(v267) = v344;
                          v270 = v342;
                          v244 = v394;
                        }
                        if ( v339 >= (unsigned int)v267 && v337 <= v270 && v269 != (unsigned int *)v268 )
                        {
                          v285 = v333;
                          v286 = v333[1];
                          v340 = v286;
                          if ( v286 <= v270 )
                          {
                            v287 = v351;
                            v288 = (_BYTE *)v345;
                            v289 = (unsigned int *)v346;
                            do
                            {
                              if ( v285 == v289 )
                                break;
                              if ( v244 )
                              {
                                *v288 = 0x80;
                              }
                              else
                              {
                                v290 = v269[1];
                                v291 = &v367;
                                v292 = *v285;
                                v293 = v362;
                                v350 = v292;
                                v294 = v292 - v290;
                                v295 = (_QWORD *)(v287 + v290);
                                v296 = v287 + v290 + v294;
                                for ( mm = 0; mm < 4; ++mm )
                                {
                                  if ( (unsigned __int64)v295 < *v291 + *v293 && v296 > *v291 )
                                    goto LABEL_464;
                                  ++v291;
                                  ++v293;
                                }
                                if ( v294 < 4 )
                                {
LABEL_464:
                                  *(_BYTE *)v345 = 0x80;
                                  goto LABEL_465;
                                }
                                v298 = (const char *)(v287 + v290);
                                if ( (unsigned __int64)v295 < v296 )
                                {
                                  do
                                  {
                                    _mm_prefetch(v298, 0);
                                    v298 += 64;
                                  }
                                  while ( (unsigned __int64)v298 < v296 );
                                }
                                v299 = *(_QWORD *)(v218 + 1408);
                                v300 = v294;
                                if ( v294 >= 8 )
                                {
                                  v301 = (unsigned __int64)v294 >> 3;
                                  do
                                  {
                                    v300 -= 8;
                                    v299 = __ROL8__(*v295++ ^ v299, *(_DWORD *)(v218 + 1404));
                                    --v301;
                                  }
                                  while ( v301 );
                                }
                                if ( v300 )
                                {
                                  do
                                  {
                                    v302 = *(unsigned __int8 *)v295;
                                    v295 = (_QWORD *)((char *)v295 + 1);
                                    v299 = __ROL8__(v302 ^ v299, *(_DWORD *)(v218 + 1404));
                                    --v300;
                                  }
                                  while ( v300 );
                                  v287 = v351;
                                }
                                *(_DWORD *)(v218 + 1424) += v294;
                                for ( nn = v299; ; LOBYTE(v299) = nn ^ v299 )
                                {
                                  nn >>= 7;
                                  if ( !nn )
                                    break;
                                }
                                *(_BYTE *)v345 = v299 & 0x7F;
LABEL_465:
                                v286 = v340;
                                v244 = v394;
                                v270 = v342;
                                v285 = v333;
                                v288 = (_BYTE *)v345;
                                v289 = (unsigned int *)v346;
                                v269 = v349;
                              }
                              v269 += 3;
                              ++v288;
                              v285 += 3;
                              v349 = v269;
                              v345 = (__int64)v288;
                              v333 = v285;
                              if ( v285 != v289 )
                              {
                                v286 = v285[1];
                                v340 = v286;
                              }
                            }
                            while ( v286 <= v270 );
                            v243 = (_DWORD *)CurrentIrql;
                          }
                        }
                        v304 = 0;
                        if ( !v244 )
                        {
                          v305 = v350;
                          if ( v350 != v270 )
                          {
                            v243[4] = v270;
                            v306 = v270 - v305;
                            v243[3] = v305;
                            v307 = (const char *)(v351 + v305);
                            v308 = v362;
                            v309 = &v307[v270 - v305];
                            v310 = &v367;
                            while ( (unsigned __int64)v307 >= *v310 + *v308 || (unsigned __int64)v309 <= *v310 )
                            {
                              ++v310;
                              ++v304;
                              ++v308;
                              if ( v304 >= 4 )
                              {
                                v311 = (const char *)(v351 + v305);
                                if ( v307 < v309 )
                                {
                                  do
                                  {
                                    _mm_prefetch(v311, 0);
                                    v311 += 64;
                                  }
                                  while ( v311 < v309 );
                                }
                                v312 = *(_QWORD *)(v218 + 1408);
                                v313 = v306;
                                if ( v306 >= 8 )
                                {
                                  v314 = (unsigned __int64)v306 >> 3;
                                  do
                                  {
                                    v313 -= 8;
                                    v312 = __ROL8__(*(_QWORD *)v307 ^ v312, *(_DWORD *)(v218 + 1404));
                                    v307 += 8;
                                    --v314;
                                  }
                                  while ( v314 );
                                }
                                for ( ; v313; --v313 )
                                {
                                  v315 = *(unsigned __int8 *)v307++;
                                  v312 = __ROL8__(v315 ^ v312, *(_DWORD *)(v218 + 1404));
                                }
                                *(_DWORD *)(v218 + 1424) += v306;
                                for ( i1 = v312 >> 31; i1; i1 >>= 31 )
                                  LODWORD(v312) = i1 ^ v312;
                                v243[5] = v312 & 0x7FFFFFFF;
                                break;
                              }
                            }
                          }
                        }
                        v317 = v349;
                        if ( v349 != (unsigned int *)v346 && *v349 >= (unsigned int)v344 && v349[1] <= v342 )
                        {
                          if ( v333 != (unsigned int *)v346 )
                          {
                            v318 = v345;
                            *(_BYTE *)v345 = 0x80;
                            v345 = v318 + 1;
                            v333 += 3;
                          }
                          v349 = v317 + 3;
                        }
                        v243 += 6;
                        v242 = (char *)(v348 + 5);
                        CurrentIrql = (unsigned __int64)v243;
                        v348 += 5;
                      }
                      while ( v243 != v366 );
                      v172 = v218;
                    }
LABEL_495:
                    v352 = v172;
                    v46 = 0;
                    goto LABEL_497;
                  }
                  v216 = *(unsigned int *)((v172 & -(__int64)((*(_DWORD *)(v172 + 1672) & 0x20000000) != 0)) + 0x560);
                }
                v217 = ((__int64 (__fastcall *)(__int64, __int64))(v215 + v216))(v172, v214);
                goto LABEL_350;
              }
              v170 = *(unsigned int *)((v144 & -(__int64)((*(_DWORD *)(v144 + 1672) & 0x20000000) != 0)) + 0x560);
            }
            v171 = ((__int64 (__fastcall *)(unsigned __int64, __int64))(v168 + v170))(v144, v169);
            goto LABEL_268;
          }
          v142 = *(unsigned int *)((v58 & -(__int64)((*(_DWORD *)(v58 + 1672) & 0x20000000) != 0)) + 0x55C);
        }
        else
        {
          if ( !v141 )
          {
            v143 = sub_140285DF0(v58, v140);
            goto LABEL_229;
          }
          v142 = *(unsigned int *)((v58 & -(__int64)((*(_DWORD *)(v58 + 1672) & 0x20000000) != 0)) + 0x560);
        }
        v143 = ((__int64 (__fastcall *)(ULONG_PTR, __int64))(v141 + v142))(v58, v140);
        goto LABEL_229;
      }
      v348 = (ULONG_PTR *)((char *)v126 + 4);
    }
    while ( *v91 >= *((_DWORD *)v93 + 3) && v118 + v91[1] <= v119 );
    v93 = (char *)(*(__int64 (__fastcall **)(__int64, ULONG_PTR, _QWORD))(v58 + 472))(v345, v118, *v91);
    if ( v93 )
      continue;
    break;
  }
LABEL_99:
  v46 = -1073741701;
LABEL_497:
  v48 = a3;
LABEL_498:
  *a1 = v352;
  if ( (int)(v46 + 0x80000000) >= 0 && v46 != -1073741554 )
    return v46;
  if ( (v48 & 0x80000004) != 0x80000004 )
  {
    v385 = v48 | 0x80000000;
    v319 = (*(__int64 (__fastcall **)(__int64))(v352 + 448))(v358);
    v320 = *(unsigned int *)(v319 + 148);
    if ( (unsigned int)v320 >= 0x14 )
    {
      v321 = *(unsigned int *)(v319 + 144);
      v322 = v321 + v320;
      v323 = v358;
      v324 = v358 + v322;
      for ( i2 = v321 + v358; i2 != v324; i2 += 20LL )
      {
        if ( !*(_DWORD *)(i2 + 12) )
          break;
        v326 = *(unsigned int *)(i2 + 16);
        if ( !(_DWORD)v326 )
          break;
        v327 = *(_QWORD *)(v326 + v323);
        if ( v327 )
        {
          result = sub_140283BBC(&v352, v327, v385);
          *a1 = v352;
          if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741554 )
            return result;
          v323 = v358;
        }
      }
    }
  }
  return 0LL;
}
