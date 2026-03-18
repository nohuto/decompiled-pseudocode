/*
 * XREFs of ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C00C7478
 * Callers:
 *     EngPlgBlt @ 0x1C00C8FF0 (EngPlgBlt.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     ?bMulOverflow@@YAH_J0@Z @ 0x1C00C86E4 (-bMulOverflow@@YAH_J0@Z.c)
 *     ?bAddOverflow@@YAH_J0@Z @ 0x1C00C8740 (-bAddOverflow@@YAH_J0@Z.c)
 *     ?bSubOverflow@@YAH_J0@Z @ 0x1C00C876C (-bSubOverflow@@YAH_J0@Z.c)
 *     ROT_DIV @ 0x1C00C87A8 (ROT_DIV.c)
 *     QDIV @ 0x1C00C87C4 (QDIV.c)
 *     bScalePlgDDALToPlgDDA @ 0x1C00C880C (bScalePlgDDALToPlgDDA.c)
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1C00CD54C (-bSubOverflow@@YAHJJ@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

void *__fastcall bInitPlgDDA(struct _PLGDDA *a1, struct _RECTL *a2, struct _RECTL *a3, struct _POINTFIX *a4)
{
  unsigned int v6; // ebx
  void *result; // rax
  __int64 v9; // rdi
  struct _POINTFIX v10; // r9
  unsigned __int64 v11; // r11
  struct _POINTFIX v12; // r14
  LONG left; // r8d
  int v14; // r15d
  int x; // r12d
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // r9
  int v19; // r10d
  LONG top; // r12d
  int v21; // r8d
  LONG bottom; // r13d
  int v23; // r8d
  int v24; // ecx
  int v25; // r8d
  int v26; // ecx
  int v27; // edx
  int v28; // r8d
  int v29; // r8d
  int v30; // r8d
  __int64 v31; // r14
  int v32; // ecx
  __int64 v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r15
  __int64 v39; // r10
  __int64 v40; // r11
  __int64 v41; // r12
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // r10
  __int64 v49; // r12
  __int64 v50; // r13
  __int64 v51; // r9
  __int64 v52; // r15
  __int64 v53; // r11
  __int64 v54; // rcx
  __int64 v55; // r9
  __int64 v56; // r11
  __int64 v57; // rcx
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // r9
  __int64 v61; // r9
  __int64 v62; // r10
  __int64 v63; // r10
  __int64 v64; // r11
  __int64 v65; // r10
  __int64 v66; // r8
  unsigned __int64 v67; // r10
  __int64 v68; // r11
  __int128 *v69; // rcx
  __int128 v70; // xmm0
  __int64 v71; // r9
  __int64 v72; // rcx
  unsigned __int64 v73; // rcx
  __int64 v74; // rdx
  unsigned __int64 v75; // r8
  struct _POINTFIX v76; // rdx
  unsigned __int64 v77; // r8
  unsigned __int64 v78; // rdx
  __int64 v79; // rcx
  unsigned __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // r9
  __int64 v83; // r11
  __int64 v84; // r11
  __int64 v85; // rcx
  __int64 v86; // r11
  __int64 v87; // r10
  __int64 v88; // rdx
  __int64 v89; // r10
  __int128 *v90; // rcx
  __int128 v91; // xmm0
  __int64 v92; // xmm1_8
  __int64 v93; // r8
  __int64 v94; // r10
  __int128 *v95; // rcx
  __int128 v96; // xmm0
  __int64 v97; // xmm1_8
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // rcx
  __int64 v101; // r10
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r9
  __int64 v105; // r10
  __int64 v106; // r14
  __int64 v107; // rsi
  __int64 v108; // r9
  __int64 v109; // r10
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r10
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r11
  __int64 v116; // r14
  __int64 v117; // rsi
  __int64 v118; // r9
  __int64 v119; // rdx
  __int64 v120; // r9
  __int64 v121; // r11
  __int64 v122; // r9
  __int64 v123; // r10
  __int64 v124; // r11
  __int64 v125; // rdx
  __int64 v126; // r10
  __int64 v127; // r9
  __int64 v128; // r10
  __int64 v129; // rsi
  __int64 v130; // rdx
  __int64 v131; // r9
  __int64 v132; // r10
  __int64 v133; // r10
  __int64 v134; // r9
  __int64 v135; // rsi
  __int64 v136; // r9
  __int64 v137; // r10
  __int64 v138; // r10
  __int64 v139; // r11
  __int64 v140; // r11
  __int64 v141; // r11
  __int64 v142; // rdx
  __int64 v143; // r9
  __int64 v144; // r9
  __int64 v145; // rdx
  __int64 v146; // r8
  __int64 v147; // r10
  __int64 v148; // r8
  __int64 v149; // r10
  __int64 v150; // r10
  __int64 v151; // r9
  __int64 v152; // r10
  __int64 v153; // r9
  __int64 v154; // r10
  __int64 v155; // r9
  __int64 v156; // r10
  __int64 v157; // rcx
  __int64 v158; // r9
  __int64 v159; // r9
  __int64 v160; // r10
  __int64 v161; // r10
  __int64 v162; // r9
  __int64 v163; // r10
  __int64 v164; // r9
  __int64 v165; // r10
  __int64 v166; // rcx
  __int64 v167; // r9
  __int64 v168; // r11
  __int64 v169; // r11
  __int64 v170; // r9
  __int64 v171; // rdx
  __int64 v172; // r9
  __int64 v173; // r9
  __int64 v174; // r10
  __int64 v175; // rdx
  __int64 v176; // r10
  __int64 v177; // r9
  __int64 v178; // r10
  __int64 v179; // rdx
  __int64 v180; // r9
  __int64 v181; // r10
  __int64 v182; // r10
  __int64 v183; // r9
  __int64 v184; // r11
  __int64 v185; // r9
  __int64 v186; // r10
  __int64 v187; // r10
  __int64 v188; // r15
  __int64 v189; // rdx
  __int64 v190; // r9
  __int64 v191; // r9
  __int64 v192; // rdx
  __int64 v193; // r8
  __int64 v194; // r10
  __int64 v195; // r8
  __int64 v196; // r10
  __int64 v197; // r11
  __int64 v198; // r9
  __int64 v199; // r10
  __int64 v200; // r8
  __int64 v201; // r9
  __int64 v202; // r9
  __int64 v203; // rsi
  __int64 v204; // r9
  __int64 v205; // r11
  __int64 v206; // r10
  __int64 v207; // rcx
  __int64 v208; // r9
  __int64 v209; // r10
  __int64 v210; // r10
  __int64 v211; // r9
  __int64 v212; // r10
  __int64 v213; // r9
  __int64 v214; // r10
  __int64 v215; // r14
  __int64 v216; // r9
  __int64 v217; // rdx
  __int64 v218; // xmm1_8
  __int128 v219; // xmm0
  __int64 v220; // xmm1_8
  __int128 *v221; // rcx
  __int128 v222; // xmm0
  __int64 v223; // xmm1_8
  __int128 v224; // xmm0
  __int64 v225; // xmm1_8
  __int128 v226; // xmm0
  __int64 v227; // xmm1_8
  __int128 v228; // xmm0
  __int64 v229; // xmm1_8
  struct _PLGDDA *v230; // rdx
  __int64 v231[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v232; // [rsp+30h] [rbp-D0h]
  __int64 v233; // [rsp+38h] [rbp-C8h]
  __int64 v234; // [rsp+40h] [rbp-C0h]
  __int64 v235; // [rsp+48h] [rbp-B8h]
  __int64 v236; // [rsp+50h] [rbp-B0h]
  __int64 v237; // [rsp+58h] [rbp-A8h]
  __int64 v238; // [rsp+60h] [rbp-A0h]
  __int64 v239; // [rsp+68h] [rbp-98h]
  __int64 v240; // [rsp+70h] [rbp-90h]
  __int64 v241; // [rsp+78h] [rbp-88h]
  __int64 v242; // [rsp+80h] [rbp-80h]
  __int64 v243; // [rsp+88h] [rbp-78h]
  __int64 v244; // [rsp+90h] [rbp-70h]
  __int64 v245; // [rsp+98h] [rbp-68h]
  __int64 v246; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v247; // [rsp+A8h] [rbp-58h]
  struct _PLGDDA *v248; // [rsp+B8h] [rbp-48h]
  __int64 v249; // [rsp+C0h] [rbp-40h] BYREF
  int v250; // [rsp+C8h] [rbp-38h]
  _BYTE v251[12]; // [rsp+CCh] [rbp-34h] BYREF
  int v252; // [rsp+D8h] [rbp-28h]
  int v253; // [rsp+DCh] [rbp-24h]
  unsigned __int64 v254; // [rsp+E0h] [rbp-20h] BYREF
  struct _POINTFIX v255; // [rsp+E8h] [rbp-18h]
  struct _POINTFIX v256; // [rsp+F0h] [rbp-10h]
  int v257; // [rsp+F8h] [rbp-8h]
  int v258; // [rsp+FCh] [rbp-4h]

  v248 = a1;
  v6 = 0;
  result = PALLOCMEM2(0x318uLL, 1633969223LL, 1);
  v9 = (__int64)result;
  if ( result )
  {
    v10 = a4[1];
    v11 = (unsigned __int64)*a4;
    v12 = a4[2];
    left = a3->left;
    v14 = v12.x + v10.x - v11;
    v256 = v12;
    x = v12.x;
    v16 = HIDWORD(*(unsigned __int64 *)&v12);
    v254 = v11;
    v17 = HIDWORD(v11);
    v255 = v10;
    v18 = HIDWORD(*(unsigned __int64 *)&v10);
    v19 = v18 + v16 - v17;
    v257 = v14;
    v258 = v19;
    if ( left || a3->top )
    {
      LODWORD(v234) = a2->left;
      if ( (unsigned int)bSubOverflow(v234, left) )
        goto LABEL_179;
      top = a3->top;
      LODWORD(v233) = a2->top;
      if ( (unsigned int)bSubOverflow(v233, top) )
        goto LABEL_179;
      LODWORD(v232) = a2->right;
      if ( (unsigned int)bSubOverflow(v232, v21) )
        goto LABEL_179;
      bottom = a2->bottom;
      if ( (unsigned int)bSubOverflow(bottom, top) )
        goto LABEL_179;
      LODWORD(v231[0]) = a3->right;
      if ( (unsigned int)bSubOverflow(v231[0], v23) || (unsigned int)bSubOverflow(a3->bottom, top) )
        goto LABEL_179;
      a3 = (struct _RECTL *)&v251[4];
      *(_DWORD *)&v251[8] = 0;
      LODWORD(v249) = v234 - v25;
      *(_QWORD *)v251 = (unsigned int)(bottom - top);
      HIDWORD(v249) = v233 - top;
      a2 = (struct _RECTL *)&v249;
      v250 = v232 - v25;
      v26 = v24 - top;
      v252 = LODWORD(v231[0]) - v25;
      x = v256.x;
      v253 = v26;
    }
    v27 = 0;
    v28 = (int)v18 > (int)v17 == (int)v18 > v19;
    if ( *((_DWORD *)&v254 + 2 * ((int)v18 > (int)v17 == (int)v18 > v19) + 1) > *((_DWORD *)&v254
                                                                                + 2
                                                                                * (((int)v18 > (int)v17 == (int)v18 > v19) ^ 3LL)
                                                                                + 1) )
      v28 ^= 3u;
    if ( v28 )
    {
      v29 = v28 - 1;
      if ( v29 )
      {
        v30 = v29 - 1;
        if ( v30 )
        {
          if ( v30 == 1 )
          {
            if ( (int)v18 < (int)v16 || (int)v18 <= (int)v16 && v255.x < x )
            {
              v27 = 6;
LABEL_40:
              v31 = a3->bottom - a3->top;
              v32 = a3->right - a3->left;
              goto LABEL_41;
            }
            v27 = 7;
          }
        }
        else
        {
          if ( (int)v17 < v19 || (int)v17 <= v19 && (int)v254 < v14 )
          {
            v27 = 4;
            goto LABEL_40;
          }
          v27 = 5;
        }
      }
      else
      {
        if ( (int)v17 >= v19 && ((int)v17 > v19 || (int)v254 >= v14) )
        {
          v27 = 3;
          goto LABEL_40;
        }
        v27 = 2;
      }
    }
    else if ( (int)v18 >= (int)v16 && ((int)v18 > (int)v16 || v255.x >= x) )
    {
      v27 = 1;
      goto LABEL_40;
    }
    v31 = a3->right - a3->left;
    v32 = a3->bottom - a3->top;
LABEL_41:
    v33 = v32;
    if ( !v31 )
      goto LABEL_179;
    if ( !v32 )
      goto LABEL_179;
    v34 = a2->left;
    v35 = v27;
    v36 = a2->top;
    v37 = 3 * v35;
    v35 *= 2LL;
    v38 = SLODWORD((&aiPlgConst)[v37]);
    v39 = dword_1C02E723C[2 * v37];
    v40 = dword_1C02E7240[2 * v37];
    v41 = dword_1C02E7238[2 * v37];
    v239 = dword_1C02E7234[2 * v37];
    v245 = v39;
    v232 = v38;
    v240 = v40;
    v42 = *((int *)&aiPlgSort + 2 * v35);
    v43 = v39 * v34 + (v33 - 1) * dword_1C02E7244[2 * v37];
    v249 = v239 * v36 + v38 * v34 + (v31 - 1) * v41;
    v44 = dword_1C02E71B4[2 * v35];
    v241 = v40 * v36 + v43;
    v45 = *((int *)&v254 + 2 * v42);
    v46 = *((int *)&v254 + 2 * v42 + 1);
    v47 = dword_1C02E71B8[2 * v35];
    v48 = *((int *)&v254 + 2 * v44) - v45;
    v49 = *((int *)&v254 + 2 * v44 + 1) - v46;
    *(_QWORD *)&v251[4] = v45;
    v50 = *((int *)&v254 + 2 * v47) - v45;
    v51 = *((int *)&v254 + 2 * v47 + 1) - v46;
    v244 = v46;
    v237 = v48;
    v243 = v51;
    if ( v48 )
    {
      if ( (unsigned int)bMulOverflow(v33, v48) )
        goto LABEL_179;
    }
    if ( v49 && (unsigned int)bMulOverflow(v33, v49) )
      goto LABEL_179;
    if ( v50 && (unsigned int)bMulOverflow(v31, v50) )
      goto LABEL_179;
    if ( v51 && (unsigned int)bMulOverflow(v31, v51) )
      goto LABEL_179;
    v52 = v31 * v51;
    v238 = v33 * v48;
    v234 = v31 * v50;
    if ( !(v31 * v51) || (unsigned int)bMulOverflow(v31, v33) || v244 >= 0 && 0x7FFFFFFFFFFFFFFFLL - v244 < 16 )
      goto LABEL_179;
    if ( (unsigned int)bMulOverflow(v31 * v33, v244 + 16) )
      goto LABEL_179;
    if ( (unsigned int)bMulOverflow(v249, v53) )
      goto LABEL_179;
    if ( (unsigned int)bAddOverflow(v55, v54 * v56) )
      goto LABEL_179;
    if ( (unsigned int)bMulOverflow(v241, v52) )
      goto LABEL_179;
    if ( (unsigned int)bAddOverflow(v58, v57 * v52) )
      goto LABEL_179;
    if ( (unsigned int)bSubOverflow(v59 + v60, 1LL) )
      goto LABEL_179;
    v231[0] = v61 - 1;
    if ( (unsigned int)bMulOverflow(v62, 16LL) )
      goto LABEL_179;
    v65 = 16 * v63;
    if ( !v65 )
      goto LABEL_179;
    ROT_DIV(&v246, v64, v65);
    ROT_DIV(&v254, v52, v66);
    QDIV(v9 + 8, v231);
    v70 = *v69;
    v71 = v246;
    v72 = v247;
    *(_OWORD *)(v9 + 24) = v70;
    v73 = *(_QWORD *)(v9 + 32) + v72;
    v74 = v71 + *(_QWORD *)(v9 + 24);
    *(_QWORD *)(v9 + 24) = v74;
    *(_QWORD *)(v9 + 32) = v73;
    if ( v73 >= v67 )
    {
      *(_QWORD *)(v9 + 24) = v74 + 1;
      *(_QWORD *)(v9 + 32) = v73 - v67;
    }
    v75 = v254;
    v76 = v255;
    *(_OWORD *)(v9 + 40) = *(_OWORD *)(v9 + 8);
    v77 = *(_QWORD *)(v9 + 40) + v75;
    v78 = *(_QWORD *)(v9 + 48) + *(_QWORD *)&v76;
    *(_QWORD *)(v9 + 40) = v77;
    *(_QWORD *)(v9 + 48) = v78;
    if ( v78 >= v67 )
    {
      *(_QWORD *)(v9 + 40) = v77 + 1;
      *(_QWORD *)(v9 + 48) = v78 - v67;
    }
    v79 = v247;
    *(_OWORD *)(v9 + 56) = *(_OWORD *)(v9 + 40);
    v80 = *(_QWORD *)(v9 + 64) + v79;
    v81 = v71 + *(_QWORD *)(v9 + 56);
    *(_QWORD *)(v9 + 56) = v81;
    *(_QWORD *)(v9 + 64) = v80;
    if ( v80 >= v67 )
    {
      *(_QWORD *)(v9 + 56) = v81 + 1;
      *(_QWORD *)(v9 + 64) = v80 - v67;
    }
    if ( (unsigned int)bMulOverflow(v232, v68) )
      goto LABEL_179;
    if ( (unsigned int)bMulOverflow(v245, v52) )
      goto LABEL_179;
    v236 = v232 * v83;
    v242 = v82 * v52;
    if ( (unsigned int)bAddOverflow(v232 * v83, v82 * v52) )
      goto LABEL_179;
    if ( (unsigned int)bMulOverflow(v239, v84) )
      goto LABEL_179;
    if ( (unsigned int)bMulOverflow(v240, v52) )
      goto LABEL_179;
    v235 = v85 * v52;
    v231[0] = v239 * v86;
    if ( (unsigned int)bAddOverflow(v239 * v86, v85 * v52) )
      goto LABEL_179;
    ROT_DIV(v9 + 264, v242 + v236, v87);
    v88 = v235 + v231[0];
    *(_QWORD *)(v9 + 280) = v89;
    v91 = *v90;
    v92 = *((_QWORD *)v90 + 2);
    *(_OWORD *)(v9 + 288) = *v90;
    *(_OWORD *)(v9 + 312) = v91;
    *(_OWORD *)(v9 + 336) = v91;
    *(_QWORD *)(v9 + 304) = v92;
    *(_QWORD *)(v9 + 328) = v92;
    *(_QWORD *)(v9 + 352) = v92;
    ROT_DIV(v9 + 360, v88, v93);
    *(_QWORD *)(v9 + 376) = v94;
    v96 = *v95;
    v97 = *((_QWORD *)v95 + 2);
    v98 = v243;
    v99 = v237;
    *(_OWORD *)(v9 + 384) = v96;
    *(_OWORD *)(v9 + 408) = v96;
    *(_OWORD *)(v9 + 432) = v96;
    *(_QWORD *)(v9 + 400) = v97;
    *(_QWORD *)(v9 + 424) = v97;
    *(_QWORD *)(v9 + 448) = v97;
    if ( (unsigned int)bMulOverflow(v99, v98) )
      goto LABEL_179;
    v233 = v100 * v101;
    v236 = v100 * v101;
    if ( (unsigned int)bMulOverflow(v49, v50) )
      goto LABEL_179;
    v235 = v49 * v50;
    if ( (unsigned int)bSubOverflow(v236, v49 * v50) )
      goto LABEL_179;
    v236 = v103 - v102;
    if ( (unsigned int)bMulOverflow(v31, 16LL) )
      goto LABEL_179;
    if ( (unsigned int)bMulOverflow(v33, 16LL) )
      goto LABEL_179;
    if ( (unsigned int)bMulOverflow(v232, v49) )
      goto LABEL_179;
    if ( (unsigned int)bMulOverflow(v104, v105) )
      goto LABEL_179;
    v106 = 16 * v31;
    if ( !v106 )
      goto LABEL_179;
    v107 = 16 * v33;
    if ( !v107 )
      goto LABEL_179;
    ROT_DIV(&v246, v232 * v49, v106);
    ROT_DIV(v231, v108 * v109, v107);
    if ( (unsigned int)bAddOverflow(v246, v231[0]) )
      goto LABEL_179;
    v242 = v111 + v110;
    ROT_DIV(&v246, v239 * v49, v106);
    ROT_DIV(v231, v240 * v112, v107);
    if ( (unsigned int)bAddOverflow(v246, v231[0]) )
      goto LABEL_179;
    v116 = v114 + v113;
    if ( v115 )
    {
      if ( (unsigned int)bMulOverflow(*(_QWORD *)(v9 + 8), 16LL)
        || (unsigned int)bSubOverflow(16 * v118, v244)
        || (unsigned int)bMulOverflow(v238, v120 - v119)
        || *(__int64 *)&v251[4] >= 0 && 0x7FFFFFFFFFFFFFFFLL - *(_QWORD *)&v251[4] < 16 )
      {
        goto LABEL_179;
      }
      if ( (unsigned int)bMulOverflow(v121, *(_QWORD *)&v251[4] + 16LL) )
        goto LABEL_179;
      if ( (unsigned int)bAddOverflow(v123, v122 * v124) )
        goto LABEL_179;
      v127 = v241;
      v128 = v125 + v126;
      v129 = v233;
      if ( v241 )
      {
        if ( (unsigned int)bMulOverflow(v241, v233) )
          goto LABEL_179;
      }
      if ( (unsigned int)bSubOverflow(v128, v129 * v127) )
        goto LABEL_179;
      v133 = v132 - v130;
      if ( v131 )
      {
        if ( (unsigned int)bMulOverflow(v50, v49) )
          goto LABEL_179;
        v135 = v235;
        if ( (unsigned int)bMulOverflow(v134, v235) )
          goto LABEL_179;
      }
      else
      {
        v135 = v235;
      }
      if ( (unsigned int)bAddOverflow(v133, v135 * v131) )
        goto LABEL_179;
      if ( (unsigned int)bSubOverflow(v136 + v137, 1LL) )
        goto LABEL_179;
      v231[0] = v138 - 1;
      if ( (unsigned int)bMulOverflow(16LL, v139) )
        goto LABEL_179;
      v141 = 16 * v140;
      *(_QWORD *)(v9 + 664) = v141;
      *(_QWORD *)(v9 + 472) = v141;
      *(_QWORD *)(v9 + 568) = v141;
      if ( !v141 )
        goto LABEL_179;
      QDIV(v9 + 72, v231);
      if ( (unsigned int)bMulOverflow(16LL, v238) )
        goto LABEL_179;
      if ( (unsigned int)bSubOverflow(*(_QWORD *)(v9 + 40), *(_QWORD *)(v9 + 8)) )
        goto LABEL_179;
      v241 = 16 * v238;
      if ( (unsigned int)bMulOverflow(16 * v238, v143 - v142) )
        goto LABEL_179;
      if ( (unsigned int)bSubOverflow(16 * v144 * v238, v236) )
        goto LABEL_179;
      if ( (unsigned int)bAddOverflow(v147, v146 - v145) )
        goto LABEL_179;
      v231[0] = v148 + v149;
      QDIV(v9 + 120, v231);
      ROT_DIV(v9 + 648, v241, *(_QWORD *)(v9 + 664));
      v150 = v245;
      if ( v243 )
      {
        if ( (unsigned int)bMulOverflow(v245, v237) || (unsigned int)bMulOverflow(v152 * v237, v151) )
          goto LABEL_179;
      }
      v153 = v233 * v150;
      if ( v49 )
      {
        if ( (unsigned int)bMulOverflow(v150, v50) || (unsigned int)bMulOverflow(v154 * v50, v49) )
          goto LABEL_179;
      }
      if ( (unsigned int)bSubOverflow(v153, v135 * v150) )
        goto LABEL_179;
      v117 = v242;
      if ( (unsigned int)bMulOverflow(16LL, v242) )
        goto LABEL_179;
      if ( (unsigned int)bMulOverflow(16 * v117, v238) )
        goto LABEL_179;
      if ( (unsigned int)bSubOverflow(16 * v156 * v117, v155) )
        goto LABEL_179;
      v231[0] = v157 - v158;
      QDIV(v9 + 456, v231);
      if ( v243 )
      {
        if ( (unsigned int)bMulOverflow(v240, v237) || (unsigned int)bMulOverflow(v240 * v159, v160) )
          goto LABEL_179;
      }
      v161 = v240;
      v162 = v233 * v240;
      if ( v49 )
      {
        if ( (unsigned int)bMulOverflow(v240, v50) || (unsigned int)bMulOverflow(v163 * v50, v49) )
          goto LABEL_179;
      }
      if ( (unsigned int)bSubOverflow(v162, v235 * v161)
        || (unsigned int)bMulOverflow(16LL, v116)
        || (unsigned int)bMulOverflow(16 * v116, v238)
        || (unsigned int)bSubOverflow(16 * v165 * v116, v164) )
      {
        goto LABEL_179;
      }
      v231[0] = v166 - v167;
      QDIV(v9 + 552, v231);
      ROT_DIV(v9 + 744, v241, v168);
      *(_QWORD *)(v9 + 760) = v169;
    }
    else
    {
      v117 = v242;
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
    if ( (unsigned int)bMulOverflow(16LL, *(_QWORD *)(v9 + 8))
      || (unsigned int)bSubOverflow(16 * v170, v244)
      || (unsigned int)bMulOverflow(v234, v172 - v171)
      || *(__int64 *)&v251[4] >= 0 && 0x7FFFFFFFFFFFFFFFLL - *(_QWORD *)&v251[4] < 16 )
    {
      goto LABEL_179;
    }
    if ( (unsigned int)bMulOverflow(v52, *(_QWORD *)&v251[4] + 16LL) )
      goto LABEL_179;
    if ( (unsigned int)bAddOverflow(v174, v173 * v52) )
      goto LABEL_179;
    v177 = v249;
    v178 = v175 + v176;
    if ( v249 )
    {
      if ( (unsigned int)bMulOverflow(v249, v233) )
        goto LABEL_179;
    }
    if ( (unsigned int)bAddOverflow(v178, v233 * v177) )
      goto LABEL_179;
    v182 = v179 + v181;
    if ( v180 )
    {
      if ( (unsigned int)bMulOverflow(v50, v49) || (unsigned int)bMulOverflow(v183, v235) )
        goto LABEL_179;
    }
    else
    {
      v184 = v235;
    }
    if ( !(unsigned int)bSubOverflow(v182, v184 * v180) && !(unsigned int)bSubOverflow(v186 - v185, 1LL) )
    {
      v231[0] = v187 - 1;
      if ( !(unsigned int)bMulOverflow(16LL, v52) )
      {
        v188 = 16 * v52;
        *(_QWORD *)(v9 + 688) = v188;
        *(_QWORD *)(v9 + 496) = v188;
        *(_QWORD *)(v9 + 592) = v188;
        if ( v188 )
        {
          QDIV(v9 + 88, v231);
          if ( !(unsigned int)bMulOverflow(16LL, v234)
            && !(unsigned int)bSubOverflow(*(_QWORD *)(v9 + 24), *(_QWORD *)(v9 + 8)) )
          {
            v249 = 16 * v234;
            if ( !(unsigned int)bMulOverflow(16 * v234, v190 - v189)
              && !(unsigned int)bAddOverflow(16 * v191 * v234, v236)
              && !(unsigned int)bAddOverflow(v194, v192 + v193) )
            {
              v231[0] = v195 + v196;
              QDIV(v9 + 104, v231);
              ROT_DIV(v9 + 672, v249, *(_QWORD *)(v9 + 688));
              if ( !v243 || !(unsigned int)bMulOverflow(v232, v237) && !(unsigned int)bMulOverflow(v232 * v198, v199) )
              {
                v200 = v232;
                v201 = v233 * v232;
                if ( !v49 )
                  goto LABEL_164;
                if ( !(unsigned int)bMulOverflow(v232, v50) && !(unsigned int)bMulOverflow(v232 * v50, v49) )
                {
                  v200 = v232;
LABEL_164:
                  if ( !(unsigned int)bSubOverflow(v201, v197 * v200)
                    && !(unsigned int)bMulOverflow(16LL, v117)
                    && !(unsigned int)bMulOverflow(16 * v117, v234) )
                  {
                    v203 = 16 * v234 * v117;
                    if ( !(unsigned int)bAddOverflow(v203, v202) )
                    {
                      v231[0] = v204 + v203;
                      QDIV(v9 + 480, v231);
                      if ( !v206
                        || !(unsigned int)bMulOverflow(v239, v237) && !(unsigned int)bMulOverflow(v208 * v207, v209) )
                      {
                        v210 = v239;
                        v211 = v233 * v239;
                        if ( (!v49
                           || !(unsigned int)bMulOverflow(v239, v50) && !(unsigned int)bMulOverflow(v212 * v50, v49))
                          && !(unsigned int)bSubOverflow(v211, v205 * v210)
                          && !(unsigned int)bMulOverflow(16LL, v116)
                          && !(unsigned int)bMulOverflow(16 * v116, v234) )
                        {
                          v215 = 16 * v214 * v116;
                          if ( !(unsigned int)bAddOverflow(v215, v213) )
                          {
                            v231[0] = v216 + v215;
                            QDIV(v9 + 576, v231);
                            v217 = v249;
                            v218 = *(_QWORD *)(v9 + 688);
                            *(_OWORD *)(v9 + 696) = *(_OWORD *)(v9 + 672);
                            v219 = *(_OWORD *)(v9 + 480);
                            *(_QWORD *)(v9 + 712) = v218;
                            v220 = *(_QWORD *)(v9 + 496);
                            *(_OWORD *)(v9 + 504) = v219;
                            v222 = *v221;
                            *(_QWORD *)(v9 + 520) = v220;
                            v223 = *((_QWORD *)v221 + 2);
                            *(_OWORD *)(v9 + 600) = v222;
                            v224 = *(_OWORD *)(v9 + 648);
                            *(_QWORD *)(v9 + 616) = v223;
                            v225 = *(_QWORD *)(v9 + 664);
                            *(_OWORD *)(v9 + 720) = v224;
                            v226 = *(_OWORD *)(v9 + 456);
                            *(_QWORD *)(v9 + 736) = v225;
                            v227 = *(_QWORD *)(v9 + 472);
                            *(_OWORD *)(v9 + 528) = v226;
                            v228 = *(_OWORD *)(v9 + 552);
                            *(_QWORD *)(v9 + 544) = v227;
                            v229 = *(_QWORD *)(v9 + 568);
                            *(_OWORD *)(v9 + 624) = v228;
                            *(_QWORD *)(v9 + 640) = v229;
                            ROT_DIV(v9 + 768, v217, v188);
                            v230 = v248;
                            *(_QWORD *)(v9 + 784) = v188;
                            v6 = bScalePlgDDALToPlgDDA(v9, v230);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_179:
    Win32FreePool(v9);
    return (void *)v6;
  }
  return result;
}
