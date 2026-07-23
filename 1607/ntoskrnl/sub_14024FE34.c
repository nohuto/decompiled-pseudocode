/*
 * XREFs of sub_14024FE34 @ 0x14024FE34
 * Callers:
 *     FsRtlMdlReadCompleteDevEx @ 0x140242000 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_14024FE34 @ 0x14024FE34 (sub_14024FE34.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 * Callees:
 *     sub_1401588B8 @ 0x1401588B8 (sub_1401588B8.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     sub_14024FE34 @ 0x14024FE34 (sub_14024FE34.c)
 *     sub_140251E08 @ 0x140251E08 (sub_140251E08.c)
 *     $$f4 @ 0x140253298 ($$f4.c)
 *     sub_140777D18 @ 0x140777D18 (sub_140777D18.c)
 */

__int64 __fastcall sub_14024FE34(_QWORD *a1, __int64 a2, unsigned int a3)
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
  __int64 v26; // rax
  unsigned int v27; // r10d
  int v28; // ecx
  int *v29; // rax
  unsigned int v30; // esi
  _BYTE *v31; // rax
  int v32; // ecx
  unsigned int v33; // edx
  int v34; // ebx
  unsigned int v35; // r9d
  _BYTE *v36; // r11
  unsigned int **v37; // r8
  __int64 v38; // rbx
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  __int64 v44; // rax
  int v45; // eax
  int v46; // eax
  unsigned int v47; // ecx
  int v48; // eax
  unsigned int v49; // edx
  int v50; // esi
  unsigned __int64 v51; // rbx
  __int64 v52; // r8
  int v53; // eax
  __int64 v54; // rsi
  int v55; // edx
  unsigned int v56; // eax
  int v57; // edx
  _BYTE *v58; // rbx
  int v59; // edx
  unsigned int v60; // eax
  __int64 v61; // r9
  int v62; // r8d
  unsigned __int64 v63; // rcx
  int v64; // edi
  int v65; // ecx
  int v66; // ecx
  _BYTE *v67; // rsi
  _QWORD *v68; // rax
  __int64 v69; // r8
  unsigned __int64 v70; // r10
  unsigned int v71; // edi
  _QWORD *v72; // r8
  const char *v73; // rax
  int v74; // r11d
  unsigned __int64 v75; // rdx
  unsigned __int64 v76; // rcx
  unsigned int v77; // r9d
  unsigned __int64 v78; // r10
  __int64 v79; // rax
  unsigned __int64 k; // rax
  __int64 v81; // rcx
  unsigned __int64 v82; // rdi
  unsigned __int64 v83; // rcx
  _QWORD *v84; // rdi
  int v85; // ecx
  _QWORD *v86; // rax
  __int64 v87; // rdx
  unsigned int v88; // r8d
  _QWORD *v89; // rax
  unsigned int v90; // edx
  unsigned __int64 v91; // rcx
  __int64 v92; // rax
  unsigned int *v93; // rdi
  __int64 v94; // r8
  char *v95; // r10
  int v96; // esi
  int v97; // ecx
  __int16 v98; // ax
  char *v99; // r8
  int v100; // r11d
  signed __int64 v101; // r9
  __int64 v102; // rdx
  __int64 v103; // rax
  __int64 v104; // xmm1_8
  __int64 *v105; // r9
  unsigned int v106; // r8d
  __int64 *v107; // r11
  __int64 v108; // rcx
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rax
  char *v112; // r8
  int v113; // r11d
  __int64 v114; // rdx
  __int64 v115; // rax
  char *v116; // r8
  int v117; // r11d
  __int64 v118; // rdx
  __int64 v119; // rax
  unsigned int v120; // ecx
  ULONG_PTR v121; // r11
  unsigned int v122; // edx
  unsigned int v123; // eax
  unsigned int v124; // ecx
  unsigned int v125; // ecx
  __int64 v126; // rax
  unsigned int v127; // r8d
  const char *v128; // r9
  _DWORD *v129; // rax
  const char *v130; // rax
  int v131; // edi
  unsigned __int64 v132; // rdx
  const char *v133; // rcx
  unsigned __int64 v134; // r11
  __int64 v135; // rax
  unsigned __int64 m; // rax
  __int64 v137; // rdx
  __int64 v138; // rdx
  __int64 v139; // rax
  __int64 v140; // rdx
  __int64 v141; // rsi
  __int64 v142; // r8
  int v143; // r9d
  unsigned int v144; // eax
  _BYTE *v145; // rdi
  int v146; // edx
  unsigned int v147; // eax
  __int64 v148; // r9
  int v149; // r8d
  unsigned __int64 v150; // rcx
  int v151; // ebx
  int v152; // ecx
  ULONG_PTR *v153; // r11
  _BYTE *v154; // rsi
  unsigned int *v155; // rax
  unsigned int v156; // r10d
  int v157; // ecx
  const char *v158; // rbx
  _QWORD *v159; // rax
  __int64 v160; // rdx
  const char *v161; // rax
  int v162; // r9d
  unsigned __int64 v163; // rdx
  const char *v164; // rcx
  unsigned int v165; // r8d
  unsigned __int64 v166; // rax
  __int64 v167; // rax
  unsigned __int64 v168; // rax
  __int64 v169; // r8
  bool v170; // zf
  __int64 v171; // r9
  _BYTE *v172; // rsi
  ULONG_PTR v173; // rdx
  __int64 v174; // rsi
  unsigned int v175; // eax
  _BYTE *v176; // rbx
  int v177; // edx
  unsigned int v178; // eax
  __int64 v179; // r9
  int v180; // r8d
  unsigned __int64 v181; // rcx
  int v182; // edi
  int v183; // ecx
  int v184; // ecx
  _QWORD *v185; // rax
  __int64 v186; // r8
  unsigned __int64 v187; // r11
  unsigned int v188; // edi
  const char *v189; // rax
  int v190; // r10d
  unsigned __int64 v191; // rcx
  unsigned __int64 v192; // rax
  __int64 v193; // rax
  ULONG_PTR n; // rax
  __int64 v195; // rsi
  ULONG_PTR v196; // rdi
  int v197; // eax
  __int64 v198; // rax
  int v199; // ecx
  _QWORD *v200; // rax
  __int64 *v201; // rax
  __int64 v202; // rax
  ULONG_PTR v203; // rdi
  unsigned int v204; // esi
  unsigned __int16 v205; // dx
  unsigned int *v206; // rdi
  unsigned int v207; // r9d
  __int64 v208; // r11
  unsigned int *v209; // rcx
  unsigned int v210; // r8d
  unsigned int v211; // eax
  unsigned int v212; // ecx
  unsigned int v213; // edx
  unsigned int v214; // eax
  unsigned int v215; // r10d
  __int64 v216; // r11
  __int64 v217; // rsi
  unsigned int v218; // eax
  __int64 v219; // rdi
  int v220; // edx
  unsigned int v221; // eax
  __int64 v222; // r9
  int v223; // r8d
  unsigned __int64 v224; // rcx
  int v225; // ebx
  int v226; // ecx
  __int64 v227; // rcx
  _QWORD *v228; // rax
  __int64 v229; // rdx
  int v230; // r8d
  unsigned __int64 v231; // rdx
  unsigned __int64 ii; // rax
  ULONG_PTR v233; // rax
  unsigned __int64 v234; // rax
  _DWORD *v235; // r8
  _DWORD *v236; // rsi
  int i2; // r10d
  __int64 v238; // rdx
  _DWORD *v239; // rax
  __int64 v240; // rcx
  char *v241; // rsi
  int v242; // ecx
  __int16 v243; // ax
  char *v244; // rdx
  int v245; // r9d
  __int64 v246; // r8
  char v247; // cl
  char v248; // al
  char *v249; // r8
  unsigned int v250; // edx
  char *v251; // r9
  __int64 v252; // rcx
  __int64 v253; // rax
  char v254; // cl
  char v255; // al
  char *v256; // rdx
  int v257; // r9d
  char v258; // cl
  char v259; // al
  char *v260; // rdx
  int v261; // r9d
  char v262; // cl
  char v263; // al
  __int64 v264; // rsi
  unsigned int v265; // ecx
  unsigned int v266; // r9d
  unsigned int v267; // eax
  unsigned int v268; // ecx
  unsigned int *v269; // rdx
  ULONG_PTR *v270; // rdx
  _QWORD *v271; // r8
  unsigned int v272; // r9d
  unsigned int v273; // r10d
  ULONG_PTR v274; // rsi
  unsigned int *v275; // rcx
  const char *v276; // rax
  int v277; // ecx
  unsigned __int64 v278; // rdx
  unsigned __int64 v279; // r10
  __int64 v280; // rax
  unsigned __int64 jj; // rax
  unsigned int *v282; // r8
  unsigned int *v283; // rdx
  unsigned int v284; // eax
  _BYTE *v285; // rcx
  unsigned int v286; // edx
  __int64 v287; // rcx
  ULONG_PTR v288; // r9
  unsigned int v289; // r8d
  const char *v290; // r9
  ULONG_PTR *v291; // rdx
  unsigned int v292; // r8d
  unsigned int *v293; // rcx
  const char *v294; // rsi
  unsigned int kk; // r11d
  const char *v296; // rax
  int v297; // ecx
  unsigned __int64 mm; // rdx
  unsigned __int64 v299; // rax
  __int64 v300; // rax
  unsigned __int64 nn; // rax
  const char *v302; // r8
  unsigned int v303; // r10d
  ULONG_PTR *v304; // rdx
  unsigned int v305; // r9d
  const char *v306; // r11
  unsigned int *v307; // rcx
  const char *v308; // rax
  int v309; // ecx
  unsigned __int64 i1; // rdx
  unsigned __int64 v311; // rax
  __int64 v312; // rax
  unsigned __int64 i3; // rax
  _DWORD *v314; // r8
  unsigned int *v315; // rdx
  unsigned __int64 v316; // rcx
  __int64 v317; // rax
  __int64 v318; // rcx
  __int64 v319; // rax
  __int64 v320; // rdi
  __int64 v321; // rcx
  __int64 v322; // rdi
  __int64 i4; // rbx
  __int64 v324; // rax
  __int64 v325; // rdx
  unsigned int v326; // [rsp+38h] [rbp-D0h]
  unsigned int v327; // [rsp+38h] [rbp-D0h]
  unsigned int v328; // [rsp+38h] [rbp-D0h]
  unsigned int v329; // [rsp+3Ch] [rbp-CCh]
  unsigned int v330; // [rsp+3Ch] [rbp-CCh]
  int v331; // [rsp+40h] [rbp-C8h]
  unsigned int v332; // [rsp+40h] [rbp-C8h]
  unsigned int v333; // [rsp+40h] [rbp-C8h]
  _BYTE *i; // [rsp+48h] [rbp-C0h]
  _BYTE *j; // [rsp+48h] [rbp-C0h]
  unsigned __int8 CurrentIrql; // [rsp+48h] [rbp-C0h]
  _DWORD *v337; // [rsp+48h] [rbp-C0h]
  _DWORD *v338; // [rsp+48h] [rbp-C0h]
  _DWORD *v339; // [rsp+48h] [rbp-C0h]
  __int64 v340; // [rsp+50h] [rbp-B8h]
  ULONG_PTR v341; // [rsp+50h] [rbp-B8h]
  ULONG_PTR *v342; // [rsp+50h] [rbp-B8h]
  __int64 v343; // [rsp+50h] [rbp-B8h]
  unsigned int *v344; // [rsp+50h] [rbp-B8h]
  unsigned int v345; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v346; // [rsp+5Ch] [rbp-ACh]
  __int64 v347; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v348; // [rsp+68h] [rbp-A0h]
  __int64 v349; // [rsp+70h] [rbp-98h]
  __int64 v350; // [rsp+78h] [rbp-90h]
  unsigned int *v351; // [rsp+80h] [rbp-88h]
  ULONG_PTR v352; // [rsp+88h] [rbp-80h]
  _BYTE *v353; // [rsp+90h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp-70h] BYREF
  __int64 v355; // [rsp+A0h] [rbp-68h]
  int v356; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v357; // [rsp+B0h] [rbp-58h]
  int v358; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v359; // [rsp+C0h] [rbp-48h] BYREF
  _DWORD v360[6]; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v361[4]; // [rsp+E0h] [rbp-28h] BYREF
  unsigned int **v362; // [rsp+F0h] [rbp-18h]
  _BYTE *v363; // [rsp+F8h] [rbp-10h]
  __int64 v364; // [rsp+100h] [rbp-8h]
  _DWORD *v365; // [rsp+108h] [rbp+0h]
  ULONG_PTR v366; // [rsp+110h] [rbp+8h] BYREF
  __int64 v367; // [rsp+118h] [rbp+10h]
  __int64 v368; // [rsp+120h] [rbp+18h]
  __int64 v369; // [rsp+128h] [rbp+20h]
  char *v370; // [rsp+130h] [rbp+28h]
  __int64 *v371; // [rsp+138h] [rbp+30h]
  char *v372; // [rsp+140h] [rbp+38h]
  char *v373; // [rsp+148h] [rbp+40h]
  char *v374; // [rsp+150h] [rbp+48h]
  char *v375; // [rsp+158h] [rbp+50h]
  char *v376; // [rsp+160h] [rbp+58h]
  char *v377; // [rsp+168h] [rbp+60h]
  _BYTE *v378; // [rsp+170h] [rbp+68h]
  _BYTE *v379; // [rsp+178h] [rbp+70h]
  _BYTE *v380; // [rsp+180h] [rbp+78h]
  __int64 v381; // [rsp+188h] [rbp+80h]
  __int64 v382; // [rsp+190h] [rbp+88h]
  unsigned int v386; // [rsp+1D8h] [rbp+D0h]
  unsigned int v387; // [rsp+1E0h] [rbp+D8h]
  int v388; // [rsp+1E0h] [rbp+D8h]
  int v389; // [rsp+1E0h] [rbp+D8h]
  int v390; // [rsp+1E0h] [rbp+D8h]
  unsigned int v391; // [rsp+1E0h] [rbp+D8h]
  unsigned int v392; // [rsp+1E0h] [rbp+D8h]
  __int64 v393; // [rsp+1E0h] [rbp+D8h]
  unsigned __int16 v394; // [rsp+1E0h] [rbp+D8h]
  int v395; // [rsp+1E0h] [rbp+D8h]

  v353 = (_BYTE *)*a1;
  v3 = (*((__int64 (__fastcall **)(__int64, __int64 *, _DWORD *))v353 + 61))(a2, &v359, v360);
  v4 = 0LL;
  v340 = v3;
  v5 = v3;
  if ( !v3 )
    return 3221225595LL;
  v7 = 4;
  v355 = 0LL;
  v8 = &v356;
  do
  {
    *(_BYTE *)v8 = 0;
    v8 = (int *)((char *)v8 + 1);
    --v7;
  }
  while ( v7 );
  v9 = v353;
  v10 = 0;
  v350 = (__int64)v353;
  v387 = *((_DWORD *)v353 + 369);
  if ( v387 )
  {
    v11 = (_BYTE *)*((_QWORD *)v353 + 239);
    v12 = v356;
    v13 = HIDWORD(v355);
    v14 = v355;
    for ( i = v11; ; v11 = i )
    {
      v15 = 0;
      v16 = v9;
      if ( v11 )
        v16 = v11;
      v4 = &v16[*((unsigned int *)v16 + 368)];
      if ( v14 && v13 <= v10 )
      {
        v15 = v13;
        v4 = &v16[v12];
      }
      if ( v15 != v10 )
        break;
LABEL_37:
      LODWORD(v355) = 1;
      v12 = (_DWORD)v4 - (_DWORD)v16;
      v14 = 1;
      v25 = *(_DWORD *)v4;
      v356 = (_DWORD)v4 - (_DWORD)v16;
      v13 = v15;
      HIDWORD(v355) = v15;
      if ( (v25 == 1 || v25 == 12) && *((_QWORD *)v4 + 1) == v5 && *((_DWORD *)v4 + 4) == v360[0] )
        goto LABEL_45;
      if ( (unsigned int)(v25 - 33) <= 1 && *((_QWORD *)v4 + 4) == v359 )
        goto LABEL_45;
      ++v10;
      v4 = 0LL;
      if ( v10 >= v387 )
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
        v9 = (_BYTE *)v350;
        v5 = v340;
        goto LABEL_37;
      }
    }
  }
