/*
 * XREFs of sub_1402347EC @ 0x1402347EC
 * Callers:
 *     FsRtlMdlReadCompleteDevEx @ 0x140228000 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_1402347EC @ 0x1402347EC (sub_1402347EC.c)
 *     sub_14072EAFC @ 0x14072EAFC (sub_14072EAFC.c)
 * Callees:
 *     sub_14014F138 @ 0x14014F138 (sub_14014F138.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     sub_1402347EC @ 0x1402347EC (sub_1402347EC.c)
 *     sub_140236718 @ 0x140236718 (sub_140236718.c)
 *     $$e6 @ 0x1402379D8 ($$e6.c)
 *     sub_14072DC88 @ 0x14072DC88 (sub_14072DC88.c)
 */

__int64 __fastcall sub_1402347EC(ULONG_PTR **a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  _BYTE *v4; // r8
  __int64 v5; // rsi
  __int64 result; // rax
  int v7; // ecx
  int *v8; // rax
  _BYTE *v9; // rdi
  unsigned int v10; // r10d
  _BYTE *v11; // rax
  int v12; // ecx
  unsigned int v13; // edx
  int v14; // ebx
  unsigned int v15; // r9d
  _BYTE *v16; // r11
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
  int *v27; // rax
  unsigned int v28; // esi
  unsigned int v29; // r10d
  ULONG_PTR *v30; // rax
  unsigned int v31; // ecx
  unsigned int v32; // edx
  int v33; // ebx
  ULONG_PTR *v34; // r11
  unsigned int v35; // r9d
  unsigned int **v36; // r8
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
  __int64 v51; // r8
  int v52; // eax
  __int64 v53; // rsi
  int v54; // edx
  unsigned int v55; // eax
  int v56; // edx
  ULONG_PTR *v57; // rbx
  int v58; // edx
  unsigned int v59; // eax
  __int64 v60; // r9
  int v61; // r8d
  unsigned __int64 v62; // rcx
  int v63; // edi
  int v64; // ecx
  int v65; // ecx
  _BYTE *v66; // rsi
  _QWORD *v67; // rax
  __int64 v68; // r8
  unsigned __int64 v69; // r10
  unsigned int v70; // edi
  _QWORD *v71; // r8
  const char *v72; // rax
  int v73; // r11d
  ULONG_PTR v74; // rdx
  unsigned __int64 v75; // rcx
  unsigned int v76; // r9d
  unsigned __int64 v77; // r10
  __int64 v78; // rax
  ULONG_PTR k; // rax
  ULONG_PTR v80; // rcx
  unsigned __int64 v81; // rdi
  unsigned __int64 v82; // rcx
  _QWORD *v83; // rdi
  int v84; // ecx
  _QWORD *v85; // rax
  __int64 v86; // rdx
  unsigned int v87; // r8d
  _QWORD *v88; // rax
  unsigned int v89; // edx
  unsigned __int64 v90; // rcx
  __int64 v91; // rax
  unsigned int *v92; // rdi
  __int64 v93; // r8
  char *v94; // r10
  int v95; // esi
  int v96; // ecx
  __int16 v97; // ax
  char *v98; // r8
  int v99; // r11d
  signed __int64 v100; // r9
  __int64 v101; // rdx
  __int64 v102; // rax
  __int64 v103; // xmm1_8
  __int64 *v104; // r9
  unsigned int v105; // r8d
  __int64 *v106; // r11
  __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rax
  char *v111; // r8
  int v112; // r11d
  __int64 v113; // rdx
  __int64 v114; // rax
  char *v115; // r8
  int v116; // r11d
  __int64 v117; // rdx
  __int64 v118; // rax
  unsigned int v119; // ecx
  ULONG_PTR v120; // r11
  unsigned int v121; // edx
  unsigned int v122; // eax
  unsigned int v123; // ecx
  unsigned int v124; // ecx
  __int64 v125; // rax
  unsigned int v126; // r8d
  char *v127; // r9
  __int64 v128; // rax
  const char *v129; // rax
  int v130; // edi
  ULONG_PTR v131; // rdx
  const char *v132; // rcx
  unsigned __int64 v133; // r11
  __int64 v134; // rax
  ULONG_PTR m; // rax
  __int64 v136; // rdx
  __int64 v137; // rdx
  __int64 v138; // rax
  __int64 v139; // rdx
  __int64 v140; // rsi
  __int64 v141; // r8
  _QWORD *v142; // r9
  unsigned int v143; // eax
  ULONG_PTR *v144; // rdi
  int v145; // edx
  unsigned int v146; // eax
  ULONG_PTR v147; // r9
  int v148; // r8d
  unsigned __int64 v149; // rcx
  int v150; // ebx
  int v151; // ecx
  ULONG_PTR *v152; // r11
  _BYTE *v153; // rsi
  unsigned int *v154; // rax
  unsigned int v155; // r10d
  int v156; // ecx
  const char *v157; // rbx
  _QWORD *v158; // rax
  __int64 v159; // rdx
  const char *v160; // rax
  int v161; // r9d
  unsigned __int64 v162; // rdx
  const char *v163; // rcx
  unsigned int v164; // r8d
  unsigned __int64 v165; // rax
  __int64 v166; // rax
  unsigned __int64 v167; // rax
  __int64 v168; // r8
  bool v169; // zf
  _BYTE *v170; // rsi
  ULONG_PTR v171; // rdx
  __int64 v172; // rsi
  unsigned int v173; // eax
  _BYTE *v174; // rbx
  int v175; // edx
  unsigned int v176; // eax
  ULONG_PTR v177; // r9
  int v178; // r8d
  unsigned __int64 v179; // rcx
  int v180; // edi
  int v181; // ecx
  int v182; // ecx
  _QWORD *v183; // rax
  __int64 v184; // r8
  unsigned __int64 v185; // r11
  unsigned int v186; // edi
  const char *v187; // rax
  int v188; // r10d
  unsigned __int64 v189; // rcx
  unsigned __int64 v190; // rax
  __int64 v191; // rax
  ULONG_PTR n; // rax
  __int64 v193; // rsi
  ULONG_PTR v194; // rdi
  int v195; // eax
  __int64 v196; // rax
  int v197; // ecx
  _QWORD *v198; // rax
  __int64 *v199; // rax
  __int64 v200; // rax
  ULONG_PTR v201; // rdi
  __int64 v202; // rax
  unsigned __int16 v203; // dx
  unsigned int *v204; // rdi
  unsigned int v205; // r9d
  ULONG_PTR *v206; // r11
  unsigned int v207; // esi
  unsigned int *v208; // rcx
  unsigned int v209; // r8d
  unsigned int v210; // eax
  unsigned int v211; // ecx
  unsigned int v212; // edx
  unsigned int v213; // eax
  unsigned int v214; // r10d
  __int64 v215; // r11
  __int64 v216; // rsi
  unsigned int v217; // eax
  __int64 v218; // rdi
  int v219; // r8d
  __int64 v220; // rdx
  __int64 v221; // r10
  int v222; // r9d
  unsigned __int64 v223; // rax
  int v224; // ebx
  int v225; // ecx
  __int64 v226; // rcx
  _QWORD *v227; // rax
  __int64 v228; // rdx
  int v229; // r8d
  unsigned __int64 v230; // rdx
  unsigned __int64 ii; // rax
  ULONG_PTR v232; // rax
  __int64 v233; // rax
  unsigned __int64 v234; // r8
  __int64 v235; // rax
  unsigned __int64 v236; // rsi
  __int64 v237; // rdx
  _DWORD *v238; // rax
  __int64 v239; // rcx
  char *v240; // rsi
  _DWORD *v241; // rbx
  int v242; // r10d
  int v243; // ecx
  __int16 v244; // ax
  char *v245; // rdx
  int v246; // r9d
  __int64 v247; // r8
  char v248; // cl
  char v249; // al
  char *v250; // r8
  unsigned int v251; // edx
  char *v252; // r9
  __int64 v253; // rcx
  __int64 v254; // rax
  char v255; // cl
  char v256; // al
  char *v257; // rdx
  int v258; // r9d
  char v259; // cl
  char v260; // al
  char *v261; // rdx
  int v262; // r9d
  char v263; // cl
  char v264; // al
  unsigned int v265; // ecx
  __int64 v266; // r11
  unsigned int *v267; // r8
  unsigned int *v268; // rsi
  unsigned int v269; // r9d
  unsigned int v270; // eax
  unsigned int v271; // ecx
  const char *v272; // r8
  unsigned int *v273; // rcx
  unsigned int v274; // r9d
  ULONG_PTR *v275; // rdx
  const char *v276; // r11
  unsigned int v277; // r10d
  const char *v278; // rax
  int v279; // ecx
  unsigned __int64 jj; // rdx
  unsigned __int64 v281; // r10
  __int64 v282; // rax
  unsigned __int64 kk; // rax
  unsigned int v284; // eax
  unsigned int *v285; // rbx
  _BYTE *v286; // rcx
  unsigned int *v287; // rcx
  const char *v288; // r9
  unsigned int v289; // r8d
  ULONG_PTR *v290; // rdx
  const char *v291; // rsi
  unsigned int mm; // r10d
  const char *v293; // rax
  int v294; // ecx
  unsigned __int64 nn; // rdx
  unsigned __int64 v296; // r10
  __int64 v297; // rax
  unsigned __int64 i1; // rax
  unsigned int *v299; // rcx
  unsigned int v300; // r9d
  const char *v301; // r8
  unsigned int v302; // r10d
  const char *v303; // r11
  ULONG_PTR *v304; // rdx
  const char *v305; // rax
  int v306; // ecx
  unsigned __int64 i2; // rdx
  unsigned __int64 v308; // r10
  __int64 v309; // rax
  unsigned __int64 i3; // rax
  unsigned int *v311; // rdx
  __int64 v312; // rax
  __int64 v313; // rax
  __int64 v314; // rcx
  __int64 v315; // rax
  __int64 v316; // rdi
  __int64 v317; // rcx
  __int64 v318; // rdi
  __int64 i4; // rbx
  __int64 v320; // rax
  __int64 v321; // rdx
  unsigned int v322; // [rsp+38h] [rbp-D0h]
  unsigned int v323; // [rsp+38h] [rbp-D0h]
  unsigned int v324; // [rsp+38h] [rbp-D0h]
  unsigned int v325; // [rsp+3Ch] [rbp-CCh]
  unsigned int v326; // [rsp+3Ch] [rbp-CCh]
  int v327; // [rsp+40h] [rbp-C8h]
  unsigned int v328; // [rsp+40h] [rbp-C8h]
  unsigned int v329; // [rsp+40h] [rbp-C8h]
  _BYTE *i; // [rsp+48h] [rbp-C0h]
  ULONG_PTR *j; // [rsp+48h] [rbp-C0h]
  ULONG_PTR v332; // [rsp+48h] [rbp-C0h]
  __int64 v333; // [rsp+48h] [rbp-C0h]
  unsigned int *v334; // [rsp+48h] [rbp-C0h]
  unsigned int v335; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v336; // [rsp+54h] [rbp-B4h]
  __int64 v337; // [rsp+58h] [rbp-B0h]
  __int64 v338; // [rsp+60h] [rbp-A8h]
  unsigned __int64 CurrentIrql; // [rsp+68h] [rbp-A0h]
  __int64 v340; // [rsp+70h] [rbp-98h]
  unsigned int *v341; // [rsp+78h] [rbp-90h]
  ULONG_PTR *v342; // [rsp+80h] [rbp-88h]
  ULONG_PTR v343; // [rsp+88h] [rbp-80h]
  ULONG_PTR *v344; // [rsp+90h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp-70h] BYREF
  __int64 v346; // [rsp+A0h] [rbp-68h]
  int v347; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v348; // [rsp+B0h] [rbp-58h]
  int v349; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v350; // [rsp+C0h] [rbp-48h] BYREF
  int v351; // [rsp+C8h] [rbp-40h]
  int v352; // [rsp+CCh] [rbp-3Ch]
  int v353; // [rsp+D0h] [rbp-38h]
  int v354; // [rsp+D4h] [rbp-34h] BYREF
  _DWORD v355[6]; // [rsp+D8h] [rbp-30h] BYREF
  _DWORD *v356; // [rsp+F0h] [rbp-18h]
  __int64 v357; // [rsp+F8h] [rbp-10h]
  unsigned int **v358; // [rsp+108h] [rbp+0h]
  _BYTE *v359; // [rsp+110h] [rbp+8h]
  ULONG_PTR v360; // [rsp+118h] [rbp+10h] BYREF
  __int64 v361; // [rsp+120h] [rbp+18h]
  __int64 v362; // [rsp+128h] [rbp+20h]
  __int64 v363; // [rsp+130h] [rbp+28h]
  char *v364; // [rsp+138h] [rbp+30h]
  __int64 *v365; // [rsp+140h] [rbp+38h]
  char *v366; // [rsp+148h] [rbp+40h]
  char *v367; // [rsp+150h] [rbp+48h]
  char *v368; // [rsp+160h] [rbp+58h]
  char *v369; // [rsp+168h] [rbp+60h]
  char *v370; // [rsp+170h] [rbp+68h]
  _BYTE *v371; // [rsp+178h] [rbp+70h]
  _BYTE *v372; // [rsp+180h] [rbp+78h]
  _BYTE *v373; // [rsp+188h] [rbp+80h]
  __int64 v374; // [rsp+190h] [rbp+88h]
  unsigned int v378; // [rsp+1D8h] [rbp+D0h]
  unsigned int v379; // [rsp+1E0h] [rbp+D8h]
  unsigned int v380; // [rsp+1E0h] [rbp+D8h]
  int v381; // [rsp+1E0h] [rbp+D8h]
  int v382; // [rsp+1E0h] [rbp+D8h]
  unsigned int v383; // [rsp+1E0h] [rbp+D8h]
  unsigned int v384; // [rsp+1E0h] [rbp+D8h]
  __int64 v385; // [rsp+1E0h] [rbp+D8h]
  unsigned __int16 v386; // [rsp+1E0h] [rbp+D8h]
  int v387; // [rsp+1E0h] [rbp+D8h]

  v344 = *a1;
  v3 = ((__int64 (__fastcall *)(__int64, __int64 *, int *))v344[58])(a2, &v350, &v354);
  v4 = 0LL;
  v342 = (ULONG_PTR *)v3;
  v5 = v3;
  if ( !v3 )
    return 3221225595LL;
  v7 = 4;
  v348 = 0LL;
  v8 = &v349;
  do
  {
    *(_BYTE *)v8 = 0;
    v8 = (int *)((char *)v8 + 1);
    --v7;
  }
  while ( v7 );
  v9 = v344;
  v10 = 0;
  CurrentIrql = (unsigned __int64)v344;
  v379 = *((_DWORD *)v344 + 351);
  if ( v379 )
  {
    v11 = (_BYTE *)v344[230];
    v12 = v349;
    v13 = HIDWORD(v348);
    v14 = v348;
    for ( i = v11; ; v11 = i )
    {
      v15 = 0;
      v16 = v9;
      if ( v11 )
        v16 = v11;
      v4 = &v16[*((unsigned int *)v16 + 350)];
      if ( v14 && v13 <= v10 )
      {
        v15 = v13;
        v4 = &v16[v12];
      }
      if ( v15 != v10 )
        break;
LABEL_37:
      LODWORD(v348) = 1;
      v12 = (_DWORD)v4 - (_DWORD)v16;
      v14 = 1;
      v25 = *(_DWORD *)v4;
      v349 = (_DWORD)v4 - (_DWORD)v16;
      v13 = v15;
      HIDWORD(v348) = v15;
      if ( (v25 == 1 || v25 == 12) && *((_QWORD *)v4 + 1) == v5 && *((_DWORD *)v4 + 4) == v354 )
        goto LABEL_45;
      if ( (unsigned int)(v25 - 33) <= 1 && *((_QWORD *)v4 + 4) == v350 )
        goto LABEL_45;
      ++v10;
      v4 = 0LL;
      if ( v10 >= v379 )
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
            v24 = *((unsigned __int16 *)v4 + 20);
            goto LABEL_24;
          case 30:
            v23 = (((*((_DWORD *)v4 + 9) - 1) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*((unsigned __int16 *)v4 + 20) + 2);
            goto LABEL_35;
        }
        if ( (unsigned int)(v18 - 33) <= 1 )
        {
          v23 = 20
              * (unsigned int)(((*((_DWORD *)v4 + 8) & 0xFFF) + (unsigned __int64)*((unsigned int *)v4 + 10) + 4095) >> 12)
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
          v23 = 4 * (*((_DWORD *)v4 + 4) / 0xCu) + 48;
          goto LABEL_35;
        }
        v20 = v19 - 6;
        if ( !v20 )
        {
          v23 = (unsigned int)(24 * (*((_DWORD *)v4 + 6) + 2));
          goto LABEL_35;
        }
        v21 = v20 - 1;
        if ( !v21 )
        {
          v24 = *((unsigned __int16 *)v4 + 16);
LABEL_24:
          v23 = (v24 + 55) & 0xFFFFFFF8;
          goto LABEL_35;
        }
        v22 = v21 - 2;
        if ( !v22 )
        {
          v23 = (unsigned int)(16 * (*((_DWORD *)v4 + 7) + 3));
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
        v9 = (_BYTE *)CurrentIrql;
        v5 = (__int64)v342;
        goto LABEL_37;
      }
    }
  }
LABEL_45:
  if ( v4 )
    return 3221225742LL;
  v341 = (unsigned int *)(*((__int64 (__fastcall **)(__int64, ULONG_PTR *, unsigned int *))v9 + 58))(
                           a2,
                           &BugCheckParameter2,
                           &v335);
  if ( !v341 )
    goto LABEL_218;
  v26 = 4;
  v346 = 0LL;
  v27 = &v347;
  do
  {
    *(_BYTE *)v27 = 0;
    v27 = (int *)((char *)v27 + 1);
    --v26;
  }
  while ( v26 );
  v28 = *((_DWORD *)v9 + 351);
  v29 = 0;
  v380 = 0;
  v336 = v28;
  if ( v28 )
  {
    v30 = (ULONG_PTR *)*((_QWORD *)v9 + 230);
    v31 = v347;
    v32 = HIDWORD(v346);
    v33 = v346;
    for ( j = v30; ; v30 = j )
    {
      v34 = (ULONG_PTR *)v9;
      if ( v30 )
        v34 = v30;
      v342 = v34;
      v35 = 0;
      v36 = (unsigned int **)((char *)v34 + *((unsigned int *)v34 + 350));
      if ( v33 && v32 <= v29 )
      {
        v35 = v32;
        v36 = (unsigned int **)((char *)v34 + v31);
      }
      if ( v35 != v29 )
        break;
LABEL_82:
      LODWORD(v346) = 1;
      v31 = (_DWORD)v36 - (_DWORD)v34;
      v33 = 1;
      v45 = *(_DWORD *)v36;
      v347 = (_DWORD)v36 - (_DWORD)v34;
      v32 = v35;
      HIDWORD(v346) = v35;
      if ( (v45 == 1 || v45 == 12) && v36[1] == v341 && *((_DWORD *)v36 + 4) == v335
        || (unsigned int)(v45 - 33) <= 1 && v36[4] == (unsigned int *)BugCheckParameter2 )
      {
        goto LABEL_91;
      }
      v380 = ++v29;
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
            v44 = *((unsigned __int16 *)v36 + 20);
            goto LABEL_69;
          case 30:
            v43 = (((*((_DWORD *)v36 + 9) - 1) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*((unsigned __int16 *)v36 + 20) + 2);
            goto LABEL_80;
        }
        if ( (unsigned int)(v38 - 33) <= 1 )
        {
          v43 = 20
              * (unsigned int)((((_DWORD)v36[4] & 0xFFF) + (unsigned __int64)*((unsigned int *)v36 + 10) + 4095) >> 12)
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
          v43 = 4 * (*((_DWORD *)v36 + 4) / 0xCu) + 48;
          goto LABEL_80;
        }
        v40 = v39 - 6;
        if ( !v40 )
        {
          v43 = (unsigned int)(24 * (*((_DWORD *)v36 + 6) + 2));
          goto LABEL_80;
        }
        v41 = v40 - 1;
        if ( !v41 )
        {
          v44 = *((unsigned __int16 *)v36 + 16);
LABEL_69:
          v43 = (v44 + 55) & 0xFFFFFFF8;
          goto LABEL_80;
        }
        v42 = v41 - 2;
        if ( !v42 )
        {
          v43 = (unsigned int)(16 * (*((_DWORD *)v36 + 7) + 3));
          goto LABEL_80;
        }
        if ( v42 == 2 )
          goto LABEL_71;
      }
      v43 = 48LL;
LABEL_80:
      v36 = (unsigned int **)((char *)v36 + v43);
      if ( !--v37 )
      {
        v9 = (_BYTE *)CurrentIrql;
        v29 = v380;
        LODWORD(v34) = (_DWORD)v342;
        v28 = v336;
        goto LABEL_82;
      }
    }
  }
