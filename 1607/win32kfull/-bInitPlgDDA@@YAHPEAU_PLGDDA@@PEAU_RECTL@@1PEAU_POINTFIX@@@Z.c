/*
 * XREFs of ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C0003FA0
 * Callers:
 *     EngPlgBlt @ 0x1C0001FC0 (EngPlgBlt.c)
 * Callees:
 *     ?bMulOverflow@@YAH_J0@Z @ 0x1C00054A0 (-bMulOverflow@@YAH_J0@Z.c)
 *     ?bAddOverflow@@YAH_J0@Z @ 0x1C00054E0 (-bAddOverflow@@YAH_J0@Z.c)
 *     ROT_DIV @ 0x1C000550C (ROT_DIV.c)
 *     QDIV @ 0x1C0005528 (QDIV.c)
 *     bScalePlgDDALToPlgDDA @ 0x1C0005570 (bScalePlgDDALToPlgDDA.c)
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1C0015990 (-bSubOverflow@@YAHJJ@Z.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall bInitPlgDDA(struct _PLGDDA *a1, struct _RECTL *a2, struct _RECTL *a3, struct _POINTFIX *a4)
{
  unsigned int v6; // ebx
  __int64 result; // rax
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
  __int64 v20; // rdx
  __int64 v21; // r8
  LONG top; // r12d
  LONG bottom; // r13d
  int v24; // ecx
  int v25; // ecx
  __int64 v26; // r14
  int v27; // ecx
  __int64 v28; // r11
  __int64 v29; // rcx
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r12
  __int64 v34; // r10
  __int64 v35; // r15
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // r12
  __int64 v39; // rax
  __int64 v40; // r12
  __int64 v41; // rcx
  __int64 v42; // r12
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 v45; // r9
  __int64 v46; // r10
  __int64 v47; // r13
  __int64 v48; // rax
  __int64 v49; // r13
  __int64 v50; // rsi
  __int64 v51; // r11
  __int64 v52; // rcx
  __int64 v53; // r9
  __int64 v54; // r9
  __int64 v55; // r9
  __int64 v56; // r10
  __int64 v57; // r9
  __int64 v58; // r10
  __int64 v59; // r10
  __int64 v60; // r8
  unsigned __int64 v61; // r10
  _OWORD *v62; // rcx
  __int64 v63; // r9
  __int64 v64; // r12
  __int64 v65; // rdx
  unsigned __int64 v66; // rcx
  unsigned __int64 v67; // r8
  struct _POINTFIX v68; // rdx
  unsigned __int64 v69; // r8
  unsigned __int64 v70; // rdx
  __int64 v71; // rdx
  unsigned __int64 v72; // rcx
  __int64 v73; // r9
  __int64 v74; // r12
  __int64 v75; // rcx
  __int64 v76; // r15
  __int64 v77; // r10
  __int64 v78; // r10
  __int64 v79; // r9
  __int128 *v80; // rcx
  __int128 v81; // xmm0
  __int64 v82; // xmm1_8
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // r10
  __int128 *v86; // rcx
  __int128 v87; // xmm0
  __int64 v88; // xmm1_8
  __int64 v89; // rcx
  __int64 v90; // rcx
  __int64 v91; // r9
  __int64 v92; // r12
  __int64 v93; // r15
  __int64 v94; // r9
  __int64 v95; // r10
  __int64 v96; // r12
  unsigned int v97; // r9d
  __int64 v98; // r11
  __int64 v99; // r10
  __int64 v100; // r10
  __int64 v101; // r11
  __int64 v102; // r14
  __int64 v103; // r9
  __int64 v104; // r11
  __int64 v105; // r10
  __int64 v106; // r11
  __int64 v107; // rcx
  __int64 v108; // r10
  __int64 v109; // r14
  __int64 v110; // r9
  __int64 v111; // r9
  __int64 v112; // r11
  __int64 v113; // r9
  __int64 v114; // r10
  __int64 v115; // r10
  __int64 v116; // r11
  __int64 v117; // r9
  __int64 v118; // r10
  __int64 v119; // rcx
  __int64 v120; // r10
  __int64 v121; // r9
  __int64 v122; // r9
  __int64 v123; // r10
  __int64 v124; // r10
  __int64 v125; // rsi
  __int64 v126; // r9
  __int64 v127; // rcx
  __int64 v128; // r9
  __int64 v129; // r10
  __int64 v130; // r9
  __int64 v131; // r9
  __int64 v132; // r10
  __int64 v133; // r11
  __int64 v134; // r10
  __int64 v135; // r9
  __int64 v136; // r10
  __int64 v137; // r9
  __int64 v138; // r10
  __int64 v139; // r11
  __int64 v140; // r10
  __int64 v141; // r10
  __int64 v142; // r9
  __int64 v143; // r10
  __int64 v144; // rcx
  __int64 v145; // r11
  __int64 v146; // r10
  __int64 v147; // r9
  __int64 v148; // r10
  __int64 v149; // r9
  __int64 v150; // r10
  __int64 v151; // r11
  __int64 v152; // r10
  __int64 v153; // r10
  __int64 v154; // r9
  __int64 v155; // r10
  __int64 v156; // r11
  __int64 v157; // rcx
  __int64 v158; // r9
  __int64 v159; // r9
  __int64 v160; // r9
  __int64 v161; // r10
  __int64 v162; // r10
  __int64 v163; // r9
  __int64 v164; // r10
  __int64 v165; // r9
  __int64 v166; // r10
  __int64 v167; // rsi
  __int64 v168; // r10
  __int64 v169; // r9
  __int64 v170; // r9
  __int64 v171; // r10
  __int64 v172; // r13
  __int64 v173; // r11
  __int64 v174; // r11
  __int64 v175; // r9
  __int64 v176; // rcx
  __int64 v177; // r9
  __int64 v178; // r9
  __int64 v179; // r10
  __int64 v180; // r9
  __int64 v181; // r10
  __int64 v182; // r11
  __int64 v183; // r9
  __int64 v184; // r10
  __int64 v185; // r10
  __int64 v186; // r9
  __int64 v187; // r10
  __int64 v188; // rcx
  __int64 v189; // r10
  __int64 v190; // r9
  __int64 v191; // r10
  __int64 v192; // r9
  __int64 v193; // r10
  __int64 v194; // rcx
  __int64 v195; // r9
  __int64 v196; // r9
  __int64 v197; // r15
  __int64 v198; // r9
  __int64 v199; // r12
  __int64 v200; // r15
  __int64 v201; // r9
  __int64 v202; // rsi
  __int64 v203; // r9
  __int64 v204; // r9
  __int64 v205; // xmm1_8
  __int128 *v206; // r10
  __int128 v207; // xmm0
  __int64 v208; // xmm1_8
  __int128 *v209; // rcx
  __int128 v210; // xmm0
  __int64 v211; // xmm1_8
  __int128 v212; // xmm0
  __int64 v213; // xmm1_8
  __int128 v214; // xmm0
  __int64 v215; // xmm1_8
  __int128 v216; // xmm0
  __int64 v217; // xmm1_8
  __int64 v218; // r11
  struct _PLGDDA *v219; // rdx
  __int64 v220[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v221; // [rsp+30h] [rbp-D0h]
  __int64 v222; // [rsp+38h] [rbp-C8h]
  __int64 v223; // [rsp+40h] [rbp-C0h]
  __int64 v224; // [rsp+48h] [rbp-B8h]
  __int64 v225; // [rsp+50h] [rbp-B0h]
  __int64 v226; // [rsp+58h] [rbp-A8h]
  __int64 v227; // [rsp+60h] [rbp-A0h]
  __int64 v228; // [rsp+68h] [rbp-98h]
  __int64 v229; // [rsp+70h] [rbp-90h]
  __int64 v230; // [rsp+78h] [rbp-88h]
  __int64 v231; // [rsp+80h] [rbp-80h]
  __int64 v232; // [rsp+88h] [rbp-78h]
  __int64 v233; // [rsp+90h] [rbp-70h]
  __int64 v234; // [rsp+98h] [rbp-68h]
  __int64 v235; // [rsp+A0h] [rbp-60h]
  __int64 v236; // [rsp+A8h] [rbp-58h]
  struct _PLGDDA *v237; // [rsp+B0h] [rbp-50h]
  __int64 v238; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v239; // [rsp+C0h] [rbp-40h]
  __int64 v240; // [rsp+D0h] [rbp-30h] BYREF
  int v241; // [rsp+D8h] [rbp-28h]
  int v242; // [rsp+DCh] [rbp-24h]
  unsigned __int64 v243; // [rsp+E0h] [rbp-20h] BYREF
  struct _POINTFIX v244; // [rsp+E8h] [rbp-18h]
  struct _POINTFIX v245; // [rsp+F0h] [rbp-10h]
  int v246; // [rsp+F8h] [rbp-8h]
  int v247; // [rsp+FCh] [rbp-4h]

  v237 = a1;
  v6 = 0;
  result = PALLOCMEM2(0x318uLL);
  v9 = result;
  if ( result )
  {
    v10 = a4[1];
    v11 = (unsigned __int64)*a4;
    v12 = a4[2];
    left = a3->left;
    v14 = v12.x + v10.x - v11;
    v245 = v12;
    x = v12.x;
    v16 = HIDWORD(*(unsigned __int64 *)&v12);
    v243 = v11;
    v17 = HIDWORD(v11);
    v244 = v10;
    v18 = HIDWORD(*(unsigned __int64 *)&v10);
    v19 = v18 + v16 - v17;
    v246 = v14;
    v247 = v19;
    if ( left || a3->top )
    {
      LODWORD(v223) = a2->left;
      if ( (unsigned int)bSubOverflow(v223, left) )
        goto LABEL_235;
      top = a3->top;
      LODWORD(v221) = a2->top;
      if ( (unsigned int)bSubOverflow(v221, top) )
        goto LABEL_235;
      LODWORD(v222) = a2->right;
      if ( (unsigned int)bSubOverflow(v222, v21) )
        goto LABEL_235;
      bottom = a2->bottom;
      if ( (unsigned int)bSubOverflow(bottom, top) )
        goto LABEL_235;
      LODWORD(v220[0]) = a3->right;
      if ( (unsigned int)bSubOverflow(v220[0], v21) || (unsigned int)bSubOverflow(a3->bottom, top) )
        goto LABEL_235;
      a3 = (struct _RECTL *)&v238;
      v238 = 0LL;
      LODWORD(v240) = v223 - v21;
      v242 = bottom - top;
      HIDWORD(v240) = v221 - top;
      a2 = (struct _RECTL *)&v240;
      v241 = v222 - v21;
      v25 = v24 - top;
      LODWORD(v239) = LODWORD(v220[0]) - v21;
      x = v245.x;
      HIDWORD(v239) = v25;
    }
    v20 = 0LL;
    v21 = (int)v18 > (int)v17 == (int)v18 > v19;
    if ( *((_DWORD *)&v243 + 2 * v21 + 1) > *((_DWORD *)&v243 + 2 * (v21 ^ 3) + 1) )
      v21 = (unsigned int)v21 ^ 3;
    if ( (_DWORD)v21 )
    {
      v21 = (unsigned int)(v21 - 1);
      if ( (_DWORD)v21 )
      {
        v21 = (unsigned int)(v21 - 1);
        if ( (_DWORD)v21 )
        {
          if ( (_DWORD)v21 == 1 )
          {
            if ( (int)v18 < (int)v16 || (int)v18 <= (int)v16 && v244.x < x )
            {
              v20 = 6LL;
LABEL_40:
              v26 = a3->bottom - a3->top;
              v27 = a3->right - a3->left;
              goto LABEL_41;
            }
            v20 = 7LL;
          }
        }
        else
        {
          if ( (int)v17 < v19 || (int)v17 <= v19 && (int)v243 < v14 )
          {
            v20 = 4LL;
            goto LABEL_40;
          }
          v20 = 5LL;
        }
      }
      else
      {
        if ( (int)v17 >= v19 && ((int)v17 > v19 || (int)v243 >= v14) )
        {
          v20 = 3LL;
          goto LABEL_40;
        }
        v20 = 2LL;
      }
    }
    else if ( (int)v18 >= (int)v16 && ((int)v18 > (int)v16 || v244.x >= x) )
    {
      v20 = 1LL;
      goto LABEL_40;
    }
    v26 = a3->right - a3->left;
    v27 = a3->bottom - a3->top;
LABEL_41:
    v28 = v27;
    if ( !v26 )
      goto LABEL_235;
    if ( !v27 )
      goto LABEL_235;
    v29 = a2->left;
    v30 = (int)v20;
    v31 = a2->top;
    v32 = 3 * v30;
    v30 *= 2LL;
    v33 = SLODWORD((&aiPlgConst)[v32]);
    v34 = dword_1C02ED760[2 * v32];
    v35 = dword_1C02ED75C[2 * v32];
    v36 = dword_1C02ED758[2 * v32];
    v226 = dword_1C02ED754[2 * v32];
    v225 = v33;
    v37 = v33 * v29;
    v38 = dword_1C02ED764[2 * v32];
    v229 = v34;
    v230 = v35;
    v233 = v226 * v31 + v37 + (v26 - 1) * v36;
    v39 = *((int *)&aiPlgSort + 2 * v30);
    v40 = v35 * v29 + (v28 - 1) * v38;
    v41 = dword_1C02ED6D4[2 * v30];
    v42 = v34 * v31 + v40;
    v240 = v42;
    v20 = *((int *)&v243 + 2 * v39 + 1);
    v21 = *((int *)&v243 + 2 * v39);
    v43 = dword_1C02ED6D8[2 * v30];
    v44 = *((int *)&v243 + 2 * v41) - v21;
    v45 = *((int *)&v243 + 2 * v41 + 1) - v20;
    v232 = v21;
    v46 = *((int *)&v243 + 2 * v43) - v21;
    v47 = *((int *)&v243 + 2 * v43 + 1) - v20;
    v231 = v20;
    v221 = v44;
    v227 = v46;
    v224 = v45;
    v222 = v47;
    if ( v44 )
    {
      if ( (unsigned int)bMulOverflow(v28, v44) )
        goto LABEL_235;
    }
    if ( v45 && (unsigned int)bMulOverflow(v28, v45) )
      goto LABEL_235;
    if ( v46 && (unsigned int)bMulOverflow(v26, v46) )
      goto LABEL_235;
    if ( v47 && (unsigned int)bMulOverflow(v26, v47) )
      goto LABEL_235;
    v48 = v44;
    v49 = v26 * v47;
    v50 = v28 * v45;
    v223 = v28 * v48;
    v228 = v26 * v46;
    if ( !v49 || (unsigned int)bMulOverflow(v26, v28) || v231 >= 0 && 0x7FFFFFFFFFFFFFFFLL - v231 < 16 )
      goto LABEL_235;
    if ( (unsigned int)bMulOverflow(v26 * v51, v231 + 16) )
      goto LABEL_235;
    if ( (unsigned int)bMulOverflow(v233, v50) )
      goto LABEL_235;
    if ( (unsigned int)bAddOverflow(v53, v52 * v50) )
      goto LABEL_235;
    if ( (unsigned int)bMulOverflow(v42, v49) )
      goto LABEL_235;
    if ( (unsigned int)bAddOverflow(v54, v42 * v49) )
      goto LABEL_235;
    v57 = v20 + v55;
    if ( v57 < 0 && (unsigned __int64)(v57 + 0x7FFFFFFFFFFFFFFFLL) > 0x7FFFFFFFFFFFFFFELL )
      goto LABEL_235;
    v220[0] = v57 - 1;
    if ( (unsigned int)bMulOverflow(v56, 16LL) )
      goto LABEL_235;
    v59 = 16 * v58;
    if ( !v59 )
      goto LABEL_235;
    ROT_DIV(&v238, v50, v59);
    ROT_DIV(&v243, v49, v60);
    QDIV(v9 + 8, v220);
    v63 = v238;
    v64 = v239;
    *(_OWORD *)(v9 + 24) = *v62;
    v65 = v63 + *(_QWORD *)(v9 + 24);
    v66 = v64 + *(_QWORD *)(v9 + 32);
    *(_QWORD *)(v9 + 24) = v65;
    *(_QWORD *)(v9 + 32) = v66;
    if ( v66 >= v61 )
    {
      *(_QWORD *)(v9 + 24) = v65 + 1;
      *(_QWORD *)(v9 + 32) = v66 - v61;
    }
    v67 = v243;
    v68 = v244;
    *(_OWORD *)(v9 + 40) = *(_OWORD *)(v9 + 8);
    v69 = *(_QWORD *)(v9 + 40) + v67;
    v70 = *(_QWORD *)(v9 + 48) + *(_QWORD *)&v68;
    *(_QWORD *)(v9 + 40) = v69;
    *(_QWORD *)(v9 + 48) = v70;
    if ( v70 >= v61 )
    {
      *(_QWORD *)(v9 + 40) = v69 + 1;
      *(_QWORD *)(v9 + 48) = v70 - v61;
    }
    *(_OWORD *)(v9 + 56) = *(_OWORD *)(v9 + 40);
    v71 = v63 + *(_QWORD *)(v9 + 56);
    v72 = v64 + *(_QWORD *)(v9 + 64);
    *(_QWORD *)(v9 + 56) = v71;
    *(_QWORD *)(v9 + 64) = v72;
    if ( v72 >= v61 )
    {
      *(_QWORD *)(v9 + 56) = v71 + 1;
      *(_QWORD *)(v9 + 64) = v72 - v61;
    }
    if ( (unsigned int)bMulOverflow(v225, v50) )
      goto LABEL_235;
    if ( (unsigned int)bMulOverflow(v35, v49) )
      goto LABEL_235;
    v74 = v35 * v49;
    v238 = v73 * v50;
    if ( (unsigned int)bAddOverflow(v73 * v50, v35 * v49) )
      goto LABEL_235;
    if ( (unsigned int)bMulOverflow(v226, v50) )
      goto LABEL_235;
    if ( (unsigned int)bMulOverflow(v229, v49) )
      goto LABEL_235;
    v76 = v226 * v50;
    if ( (unsigned int)bAddOverflow(v226 * v50, v75 * v49) )
      goto LABEL_235;
    ROT_DIV(v9 + 264, v74 + v238, v77);
    *(_QWORD *)(v9 + 280) = v78;
    v81 = *v80;
    v82 = *((_QWORD *)v80 + 2);
    *(_OWORD *)(v9 + 288) = *v80;
    *(_OWORD *)(v9 + 312) = v81;
    *(_OWORD *)(v9 + 336) = v81;
    *(_QWORD *)(v9 + 304) = v82;
    *(_QWORD *)(v9 + 328) = v82;
    *(_QWORD *)(v9 + 352) = v82;
    ROT_DIV(v9 + 360, v76 + v79, v83);
    v84 = v222;
    *(_QWORD *)(v9 + 376) = v85;
    v87 = *v86;
    v88 = *((_QWORD *)v86 + 2);
    v89 = v221;
    *(_OWORD *)(v9 + 384) = v87;
    *(_OWORD *)(v9 + 408) = v87;
    *(_OWORD *)(v9 + 432) = v87;
    *(_QWORD *)(v9 + 400) = v88;
    *(_QWORD *)(v9 + 424) = v88;
    *(_QWORD *)(v9 + 448) = v88;
    if ( (unsigned int)bMulOverflow(v89, v84) )
      goto LABEL_235;
    v92 = v227;
    v93 = v90 * v91;
    if ( (unsigned int)bMulOverflow(v224, v227) )
      goto LABEL_235;
    v96 = v95 * v92;
    if ( (v96 ^ v93) < 0 )
    {
      if ( v93 < 0 )
      {
        if ( v93 < (__int64)(v96 + 0x8000000000000000uLL) )
          goto LABEL_235;
      }
      else if ( v93 > v96 + 0x7FFFFFFFFFFFFFFFLL )
      {
        goto LABEL_235;
      }
    }
    v234 = v94 - v96;
    if ( (unsigned int)bMulOverflow(v26, 16LL) )
      goto LABEL_235;
    if ( (unsigned int)bMulOverflow(v98, v97) )
      goto LABEL_235;
    if ( (unsigned int)bMulOverflow(v225, v99) )
      goto LABEL_235;
    if ( (unsigned int)bMulOverflow(v230, v222) )
      goto LABEL_235;
    v102 = 16 * v26;
    if ( !v102 )
      goto LABEL_235;
    if ( !(16 * v101) )
      goto LABEL_235;
    ROT_DIV(v220, v225 * v100, v102);
    ROT_DIV(&v238, v103 * v222, v104);
    v235 = v238;
    v236 = v220[0];
    if ( (unsigned int)bAddOverflow(v220[0], v238) )
      goto LABEL_235;
    ROT_DIV(v220, v226 * v105, v102);
    ROT_DIV(&v238, v229 * v222, v106);
    if ( (unsigned int)bAddOverflow(v220[0], v238) )
      goto LABEL_235;
    v238 = v107 + v20;
    if ( v50 )
    {
      if ( (unsigned int)bMulOverflow(*(_QWORD *)(v9 + 8), 16LL) )
        goto LABEL_235;
      v111 = 16 * v110;
      if ( (v231 ^ v111) < 0 )
      {
        if ( v111 < 0 )
        {
          if ( v111 < (__int64)(v231 + 0x8000000000000000uLL) )
            goto LABEL_235;
        }
        else if ( v111 > v231 + 0x7FFFFFFFFFFFFFFFLL )
        {
          goto LABEL_235;
        }
      }
      if ( (unsigned int)bMulOverflow(v223, v111 - v231) || v232 >= 0 && v112 - v232 < 16 )
        goto LABEL_235;
      if ( (unsigned int)bMulOverflow(v50, v232 + 16) )
        goto LABEL_235;
      if ( (unsigned int)bAddOverflow(v114, v113 * v50) )
        goto LABEL_235;
      v117 = v240;
      v118 = v20 + v115;
      if ( v240 )
      {
        if ( (unsigned int)bMulOverflow(v240, v93) )
          goto LABEL_235;
      }
      v119 = v93 * v117;
      if ( (v118 ^ (v93 * v117)) < 0 )
      {
        if ( v118 < 0 )
        {
          if ( v118 < (__int64)(v119 + 0x8000000000000000uLL) )
            goto LABEL_235;
        }
        else if ( v118 > v119 + v116 )
        {
          goto LABEL_235;
        }
      }
      v109 = v224;
      v120 = v118 - v119;
      if ( v117 && ((unsigned int)bMulOverflow(v227, v224) || (unsigned int)bMulOverflow(v121, v96)) )
        goto LABEL_235;
      if ( (unsigned int)bAddOverflow(v120, v96 * v117) )
        goto LABEL_235;
      v124 = v122 + v123;
      if ( v124 < 0 && (unsigned __int64)(v124 + 0x7FFFFFFFFFFFFFFFLL) > 0x7FFFFFFFFFFFFFFELL )
        goto LABEL_235;
      v220[0] = v124 - 1;
      if ( (unsigned int)bMulOverflow(16LL, v50) )
        goto LABEL_235;
      v125 = 16 * v50;
      *(_QWORD *)(v9 + 664) = v125;
      *(_QWORD *)(v9 + 472) = v125;
      *(_QWORD *)(v9 + 568) = v125;
      if ( !v125 )
        goto LABEL_235;
      QDIV(v9 + 72, v220);
      if ( (unsigned int)bMulOverflow(16LL, v223) )
        goto LABEL_235;
      v126 = *(_QWORD *)(v9 + 40);
      v127 = *(_QWORD *)(v9 + 8);
      if ( (v127 ^ v126) < 0 )
      {
        if ( v126 < 0 )
        {
          if ( v126 < (__int64)(v127 + 0x8000000000000000uLL) )
            goto LABEL_235;
        }
        else if ( v126 > v127 + 0x7FFFFFFFFFFFFFFFLL )
        {
          goto LABEL_235;
        }
      }
      v224 = 16 * v223;
      if ( (unsigned int)bMulOverflow(16 * v223, v126 - v127) )
        goto LABEL_235;
      v130 = 16 * v223 * v128;
      if ( (v130 ^ v234) < 0 )
      {
        if ( v130 < 0 )
        {
          if ( v130 < (__int64)(v234 + 0x8000000000000000uLL) )
            goto LABEL_235;
        }
        else if ( v130 > v234 + 0x7FFFFFFFFFFFFFFFLL )
        {
          goto LABEL_235;
        }
      }
      if ( (unsigned int)bAddOverflow(v129, v130 - v234) )
        goto LABEL_235;
      v220[0] = v131 + v132;
      QDIV(v9 + 120, v220);
      ROT_DIV(v9 + 648, v224, *(_QWORD *)(v9 + 664));
      v134 = v230;
      if ( v222 )
      {
        if ( (unsigned int)bMulOverflow(v230, v221) || (unsigned int)bMulOverflow(v136 * v221, v135) )
          goto LABEL_235;
      }
      v137 = v93 * v134;
      if ( v109 )
      {
        if ( (unsigned int)bMulOverflow(v134, v133) || (unsigned int)bMulOverflow(v138 * v139, v109) )
          goto LABEL_235;
      }
      v140 = v96 * v134;
      if ( (v137 ^ v140) < 0 )
      {
        if ( v137 < 0 )
        {
          if ( v137 < (__int64)(v140 + 0x8000000000000000uLL) )
            goto LABEL_235;
        }
        else if ( v137 > v140 + 0x7FFFFFFFFFFFFFFFLL )
        {
          goto LABEL_235;
        }
      }
      if ( (unsigned int)bMulOverflow(16LL, v235 + v236) || (unsigned int)bMulOverflow(16 * v141, v223) )
        goto LABEL_235;
      v144 = 16 * v223 * v143;
      if ( (v142 ^ v144) < 0 )
      {
        if ( ((v223 * v143) & 0x800000000000000LL) != 0 )
        {
          if ( v144 < (__int64)(v142 + 0x8000000000000000uLL) )
            goto LABEL_235;
        }
        else if ( v144 > v142 + 0x7FFFFFFFFFFFFFFFLL )
        {
          goto LABEL_235;
        }
      }
      v220[0] = v144 - v142;
      QDIV(v9 + 456, v220);
      v146 = v229;
      if ( v222 && ((unsigned int)bMulOverflow(v229, v221) || (unsigned int)bMulOverflow(v148 * v221, v147)) )
        goto LABEL_235;
      v149 = v93 * v146;
      if ( v109 )
      {
        if ( (unsigned int)bMulOverflow(v146, v145) || (unsigned int)bMulOverflow(v150 * v151, v109) )
          goto LABEL_235;
      }
      v152 = v96 * v146;
      if ( (v149 ^ v152) < 0 )
      {
        if ( v149 < 0 )
        {
          if ( v149 < (__int64)(v152 + 0x8000000000000000uLL) )
            goto LABEL_235;
        }
        else if ( v149 > v152 + 0x7FFFFFFFFFFFFFFFLL )
        {
          goto LABEL_235;
        }
      }
      if ( (unsigned int)bMulOverflow(16LL, v238) || (unsigned int)bMulOverflow(16 * v153, v223) )
        goto LABEL_235;
      v157 = 16 * v156 * v155;
      if ( (v154 ^ v157) < 0 )
      {
        if ( ((v156 * v155) & 0x800000000000000LL) != 0 )
        {
          if ( v157 < (__int64)(v154 + 0x8000000000000000uLL) )
            goto LABEL_235;
        }
        else if ( v157 > v154 + 0x7FFFFFFFFFFFFFFFLL )
        {
          goto LABEL_235;
        }
      }
      v220[0] = v157 - v154;
      QDIV(v9 + 552, v220);
      ROT_DIV(v9 + 744, v224, v125);
      *(_QWORD *)(v9 + 760) = v125;
    }
    else
    {
      *(_QWORD *)(v9 + 648) = 0LL;
      v109 = v108;
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
    if ( !(unsigned int)bMulOverflow(16LL, *(_QWORD *)(v9 + 8)) )
    {
      v159 = 16 * v158;
      if ( (v231 ^ v159) < 0 )
      {
        if ( v159 < 0 )
        {
          if ( v159 < (__int64)(v231 + 0x8000000000000000uLL) )
            goto LABEL_235;
        }
        else if ( v159 > v231 + 0x7FFFFFFFFFFFFFFFLL )
        {
          goto LABEL_235;
        }
      }
      if ( (unsigned int)bMulOverflow(v228, v159 - v231) || v232 >= 0 && 0x7FFFFFFFFFFFFFFFLL - v232 < 16 )
        goto LABEL_235;
      if ( (unsigned int)bMulOverflow(v49, v232 + 16) )
        goto LABEL_235;
      if ( (unsigned int)bAddOverflow(v161, v160 * v49) )
        goto LABEL_235;
      v163 = v233;
      v164 = v20 + v162;
      if ( v233 )
      {
        if ( (unsigned int)bMulOverflow(v233, v93) )
          goto LABEL_235;
      }
      if ( (unsigned int)bAddOverflow(v164, v93 * v163) )
        goto LABEL_235;
      v167 = v227;
      v168 = v20 + v166;
      if ( v165 )
      {
        if ( (unsigned int)bMulOverflow(v227, v109) || (unsigned int)bMulOverflow(v169, v96) )
          goto LABEL_235;
      }
      v170 = v96 * v165;
      if ( (v168 ^ v170) < 0 )
      {
        if ( v168 < 0 )
        {
          if ( v168 < (__int64)(v170 + 0x8000000000000000uLL) )
            goto LABEL_235;
        }
        else if ( v168 > v170 + 0x7FFFFFFFFFFFFFFFLL )
        {
          goto LABEL_235;
        }
      }
      v171 = v168 - v170;
      if ( v171 < 0 && (unsigned __int64)(v171 + 0x7FFFFFFFFFFFFFFFLL) > 0x7FFFFFFFFFFFFFFELL )
        goto LABEL_235;
      v220[0] = v171 - 1;
      if ( (unsigned int)bMulOverflow(16LL, v49) )
        goto LABEL_235;
      v172 = 16 * v49;
      *(_QWORD *)(v9 + 688) = v172;
      *(_QWORD *)(v9 + 496) = v172;
      *(_QWORD *)(v9 + 592) = v172;
      if ( !v172 )
        goto LABEL_235;
      QDIV(v9 + 88, v220);
      if ( (unsigned int)bMulOverflow(16LL, v173) )
        goto LABEL_235;
      v175 = *(_QWORD *)(v9 + 24);
      v176 = *(_QWORD *)(v9 + 8);
      if ( (v176 ^ v175) < 0 )
      {
        if ( v175 < 0 )
        {
          if ( v175 < (__int64)(v176 + 0x8000000000000000uLL) )
            goto LABEL_235;
        }
        else if ( v175 > v176 + 0x7FFFFFFFFFFFFFFFLL )
        {
          goto LABEL_235;
        }
      }
      if ( (unsigned int)bMulOverflow(16 * v174, v175 - v176)
        || (unsigned int)bAddOverflow(16 * v228 * v177, v234)
        || (unsigned int)bAddOverflow(v179, v20 + v178) )
      {
        goto LABEL_235;
      }
      v220[0] = v180 + v181;
      QDIV(v9 + 104, v220);
      ROT_DIV(v9 + 672, v182, *(_QWORD *)(v9 + 688));
      if ( v222 )
      {
        if ( (unsigned int)bMulOverflow(v225, v221) || (unsigned int)bMulOverflow(v225 * v184, v183) )
          goto LABEL_235;
      }
      else
      {
        v185 = v225;
      }
      v186 = v185 * v93;
      if ( !v109 || !(unsigned int)bMulOverflow(v185, v167) && !(unsigned int)bMulOverflow(v187 * v167, v109) )
      {
        v188 = v185 * v96;
        if ( (v186 ^ (v185 * v96)) < 0 )
        {
          if ( v186 < 0 )
          {
            if ( v186 < (__int64)(v188 + 0x8000000000000000uLL) )
              goto LABEL_235;
          }
          else if ( v186 > v188 + 0x7FFFFFFFFFFFFFFFLL )
          {
            goto LABEL_235;
          }
        }
        if ( (unsigned int)bMulOverflow(16LL, v235 + v236) )
          goto LABEL_235;
        if ( (unsigned int)bMulOverflow(16 * v189, v228) )
          goto LABEL_235;
        if ( (unsigned int)bAddOverflow(16 * v228 * v191, v190) )
          goto LABEL_235;
        v220[0] = v192 + v193;
        QDIV(v9 + 480, v220);
        if ( v222 )
        {
          if ( (unsigned int)bMulOverflow(v226, v221) || (unsigned int)bMulOverflow(v221 * v194, v195) )
            goto LABEL_235;
        }
        v196 = v226;
        v197 = v226 * v93;
        if ( v109 )
        {
          if ( (unsigned int)bMulOverflow(v226, v167) || (unsigned int)bMulOverflow(v198 * v167, v109) )
            goto LABEL_235;
        }
        v199 = v196 * v96;
        if ( (v197 ^ v199) >= 0 )
          goto LABEL_231;
        if ( v197 < 0 )
        {
          if ( v197 >= (__int64)(v199 + 0x8000000000000000uLL) )
          {
LABEL_231:
            v200 = v197 - v199;
            if ( !(unsigned int)bMulOverflow(16LL, v238) )
            {
              v202 = v228;
              if ( !(unsigned int)bMulOverflow(16 * v201, v228) && !(unsigned int)bAddOverflow(16 * v202 * v203, v200) )
              {
                v220[0] = v200 + v204;
                QDIV(v9 + 576, v220);
                v205 = *(_QWORD *)(v9 + 688);
                *(_OWORD *)(v9 + 696) = *(_OWORD *)(v9 + 672);
                v207 = *v206;
                *(_QWORD *)(v9 + 712) = v205;
                v208 = *((_QWORD *)v206 + 2);
                *(_OWORD *)(v9 + 504) = v207;
                v210 = *v209;
                *(_QWORD *)(v9 + 520) = v208;
                v211 = *((_QWORD *)v209 + 2);
                *(_OWORD *)(v9 + 600) = v210;
                v212 = *(_OWORD *)(v9 + 648);
                *(_QWORD *)(v9 + 616) = v211;
                v213 = *(_QWORD *)(v9 + 664);
                *(_OWORD *)(v9 + 720) = v212;
                v214 = *(_OWORD *)(v9 + 456);
                *(_QWORD *)(v9 + 736) = v213;
                v215 = *(_QWORD *)(v9 + 472);
                *(_OWORD *)(v9 + 528) = v214;
                v216 = *(_OWORD *)(v9 + 552);
                *(_QWORD *)(v9 + 544) = v215;
                v217 = *(_QWORD *)(v9 + 568);
                *(_OWORD *)(v9 + 624) = v216;
                *(_QWORD *)(v9 + 640) = v217;
                ROT_DIV(v9 + 768, v218, v172);
                v219 = v237;
                *(_QWORD *)(v9 + 784) = v172;
                v6 = bScalePlgDDALToPlgDDA(v9, v219);
              }
            }
          }
        }
        else if ( v197 <= v199 + 0x7FFFFFFFFFFFFFFFLL )
        {
          goto LABEL_231;
        }
      }
    }
LABEL_235:
    Win32FreePool(v9, v20, v21);
    return v6;
  }
  return result;
}