LABEL_45:
  if ( v4 )
    return 3221225742LL;
  v26 = (*((__int64 (__fastcall **)(__int64, ULONG_PTR *, unsigned int *))v9 + 61))(a2, &BugCheckParameter2, &v345);
  v27 = 0;
  v351 = (unsigned int *)v26;
  if ( !v26 )
    goto LABEL_218;
  v28 = 4;
  v357 = 0LL;
  v29 = &v358;
  do
  {
    *(_BYTE *)v29 = 0;
    v29 = (int *)((char *)v29 + 1);
    --v28;
  }
  while ( v28 );
  v30 = *((_DWORD *)v9 + 369);
  v388 = 0;
  LODWORD(v347) = v30;
  if ( v30 )
  {
    v31 = (_BYTE *)*((_QWORD *)v9 + 239);
    v32 = v358;
    v33 = HIDWORD(v357);
    v34 = v357;
    for ( j = v31; ; v31 = j )
    {
      v35 = 0;
      v36 = v9;
      if ( v31 )
        v36 = v31;
      v37 = (unsigned int **)&v36[*((unsigned int *)v36 + 368)];
      if ( v34 && v33 <= v27 )
      {
        v35 = v33;
        v37 = (unsigned int **)&v36[v32];
      }
      if ( v35 != v27 )
        break;
LABEL_82:
      LODWORD(v357) = 1;
      v32 = (_DWORD)v37 - (_DWORD)v36;
      v34 = 1;
      v46 = *(_DWORD *)v37;
      v358 = (_DWORD)v37 - (_DWORD)v36;
      v33 = v35;
      HIDWORD(v357) = v35;
      if ( (v46 == 1 || v46 == 12) && v37[1] == v351 && *((_DWORD *)v37 + 4) == v345
        || (unsigned int)(v46 - 33) <= 1 && v37[4] == (unsigned int *)BugCheckParameter2 )
      {
        goto LABEL_91;
      }
      v388 = ++v27;
      if ( v27 >= v30 )
        goto LABEL_90;
    }
    v38 = v27 - v35;
    v35 = v27;
    while ( 1 )
    {
      v39 = *(_DWORD *)v37;
      if ( *(int *)v37 > 17 )
      {
        switch ( v39 )
        {
          case 19:
LABEL_79:
            v44 = 56LL;
            goto LABEL_80;
          case 28:
            v45 = *((unsigned __int16 *)v37 + 20);
            goto LABEL_69;
          case 30:
            v44 = (((*((_DWORD *)v37 + 9) - 1) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*((unsigned __int16 *)v37 + 20) + 2);
            goto LABEL_80;
        }
        if ( (unsigned int)(v39 - 33) <= 1 )
        {
          v44 = 20
              * (unsigned int)((((_DWORD)v37[4] & 0xFFF) + (unsigned __int64)*((unsigned int *)v37 + 10) + 4095) >> 12)
              + 48;
          goto LABEL_80;
        }
      }
      else
      {
        if ( v39 == 17 )
          goto LABEL_79;
        v40 = v39 - 1;
        if ( !v40 )
        {
LABEL_71:
          v44 = 4 * (*((_DWORD *)v37 + 4) / 0xCu) + 48;
          goto LABEL_80;
        }
        v41 = v40 - 6;
        if ( !v41 )
        {
          v44 = (unsigned int)(24 * (*((_DWORD *)v37 + 6) + 2));
          goto LABEL_80;
        }
        v42 = v41 - 1;
        if ( !v42 )
        {
          v45 = *((unsigned __int16 *)v37 + 16);
LABEL_69:
          v44 = (v45 + 55) & 0xFFFFFFF8;
          goto LABEL_80;
        }
        v43 = v42 - 2;
        if ( !v43 )
        {
          v44 = (unsigned int)(16 * (*((_DWORD *)v37 + 7) + 3));
          goto LABEL_80;
        }
        if ( v43 == 2 )
          goto LABEL_71;
      }
      v44 = 48LL;
LABEL_80:
      v37 = (unsigned int **)((char *)v37 + v44);
      if ( !--v38 )
      {
        v9 = (_BYTE *)v350;
        v27 = v388;
        v30 = v347;
        goto LABEL_82;
      }
    }
  }
LABEL_90:
  v37 = 0LL;
LABEL_91:
  v362 = v37;
  if ( v37 )
  {
    v47 = -1073741554;
    goto LABEL_219;
  }
  v48 = (*((__int64 (__fastcall **)(__int64))v9 + 81))(a2);
  v49 = a3;
  v50 = v48;
  v51 = v345;
  v331 = v48;
  v329 = v345;
  if ( (a3 & 2) != 0 && !v48 )
  {
    v47 = 0;
    goto LABEL_220;
  }
  if ( (*((_DWORD *)v9 + 438) & 0x40000000) != 0 )
  {
    v47 = sub_140777D18(&v353, BugCheckParameter2, a3);
    goto LABEL_219;
  }
  v341 = BugCheckParameter2;
  v349 = (*((__int64 (__fastcall **)(ULONG_PTR))v9 + 60))(BugCheckParameter2);
  if ( !v349 )
  {
LABEL_218:
    v47 = -1073741701;
    goto LABEL_219;
  }
  v52 = *((unsigned int *)v9 + 415);
  v348 = v51 / 0xC;
  v53 = v50;
  v54 = *((unsigned int *)v9 + 359);
  v55 = -(v53 != 0);
  v56 = v54 + 4 * (v51 / 0xC) + 48;
  v57 = (v55 & 0xB) + 1;
  v389 = v57;
  if ( v56 <= *((_DWORD *)v9 + 471) )
  {
    v58 = v9;
    *((_DWORD *)v9 + 359) = v56;
    v350 = (__int64)v9;
  }
  else
  {
    v350 = sub_140251E08(v9, v56, v52);
    v58 = (_BYTE *)v350;
    if ( !v350 )
      goto LABEL_116;
    v59 = *((_DWORD *)v9 + 438);
    if ( (v59 & 4) == 0 )
    {
      v60 = *((_DWORD *)v9 + 359);
      v61 = *((_QWORD *)v9 + 176);
      v62 = (v59 & 0x20000000) != 0 ? *((_DWORD *)v9 + 415) : 0;
      if ( v60 >= 8 )
      {
        v63 = (unsigned __int64)v60 >> 3;
        do
        {
          *(_QWORD *)v9 = 0LL;
          v60 -= 8;
          v9 += 8;
          --v63;
        }
        while ( v63 );
      }
      for ( ; v60; --v60 )
        *v9++ = 0;
      v64 = *((_DWORD *)v58 + 415);
      *((_DWORD *)v58 + 415) = v62;
      if ( v62 == 3 )
      {
        (*((void (__fastcall **)(__int64, __int64))v58 + 105))(v61, 1LL);
      }
      else
      {
        v65 = 0;
        if ( (*((_DWORD *)v58 + 438) & 0x10000000) == 0 )
          v65 = v62;
        if ( v65 )
          (*((void (__fastcall **)(__int64, _QWORD))v58 + 66))(v61 - 8, *(_QWORD *)(v61 - 8));
        else
          (*((void (__fastcall **)(__int64, __int64))v58 + 29))(v61, 1LL);
      }
      *((_DWORD *)v58 + 415) = v64;
    }
    *((_DWORD *)v58 + 438) &= ~4u;
    v57 = v389;
  }
  ++*((_DWORD *)v58 + 369);
  v66 = 48;
  v67 = &v58[v54];
  v378 = v67;
  v68 = v67;
  v69 = 6LL;
  do
  {
    *v68 = 0LL;
    v66 -= 8;
    ++v68;
    --v69;
  }
  while ( v69 );
  for ( ; v66; --v66 )
  {
    *(_BYTE *)v68 = 0;
    v68 = (_QWORD *)((char *)v68 + 1);
  }
  v70 = (unsigned __int64)v351;
  v71 = v329;
  *((_QWORD *)v67 + 1) = v351;
  *(_DWORD *)v67 = v57;
  if ( v57 == 32 && v329 )
  {
    sub_1401588B8((__int64)v58, v70, v329, (__int64)(v67 + 24));
    v70 = (unsigned __int64)v351;
  }
  *((_DWORD *)v67 + 4) = v329;
  v72 = (_QWORD *)v70;
  *((_DWORD *)v58 + 376) += v329;
  v73 = (const char *)v70;
  v74 = *((_DWORD *)v58 + 371);
  v75 = *((_QWORD *)v58 + 186);
  v76 = v70 + v329;
  if ( v70 < v76 )
  {
    do
    {
      _mm_prefetch(v73, 0);
      v73 += 64;
    }
    while ( (unsigned __int64)v73 < v76 );
  }
  v77 = v329;
  if ( v329 >= 8 )
  {
    v78 = (unsigned __int64)v329 >> 3;
    do
    {
      v75 = __ROL8__(*v72++ ^ v75, v74);
      v77 -= 8;
      --v78;
    }
    while ( v78 );
    v71 = v329;
  }
  if ( v77 )
  {
    do
    {
      v79 = *(unsigned __int8 *)v72;
      v72 = (_QWORD *)((char *)v72 + 1);
      v75 = __ROL8__(v79 ^ v75, v74);
      --v77;
    }
    while ( v77 );
    v58 = (_BYTE *)v350;
  }
  for ( k = v75; ; v75 = (unsigned int)k ^ (unsigned int)v75 )
  {
    k >>= 31;
    if ( !k )
      break;
  }
  LODWORD(v75) = v75 & 0x7FFFFFFF;
  v379 = v67;
  *((_DWORD *)v67 + 5) = v75;
  *((_DWORD *)v58 + 376) += v71;
  v81 = *((_QWORD *)v58 + 145);
  v82 = *((_QWORD *)v58 + 142) + 16LL;
  v390 = -1073741275;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  (*((void (__fastcall **)(__int64, unsigned __int64, _QWORD *))v58 + 39))(v81, v75, v72);
  v83 = v82 + 24LL * **((unsigned int **)v58 + 142);
  while ( *(_QWORD *)(v82 + 8) != v341 )
  {
    v82 += 24LL;
    if ( v82 >= v83 )
    {
      v84 = v67 + 24;
      goto LABEL_141;
    }
  }
  v390 = 0;
  *(_OWORD *)(v67 + 24) = *(_OWORD *)v82;
  v104 = *(_QWORD *)(v82 + 16);
  v84 = v67 + 24;
  *((_QWORD *)v67 + 5) = v104;
LABEL_141:
  (*((void (__fastcall **)(_QWORD))v58 + 47))(*((_QWORD *)v58 + 145));
  __writecr8(CurrentIrql);
  if ( v390 < 0 )
  {
    v85 = 24;
    v86 = v84;
    v87 = 3LL;
    do
    {
      *v86 = 0LL;
      v85 -= 8;
      ++v86;
      --v87;
    }
    while ( v87 );
    for ( ; v85; --v85 )
    {
      *(_BYTE *)v86 = 0;
      v86 = (_QWORD *)((char *)v86 + 1);
    }
    *v84 = 1LL;
  }
  v88 = v348;
  v89 = v67 + 48;
  v337 = v67 + 48;
  v90 = 4 * v348;
  if ( (unsigned int)(4 * v348) >= 8 )
  {
    v91 = (unsigned __int64)v90 >> 3;
    do
    {
      *v89 = -1LL;
      v90 -= 8;
      ++v89;
      --v91;
    }
    while ( v91 );
  }
  for ( ; v90; --v90 )
  {
    *(_BYTE *)v89 = -1;
    v89 = (_QWORD *)((char *)v89 + 1);
  }
  v92 = v88;
  v93 = v351;
  v326 = -1;
  v94 = *v351;
  v348 = (unsigned __int64)v351;
  v391 = 0;
  v352 = (ULONG_PTR)&v351[3 * v92];
  v95 = (char *)(*((__int64 (__fastcall **)(__int64, ULONG_PTR, __int64))v58 + 63))(v349, v341, v94);
  if ( !v95 )
    goto LABEL_218;
LABEL_153:
  v96 = 0;
  if ( (*((_DWORD *)v95 + 9) & 0x2000000) != 0
    || (v97 = *(_DWORD *)v95, *(_DWORD *)v95 == 1414090313) && *((_DWORD *)v95 + 1) == 1195525195
    || v97 == 1162297680 && ((v98 = *((_WORD *)v95 + 2), v98 == 30583) || v98 == 29303 || v98 == 30839)
    || v97 == 1095914053 && *((_WORD *)v95 + 2) == 16724 )
  {
    v96 = 1;
  }
  else
  {
    v99 = (char *)*((_QWORD *)v58 + 209);
    v100 = 7;
    v371 = (__int64 *)*((_QWORD *)v58 + 210);
    v101 = v95 - v99;
    v372 = (char *)*((_QWORD *)v58 + 211);
    v373 = (char *)*((_QWORD *)v58 + 212);
    v370 = v99;
    while ( 1 )
    {
      v102 = (unsigned __int8)v99[v101];
      v103 = (unsigned __int8)*v99++;
      if ( v102 != v103 )
        break;
      if ( !--v100 )
      {
LABEL_181:
        v96 = 1;
        goto LABEL_182;
      }
    }
    v105 = v371;
    v106 = 8;
    v107 = (__int64 *)v95;
    while ( 1 )
    {
      v108 = *v107++;
      v109 = *v105++;
      if ( v108 != v109 )
        break;
      v106 -= 8;
      if ( v106 < 8 )
      {
        if ( !v106 )
          goto LABEL_181;
        while ( 1 )
        {
          v110 = *(unsigned __int8 *)v107;
          v107 = (__int64 *)((char *)v107 + 1);
          v111 = *(unsigned __int8 *)v105;
          v105 = (__int64 *)((char *)v105 + 1);
          if ( v110 != v111 )
            goto LABEL_174;
          if ( !--v106 )
            goto LABEL_181;
        }
      }
    }
LABEL_174:
    v112 = v372;
    v113 = 4;
    while ( 1 )
    {
      v114 = (unsigned __int8)v112[v95 - v372];
      v115 = (unsigned __int8)*v112++;
      if ( v114 != v115 )
        break;
      if ( !--v113 )
        goto LABEL_181;
    }
    v116 = v373;
    v117 = 6;
    while ( 1 )
    {
      v118 = (unsigned __int8)v116[v95 - v373];
      v119 = (unsigned __int8)*v116++;
      if ( v118 != v119 )
        break;
      if ( !--v117 )
        goto LABEL_181;
    }
  }
LABEL_182:
  if ( *((int *)v95 + 9) < 0 )
    v96 = 1;
  if ( v96
    && *(_DWORD *)v95 == 1414090313
    && *((_DWORD *)v95 + 1) == 1195525195
    && (*((_DWORD *)v58 + 438) & 0x10000000) != 0 )
  {
    v96 = 0;
  }
  v120 = *((_DWORD *)v95 + 2);
  if ( *((_DWORD *)v95 + 4) > v120 )
    v120 = *((_DWORD *)v95 + 4);
  v121 = v341;
  v122 = v120 + *((_DWORD *)v95 + 3);
  LODWORD(v347) = v122;
  while ( 1 )
  {
    v123 = v93[2];
    if ( (v123 & 1) == 0 )
    {
      v124 = v326;
      if ( v123 < v326 )
        v124 = v93[2];
      v326 = v124;
      v125 = v391;
      if ( v123 > v391 )
        v125 = v93[2];
      v391 = v125;
    }
    v126 = *v93;
    v127 = v93[1] - v126;
    v128 = (const char *)(v121 + v126);
    if ( v96 )
    {
      v129 = v337;
      *v337 = 0x80000000;
    }
    else
    {
      *((_DWORD *)v58 + 376) += v127;
      v130 = (const char *)(v121 + v126);
      v131 = *((_DWORD *)v58 + 371);
      v132 = *((_QWORD *)v58 + 186);
      v133 = &v128[v127];
      if ( v128 < v133 )
      {
        do
        {
          _mm_prefetch(v130, 0);
          v130 += 64;
        }
        while ( v130 < v133 );
      }
      if ( v127 >= 8 )
      {
        v134 = (unsigned __int64)v127 >> 3;
        do
        {
          v132 = __ROL8__(*(_QWORD *)v128 ^ v132, v131);
          v128 += 8;
          v127 -= 8;
          --v134;
        }
        while ( v134 );
        v58 = (_BYTE *)v350;
        v121 = v341;
      }
      if ( v127 )
      {
        do
        {
          v135 = *(unsigned __int8 *)v128++;
          v132 = __ROL8__(v135 ^ v132, v131);
          --v127;
        }
        while ( v127 );
        v121 = v341;
      }
      for ( m = v132 >> 31; m; m >>= 31 )
        LODWORD(v132) = m ^ v132;
      v129 = v337;
      v93 = (unsigned int *)v348;
      *v337 = v132 & 0x7FFFFFFF;
      v122 = v347;
    }
    v93 += 3;
    v348 = (unsigned __int64)v93;
    if ( v93 == (unsigned int *)v352 )
      break;
    v337 = v129 + 1;
    if ( *v93 < *((_DWORD *)v95 + 3) || v121 + v93[1] > v122 )
    {
      v95 = (char *)(*((__int64 (__fastcall **)(__int64, ULONG_PTR, _QWORD, _QWORD))v58 + 63))(v349, v121, *v93, 0LL);
      if ( !v95 )
        goto LABEL_218;
      goto LABEL_153;
    }
  }
  v137 = v326;
  if ( v326 == -1 && !v391 )
    v137 = 0LL;
  v361[0] = v391 - v137;
  v353 = v58;
  v366 = BugCheckParameter2 + (unsigned int)v137;
  LOBYTE(v137) = 1;
  v367 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD, unsigned int *))v58 + 59))(
           BugCheckParameter2,
           v137,
           0LL,
           &v345);
  v138 = v367 != 0 ? v345 : 0;
  v345 = v138;
  v361[1] = v138;
  LOBYTE(v138) = 1;
  v139 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, __int64, unsigned int *))v58 + 59))(
           BugCheckParameter2,
           v138,
           12LL,
           &v345);
  v140 = v139;
  v350 = v139;
  v368 = v139;
  LOBYTE(v140) = 1;
  v345 &= -(v139 != 0);
  v392 = v345;
  v361[2] = v345;
  v369 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, __int64, unsigned int *))v58 + 59))(
           BugCheckParameter2,
           v140,
           10LL,
           &v345);
  v345 &= -(v369 != 0);
  v141 = *((unsigned int *)v58 + 359);
  v142 = *((unsigned int *)v58 + 415);
  v143 = v331 != 0 ? 0xB : 0;
  v361[3] = v345;
  v144 = v141 + 192;
  if ( (unsigned int)(v141 + 192) <= *((_DWORD *)v58 + 471) )
  {
    v145 = v58;
    *((_DWORD *)v58 + 359) = v144;
  }
  else
  {
    v145 = (_BYTE *)sub_140251E08(v58, v144, v142);
    if ( !v145 )
      goto LABEL_116;
    v146 = *((_DWORD *)v58 + 438);
    if ( (v146 & 4) == 0 )
    {
      v147 = *((_DWORD *)v58 + 359);
      v148 = *((_QWORD *)v58 + 176);
      v149 = (v146 & 0x20000000) != 0 ? *((_DWORD *)v58 + 415) : 0;
      if ( v147 >= 8 )
      {
        v150 = (unsigned __int64)v147 >> 3;
        do
        {
          *(_QWORD *)v58 = 0LL;
          v147 -= 8;
          v58 += 8;
          --v150;
        }
        while ( v150 );
      }
      for ( ; v147; --v147 )
        *v58++ = 0;
      v151 = *((_DWORD *)v145 + 415);
      *((_DWORD *)v145 + 415) = v149;
      if ( v149 == 3 )
      {
        (*((void (__fastcall **)(__int64, __int64))v145 + 105))(v148, 1LL);
      }
      else
      {
        v152 = 0;
        if ( (*((_DWORD *)v145 + 438) & 0x10000000) == 0 )
          v152 = v149;
        if ( v152 )
          (*((void (__fastcall **)(__int64, _QWORD))v145 + 66))(v148 - 8, *(_QWORD *)(v148 - 8));
        else
          (*((void (__fastcall **)(__int64, __int64))v145 + 29))(v148, 1LL);
      }
      *((_DWORD *)v145 + 415) = v151;
    }
    *((_DWORD *)v145 + 438) &= ~4u;
    v143 = v331 != 0 ? 0xB : 0;
  }
  *((_DWORD *)v145 + 369) += 4;
  v153 = &v366;
  v154 = &v145[v141];
  v349 = (__int64)v154;
  v363 = v154;
  v362 = (unsigned int **)v154;
  v155 = v361;
  v342 = &v366;
  v338 = v361;
  v348 = 4LL;
  do
  {
    v156 = *v155;
    v157 = 48;
    v158 = (const char *)*v153;
    v159 = v154;
    v346 = v156;
    v160 = 6LL;
    do
    {
      *v159 = 0LL;
      v157 -= 8;
      ++v159;
      --v160;
    }
    while ( v160 );
    for ( ; v157; --v157 )
    {
      *(_BYTE *)v159 = 0;
      v159 = (_QWORD *)((char *)v159 + 1);
    }
    *(_DWORD *)v154 = v143;
    *((_QWORD *)v154 + 1) = v158;
    *((_DWORD *)v154 + 4) = v156;
    v161 = v158;
    *((_DWORD *)v145 + 376) += v156;
    v162 = *((_DWORD *)v145 + 371);
    v163 = *((_QWORD *)v145 + 186);
    v164 = &v158[v156];
    if ( v158 < v164 )
    {
      do
      {
        _mm_prefetch(v161, 0);
        v161 += 64;
      }
      while ( v161 < v164 );
    }
    v165 = v156;
    if ( v156 >= 8 )
    {
      v166 = (unsigned __int64)v156 >> 3;
      do
      {
        v163 = __ROL8__(*(_QWORD *)v158 ^ v163, v162);
        v158 += 8;
        v165 -= 8;
        --v166;
      }
      while ( v166 );
      v153 = v342;
    }
    if ( v165 )
    {
      do
      {
        v167 = *(unsigned __int8 *)v158++;
        v163 = __ROL8__(v167 ^ v163, v162);
        --v165;
      }
      while ( v165 );
      v156 = v346;
    }
    v168 = v163 >> 31;
    v169 = 0LL;
    while ( v168 )
    {
      LODWORD(v163) = v168 ^ v163;
      v168 >>= 31;
    }
    v143 = v331 != 0 ? 0xB : 0;
    v155 = v338 + 1;
    *((_DWORD *)v154 + 5) = v163 & 0x7FFFFFFF;
    ++v153;
    *((_DWORD *)v145 + 376) += v156;
    v154 += 48;
    v170 = v348-- == 1;
    v363 = v154;
    ++v338;
    v342 = v153;
  }
  while ( !v170 );
  v171 = 1LL;
  v172 = (_BYTE *)(v349 + 96);
  v346 = a3 & 1;
  v353 = v145;
  v364 = v349 + 96;
  v173 = (unsigned int)(v331 != 0) + 13;
  LODWORD(v347) = (v331 != 0) + 13;
  if ( v349 == -96 )
  {
    v174 = *((unsigned int *)v145 + 359);
    v175 = v174 + 48;
    if ( (unsigned int)(v174 + 48) <= *((_DWORD *)v145 + 471) )
    {
      v176 = v145;
      *((_DWORD *)v145 + 359) = v175;
    }
    else
    {
      v176 = (_BYTE *)sub_140251E08(v145, v175, *((unsigned int *)v145 + 415));
      if ( !v176 )
        goto LABEL_116;
      v177 = *((_DWORD *)v145 + 438);
      if ( (v177 & 4) == 0 )
      {
        v178 = *((_DWORD *)v145 + 359);
        v179 = *((_QWORD *)v145 + 176);
        v180 = (v177 & 0x20000000) != 0 ? *((_DWORD *)v145 + 415) : 0;
        if ( v178 >= 8 )
        {
          v181 = (unsigned __int64)v178 >> 3;
          do
          {
            *(_QWORD *)v145 = 0LL;
            v178 -= 8;
            v145 += 8;
            --v181;
          }
          while ( v181 );
        }
        for ( ; v178; --v178 )
          *v145++ = 0;
        v182 = *((_DWORD *)v176 + 415);
        *((_DWORD *)v176 + 415) = v180;
        if ( v180 == 3 )
        {
          (*((void (__fastcall **)(__int64, __int64))v176 + 105))(v179, 1LL);
        }
        else
        {
          v183 = 0;
          if ( (*((_DWORD *)v176 + 438) & 0x10000000) == 0 )
            v183 = v180;
          if ( v183 )
            (*((void (__fastcall **)(__int64, _QWORD))v176 + 66))(v179 - 8, *(_QWORD *)(v179 - 8));
          else
            (*((void (__fastcall **)(__int64, __int64))v176 + 29))(v179, 1LL);
        }
        *((_DWORD *)v176 + 415) = v182;
      }
      *((_DWORD *)v176 + 438) &= ~4u;
      LODWORD(v173) = v347;
    }
    ++*((_DWORD *)v176 + 369);
    v184 = 48;
    v172 = &v176[v174];
    v380 = v172;
    v185 = v172;
    v186 = 6LL;
    do
    {
      *v185 = 0LL;
      v184 -= 8;
      ++v185;
      --v186;
    }
    while ( v186 );
    for ( ; v184; --v184 )
    {
      *(_BYTE *)v185 = 0;
      v185 = (_QWORD *)((char *)v185 + 1);
    }
    v187 = v350;
    v188 = v392;
    *((_QWORD *)v172 + 1) = v350;
    *(_DWORD *)v172 = v173;
    if ( (_DWORD)v173 == 32 && v392 )
    {
      sub_1401588B8((__int64)v176, v187, v392, (__int64)(v172 + 24));
      v187 = v350;
    }
    *((_DWORD *)v172 + 4) = v392;
    v171 = v187;
    *((_DWORD *)v176 + 376) += v392;
    v189 = (const char *)v187;
    v190 = *((_DWORD *)v176 + 371);
    v173 = *((_QWORD *)v176 + 186);
    v191 = v187 + v392;
    if ( v187 < v191 )
    {
      do
      {
        _mm_prefetch(v189, 0);
        v189 += 64;
      }
      while ( (unsigned __int64)v189 < v191 );
    }
    v169 = v392;
    if ( v392 >= 8 )
    {
      v192 = (unsigned __int64)v392 >> 3;
      do
      {
        v173 = __ROL8__(*(_QWORD *)v171 ^ v173, v190);
        v171 += 8LL;
        v169 = (unsigned int)(v169 - 8);
        --v192;
      }
      while ( v192 );
      v188 = v392;
    }
    if ( (_DWORD)v169 )
    {
      do
      {
        v193 = *(unsigned __int8 *)v171++;
        v173 = __ROL8__(v193 ^ v173, v190);
        v170 = (_DWORD)v169 == 1;
        v169 = (unsigned int)(v169 - 1);
      }
      while ( !v170 );
      v187 = v350;
    }
    for ( n = v173 >> 31; n; n >>= 31 )
      v173 = (unsigned int)n ^ (unsigned int)v173;
    LODWORD(v173) = v173 & 0x7FFFFFFF;
    v364 = (__int64)v172;
    *((_DWORD *)v172 + 5) = v173;
    *((_DWORD *)v176 + 376) += v188;
  }
  else
  {
    v187 = v350;
    v176 = v145;
    v188 = v392;
    *(_DWORD *)v172 = v173;
  }
  if ( (*((_DWORD *)v176 + 438) & 0x40000000) != 0 && v188 )
    sub_1401588B8((__int64)v176, v187, v188, (__int64)(v172 + 28));
  *((_DWORD *)v172 + 6) = 0;
  if ( v346 )
    *((_DWORD *)v172 + 6) = 1;
  v195 = v349;
  v196 = BugCheckParameter2;
  v353 = v176;
  v197 = (*(_DWORD *)(v349 + 184) ^ (v331 != 0)) & 1;
  *(_DWORD *)(v349 + 144) = 35;
  *(_DWORD *)(v195 + 184) ^= v197;
  if ( *(_DWORD *)(v195 + 160) < 0x94u )
    goto LABEL_315;
  v393 = *(_QWORD *)(v195 + 152);
  v198 = (*((__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, __int64, __int64))v176 + 60))(v196, v173, v169, v171);
  if ( !v198 )
  {
LABEL_116:
    v47 = -1073741670;
    goto LABEL_219;
  }
  v173 = v196 + *(unsigned int *)(v198 + 80);
  v169 = v393;
  v199 = *(_DWORD *)(v195 + 184) | 2;
  *(_DWORD *)(v195 + 184) = v199;
  v200 = *(_QWORD **)(v393 + 112);
  if ( (unsigned __int64)v200 >= v196 && (unsigned __int64)v200 < v173 )
  {
    *(_QWORD *)(v195 + 168) = *v200;
    *(_DWORD *)(v195 + 184) = v199 | 4;
  }
  v201 = *(__int64 **)(v393 + 120);
  if ( (unsigned __int64)v201 >= v196 && (unsigned __int64)v201 < v173 )
  {
    v202 = *v201;
    *(_DWORD *)(v195 + 184) |= 8u;
    *(_QWORD *)(v195 + 176) = v202;
  }