LABEL_90:
  v36 = 0LL;
LABEL_91:
  v358 = v36;
  if ( v36 )
  {
    v46 = -1073741554;
    goto LABEL_219;
  }
  v47 = (*((__int64 (__fastcall **)(__int64))v9 + 78))(a2);
  v48 = a3;
  v49 = v47;
  v50 = v335;
  v327 = v47;
  v325 = v335;
  if ( (a3 & 2) != 0 && !v47 )
  {
    v46 = 0;
    goto LABEL_220;
  }
  if ( (*((_DWORD *)v9 + 420) & 0x40000000) != 0 )
  {
    v46 = sub_14072DC88(&v344, BugCheckParameter2, a3);
    goto LABEL_219;
  }
  v332 = BugCheckParameter2;
  v340 = (*((__int64 (__fastcall **)(ULONG_PTR))v9 + 57))(BugCheckParameter2);
  if ( !v340 )
  {
LABEL_218:
    v46 = -1073741701;
    goto LABEL_219;
  }
  v51 = *((unsigned int *)v9 + 397);
  v343 = v50 / 0xC;
  v52 = v49;
  v53 = *((unsigned int *)v9 + 341);
  v54 = -(v52 != 0);
  v55 = v53 + 4 * (v50 / 0xC) + 48;
  v56 = (v54 & 0xB) + 1;
  v381 = v56;
  if ( v55 <= *((_DWORD *)v9 + 453) )
  {
    v57 = (ULONG_PTR *)v9;
    *((_DWORD *)v9 + 341) = v55;
    v342 = (ULONG_PTR *)v9;
  }
  else
  {
    v342 = (ULONG_PTR *)sub_140236718(v9, v55, v51);
    v57 = v342;
    if ( !v342 )
      goto LABEL_116;
    v58 = *((_DWORD *)v9 + 420);
    if ( (v58 & 4) == 0 )
    {
      v59 = *((_DWORD *)v9 + 341);
      v60 = *((_QWORD *)v9 + 167);
      v61 = (v58 & 0x20000000) != 0 ? *((_DWORD *)v9 + 397) : 0;
      if ( v59 >= 8 )
      {
        v62 = (unsigned __int64)v59 >> 3;
        do
        {
          *(_QWORD *)v9 = 0LL;
          v59 -= 8;
          v9 += 8;
          --v62;
        }
        while ( v62 );
      }
      for ( ; v59; --v59 )
        *v9++ = 0;
      v63 = *((_DWORD *)v57 + 397);
      *((_DWORD *)v57 + 397) = v61;
      if ( v61 == 3 )
      {
        ((void (__fastcall *)(__int64, __int64))v57[100])(v60, 1LL);
      }
      else
      {
        v64 = 0;
        if ( (v57[210] & 0x10000000) == 0 )
          v64 = v61;
        if ( v64 )
          ((void (__fastcall *)(__int64, _QWORD))v57[63])(v60 - 8, *(_QWORD *)(v60 - 8));
        else
          ((void (__fastcall *)(__int64, __int64))v57[31])(v60, 1LL);
      }
      *((_DWORD *)v57 + 397) = v63;
    }
    *((_DWORD *)v57 + 420) &= ~4u;
    v56 = v381;
  }
  ++*((_DWORD *)v57 + 351);
  v65 = 48;
  v66 = (char *)v57 + v53;
  v371 = v66;
  v67 = v66;
  v68 = 6LL;
  do
  {
    *v67 = 0LL;
    v65 -= 8;
    ++v67;
    --v68;
  }
  while ( v68 );
  for ( ; v65; --v65 )
  {
    *(_BYTE *)v67 = 0;
    v67 = (_QWORD *)((char *)v67 + 1);
  }
  v69 = (unsigned __int64)v341;
  v70 = v325;
  *((_QWORD *)v66 + 1) = v341;
  *(_DWORD *)v66 = v56;
  if ( v56 == 32 && v325 )
  {
    sub_14014F138((__int64)v57, v69, v325, (__int64)(v66 + 24));
    v69 = (unsigned __int64)v341;
  }
  *((_DWORD *)v66 + 4) = v325;
  v71 = (_QWORD *)v69;
  *((_DWORD *)v57 + 358) += v325;
  v72 = (const char *)v69;
  v73 = *((_DWORD *)v57 + 353);
  v74 = v57[177];
  v75 = v69 + v325;
  if ( v69 < v75 )
  {
    do
    {
      _mm_prefetch(v72, 0);
      v72 += 64;
    }
    while ( (unsigned __int64)v72 < v75 );
  }
  v76 = v325;
  if ( v325 >= 8 )
  {
    v77 = (unsigned __int64)v325 >> 3;
    do
    {
      v74 = __ROL8__(*v71++ ^ v74, v73);
      v76 -= 8;
      --v77;
    }
    while ( v77 );
    v70 = v325;
  }
  if ( v76 )
  {
    do
    {
      v78 = *(unsigned __int8 *)v71;
      v71 = (_QWORD *)((char *)v71 + 1);
      v74 = __ROL8__(v78 ^ v74, v73);
      --v76;
    }
    while ( v76 );
    v57 = v342;
  }
  for ( k = v74; ; v74 = (unsigned int)k ^ (unsigned int)v74 )
  {
    k >>= 31;
    if ( !k )
      break;
  }
  LODWORD(v74) = v74 & 0x7FFFFFFF;
  v373 = v66;
  *((_DWORD *)v66 + 5) = v74;
  *((_DWORD *)v57 + 358) += v70;
  v80 = v57[138];
  v81 = v57[135] + 16;
  v382 = -1073741275;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  ((void (__fastcall *)(ULONG_PTR, ULONG_PTR, _QWORD *))v57[41])(v80, v74, v71);
  v82 = v81 + 24LL * *(unsigned int *)v57[135];
  while ( *(_QWORD *)(v81 + 8) != v332 )
  {
    v81 += 24LL;
    if ( v81 >= v82 )
    {
      v83 = v66 + 24;
      goto LABEL_141;
    }
  }
  v382 = 0;
  *(_OWORD *)(v66 + 24) = *(_OWORD *)v81;
  v103 = *(_QWORD *)(v81 + 16);
  v83 = v66 + 24;
  *((_QWORD *)v66 + 5) = v103;
