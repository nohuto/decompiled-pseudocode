/*
 * XREFs of ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C0004D94
 * Callers:
 *     EngPlgBlt @ 0x1C00041F0 (EngPlgBlt.c)
 * Callees:
 *     ?bMulOverflow@@YAH_J0@Z @ 0x1C0005DE8 (-bMulOverflow@@YAH_J0@Z.c)
 *     ?bAddOverflow@@YAH_J0@Z @ 0x1C0005E44 (-bAddOverflow@@YAH_J0@Z.c)
 *     ?bSubOverflow@@YAH_J0@Z @ 0x1C0005E70 (-bSubOverflow@@YAH_J0@Z.c)
 *     ROT_DIV @ 0x1C0005EAC (ROT_DIV.c)
 *     QDIV @ 0x1C0005EC8 (QDIV.c)
 *     bScalePlgDDALToPlgDDA @ 0x1C0005F10 (bScalePlgDDALToPlgDDA.c)
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall bInitPlgDDA(struct _PLGDDA *a1, struct _RECTL *a2, struct _RECTL *a3, struct _POINTFIX *a4)
{
  unsigned int v6; // ebx
  __int64 result; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // r11
  struct _POINTFIX v11; // r9
  int v12; // r13d
  struct _POINTFIX v13; // r14
  LONG left; // edx
  int v15; // r15d
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // r9
  int v19; // r10d
  int v20; // edx
  int v21; // r8d
  __int64 v22; // r14
  int v23; // ecx
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r10
  __int64 v30; // r15
  __int64 v31; // r11
  __int64 v32; // r12
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // r10
  __int64 v41; // r13
  __int64 v42; // r9
  __int64 v43; // r12
  __int64 v44; // r15
  __int64 v45; // r11
  __int64 v46; // rcx
  __int64 v47; // r9
  __int64 v48; // r11
  __int64 v49; // rcx
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // r9
  __int64 v53; // r9
  __int64 v54; // r10
  __int64 v55; // r10
  __int64 v56; // r11
  __int64 v57; // r10
  __int64 v58; // r8
  unsigned __int64 v59; // r10
  __int64 v60; // r11
  _OWORD *v61; // rcx
  __int64 v62; // r8
  struct _POINTFIX v63; // r9
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // r9
  __int64 v73; // r11
  __int64 v74; // r11
  __int64 v75; // rcx
  __int64 v76; // r11
  __int64 v77; // r10
  __int64 v78; // rdx
  __int64 v79; // r10
  __int64 v80; // r9
  __int128 *v81; // rcx
  __int128 v82; // xmm0
  __int64 v83; // xmm1_8
  __int64 v84; // r8
  __int64 v85; // r10
  __int128 *v86; // rcx
  __int128 v87; // xmm0
  __int64 v88; // xmm1_8
  __int64 v89; // rcx
  __int64 v90; // rcx
  __int64 v91; // r12
  __int64 v92; // r9
  __int64 v93; // rdx
  __int64 v94; // r10
  unsigned int v95; // r9d
  __int64 v96; // r14
  __int64 v97; // rsi
  __int64 v98; // r9
  __int64 v99; // r10
  __int64 v100; // r10
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r11
  __int64 v104; // r14
  __int64 v105; // r9
  __int64 v106; // rdx
  __int64 v107; // r9
  __int64 v108; // r11
  __int64 v109; // r9
  __int64 v110; // r10
  __int64 v111; // r11
  __int64 v112; // rdx
  __int64 v113; // r10
  __int64 v114; // r9
  __int64 v115; // r10
  __int64 v116; // rdx
  __int64 v117; // r9
  __int64 v118; // r10
  __int64 v119; // r14
  __int64 v120; // r10
  __int64 v121; // rsi
  __int64 v122; // rdx
  __int64 v123; // r10
  __int64 v124; // r10
  __int64 v125; // r11
  __int64 v126; // r11
  __int64 v127; // r11
  __int64 v128; // rdx
  __int64 v129; // r9
  __int64 v130; // r9
  __int64 v131; // rdx
  __int64 v132; // r8
  __int64 v133; // r10
  __int64 v134; // r8
  __int64 v135; // r10
  __int64 v136; // r9
  __int64 v137; // r10
  __int64 v138; // r9
  __int64 v139; // r10
  __int64 v140; // r9
  __int64 v141; // r9
  __int64 v142; // r9
  __int64 v143; // r10
  __int64 v144; // rcx
  __int64 v145; // r10
  __int64 v146; // r9
  __int64 v147; // r10
  __int64 v148; // r10
  __int64 v149; // r9
  __int64 v150; // r10
  __int64 v151; // r9
  __int64 v152; // r10
  __int64 v153; // rcx
  __int64 v154; // r9
  __int64 v155; // r11
  __int64 v156; // r11
  __int64 v157; // r9
  __int64 v158; // rdx
  __int64 v159; // r9
  __int64 v160; // r9
  __int64 v161; // r10
  __int64 v162; // rdx
  __int64 v163; // r10
  __int64 v164; // r9
  __int64 v165; // r10
  __int64 v166; // rdx
  __int64 v167; // r9
  __int64 v168; // r10
  __int64 v169; // r10
  __int64 v170; // rdx
  __int64 v171; // r10
  __int64 v172; // r10
  __int64 v173; // r15
  __int64 v174; // rdx
  __int64 v175; // r9
  __int64 v176; // r9
  __int64 v177; // rdx
  __int64 v178; // r8
  __int64 v179; // r10
  __int64 v180; // r8
  __int64 v181; // r10
  __int64 v182; // r11
  __int64 v183; // r9
  __int64 v184; // r10
  __int64 v185; // r10
  __int64 v186; // r9
  __int64 v187; // r10
  __int64 v188; // r11
  __int64 v189; // r10
  __int64 v190; // r9
  __int64 v191; // r10
  __int64 v192; // r9
  __int64 v193; // r10
  __int64 v194; // r11
  __int64 v195; // rcx
  __int64 v196; // r9
  __int64 v197; // r10
  __int64 v198; // r9
  __int64 v199; // r12
  __int64 v200; // r9
  __int64 v201; // r11
  __int64 v202; // rsi
  __int64 v203; // r12
  __int64 v204; // r9
  __int64 v205; // r14
  __int64 v206; // rdx
  __int64 v207; // xmm1_8
  __int128 *v208; // r10
  __int128 v209; // xmm0
  __int64 v210; // xmm1_8
  __int128 *v211; // rcx
  __int128 v212; // xmm0
  __int64 v213; // xmm1_8
  __int128 v214; // xmm0
  __int64 v215; // xmm1_8
  __int128 v216; // xmm0
  __int64 v217; // xmm1_8
  __int128 v218; // xmm0
  __int64 v219; // xmm1_8
  struct _PLGDDA *v220; // rdx
  LONG top; // ecx
  int v222; // eax
  LONG bottom; // eax
  LONG v224; // eax
  int v225; // r8d
  int v226; // r8d
  __int64 v227; // r9
  __int64 v228; // r9
  __int64 v229; // [rsp+20h] [rbp-B9h] BYREF
  __int64 v230; // [rsp+28h] [rbp-B1h]
  __int64 v231; // [rsp+30h] [rbp-A9h]
  __int64 v232; // [rsp+38h] [rbp-A1h]
  __int64 v233; // [rsp+40h] [rbp-99h]
  __int64 v234; // [rsp+48h] [rbp-91h]
  __int64 v235; // [rsp+50h] [rbp-89h]
  __int64 v236; // [rsp+58h] [rbp-81h]
  __int64 v237; // [rsp+60h] [rbp-79h]
  __int64 v238; // [rsp+68h] [rbp-71h]
  __int64 v239; // [rsp+70h] [rbp-69h]
  __int64 v240; // [rsp+78h] [rbp-61h]
  __int64 v241; // [rsp+80h] [rbp-59h]
  __int64 v242; // [rsp+88h] [rbp-51h]
  __int64 v243; // [rsp+90h] [rbp-49h]
  __int64 v244[3]; // [rsp+98h] [rbp-41h] BYREF
  struct _PLGDDA *v245; // [rsp+B0h] [rbp-29h]
  __int64 v246; // [rsp+B8h] [rbp-21h] BYREF
  int v247; // [rsp+C0h] [rbp-19h]
  _BYTE v248[12]; // [rsp+C4h] [rbp-15h] BYREF
  int v249; // [rsp+D0h] [rbp-9h]
  int v250; // [rsp+D4h] [rbp-5h]
  __int64 v251; // [rsp+D8h] [rbp-1h] BYREF
  struct _POINTFIX v252; // [rsp+E0h] [rbp+7h]
  struct _POINTFIX v253; // [rsp+E8h] [rbp+Fh]
  int v254; // [rsp+F0h] [rbp+17h]
  int v255; // [rsp+F4h] [rbp+1Bh]

  v245 = a1;
  v6 = 0;
  result = PALLOCMEM2(0x318uLL);
  v9 = result;
  if ( result )
  {
    v10 = (unsigned __int64)*a4;
    v11 = a4[1];
    v12 = (int)*a4;
    v13 = a4[2];
    left = a3->left;
    v15 = v13.x + v11.x - v10;
    v253 = v13;
    v16 = HIDWORD(*(unsigned __int64 *)&v13);
    v251 = v10;
    v17 = HIDWORD(v10);
    v252 = v11;
    v18 = HIDWORD(*(unsigned __int64 *)&v11);
    v19 = v18 + v16 - v17;
    v254 = v15;
    v255 = v19;
    if ( left || a3->top )
    {
      top = a3->top;
      v222 = a2->left - left;
      *(_QWORD *)&v248[4] = 0LL;
      LODWORD(v246) = v222;
      HIDWORD(v246) = a2->top - top;
      v247 = a2->right - left;
      bottom = a2->bottom;
      a2 = (struct _RECTL *)&v246;
      *(_QWORD *)v248 = (unsigned int)(bottom - top);
      v249 = a3->right - left;
      v224 = a3->bottom;
      a3 = (struct _RECTL *)&v248[4];
      v250 = v224 - top;
    }
    v20 = 0;
    v21 = (int)v18 > (int)v17 == (int)v18 > v19;
    if ( *((_DWORD *)&v251 + 2 * ((int)v18 > (int)v17 == (int)v18 > v19) + 1) > *((_DWORD *)&v251
                                                                                + 2
                                                                                * (((int)v18 > (int)v17 == (int)v18 > v19) ^ 3LL)
                                                                                + 1) )
      v21 ^= 3u;
    if ( v21 )
    {
      v225 = v21 - 1;
      if ( v225 )
      {
        v226 = v225 - 1;
        if ( v226 )
        {
          if ( v226 == 1 )
          {
            if ( (int)v18 < (int)v16 || (int)v18 <= (int)v16 && v252.x < v253.x )
            {
              v20 = 6;
              goto LABEL_11;
            }
            v20 = 7;
          }
        }
        else
        {
          if ( (int)v17 < v19 || (int)v17 <= v19 && v12 < v15 )
          {
            v20 = 4;
            goto LABEL_11;
          }
          v20 = 5;
        }
      }
      else
      {
        if ( (int)v17 >= v19 && ((int)v17 > v19 || v12 >= v15) )
        {
          v20 = 3;
          goto LABEL_11;
        }
        v20 = 2;
      }
    }
    else if ( (int)v18 >= (int)v16 && ((int)v18 > (int)v16 || v252.x >= v253.x) )
    {
      v20 = 1;
LABEL_11:
      v22 = a3->bottom - a3->top;
      v23 = a3->right - a3->left;
LABEL_12:
      v24 = v23;
      if ( !v22 )
        goto LABEL_139;
      if ( !v23 )
        goto LABEL_139;
      v25 = a2->left;
      v26 = v20;
      v27 = a2->top;
      v28 = 3 * v26;
      v26 *= 2LL;
      v29 = dword_1C02E83AC[2 * v28];
      v30 = SLODWORD((&aiPlgConst)[v28]);
      v31 = dword_1C02E83B0[2 * v28];
      v32 = (v22 - 1) * dword_1C02E83A8[2 * v28];
      v233 = dword_1C02E83A4[2 * v28];
      v234 = v29;
      v232 = v30;
      v240 = v31;
      v33 = dword_1C02E83B4[2 * v28];
      v239 = v233 * v27 + v30 * v25 + v32;
      v34 = *((int *)&aiPlgSort + 2 * v26);
      v35 = v29 * v25 + (v24 - 1) * v33;
      v36 = dword_1C02E8324[2 * v26];
      v238 = v31 * v27 + v35;
      v37 = *((int *)&v251 + 2 * v34);
      v38 = *((int *)&v251 + 2 * v34 + 1);
      v39 = dword_1C02E8328[2 * v26];
      v40 = *((int *)&v251 + 2 * v36) - v37;
      v41 = *((int *)&v251 + 2 * v36 + 1) - v38;
      v243 = v37;
      v42 = *((int *)&v251 + 2 * v39) - v37;
      v43 = *((int *)&v251 + 2 * v39 + 1) - v38;
      v242 = v38;
      v235 = v40;
      v236 = v42;
      v237 = v43;
      if ( v40 )
      {
        if ( (unsigned int)bMulOverflow(v24, v40) )
          goto LABEL_139;
      }
      if ( v41 && (unsigned int)bMulOverflow(v24, v41) )
        goto LABEL_139;
      if ( v42 && (unsigned int)bMulOverflow(v22, v42) )
        goto LABEL_139;
      if ( v43 && (unsigned int)bMulOverflow(v22, v43) )
        goto LABEL_139;
      v44 = v22 * v43;
      v230 = v24 * v40;
      v231 = v22 * v42;
      if ( !(v22 * v43) || (unsigned int)bMulOverflow(v22, v24) || v242 >= 0 && 0x7FFFFFFFFFFFFFFFLL - v242 < 16 )
        goto LABEL_139;
      if ( (unsigned int)bMulOverflow(v22 * v24, v242 + 16) )
        goto LABEL_139;
      if ( (unsigned int)bMulOverflow(v239, v45) )
        goto LABEL_139;
      if ( (unsigned int)bAddOverflow(v47, v46 * v48) )
        goto LABEL_139;
      if ( (unsigned int)bMulOverflow(v238, v22 * v43) )
        goto LABEL_139;
      if ( (unsigned int)bAddOverflow(v50, v49 * v44) )
        goto LABEL_139;
      if ( (unsigned int)bSubOverflow(v51 + v52, 1LL) )
        goto LABEL_139;
      v229 = v53 - 1;
      if ( (unsigned int)bMulOverflow(v54, 16LL) )
        goto LABEL_139;
      v57 = 16 * v55;
      if ( !v57 )
        goto LABEL_139;
      ROT_DIV(&v251, v56, v57);
      ROT_DIV(v244, v22 * v43, v58);
      QDIV(v9 + 8, &v229);
      v62 = v251;
      v63 = v252;
      *(_OWORD *)(v9 + 24) = *v61;
      v64 = *(_QWORD *)(v9 + 24);
      *(_QWORD *)(v9 + 32) += *(_QWORD *)&v63;
      v65 = v62 + v64;
      *(_QWORD *)(v9 + 24) = v65;
      if ( *(_QWORD *)(v9 + 32) >= v59 )
      {
        *(_QWORD *)(v9 + 24) = v65 + 1;
        *(_QWORD *)(v9 + 32) = *(_DWORD *)(v9 + 32) - (int)v59;
      }
      v66 = v244[0];
      v67 = v244[1];
      *(_OWORD *)(v9 + 40) = *(_OWORD *)(v9 + 8);
      v68 = *(_QWORD *)(v9 + 40) + v66;
      *(_QWORD *)(v9 + 48) += v67;
      *(_QWORD *)(v9 + 40) = v68;
      if ( *(_QWORD *)(v9 + 48) >= v59 )
      {
        *(_QWORD *)(v9 + 40) = v68 + 1;
        *(_QWORD *)(v9 + 48) = *(_DWORD *)(v9 + 48) - (int)v59;
      }
      *(_OWORD *)(v9 + 56) = *(_OWORD *)(v9 + 40);
      v69 = *(_QWORD *)(v9 + 56);
      *(_QWORD *)(v9 + 64) += *(_QWORD *)&v63;
      v70 = v62 + v69;
      *(_QWORD *)(v9 + 56) = v70;
      if ( *(_QWORD *)(v9 + 64) >= v59 )
      {
        *(_QWORD *)(v9 + 56) = v70 + 1;
        *(_QWORD *)(v9 + 64) = *(_DWORD *)(v9 + 64) - (int)v59;
      }
      if ( (unsigned int)bMulOverflow(v232, v60) )
        goto LABEL_139;
      if ( (unsigned int)bMulOverflow(v234, v22 * v43) )
        goto LABEL_139;
      v246 = v71 * v44;
      *(_QWORD *)&v248[4] = v72 * v73;
      if ( (unsigned int)bAddOverflow(v72 * v73, v71 * v44) )
        goto LABEL_139;
      if ( (unsigned int)bMulOverflow(v233, v74) )
        goto LABEL_139;
      if ( (unsigned int)bMulOverflow(v240, v22 * v43) )
        goto LABEL_139;
      v241 = v233 * v76;
      if ( (unsigned int)bAddOverflow(v233 * v76, v75 * v44) )
        goto LABEL_139;
      ROT_DIV(v9 + 264, v246 + *(_QWORD *)&v248[4], v77);
      v78 = v241;
      *(_QWORD *)(v9 + 280) = v79;
      v82 = *v81;
      v83 = *((_QWORD *)v81 + 2);
      *(_OWORD *)(v9 + 288) = *v81;
      *(_OWORD *)(v9 + 312) = v82;
      *(_OWORD *)(v9 + 336) = v82;
      *(_QWORD *)(v9 + 304) = v83;
      *(_QWORD *)(v9 + 328) = v83;
      *(_QWORD *)(v9 + 352) = v83;
      ROT_DIV(v9 + 360, v80 + v78, v84);
      *(_QWORD *)(v9 + 376) = v85;
      v87 = *v86;
      v88 = *((_QWORD *)v86 + 2);
      v89 = v235;
      *(_OWORD *)(v9 + 384) = v87;
      *(_OWORD *)(v9 + 408) = v87;
      *(_OWORD *)(v9 + 432) = v87;
      *(_QWORD *)(v9 + 400) = v88;
      *(_QWORD *)(v9 + 424) = v88;
      *(_QWORD *)(v9 + 448) = v88;
      if ( (unsigned int)bMulOverflow(v89, v43) )
        goto LABEL_139;
      v91 = v90 * v43;
      if ( (unsigned int)bMulOverflow(v41, v236) )
        goto LABEL_139;
      v229 = v41 * v92;
      if ( (unsigned int)bSubOverflow(v91, v41 * v92) )
        goto LABEL_139;
      v241 = v94 - v93;
      if ( (unsigned int)bMulOverflow(v22, 16LL) )
        goto LABEL_139;
      if ( (unsigned int)bMulOverflow(v24, v95) )
        goto LABEL_139;
      if ( (unsigned int)bMulOverflow(v232, v41) )
        goto LABEL_139;
      if ( (unsigned int)bMulOverflow(v234, v237) )
        goto LABEL_139;
      v96 = 16 * v22;
      if ( !v96 )
        goto LABEL_139;
      v97 = 16 * v24;
      if ( !v97 )
        goto LABEL_139;
      ROT_DIV(&v251, v232 * v41, v96);
      ROT_DIV(v244, v98 * v99, v97);
      *(_QWORD *)&v248[4] = v244[0];
      v246 = v251;
      if ( (unsigned int)bAddOverflow(v251, v244[0]) )
        goto LABEL_139;
      ROT_DIV(&v251, v233 * v41, v96);
      ROT_DIV(v244, v240 * v100, v97);
      if ( (unsigned int)bAddOverflow(v251, v244[0]) )
        goto LABEL_139;
      v104 = v102 + v101;
      if ( v103 )
      {
        if ( (unsigned int)bMulOverflow(*(_QWORD *)(v9 + 8), 16LL)
          || (unsigned int)bSubOverflow(16 * v105, v242)
          || (unsigned int)bMulOverflow(v230, v107 - v106)
          || v243 >= 0 && 0x7FFFFFFFFFFFFFFFLL - v243 < 16 )
        {
          goto LABEL_139;
        }
        if ( (unsigned int)bMulOverflow(v108, v243 + 16) )
          goto LABEL_139;
        if ( (unsigned int)bAddOverflow(v110, v109 * v111) )
          goto LABEL_139;
        v114 = v238;
        v115 = v112 + v113;
        if ( v238 )
        {
          if ( (unsigned int)bMulOverflow(v238, v91) )
            goto LABEL_139;
        }
        if ( (unsigned int)bSubOverflow(v115, v114 * v91) )
          goto LABEL_139;
        v119 = v236;
        v120 = v118 - v116;
        if ( v117 )
        {
          if ( (unsigned int)bMulOverflow(v236, v41) )
            goto LABEL_139;
          v121 = v229;
          if ( (unsigned int)bMulOverflow(v227, v229) )
            goto LABEL_139;
        }
        else
        {
          v121 = v229;
        }
        if ( (unsigned int)bAddOverflow(v120, v117 * v121) )
          goto LABEL_139;
        if ( (unsigned int)bSubOverflow(v122 + v123, 1LL) )
          goto LABEL_139;
        v229 = v124 - 1;
        if ( (unsigned int)bMulOverflow(16LL, v125) )
          goto LABEL_139;
        v127 = 16 * v126;
        *(_QWORD *)(v9 + 664) = v127;
        *(_QWORD *)(v9 + 472) = v127;
        *(_QWORD *)(v9 + 568) = v127;
        if ( !v127 )
          goto LABEL_139;
        QDIV(v9 + 72, &v229);
        if ( (unsigned int)bMulOverflow(16LL, v230) )
          goto LABEL_139;
        if ( (unsigned int)bSubOverflow(*(_QWORD *)(v9 + 40), *(_QWORD *)(v9 + 8)) )
          goto LABEL_139;
        v238 = 16 * v230;
        if ( (unsigned int)bMulOverflow(16 * v230, v129 - v128) )
          goto LABEL_139;
        if ( (unsigned int)bSubOverflow(16 * v130 * v230, v241) )
          goto LABEL_139;
        if ( (unsigned int)bAddOverflow(v133, v132 - v131) )
          goto LABEL_139;
        v229 = v134 + v135;
        QDIV(v9 + 120, &v229);
        ROT_DIV(v9 + 648, v238, *(_QWORD *)(v9 + 664));
        if ( v237 )
        {
          if ( (unsigned int)bMulOverflow(v234, v235) || (unsigned int)bMulOverflow(v234 * v137, v136) )
            goto LABEL_139;
        }
        v138 = v234;
        v139 = v234 * v91;
        if ( v41 )
        {
          if ( (unsigned int)bMulOverflow(v234, v119) || (unsigned int)bMulOverflow(v140 * v119, v41) )
            goto LABEL_139;
        }
        if ( (unsigned int)bSubOverflow(v139, v138 * v121) )
          goto LABEL_139;
        if ( (unsigned int)bMulOverflow(16LL, *(_QWORD *)&v248[4] + v246) )
          goto LABEL_139;
        if ( (unsigned int)bMulOverflow(16 * v141, v230) )
          goto LABEL_139;
        if ( (unsigned int)bSubOverflow(16 * v230 * v142, v143) )
          goto LABEL_139;
        v229 = v144 - v145;
        QDIV(v9 + 456, &v229);
        if ( v237 )
        {
          if ( (unsigned int)bMulOverflow(v240, v235) || (unsigned int)bMulOverflow(v240 * v146, v147) )
            goto LABEL_139;
        }
        v148 = v240;
        v149 = v240 * v91;
        if ( v41 )
        {
          if ( (unsigned int)bMulOverflow(v240, v119) || (unsigned int)bMulOverflow(v150 * v119, v41) )
            goto LABEL_139;
        }
        if ( (unsigned int)bSubOverflow(v149, v148 * v121) )
          goto LABEL_139;
        v104 = v244[0] + v251;
        if ( (unsigned int)bMulOverflow(16LL, v244[0] + v251)
          || (unsigned int)bMulOverflow(16 * v104, v230)
          || (unsigned int)bSubOverflow(16 * v152 * v104, v151) )
        {
          goto LABEL_139;
        }
        v229 = v153 - v154;
        QDIV(v9 + 552, &v229);
        ROT_DIV(v9 + 744, v238, v155);
        *(_QWORD *)(v9 + 760) = v156;
      }
      else
      {
        v121 = v229;
        *(_QWORD *)(v9 + 648) = 0LL;
        *(_QWORD *)(v9 + 656) = 0LL;
        *(_QWORD *)(v9 + 664) = 0LL;
        *(_QWORD *)(v9 + 456) = 0LL;
        *(_QWORD *)(v9 + 464) = 0LL;
        *(_QWORD *)(v9 + 472) = 0LL;
        *(_QWORD *)(v9 + 552) = 0LL;
        *(_QWORD *)(v9 + 560) = 0LL;
        *(_QWORD *)(v9 + 568) = 0LL;
        *(_QWORD *)(v9 + 72) = 0LL;
        *(_QWORD *)(v9 + 80) = 0LL;
        *(_QWORD *)(v9 + 120) = 0LL;
        *(_QWORD *)(v9 + 128) = 0LL;
        *(_QWORD *)(v9 + 744) = 0LL;
        *(_QWORD *)(v9 + 752) = 0LL;
        *(_QWORD *)(v9 + 760) = 0LL;
      }
      if ( !(unsigned int)bMulOverflow(16LL, *(_QWORD *)(v9 + 8))
        && !(unsigned int)bSubOverflow(16 * v157, v242)
        && !(unsigned int)bMulOverflow(v231, v159 - v158)
        && (v243 < 0 || 0x7FFFFFFFFFFFFFFFLL - v243 >= 16)
        && !(unsigned int)bMulOverflow(v44, v243 + 16)
        && !(unsigned int)bAddOverflow(v161, v160 * v44) )
      {
        v164 = v239;
        v165 = v162 + v163;
        if ( (!v239 || !(unsigned int)bMulOverflow(v239, v91)) && !(unsigned int)bAddOverflow(v165, v164 * v91) )
        {
          v169 = v166 + v168;
          if ( (!v167 || !(unsigned int)bMulOverflow(v236, v41) && !(unsigned int)bMulOverflow(v228, v121))
            && !(unsigned int)bSubOverflow(v169, v167 * v121)
            && !(unsigned int)bSubOverflow(v171 - v170, 1LL) )
          {
            v229 = v172 - 1;
            if ( !(unsigned int)bMulOverflow(16LL, v44) )
            {
              v173 = 16 * v44;
              *(_QWORD *)(v9 + 688) = v173;
              *(_QWORD *)(v9 + 496) = v173;
              *(_QWORD *)(v9 + 592) = v173;
              if ( v173 )
              {
                QDIV(v9 + 88, &v229);
                if ( !(unsigned int)bMulOverflow(16LL, v231)
                  && !(unsigned int)bSubOverflow(*(_QWORD *)(v9 + 24), *(_QWORD *)(v9 + 8)) )
                {
                  v239 = 16 * v231;
                  if ( !(unsigned int)bMulOverflow(16 * v231, v175 - v174)
                    && !(unsigned int)bAddOverflow(16 * v176 * v231, v241)
                    && !(unsigned int)bAddOverflow(v179, v177 + v178) )
                  {
                    v229 = v180 + v181;
                    QDIV(v9 + 104, &v229);
                    ROT_DIV(v9 + 672, v239, *(_QWORD *)(v9 + 688));
                    if ( !v237 )
                    {
                      v185 = v232;
LABEL_121:
                      v186 = v185 * v91;
                      if ( (!v41
                         || !(unsigned int)bMulOverflow(v185, v182) && !(unsigned int)bMulOverflow(v187 * v188, v41))
                        && !(unsigned int)bSubOverflow(v186, v185 * v121)
                        && !(unsigned int)bMulOverflow(16LL, *(_QWORD *)&v248[4] + v246)
                        && !(unsigned int)bMulOverflow(16 * v189, v231)
                        && !(unsigned int)bAddOverflow(16 * v231 * v191, v190) )
                      {
                        v229 = v192 + v193;
                        QDIV(v9 + 480, &v229);
                        if ( !v237
                          || !(unsigned int)bMulOverflow(v233, v235) && !(unsigned int)bMulOverflow(v197 * v195, v196) )
                        {
                          v198 = v233;
                          v199 = v233 * v91;
                          if ( !v41
                            || !(unsigned int)bMulOverflow(v233, v194) && !(unsigned int)bMulOverflow(v200 * v201, v41) )
                          {
                            v202 = v198 * v121;
                            if ( !(unsigned int)bSubOverflow(v199, v202) )
                            {
                              v203 = v199 - v202;
                              if ( !(unsigned int)bMulOverflow(16LL, v104)
                                && !(unsigned int)bMulOverflow(16 * v104, v231) )
                              {
                                v205 = 16 * v204 * v104;
                                if ( !(unsigned int)bAddOverflow(v205, v203) )
                                {
                                  v229 = v203 + v205;
                                  QDIV(v9 + 576, &v229);
                                  v206 = v239;
                                  v207 = *(_QWORD *)(v9 + 688);
                                  *(_OWORD *)(v9 + 696) = *(_OWORD *)(v9 + 672);
                                  v209 = *v208;
                                  *(_QWORD *)(v9 + 712) = v207;
                                  v210 = *((_QWORD *)v208 + 2);
                                  *(_OWORD *)(v9 + 504) = v209;
                                  v212 = *v211;
                                  *(_QWORD *)(v9 + 520) = v210;
                                  v213 = *((_QWORD *)v211 + 2);
                                  *(_OWORD *)(v9 + 600) = v212;
                                  v214 = *(_OWORD *)(v9 + 648);
                                  *(_QWORD *)(v9 + 616) = v213;
                                  v215 = *(_QWORD *)(v9 + 664);
                                  *(_OWORD *)(v9 + 720) = v214;
                                  v216 = *(_OWORD *)(v9 + 456);
                                  *(_QWORD *)(v9 + 736) = v215;
                                  v217 = *(_QWORD *)(v9 + 472);
                                  *(_OWORD *)(v9 + 528) = v216;
                                  v218 = *(_OWORD *)(v9 + 552);
                                  *(_QWORD *)(v9 + 544) = v217;
                                  v219 = *(_QWORD *)(v9 + 568);
                                  *(_OWORD *)(v9 + 624) = v218;
                                  *(_QWORD *)(v9 + 640) = v219;
                                  ROT_DIV(v9 + 768, v206, v173);
                                  v220 = v245;
                                  *(_QWORD *)(v9 + 784) = v173;
                                  v6 = bScalePlgDDALToPlgDDA(v9, v220);
                                }
                              }
                            }
                          }
                        }
                      }
                      goto LABEL_139;
                    }
                    if ( !(unsigned int)bMulOverflow(v232, v235) && !(unsigned int)bMulOverflow(v232 * v184, v183) )
                      goto LABEL_121;
                  }
                }
              }
            }
          }
        }
      }
LABEL_139:
      Win32FreePool(v9);
      return v6;
    }
    v22 = a3->right - a3->left;
    v23 = a3->bottom - a3->top;
    goto LABEL_12;
  }
  return result;
}