LABEL_315:
  v203 = BugCheckParameter2;
  v353 = v176;
  v170 = (*((_DWORD *)v176 + 438) & 0x400000) == 0;
  v352 = BugCheckParameter2;
  if ( v170 )
    goto LABEL_500;
  v204 = 0;
  v348 = (*((__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, __int64, __int64))v176 + 60))(
           BugCheckParameter2,
           v173,
           v169,
           v171);
  if ( !v348 )
    goto LABEL_218;
  v205 = *(_WORD *)(v348 + 6);
  v394 = v205;
  if ( !v205 )
  {
    if ( (*((_DWORD *)v176 + 438) & 0x200000) == 0 )
    {
      v360[1] = 649216;
      KeBugCheckEx(__ROR4__(649216, 11), 0xAuLL, v203, 0LL, 0LL);
    }
    if ( !*((_DWORD *)v176 + 404) )
    {
      *((_QWORD *)v176 + 206) = v203;
      *((_QWORD *)v176 + 203) = v176 - 0x5C5FC0A76E374B18LL;
LABEL_321:
      *((_QWORD *)v176 + 205) = 271LL;
      *((_DWORD *)v176 + 404) = 1;
      *((_QWORD *)v176 + 204) = 0LL;
    }
    goto LABEL_218;
  }
  v206 = v351;
  v207 = v205;
  v349 = (__int64)&v351[3 * (v329 / 0xC)];
  v327 = v205;
  v350 = *(unsigned __int16 *)(v348 + 20) + v348 + 24;
  v208 = v350;
  v209 = (unsigned int *)(v350 + 8);
  v343 = v350 + 8;
  do
  {
    v210 = v209[1];
    v211 = v209[2];
    v212 = *v209;
    v346 = v210;
    if ( v211 > v212 )
      v212 = v211;
    v213 = v210 + v212;
    LODWORD(v347) = v210 + v212;
    if ( v204 && v213 < *(_DWORD *)(v208 + 40LL * (v204 - 1) + 12) )
    {
      if ( (*((_DWORD *)v176 + 438) & 0x200000) == 0 )
      {
        v360[2] = 649216;
        KeBugCheckEx(__ROR4__(649216, 11), 0xAuLL, v352, 1uLL, 0LL);
      }
LABEL_337:
      if ( *((_DWORD *)v176 + 404) )
        goto LABEL_218;
      *((_QWORD *)v176 + 203) = v176 - 0x5C5FC0A76E374B18LL;
      *((_QWORD *)v176 + 206) = v352;
      goto LABEL_321;
    }
    if ( v206 != (unsigned int *)v349 )
    {
      while ( 1 )
      {
        v214 = v206[1];
        if ( *v206 >= v213 || v214 <= v210 )
        {
LABEL_333:
          v207 = v327;
          goto LABEL_334;
        }
        if ( *v206 < v210 || v214 > v213 )
          break;
        __f4(v176, v352, v208 + 40LL * v204, v206);
        v213 = v347;
        v206 += 3;
        v210 = v346;
        v208 = v350;
        if ( v206 == (unsigned int *)v349 )
          goto LABEL_333;
      }
      if ( (*((_DWORD *)v176 + 438) & 0x200000) == 0 )
      {
        v360[3] = 649216;
        KeBugCheckEx(__ROR4__(649216, 11), 0xAuLL, v352, 2uLL, 0LL);
      }
      goto LABEL_337;
    }
LABEL_334:
    v209 = (unsigned int *)(v343 + 40);
    ++v204;
    v343 += 40LL;
  }
  while ( v204 < v207 );
  v215 = v329 / 0xC;
  v216 = v349;
  if ( v206 != (unsigned int *)v349 )
  {
    if ( (*((_DWORD *)v176 + 438) & 0x200000) == 0 )
    {
      v360[5] = 649216;
      KeBugCheckEx(__ROR4__(649216, 11), 0xAuLL, v352, 3uLL, 0LL);
    }
    if ( !*((_DWORD *)v176 + 404) )
    {
      *((_QWORD *)v176 + 204) = 0LL;
      *((_QWORD *)v176 + 205) = 271LL;
      *((_QWORD *)v176 + 203) = v176 - 0x5C5FC0A76E374B18LL;
      *((_QWORD *)v176 + 206) = v352;
      *((_DWORD *)v176 + 404) = 1;
    }
    goto LABEL_218;
  }
  v217 = *((unsigned int *)v176 + 359);
  v218 = ((v329 / 0xC + 6) & 0xFFFFFFF8) + 24 * v207 + v217 + 48;
  if ( v218 <= *((_DWORD *)v176 + 471) )
  {
    v219 = (__int64)v176;
    *((_DWORD *)v176 + 359) = v218;
  }
  else
  {
    v219 = sub_140251E08(v176, v218, *((unsigned int *)v176 + 415));
    if ( !v219 )
      goto LABEL_116;
    v220 = *((_DWORD *)v176 + 438);
    if ( (v220 & 4) == 0 )
    {
      v221 = *((_DWORD *)v176 + 359);
      v222 = *((_QWORD *)v176 + 176);
      v223 = (v220 & 0x20000000) != 0 ? *((_DWORD *)v176 + 415) : 0;
      if ( v221 >= 8 )
      {
        v224 = (unsigned __int64)v221 >> 3;
        do
        {
          *(_QWORD *)v176 = 0LL;
          v221 -= 8;
          v176 += 8;
          --v224;
        }
        while ( v224 );
      }
      for ( ; v221; --v221 )
        *v176++ = 0;
      v225 = *(_DWORD *)(v219 + 1660);
      *(_DWORD *)(v219 + 1660) = v223;
      if ( v223 == 3 )
      {
        (*(void (__fastcall **)(__int64, __int64))(v219 + 840))(v222, 1LL);
      }
      else
      {
        v226 = 0;
        if ( (*(_DWORD *)(v219 + 1752) & 0x10000000) == 0 )
          v226 = v223;
        if ( v226 )
          (*(void (__fastcall **)(__int64, _QWORD))(v219 + 528))(v222 - 8, *(_QWORD *)(v222 - 8));
        else
          (*(void (__fastcall **)(__int64, __int64))(v219 + 232))(v222, 1LL);
      }
      *(_DWORD *)(v219 + 1660) = v225;
    }
    *(_DWORD *)(v219 + 1752) &= ~4u;
    v207 = v327;
    v215 = v329 / 0xC;
    v216 = v349;
  }
  v227 = v219 + v217;
  ++*(_DWORD *)(v219 + 1476);
  v228 = (_QWORD *)(v219 + v217);
  v381 = v219 + v217;
  v229 = 6LL;
  v230 = 48;
  do
  {
    *v228 = 0LL;
    v230 -= 8;
    ++v228;
    --v229;
  }
  while ( v229 );
  for ( ; v230; --v230 )
  {
    *(_BYTE *)v228 = 0;
    v228 = (_QWORD *)((char *)v228 + 1);
  }
  *(_QWORD *)(v227 + 8) = v351;
  *(_DWORD *)v227 = 30;
  *(_DWORD *)(v227 + 16) = 0;
  v231 = *(_QWORD *)(v219 + 1488);
  for ( ii = v231; ; LODWORD(v231) = ii ^ v231 )
  {
    ii >>= 31;
    if ( !ii )
      break;
  }
  v233 = v352;
  v382 = v219 + v217;
  v176 = (_BYTE *)v219;
  *(_DWORD *)(v227 + 20) = v231 & 0x7FFFFFFF;
  *(_QWORD *)(v227 + 24) = v233;
  v234 = v348;
  v348 = v227 + 48;
  *(_DWORD *)(v227 + 32) = *(_DWORD *)(v234 + 80);
  *(_DWORD *)(v227 + 36) = v329;
  *(_WORD *)(v227 + 40) = v394;
  v235 = (_DWORD *)(v227 + 48 + ((v215 - 1 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
  *(_WORD *)(v227 + 42) ^= (*(_WORD *)(v227 + 42) ^ (v331 != 0)) & 1;
  v339 = v235;
  v236 = &v235[6 * *(unsigned __int16 *)(v227 + 40)];
  v365 = v236;
  if ( v215 )
    v344 = v351 + 3;
  else
    v344 = (unsigned int *)v216;
  i2 = 0;
  v238 = v207;
  v239 = v235 + 2;
  do
  {
    v240 = 2LL;
    do
    {
      *((_QWORD *)v239 - 1) = 0LL;
      *v239 = 0x80000000;
      v239 += 3;
      --v240;
    }
    while ( v240 );
    --v238;
  }
  while ( v238 );
  if ( v235 != v236 )
  {
    v241 = (char *)v350;
    do
    {
      if ( (*((_DWORD *)v241 + 9) & 0x2000000) != 0
        || (v242 = *(_DWORD *)v241, *(_DWORD *)v241 == 1414090313) && *((_DWORD *)v241 + 1) == 1195525195
        || v242 == 1162297680 && ((v243 = *((_WORD *)v241 + 2), v243 == 30583) || v243 == 29303 || v243 == 30839)
        || v242 == 1095914053 && *((_WORD *)v241 + 2) == 16724 )
      {
        i2 = 1;
      }
      else
      {
        v244 = *(char **)(v219 + 1672);
        v245 = 7;
        v375 = *(char **)(v219 + 1680);
        v246 = v241 - v244;
        v376 = *(char **)(v219 + 1688);
        v377 = *(char **)(v219 + 1696);
        v374 = v244;
        while ( 1 )
        {
          v247 = v244[v246];
          v248 = *v244++;
          if ( v247 != v248 )
            break;
          if ( !--v245 )
          {
LABEL_406:
            i2 = 1;
            goto LABEL_407;
          }
        }
        v249 = v375;
        v250 = 8;
        v251 = v241;
        while ( 1 )
        {
          v252 = *(_QWORD *)v251;
          v251 += 8;
          v253 = *(_QWORD *)v249;
          v249 += 8;
          if ( v252 != v253 )
            break;
          v250 -= 8;
          if ( v250 < 8 )
          {
            if ( !v250 )
              goto LABEL_406;
            while ( 1 )
            {
              v254 = *v251++;
              v255 = *v249++;
              if ( v254 != v255 )
                goto LABEL_399;
              if ( !--v250 )
                goto LABEL_406;
            }
          }
        }
LABEL_399:
        v256 = v376;
        v257 = 4;
        while ( 1 )
        {
          v258 = v256[v241 - v376];
          v259 = *v256++;
          if ( v258 != v259 )
            break;
          if ( !--v257 )
            goto LABEL_406;
        }
        v260 = v377;
        v261 = 6;
        while ( 1 )
        {
          v262 = v260[v241 - v377];
          v263 = *v260++;
          if ( v262 != v263 )
            break;
          if ( !--v261 )
            goto LABEL_406;
        }
LABEL_407:
        v235 = v339;
      }
      if ( *((int *)v241 + 9) < 0 )
        i2 = 1;
      v395 = i2;
      if ( i2 && *(_DWORD *)v241 == 1414090313 && *((_DWORD *)v241 + 1) == 1195525195 )
      {
        if ( (*(_DWORD *)(v219 + 1752) & 0x10000000) != 0 )
          i2 = 0;
        v395 = i2;
      }
      v264 = *((unsigned int *)v241 + 3);
      v346 = v264;
      v265 = *(_DWORD *)(v350 + 8);
      if ( *(_DWORD *)(v350 + 16) > v265 )
        v265 = *(_DWORD *)(v350 + 16);
      v266 = v265 + v264;
      v330 = v265 + v264;
      if ( v351 == (unsigned int *)v349 )
      {
        v267 = 0;
        v268 = 0;
      }
      else
      {
        v267 = *v351;
        v268 = v351[1];
      }
      v269 = (unsigned int *)v349;
      LODWORD(v347) = v268;
      v332 = v267;
      v328 = v264;
      if ( v351 != (unsigned int *)v349 && v267 > (unsigned int)v264 && v268 <= v266 && !i2 )
      {
        *v235 = v264;
        v270 = &v366;
        v235[1] = v267;
        v328 = v267;
        v271 = (_QWORD *)(v352 + v264);
        v272 = v267 - v264;
        v273 = 0;
        v274 = v352 + v264 + v267 - (unsigned int)v264;
        v275 = v361;
        while ( (unsigned __int64)v271 >= *v270 + *v275 || v274 <= *v270 )
        {
          ++v270;
          ++v273;
          ++v275;
          if ( v273 >= 4 )
          {
            *(_DWORD *)(v219 + 1504) += v272;
            v276 = (const char *)v271;
            v277 = *(_DWORD *)(v219 + 1484);
            v278 = *(_QWORD *)(v219 + 1488);
            if ( (unsigned __int64)v271 < v274 )
            {
              do
              {
                _mm_prefetch(v276, 0);
                v276 += 64;
              }
              while ( (unsigned __int64)v276 < v274 );
            }
            if ( v272 >= 8 )
            {
              v279 = (unsigned __int64)v272 >> 3;
              do
              {
                v272 -= 8;
                v278 = __ROL8__(*v271++ ^ v278, v277);
                --v279;
              }
              while ( v279 );
            }
            for ( ; v272; --v272 )
            {
              v280 = *(unsigned __int8 *)v271;
              v271 = (_QWORD *)((char *)v271 + 1);
              v278 = __ROL8__(v280 ^ v278, v277);
            }
            for ( jj = v278; ; LODWORD(v278) = jj ^ v278 )
            {
              jj >>= 31;
              if ( !jj )
                break;
            }
            v339[2] = v278 & 0x7FFFFFFF;
            break;
          }
        }
        v269 = (unsigned int *)v349;
        LODWORD(v264) = v346;
        v266 = v330;
        i2 = v395;
      }
      if ( v332 >= (unsigned int)v264 && (unsigned int)v347 <= v266 )
      {
        v282 = v351;
        if ( v351 != v269 )
        {
          v283 = v344;
          v284 = v344[1];
          v333 = v284;
          if ( v284 <= v266 )
          {
            v285 = (_BYTE *)v348;
            do
            {
              if ( v283 == (unsigned int *)v349 )
                break;
              if ( i2 )
              {
                *v285 = 0x80;
              }
              else
              {
                v286 = *v283;
                v287 = v282[1];
                v328 = v286;
                if ( v286 < (unsigned int)v287 )
                {
                  if ( (*(_DWORD *)(v219 + 1752) & 0x200000) == 0 )
                  {
                    v360[4] = 649216;
                    KeBugCheckEx(__ROR4__(649216, 11), 0xAuLL, v352, 6uLL, 0LL);
                  }
                  if ( !*(_DWORD *)(v219 + 1616) )
                  {
                    v288 = v352;
                    *(_QWORD *)(v219 + 1624) = v219 - 0x5C5FC0A76E374B18LL;
                    *(_DWORD *)(v219 + 1616) = 1;
                    *(_QWORD *)(v219 + 1632) = 0LL;
                    *(_QWORD *)(v219 + 1640) = 271LL;
                    *(_QWORD *)(v219 + 1648) = v288;
                  }
                }
                v289 = v286;
                v290 = (const char *)(v352 + v287);
                v291 = &v366;
                v292 = v289 - v287;
                v293 = v361;
                v294 = &v290[v292];
                for ( kk = 0; kk < 4; ++kk )
                {
                  if ( (unsigned __int64)v290 < *v291 + *v293 && (unsigned __int64)v294 > *v291 )
                    goto LABEL_470;
                  ++v291;
                  ++v293;
                }
                if ( v292 < 4 )
                {
LABEL_470:
                  *(_BYTE *)v348 = 0x80;
                  goto LABEL_471;
                }
                *(_DWORD *)(v219 + 1504) += v292;
                v296 = v290;
                v297 = *(_DWORD *)(v219 + 1484);
                for ( mm = *(_QWORD *)(v219 + 1488); v296 < v294; v296 += 64 )
                  _mm_prefetch(v296, 0);
                if ( v292 >= 8 )
                {
                  v299 = (unsigned __int64)v292 >> 3;
                  do
                  {
                    v292 -= 8;
                    mm = __ROL8__(*(_QWORD *)v290 ^ mm, v297);
                    v290 += 8;
                    --v299;
                  }
                  while ( v299 );
                }
                for ( ; v292; --v292 )
                {
                  v300 = *(unsigned __int8 *)v290++;
                  mm = __ROL8__(v300 ^ mm, v297);
                }
                for ( nn = mm; ; LOBYTE(mm) = nn ^ mm )
                {
                  nn >>= 7;
                  if ( !nn )
                    break;
                }
                *(_BYTE *)v348 = mm & 0x7F;
LABEL_471:
                v284 = v333;
                i2 = v395;
                v266 = v330;
                v283 = v344;
                v285 = (_BYTE *)v348;
              }
              v351 += 3;
              ++v285;
              v283 += 3;
              v348 = (unsigned __int64)v285;
              v344 = v283;
              if ( v283 != (unsigned int *)v349 )
              {
                v284 = v283[1];
                v333 = v284;
              }
              v282 = v351;
            }
            while ( v284 <= v266 );
          }
        }
      }
      if ( !i2 && v328 != v266 )
      {
        v302 = (const char *)(v352 + v328);
        v303 = 0;
        v304 = &v366;
        v339[4] = v266;
        v305 = v266 - v328;
        v339[3] = v328;
        v306 = &v302[v305];
        v307 = v361;
        while ( (unsigned __int64)v302 >= *v304 + *v307 || (unsigned __int64)v306 <= *v304 )
        {
          ++v304;
          ++v303;
          ++v307;
          if ( v303 >= 4 )
          {
            *(_DWORD *)(v219 + 1504) += v305;
            v308 = v302;
            v309 = *(_DWORD *)(v219 + 1484);
            for ( i1 = *(_QWORD *)(v219 + 1488); v308 < v306; v308 += 64 )
              _mm_prefetch(v308, 0);
            if ( v305 >= 8 )
            {
              v311 = (unsigned __int64)v305 >> 3;
              do
              {
                v305 -= 8;
                i1 = __ROL8__(*(_QWORD *)v302 ^ i1, v309);
                v302 += 8;
                --v311;
              }
              while ( v311 );
            }
            for ( i2 = 0; v305; --v305 )
            {
              v312 = *(unsigned __int8 *)v302++;
              i1 = __ROL8__(v312 ^ i1, v309);
            }
            for ( i3 = i1; ; LODWORD(i1) = i3 ^ i1 )
            {
              i3 >>= 31;
              if ( !i3 )
                break;
            }
            v314 = v339;
            v339[5] = i1 & 0x7FFFFFFF;
            goto LABEL_493;
          }
        }
      }
      v314 = v339;
      i2 = 0;
LABEL_493:
      v315 = v351;
      if ( v351 != (unsigned int *)v349 && *v351 >= v346 && v351[1] <= v330 )
      {
        if ( v344 != (unsigned int *)v349 )
        {
          v316 = v348;
          *(_BYTE *)v348 = 0x80;
          v348 = v316 + 1;
          v344 += 3;
        }
        v351 = v315 + 3;
      }
      v235 = v314 + 6;
      v241 = (char *)(v350 + 40);
      v339 = v235;
      v350 += 40LL;
    }
    while ( v235 != v365 );
  }
LABEL_500:
  v353 = v176;
  v47 = 0;
LABEL_219:
  v49 = a3;
LABEL_220:
  *a1 = v353;
  if ( (int)(v47 + 0x80000000) >= 0 && v47 != -1073741554 )
    return v47;
  if ( (v49 & 0x80000004) != 0x80000004 )
  {
    v386 = v49 | 0x80000000;
    v317 = (*((__int64 (__fastcall **)(__int64))v353 + 60))(v359);
    v318 = *(unsigned int *)(v317 + 148);
    if ( (unsigned int)v318 >= 0x14 )
    {
      v319 = *(unsigned int *)(v317 + 144);
      v320 = v319 + v318;
      v321 = v359;
      v322 = v359 + v320;
      for ( i4 = v319 + v359; i4 != v322; i4 += 20LL )
      {
        if ( !*(_DWORD *)(i4 + 12) )
          break;
        v324 = *(unsigned int *)(i4 + 16);
        if ( !(_DWORD)v324 )
          break;
        v325 = *(_QWORD *)(v324 + v321);
        if ( v325 )
        {
          result = sub_14024FE34(&v353, v325, v386);
          *a1 = v353;
          if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741554 )
            return result;
          v321 = v359;
        }
      }
    }
  }
  return 0LL;
}