LABEL_141:
  ((void (__fastcall *)(ULONG_PTR))v57[49])(v57[138]);
  __writecr8((unsigned __int8)CurrentIrql);
  if ( v382 < 0 )
  {
    v84 = 24;
    v85 = v83;
    v86 = 3LL;
    do
    {
      *v85 = 0LL;
      v84 -= 8;
      ++v85;
      --v86;
    }
    while ( v86 );
    for ( ; v84; --v84 )
    {
      *(_BYTE *)v85 = 0;
      v85 = (_QWORD *)((char *)v85 + 1);
    }
    *v83 = 1LL;
  }
  v87 = v343;
  v88 = v66 + 48;
  v338 = (__int64)(v66 + 48);
  v89 = 4 * v343;
  if ( (unsigned int)(4 * v343) >= 8 )
  {
    v90 = (unsigned __int64)v89 >> 3;
    do
    {
      *v88 = -1LL;
      v89 -= 8;
      ++v88;
      --v90;
    }
    while ( v90 );
  }
  for ( ; v89; --v89 )
  {
    *(_BYTE *)v88 = -1;
    v88 = (_QWORD *)((char *)v88 + 1);
  }
  v91 = v87;
  v92 = v341;
  v322 = -1;
  v93 = *v341;
  CurrentIrql = (unsigned __int64)v341;
  v383 = 0;
  v343 = (ULONG_PTR)&v341[3 * v91];
  v94 = (char *)((__int64 (__fastcall *)(__int64, ULONG_PTR, __int64))v57[60])(v340, v332, v93);
  if ( !v94 )
    goto LABEL_218;
LABEL_153:
  v95 = 0;
  if ( (*((_DWORD *)v94 + 9) & 0x2000000) != 0
    || (v96 = *(_DWORD *)v94, *(_DWORD *)v94 == 1414090313) && *((_DWORD *)v94 + 1) == 1195525195
    || v96 == 1162297680 && ((v97 = *((_WORD *)v94 + 2), v97 == 30583) || v97 == 29303 || v97 == 30839)
    || v96 == 1095914053 && *((_WORD *)v94 + 2) == 16724 )
  {
    v95 = 1;
  }
  else
  {
    v98 = (char *)v57[200];
    v99 = 7;
    v365 = (__int64 *)v57[201];
    v100 = v94 - v98;
    v366 = (char *)v57[202];
    v367 = (char *)v57[203];
    v364 = v98;
    while ( 1 )
    {
      v101 = (unsigned __int8)v98[v100];
      v102 = (unsigned __int8)*v98++;
      if ( v101 != v102 )
        break;
      if ( !--v99 )
      {
LABEL_181:
        v95 = 1;
        goto LABEL_182;
      }
    }
    v104 = v365;
    v105 = 8;
    v106 = (__int64 *)v94;
    while ( 1 )
    {
      v107 = *v106++;
      v108 = *v104++;
      if ( v107 != v108 )
        break;
      v105 -= 8;
      if ( v105 < 8 )
      {
        if ( !v105 )
          goto LABEL_181;
        while ( 1 )
        {
          v109 = *(unsigned __int8 *)v106;
          v106 = (__int64 *)((char *)v106 + 1);
          v110 = *(unsigned __int8 *)v104;
          v104 = (__int64 *)((char *)v104 + 1);
          if ( v109 != v110 )
            goto LABEL_174;
          if ( !--v105 )
            goto LABEL_181;
        }
      }
    }
LABEL_174:
    v111 = v366;
    v112 = 4;
    while ( 1 )
    {
      v113 = (unsigned __int8)v111[v94 - v366];
      v114 = (unsigned __int8)*v111++;
      if ( v113 != v114 )
        break;
      if ( !--v112 )
        goto LABEL_181;
    }
    v115 = v367;
    v116 = 6;
    while ( 1 )
    {
      v117 = (unsigned __int8)v115[v94 - v367];
      v118 = (unsigned __int8)*v115++;
      if ( v117 != v118 )
        break;
      if ( !--v116 )
        goto LABEL_181;
    }
  }
LABEL_182:
  if ( *((int *)v94 + 9) < 0 )
    v95 = 1;
  if ( v95 && *(_DWORD *)v94 == 1414090313 && *((_DWORD *)v94 + 1) == 1195525195 && (v57[210] & 0x10000000) != 0 )
    v95 = 0;
  v119 = *((_DWORD *)v94 + 2);
  if ( *((_DWORD *)v94 + 4) > v119 )
    v119 = *((_DWORD *)v94 + 4);
  v120 = v332;
  v121 = v119 + *((_DWORD *)v94 + 3);
  v336 = v121;
  while ( 1 )
  {
    v122 = v92[2];
    if ( (v122 & 1) == 0 )
    {
      v123 = v322;
      if ( v122 < v322 )
        v123 = v92[2];
      v322 = v123;
      v124 = v383;
      if ( v122 > v383 )
        v124 = v92[2];
      v383 = v124;
    }
    v125 = *v92;
    v126 = v92[1] - v125;
    v127 = (char *)(v120 + v125);
    if ( v95 )
    {
      v128 = v338;
      *(_DWORD *)v338 = 0x80000000;
    }
    else
    {
      *((_DWORD *)v57 + 358) += v126;
      v129 = (const char *)(v120 + v125);
      v130 = *((_DWORD *)v57 + 353);
      v131 = v57[177];
      v132 = &v127[v126];
      if ( v127 < v132 )
      {
        do
        {
          _mm_prefetch(v129, 0);
          v129 += 64;
        }
        while ( v129 < v132 );
      }
      if ( v126 >= 8 )
      {
        v133 = (unsigned __int64)v126 >> 3;
        do
        {
          v131 = __ROL8__(*(_QWORD *)v127 ^ v131, v130);
          v127 += 8;
          v126 -= 8;
          --v133;
        }
        while ( v133 );
        v57 = v342;
        v120 = v332;
      }
      if ( v126 )
      {
        do
        {
          v134 = (unsigned __int8)*v127++;
          v131 = __ROL8__(v134 ^ v131, v130);
          --v126;
        }
        while ( v126 );
        v120 = v332;
      }
      for ( m = v131; ; LODWORD(v131) = m ^ v131 )
      {
        m >>= 31;
        if ( !m )
          break;
      }
      v128 = v338;
      v92 = (unsigned int *)CurrentIrql;
      *(_DWORD *)v338 = v131 & 0x7FFFFFFF;
      v121 = v336;
    }
    v92 += 3;
    CurrentIrql = (unsigned __int64)v92;
    if ( v92 == (unsigned int *)v343 )
      break;
    v338 = v128 + 4;
    if ( *v92 < *((_DWORD *)v94 + 3) || v120 + v92[1] > v121 )
    {
      v94 = (char *)((__int64 (__fastcall *)(__int64, ULONG_PTR, _QWORD, char *))v57[60])(v340, v120, *v92, v127);
      if ( !v94 )
        goto LABEL_218;
      goto LABEL_153;
    }
  }
  v136 = v322;
  if ( v322 == -1 && !v383 )
    v136 = 0LL;
  v355[0] = v383 - v136;
  v344 = v57;
  v360 = BugCheckParameter2 + (unsigned int)v136;
  LOBYTE(v136) = 1;
  v361 = ((__int64 (__fastcall *)(ULONG_PTR, __int64, _QWORD, unsigned int *))v57[56])(
           BugCheckParameter2,
           v136,
           0LL,
           &v335);
  v137 = v361 != 0 ? v335 : 0;
  v335 = v137;
  v355[1] = v137;
  LOBYTE(v137) = 1;
  v138 = ((__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, unsigned int *))v57[56])(
           BugCheckParameter2,
           v137,
           12LL,
           &v335);
  v139 = v138;
  v333 = v138;
  v362 = v138;
  LOBYTE(v139) = 1;
  v335 &= -(v138 != 0);
  v384 = v335;
  v355[2] = v335;
  v363 = ((__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, unsigned int *))v57[56])(
           BugCheckParameter2,
           v139,
           10LL,
           &v335);
  v335 &= -(v363 != 0);
  v140 = *((unsigned int *)v57 + 341);
  v141 = *((unsigned int *)v57 + 397);
  LODWORD(v142) = v327 != 0 ? 0xB : 0;
  v355[3] = v335;
  v143 = v140 + 192;
  if ( (unsigned int)(v140 + 192) <= *((_DWORD *)v57 + 453) )
  {
    v144 = v57;
    *((_DWORD *)v57 + 341) = v143;
  }
  else
  {
    v144 = (ULONG_PTR *)sub_140236718(v57, v143, v141);
    if ( !v144 )
      goto LABEL_116;
    v145 = *((_DWORD *)v57 + 420);
    if ( (v145 & 4) == 0 )
    {
      v146 = *((_DWORD *)v57 + 341);
      v147 = v57[167];
      v148 = (v145 & 0x20000000) != 0 ? *((_DWORD *)v57 + 397) : 0;
      if ( v146 >= 8 )
      {
        v149 = (unsigned __int64)v146 >> 3;
        do
        {
          *v57 = 0LL;
          v146 -= 8;
          ++v57;
          --v149;
        }
        while ( v149 );
      }
      for ( ; v146; --v146 )
      {
        *(_BYTE *)v57 = 0;
        v57 = (ULONG_PTR *)((char *)v57 + 1);
      }
      v150 = *((_DWORD *)v144 + 397);
      *((_DWORD *)v144 + 397) = v148;
      if ( v148 == 3 )
      {
        ((void (__fastcall *)(ULONG_PTR, __int64))v144[100])(v147, 1LL);
      }
      else
      {
        v151 = 0;
        if ( (v144[210] & 0x10000000) == 0 )
          v151 = v148;
        if ( v151 )
          ((void (__fastcall *)(ULONG_PTR, _QWORD))v144[63])(v147 - 8, *(_QWORD *)(v147 - 8));
        else
          ((void (__fastcall *)(ULONG_PTR, __int64))v144[31])(v147, 1LL);
      }
      *((_DWORD *)v144 + 397) = v150;
    }
    *((_DWORD *)v144 + 420) &= ~4u;
    LODWORD(v142) = v327 != 0 ? 0xB : 0;
  }
  *((_DWORD *)v144 + 351) += 4;
  v152 = &v360;
  v153 = (char *)v144 + v140;
  v340 = (__int64)v153;
  v359 = v153;
  v358 = (unsigned int **)v153;
  v154 = v355;
  v342 = &v360;
  CurrentIrql = (unsigned __int64)v355;
  v338 = 4LL;
  do
  {
    v155 = *v154;
    v156 = 48;
    v157 = (const char *)*v152;
    v158 = v153;
    LODWORD(v337) = v155;
    v159 = 6LL;
    do
    {
      *v158 = 0LL;
      v156 -= 8;
      ++v158;
      --v159;
    }
    while ( v159 );
    for ( ; v156; --v156 )
    {
      *(_BYTE *)v158 = 0;
      v158 = (_QWORD *)((char *)v158 + 1);
    }
    *(_DWORD *)v153 = (_DWORD)v142;
    *((_QWORD *)v153 + 1) = v157;
    *((_DWORD *)v153 + 4) = v155;
    v160 = v157;
    *((_DWORD *)v144 + 358) += v155;
    v161 = *((_DWORD *)v144 + 353);
    v162 = v144[177];
    v163 = &v157[v155];
    if ( v157 < v163 )
    {
      do
      {
        _mm_prefetch(v160, 0);
        v160 += 64;
      }
      while ( v160 < v163 );
    }
    v164 = v155;
    if ( v155 >= 8 )
    {
      v165 = (unsigned __int64)v155 >> 3;
      do
      {
        v162 = __ROL8__(*(_QWORD *)v157 ^ v162, v161);
        v157 += 8;
        v164 -= 8;
        --v165;
      }
      while ( v165 );
      v155 = v337;
    }
    if ( v164 )
    {
      do
      {
        v166 = *(unsigned __int8 *)v157++;
        v162 = __ROL8__(v166 ^ v162, v161);
        --v164;
      }
      while ( v164 );
      v152 = v342;
    }
    v167 = v162 >> 31;
    v168 = 0LL;
    while ( v167 )
    {
      LODWORD(v162) = v167 ^ v162;
      v167 >>= 31;
    }
    v142 = v327 != 0 ? (_QWORD *)0xB : 0LL;
    v154 = (unsigned int *)(CurrentIrql + 4);
    *((_DWORD *)v153 + 5) = v162 & 0x7FFFFFFF;
    ++v152;
    *((_DWORD *)v144 + 358) += v155;
    v153 += 48;
    v359 = v153;
    v169 = v338-- == 1;
    CurrentIrql = (unsigned __int64)v154;
    v342 = v152;
  }
  while ( !v169 );
  v170 = (_BYTE *)(v340 + 96);
  LODWORD(v337) = a3 & 1;
  v344 = v144;
  v357 = v340 + 96;
  v171 = (unsigned int)(v327 != 0) + 13;
  v336 = (v327 != 0) + 13;
  if ( v340 == -96 )
  {
    v172 = *((unsigned int *)v144 + 341);
    v173 = v172 + 48;
    if ( (unsigned int)(v172 + 48) <= *((_DWORD *)v144 + 453) )
    {
      v174 = v144;
      *((_DWORD *)v144 + 341) = v173;
    }
    else
    {
      v174 = (_BYTE *)sub_140236718(v144, v173, *((unsigned int *)v144 + 397));
      if ( !v174 )
        goto LABEL_116;
      v175 = *((_DWORD *)v144 + 420);
      if ( (v175 & 4) == 0 )
      {
        v176 = *((_DWORD *)v144 + 341);
        v177 = v144[167];
        v178 = (v175 & 0x20000000) != 0 ? *((_DWORD *)v144 + 397) : 0;
        if ( v176 >= 8 )
        {
          v179 = (unsigned __int64)v176 >> 3;
          do
          {
            *v144 = 0LL;
            v176 -= 8;
            ++v144;
            --v179;
          }
          while ( v179 );
        }
        for ( ; v176; --v176 )
        {
          *(_BYTE *)v144 = 0;
          v144 = (ULONG_PTR *)((char *)v144 + 1);
        }
        v180 = *((_DWORD *)v174 + 397);
        *((_DWORD *)v174 + 397) = v178;
        if ( v178 == 3 )
        {
          (*((void (__fastcall **)(ULONG_PTR, __int64))v174 + 100))(v177, 1LL);
        }
        else
        {
          v181 = 0;
          if ( (*((_DWORD *)v174 + 420) & 0x10000000) == 0 )
            v181 = v178;
          if ( v181 )
            (*((void (__fastcall **)(ULONG_PTR, _QWORD))v174 + 63))(v177 - 8, *(_QWORD *)(v177 - 8));
          else
            (*((void (__fastcall **)(ULONG_PTR, __int64))v174 + 31))(v177, 1LL);
        }
        *((_DWORD *)v174 + 397) = v180;
      }
      *((_DWORD *)v174 + 420) &= ~4u;
      LODWORD(v171) = v336;
    }
    ++*((_DWORD *)v174 + 351);
    v182 = 48;
    v170 = &v174[v172];
    v372 = v170;
    v183 = v170;
    v184 = 6LL;
    do
    {
      *v183 = 0LL;
      v182 -= 8;
      ++v183;
      --v184;
    }
    while ( v184 );
    for ( ; v182; --v182 )
    {
      *(_BYTE *)v183 = 0;
      v183 = (_QWORD *)((char *)v183 + 1);
    }
    v185 = v333;
    v186 = v384;
    *((_QWORD *)v170 + 1) = v333;
    *(_DWORD *)v170 = v171;
    if ( (_DWORD)v171 == 32 && v384 )
    {
      sub_14014F138((__int64)v174, v333, v384, (__int64)(v170 + 24));
      v185 = v333;
    }
    *((_DWORD *)v170 + 4) = v384;
    v142 = (_QWORD *)v185;
    *((_DWORD *)v174 + 358) += v384;
    v187 = (const char *)v185;
    v188 = *((_DWORD *)v174 + 353);
    v171 = *((_QWORD *)v174 + 177);
    v189 = v185 + v384;
    if ( v185 < v189 )
    {
      do
      {
        _mm_prefetch(v187, 0);
        v187 += 64;
      }
      while ( (unsigned __int64)v187 < v189 );
    }
    v168 = v384;
    if ( v384 >= 8 )
    {
      v190 = (unsigned __int64)v384 >> 3;
      do
      {
        v171 = __ROL8__(*v142++ ^ v171, v188);
        v168 = (unsigned int)(v168 - 8);
        --v190;
      }
      while ( v190 );
      v186 = v384;
    }
    if ( (_DWORD)v168 )
    {
      do
      {
        v191 = *(unsigned __int8 *)v142;
        v142 = (_QWORD *)((char *)v142 + 1);
        v171 = __ROL8__(v191 ^ v171, v188);
        v169 = (_DWORD)v168 == 1;
        v168 = (unsigned int)(v168 - 1);
      }
      while ( !v169 );
      v185 = v333;
    }
    for ( n = v171; ; v171 = (unsigned int)n ^ (unsigned int)v171 )
    {
      n >>= 31;
      if ( !n )
        break;
    }
    LODWORD(v171) = v171 & 0x7FFFFFFF;
    v357 = (__int64)v170;
    *((_DWORD *)v170 + 5) = v171;
    *((_DWORD *)v174 + 358) += v186;
  }
  else
  {
    v185 = v333;
    v174 = v144;
    v186 = v384;
    *(_DWORD *)v170 = v171;
  }
  if ( (*((_DWORD *)v174 + 420) & 0x40000000) != 0 && v186 )
    sub_14014F138((__int64)v174, v185, v186, (__int64)(v170 + 28));
  *((_DWORD *)v170 + 6) = 0;
  if ( (_DWORD)v337 )
    *((_DWORD *)v170 + 6) = 1;
  v193 = v340;
  v194 = BugCheckParameter2;
  v344 = (ULONG_PTR *)v174;
  v195 = (*(_DWORD *)(v340 + 184) ^ (v327 != 0)) & 1;
  *(_DWORD *)(v340 + 144) = 35;
  *(_DWORD *)(v193 + 184) ^= v195;
  if ( *(_DWORD *)(v193 + 160) < 0x94u )
    goto LABEL_315;
  v385 = *(_QWORD *)(v193 + 152);
  v196 = (*((__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, __int64, _QWORD *))v174 + 57))(v194, v171, v168, v142);
  if ( !v196 )
  {
LABEL_116:
    v46 = -1073741670;
    goto LABEL_219;
  }
  v171 = v194 + *(unsigned int *)(v196 + 80);
  v168 = v385;
  v197 = *(_DWORD *)(v193 + 184) | 2;
  *(_DWORD *)(v193 + 184) = v197;
  v198 = *(_QWORD **)(v385 + 112);
  if ( (unsigned __int64)v198 >= v194 && (unsigned __int64)v198 < v171 )
  {
    *(_QWORD *)(v193 + 168) = *v198;
    *(_DWORD *)(v193 + 184) = v197 | 4;
  }
  v199 = *(__int64 **)(v385 + 120);
  if ( (unsigned __int64)v199 >= v194 && (unsigned __int64)v199 < v171 )
  {
    v200 = *v199;
    *(_DWORD *)(v193 + 184) |= 8u;
    *(_QWORD *)(v193 + 176) = v200;
  }
LABEL_315:
  v201 = BugCheckParameter2;
  v344 = (ULONG_PTR *)v174;
  v169 = (*((_DWORD *)v174 + 420) & 0x400000) == 0;
  v343 = BugCheckParameter2;
  if ( v169 )
    goto LABEL_495;
  v202 = (*((__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, __int64, _QWORD *))v174 + 57))(
           BugCheckParameter2,
           v171,
           v168,
           v142);
  v338 = v202;
  if ( !v202 )
    goto LABEL_218;
  v203 = *(_WORD *)(v202 + 6);
  v386 = v203;
  if ( !v203 )
  {
    if ( (*((_DWORD *)v174 + 420) & 0x200000) == 0 )
    {
      v355[4] = 324608;
      KeBugCheckEx(__ROR4__(324608, 170), 0xAuLL, v201, 0LL, 0LL);
    }
    if ( !*((_DWORD *)v174 + 386) )
    {
      *((_QWORD *)v174 + 197) = v201;
      *((_QWORD *)v174 + 194) = v174 - 0x5C5FC0A76E374B18LL;
LABEL_321:
      *((_QWORD *)v174 + 196) = 271LL;
      *((_DWORD *)v174 + 386) = 1;
      *((_QWORD *)v174 + 195) = 0LL;
    }
    goto LABEL_218;
  }
  v204 = v341;
  v205 = v203;
  v340 = (__int64)&v341[3 * (v325 / 0xC)];
  v323 = v203;
  v342 = (ULONG_PTR *)(*(unsigned __int16 *)(v202 + 20) + v202 + 24);
  v206 = v342;
  v207 = 0;
  v208 = (unsigned int *)(v342 + 1);
  CurrentIrql = (unsigned __int64)(v342 + 1);
  do
  {
    v209 = v208[1];
    v210 = v208[2];
    v211 = *v208;
    LODWORD(v337) = v209;
    if ( v210 > v211 )
      v211 = v210;
    v212 = v209 + v211;
    v336 = v209 + v211;
    if ( v207 && v212 < *((_DWORD *)&v206[5 * v207 - 3] - 1) )
    {
      if ( (*((_DWORD *)v174 + 420) & 0x200000) == 0 )
      {
        v352 = 324608;
        KeBugCheckEx(__ROR4__(324608, 170), 0xAuLL, v343, 1uLL, 0LL);
      }
LABEL_337:
      if ( *((_DWORD *)v174 + 386) )
        goto LABEL_218;
      *((_QWORD *)v174 + 194) = v174 - 0x5C5FC0A76E374B18LL;
      *((_QWORD *)v174 + 197) = v343;
      goto LABEL_321;
    }
    if ( v204 != (unsigned int *)v340 )
    {
      while ( 1 )
      {
        v213 = v204[1];
        if ( *v204 >= v212 || v213 <= v209 )
        {
LABEL_333:
          v205 = v323;
          goto LABEL_334;
        }
        if ( *v204 < v209 || v213 > v212 )
          break;
        __e6(v174, v343, &v206[5 * v207], v204);
        v212 = v336;
        v204 += 3;
        v209 = v337;
        v206 = v342;
        if ( v204 == (unsigned int *)v340 )
          goto LABEL_333;
      }
      if ( (*((_DWORD *)v174 + 420) & 0x200000) == 0 )
      {
        v353 = 324608;
        KeBugCheckEx(__ROR4__(324608, 170), 0xAuLL, v343, 2uLL, 0LL);
      }
      goto LABEL_337;
    }
LABEL_334:
    v208 = (unsigned int *)(CurrentIrql + 40);
    ++v207;
    CurrentIrql += 40LL;
  }
  while ( v207 < v205 );
  v214 = v325 / 0xC;
  v215 = v340;
  if ( v204 != (unsigned int *)v340 )
  {
    if ( (*((_DWORD *)v174 + 420) & 0x200000) == 0 )
    {
      v351 = 324608;
      KeBugCheckEx(__ROR4__(324608, 170), 0xAuLL, v343, 3uLL, 0LL);
    }
    if ( !*((_DWORD *)v174 + 386) )
    {
      *((_QWORD *)v174 + 195) = 0LL;
      *((_QWORD *)v174 + 196) = 271LL;
      *((_QWORD *)v174 + 194) = v174 - 0x5C5FC0A76E374B18LL;
      *((_QWORD *)v174 + 197) = v343;
      *((_DWORD *)v174 + 386) = 1;
    }
    goto LABEL_218;
  }
  v216 = *((unsigned int *)v174 + 341);
  v217 = ((v325 / 0xC + 6) & 0xFFFFFFF8) + 24 * v205 + v216 + 48;
  if ( v217 <= *((_DWORD *)v174 + 453) )
  {
    v218 = (__int64)v174;
    *((_DWORD *)v174 + 341) = v217;
  }
  else
  {
    v218 = sub_140236718(v174, v217, *((unsigned int *)v174 + 397));
    if ( !v218 )
      goto LABEL_116;
    v219 = *((_DWORD *)v174 + 420);
    if ( (v219 & 4) == 0 )
    {
      v220 = *((unsigned int *)v174 + 341);
      v221 = *((_QWORD *)v174 + 167);
      v222 = (v219 & 0x20000000) != 0 ? *((_DWORD *)v174 + 397) : 0;
      if ( (unsigned int)v220 >= 8 )
      {
        v223 = (unsigned __int64)(unsigned int)v220 >> 3;
        do
        {
          *(_QWORD *)v174 = 0LL;
          v220 = (unsigned int)(v220 - 8);
          v174 += 8;
          --v223;
        }
        while ( v223 );
      }
      if ( (_DWORD)v220 )
      {
        do
        {
          *v174++ = 0;
          v169 = (_DWORD)v220 == 1;
          v220 = (unsigned int)(v220 - 1);
        }
        while ( !v169 );
      }
      v224 = *(_DWORD *)(v218 + 1588);
      *(_DWORD *)(v218 + 1588) = v222;
      if ( v222 == 3 )
      {
        (*(void (__fastcall **)(__int64, __int64))(v218 + 800))(v221, v220);
      }
      else
      {
        v225 = 0;
        if ( (*(_DWORD *)(v218 + 1680) & 0x10000000) == 0 )
          v225 = v222;
        if ( v225 )
          (*(void (__fastcall **)(__int64, _QWORD))(v218 + 504))(v221 - 8, *(_QWORD *)(v221 - 8));
        else
          (*(void (__fastcall **)(__int64, __int64))(v218 + 248))(v221, v220);
      }
      *(_DWORD *)(v218 + 1588) = v224;
    }
    *(_DWORD *)(v218 + 1680) &= ~4u;
    v205 = v323;
    v214 = v325 / 0xC;
    v215 = v340;
  }
  v226 = v218 + v216;
  ++*(_DWORD *)(v218 + 1404);
  v227 = (_QWORD *)(v218 + v216);
  v374 = v218 + v216;
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
  *(_QWORD *)(v226 + 8) = v341;
  *(_DWORD *)v226 = 30;
  *(_DWORD *)(v226 + 16) = 0;
  v230 = *(_QWORD *)(v218 + 1416);
  for ( ii = v230; ; LODWORD(v230) = ii ^ v230 )
  {
    ii >>= 31;
    if ( !ii )
      break;
  }
  v232 = v343;
  v174 = (_BYTE *)v218;
  *(_DWORD *)(v226 + 20) = v230 & 0x7FFFFFFF;
  *(_QWORD *)(v226 + 24) = v232;
  v233 = v338;
  v338 = v226 + 48;
  *(_DWORD *)(v226 + 32) = *(_DWORD *)(v233 + 80);
  *(_DWORD *)(v226 + 36) = v325;
  *(_WORD *)(v226 + 40) = v386;
  v234 = v226 + 48 + ((v214 - 1 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_WORD *)(v226 + 42) ^= (*(_WORD *)(v226 + 42) ^ (v327 != 0)) & 1;
  v235 = *(unsigned __int16 *)(v226 + 40);
  CurrentIrql = v234;
  v236 = v234 + 24 * v235;
  v356 = (_DWORD *)v236;
  if ( v214 )
    v334 = v341 + 3;
  else
    v334 = (unsigned int *)v215;
  v237 = v205;
  v238 = (_DWORD *)(v234 + 8);
  do
  {
    v239 = 2LL;
    do
    {
      *((_QWORD *)v238 - 1) = 0LL;
      *v238 = 0x80000000;
      v238 += 3;
      --v239;
    }
    while ( v239 );
    --v237;
  }
  while ( v237 );
  if ( v234 != v236 )
  {
    v240 = (char *)v342;
    v241 = (_DWORD *)v234;
    do
    {
      v242 = 0;
      if ( (*((_DWORD *)v240 + 9) & 0x2000000) != 0
        || (v243 = *(_DWORD *)v240, *(_DWORD *)v240 == 1414090313) && *((_DWORD *)v240 + 1) == 1195525195
        || v243 == 1162297680 && ((v244 = *((_WORD *)v240 + 2), v244 == 30583) || v244 == 29303 || v244 == 30839)
        || v243 == 1095914053 && *((_WORD *)v240 + 2) == 16724 )
      {
LABEL_406:
        v242 = 1;
      }
      else
      {
        v245 = *(char **)(v218 + 1600);
        v246 = 7;
        v368 = *(char **)(v218 + 1608);
        v247 = v240 - v245;
        v369 = *(char **)(v218 + 1616);
        v370 = *(char **)(v218 + 1624);
        while ( 1 )
        {
          v248 = v245[v247];
          v249 = *v245++;
          if ( v248 != v249 )
            break;
          if ( !--v246 )
            goto LABEL_406;
        }
        v250 = v368;
        v251 = 8;
        v252 = v240;
        while ( 1 )
        {
          v253 = *(_QWORD *)v252;
          v252 += 8;
          v254 = *(_QWORD *)v250;
          v250 += 8;
          if ( v253 != v254 )
            break;
          v251 -= 8;
          if ( v251 < 8 )
          {
            if ( !v251 )
              goto LABEL_406;
            while ( 1 )
            {
              v255 = *v252++;
              v256 = *v250++;
              if ( v255 != v256 )
                goto LABEL_399;
              if ( !--v251 )
                goto LABEL_406;
            }
          }
        }
LABEL_399:
        v257 = v369;
        v258 = 4;
        while ( 1 )
        {
          v259 = v257[v240 - v369];
          v260 = *v257++;
          if ( v259 != v260 )
            break;
          if ( !--v258 )
            goto LABEL_406;
        }
        v261 = v370;
        v262 = 6;
        while ( 1 )
        {
          v263 = v261[v240 - v370];
          v264 = *v261++;
          if ( v263 != v264 )
            break;
          if ( !--v262 )
            goto LABEL_406;
        }
      }
      if ( *((int *)v240 + 9) < 0 )
        v242 = 1;
      v387 = v242;
      if ( v242 && *(_DWORD *)v240 == 1414090313 && *((_DWORD *)v240 + 1) == 1195525195 )
      {
        if ( (*(_DWORD *)(v218 + 1680) & 0x10000000) != 0 )
          v242 = 0;
        v387 = v242;
      }
      v265 = *((_DWORD *)v240 + 2);
      v266 = *((unsigned int *)v240 + 3);
      if ( *((_DWORD *)v240 + 4) > v265 )
        v265 = *((_DWORD *)v240 + 4);
      v267 = (unsigned int *)v340;
      v268 = v341;
      LODWORD(v337) = v266;
      v269 = v265 + v266;
      v326 = v265 + v266;
      if ( v341 == (unsigned int *)v340 )
      {
        v271 = 0;
        v270 = 0;
      }
      else
      {
        v270 = *v341;
        v271 = v341[1];
      }
      v336 = v271;
      v328 = v270;
      v324 = v266;
      if ( v341 != (unsigned int *)v340 && v270 > (unsigned int)v266 && v271 <= v269 && !v242 )
      {
        *v241 = v266;
        v272 = (const char *)(v343 + v266);
        v273 = v355;
        v241[1] = v270;
        v274 = v270 - v266;
        v324 = v270;
        v275 = &v360;
        v276 = &v272[v270 - (unsigned int)v266];
        v277 = 0;
        while ( (unsigned __int64)v272 >= *v275 + *v273 || (unsigned __int64)v276 <= *v275 )
        {
          ++v275;
          ++v277;
          ++v273;
          if ( v277 >= 4 )
          {
            *(_DWORD *)(v218 + 1432) += v274;
            v278 = v272;
            v279 = *(_DWORD *)(v218 + 1412);
            for ( jj = *(_QWORD *)(v218 + 1416); v278 < v276; v278 += 64 )
              _mm_prefetch(v278, 0);
            if ( v274 >= 8 )
            {
              v281 = (unsigned __int64)v274 >> 3;
              do
              {
                v274 -= 8;
                jj = __ROL8__(*(_QWORD *)v272 ^ jj, v279);
                v272 += 8;
                --v281;
              }
              while ( v281 );
            }
            for ( ; v274; --v274 )
            {
              v282 = *(unsigned __int8 *)v272++;
              jj = __ROL8__(v282 ^ jj, v279);
            }
            for ( kk = jj; ; LODWORD(jj) = kk ^ jj )
            {
              kk >>= 31;
              if ( !kk )
                break;
            }
            v241[2] = jj & 0x7FFFFFFF;
            break;
          }
        }
        v268 = v341;
        v267 = (unsigned int *)v340;
        LODWORD(v266) = v337;
        v269 = v326;
        v242 = v387;
      }
      if ( v328 >= (unsigned int)v266 && v336 <= v269 && v268 != v267 )
      {
        v284 = v334[1];
        v329 = v284;
        if ( v284 <= v269 )
        {
          v285 = v334;
          v286 = (_BYTE *)v338;
          do
          {
            if ( v285 == v267 )
              break;
            if ( v242 )
            {
              *v286 = 0x80;
            }
            else
            {
              v287 = v355;
              v288 = (const char *)(v343 + v268[1]);
              v289 = *v285 - v268[1];
              v324 = *v285;
              v290 = &v360;
              v291 = &v288[v289];
              for ( mm = 0; mm < 4; ++mm )
              {
                if ( (unsigned __int64)v288 < *v290 + *v287 && (unsigned __int64)v291 > *v290 )
                  goto LABEL_461;
                ++v290;
                ++v287;
              }
              if ( v289 < 4 )
              {
LABEL_461:
                *(_BYTE *)v338 = 0x80;
                goto LABEL_462;
              }
              *(_DWORD *)(v218 + 1432) += v289;
              v293 = v288;
              v294 = *(_DWORD *)(v218 + 1412);
              for ( nn = *(_QWORD *)(v218 + 1416); v293 < v291; v293 += 64 )
                _mm_prefetch(v293, 0);
              if ( v289 >= 8 )
              {
                v296 = (unsigned __int64)v289 >> 3;
                do
                {
                  v289 -= 8;
                  nn = __ROL8__(*(_QWORD *)v288 ^ nn, v294);
                  v288 += 8;
                  --v296;
                }
                while ( v296 );
              }
              for ( ; v289; --v289 )
              {
                v297 = *(unsigned __int8 *)v288++;
                nn = __ROL8__(v297 ^ nn, v294);
              }
              for ( i1 = nn; ; LOBYTE(nn) = i1 ^ nn )
              {
                i1 >>= 7;
                if ( !i1 )
                  break;
              }
              *(_BYTE *)v338 = nn & 0x7F;
LABEL_462:
              v284 = v329;
              v242 = v387;
              v269 = v326;
              v286 = (_BYTE *)v338;
              v267 = (unsigned int *)v340;
              v268 = v341;
            }
            v268 += 3;
            ++v286;
            v285 += 3;
            v341 = v268;
            v338 = (__int64)v286;
            if ( v285 != v267 )
            {
              v284 = v285[1];
              v329 = v284;
            }
          }
          while ( v284 <= v269 );
          v334 = v285;
          v241 = (_DWORD *)CurrentIrql;
        }
      }
      if ( !v242 && v324 != v269 )
      {
        v241[4] = v269;
        v299 = v355;
        v300 = v269 - v324;
        v241[3] = v324;
        v301 = (const char *)(v343 + v324);
        v302 = 0;
        v303 = &v301[v300];
        v304 = &v360;
        while ( (unsigned __int64)v301 >= *v304 + *v299 || (unsigned __int64)v303 <= *v304 )
        {
          ++v304;
          ++v302;
          ++v299;
          if ( v302 >= 4 )
          {
            *(_DWORD *)(v218 + 1432) += v300;
            v305 = v301;
            v306 = *(_DWORD *)(v218 + 1412);
            for ( i2 = *(_QWORD *)(v218 + 1416); v305 < v303; v305 += 64 )
              _mm_prefetch(v305, 0);
            if ( v300 >= 8 )
            {
              v308 = (unsigned __int64)v300 >> 3;
              do
              {
                v300 -= 8;
                i2 = __ROL8__(*(_QWORD *)v301 ^ i2, v306);
                v301 += 8;
                --v308;
              }
              while ( v308 );
            }
            for ( ; v300; --v300 )
            {
              v309 = *(unsigned __int8 *)v301++;
              i2 = __ROL8__(v309 ^ i2, v306);
            }
            for ( i3 = i2; ; LODWORD(i2) = i3 ^ i2 )
            {
              i3 >>= 31;
              if ( !i3 )
                break;
            }
            v241[5] = i2 & 0x7FFFFFFF;
            break;
          }
        }
      }
      v311 = v341;
      if ( v341 != (unsigned int *)v340 && *v341 >= (unsigned int)v337 && v341[1] <= v326 )
      {
        if ( v334 != (unsigned int *)v340 )
        {
          v312 = v338;
          *(_BYTE *)v338 = 0x80;
          v338 = v312 + 1;
          v334 += 3;
        }
        v341 = v311 + 3;
      }
      v241 += 6;
      v240 = (char *)(v342 + 5);
      CurrentIrql = (unsigned __int64)v241;
      v342 += 5;
    }
    while ( v241 != v356 );
    v174 = (_BYTE *)v218;
  }
LABEL_495:
  v344 = (ULONG_PTR *)v174;
  v46 = 0;
LABEL_219:
  v48 = a3;
LABEL_220:
  *a1 = v344;
  if ( (int)(v46 + 0x80000000) >= 0 && v46 != -1073741554 )
    return v46;
  if ( (v48 & 0x80000004) != 0x80000004 )
  {
    v378 = v48 | 0x80000000;
    v313 = ((__int64 (__fastcall *)(__int64))v344[57])(v350);
    v314 = *(unsigned int *)(v313 + 148);
    if ( (unsigned int)v314 >= 0x14 )
    {
      v315 = *(unsigned int *)(v313 + 144);
      v316 = v315 + v314;
      v317 = v350;
      v318 = v350 + v316;
      for ( i4 = v315 + v350; i4 != v318; i4 += 20LL )
      {
        if ( !*(_DWORD *)(i4 + 12) )
          break;
        v320 = *(unsigned int *)(i4 + 16);
        if ( !(_DWORD)v320 )
          break;
        v321 = *(_QWORD *)(v320 + v317);
        if ( v321 )
        {
          result = sub_1402347EC(&v344, v321, v378);
          *a1 = v344;
          if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741554 )
            return result;
          v317 = v350;
        }
      }
    }
  }
  return 0LL;
}
