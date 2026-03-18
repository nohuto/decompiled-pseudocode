/*
 * XREFs of RenderNineGridInternal @ 0x1400DFE90
 * Callers:
 *     RenderNineGrid @ 0x1400DF6B8 (RenderNineGrid.c)
 * Callees:
 *     DNG_StretchCol @ 0x1400DFD00 (DNG_StretchCol.c)
 *     DNG_DrawRow @ 0x1400E0D70 (DNG_DrawRow.c)
 *     DNG_InitStretch @ 0x1400E11C0 (DNG_InitStretch.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

unsigned __int64 __fastcall RenderNineGridInternal(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        int *a5,
        _DWORD *a6,
        int a7,
        int a8)
{
  unsigned __int64 v8; // rsi
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 v12; // rax
  int v13; // r14d
  unsigned __int64 v14; // rbx
  unsigned __int64 result; // rax
  int v16; // edi
  unsigned __int64 v17; // r10
  int v18; // esi
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r13
  int v21; // r11d
  int v22; // eax
  int v23; // r12d
  int v24; // eax
  __int64 v25; // rdx
  int v26; // r8d
  __int64 v27; // r15
  __int64 v28; // r9
  int v29; // ebx
  int v30; // ecx
  int v31; // edx
  int v32; // r11d
  int v33; // eax
  int v34; // r15d
  int v35; // r9d
  int v36; // r9d
  unsigned int v37; // r8d
  int v38; // edx
  unsigned int v39; // r15d
  int v40; // ecx
  int v41; // eax
  __int64 v42; // r9
  unsigned __int64 v43; // rtt
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  int v46; // r9d
  int v47; // r9d
  int v48; // esi
  _DWORD *v49; // r14
  int v50; // edi
  unsigned int v51; // edx
  int v52; // ecx
  char v53; // r15
  int v54; // eax
  int v55; // edx
  int v56; // r11d
  int v57; // esi
  int v58; // r9d
  int v59; // r8d
  int v60; // r9d
  int v61; // edx
  int v62; // ecx
  int v63; // edi
  int v64; // r8d
  int v65; // r14d
  __int64 v66; // r11
  __int64 v67; // r15
  int v68; // esi
  int v69; // ecx
  unsigned __int64 v70; // r8
  unsigned __int64 v71; // rdi
  unsigned __int64 v72; // rax
  int v73; // edx
  unsigned __int64 v74; // rsi
  unsigned __int64 v75; // r14
  unsigned __int64 v76; // rcx
  __int64 v77; // rdi
  unsigned int v78; // r14d
  __int64 v79; // r15
  int v80; // r8d
  char *v81; // rcx
  const void *v82; // rdx
  char *v83; // r9
  int v84; // r11d
  int v85; // r10d
  __int64 v86; // rsi
  unsigned __int64 v87; // kr08_8
  __int64 v88; // rcx
  unsigned __int64 v89; // kr10_8
  __int64 v90; // rdi
  int v91; // eax
  __int64 v92; // rbx
  __int64 v93; // rdi
  __int64 v94; // rbx
  int v95; // eax
  int v96; // r12d
  __int64 v97; // rbx
  __int64 v98; // rcx
  int v99; // r15d
  __int64 v100; // r14
  int v101; // r8d
  __int64 v102; // rdi
  const void *v103; // rdx
  char *v104; // rcx
  char *v105; // r9
  int v106; // edx
  __int64 v107; // rdi
  __int64 v108; // r12
  int v109; // edx
  int v110; // eax
  int v111; // ecx
  int v112; // r15d
  int v113; // ebx
  __int64 v114; // rdi
  int v115; // r14d
  __int64 v116; // rsi
  const void *v117; // rdx
  char *v118; // rcx
  char *v119; // r9
  int v120; // r9d
  unsigned __int64 v121; // r11
  unsigned __int64 v122; // rdx
  unsigned __int64 v123; // r10
  int v124; // edi
  __int64 v125; // r13
  __int64 v126; // r15
  __int64 v127; // rdx
  __int64 v128; // rcx
  unsigned __int64 v129; // kr18_8
  __int64 v130; // r9
  __int64 v131; // r10
  __int64 v132; // r11
  __int64 v133; // rbx
  __int64 v134; // r10
  unsigned int *v135; // rdx
  unsigned int *v136; // r8
  __int64 v137; // r9
  unsigned int v138; // ecx
  int v139; // [rsp+38h] [rbp-D0h]
  int v140; // [rsp+38h] [rbp-D0h]
  int v141; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v142; // [rsp+40h] [rbp-C8h]
  int v143; // [rsp+40h] [rbp-C8h]
  int v144; // [rsp+48h] [rbp-C0h]
  int v145; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v146; // [rsp+50h] [rbp-B8h]
  int v147; // [rsp+50h] [rbp-B8h]
  __int64 i; // [rsp+50h] [rbp-B8h]
  int v149; // [rsp+50h] [rbp-B8h]
  int v150; // [rsp+58h] [rbp-B0h]
  unsigned int v151; // [rsp+60h] [rbp-A8h]
  int v152; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v153; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v154; // [rsp+70h] [rbp-98h]
  int v155; // [rsp+78h] [rbp-90h]
  int v156; // [rsp+78h] [rbp-90h]
  int v157; // [rsp+80h] [rbp-88h]
  int v158; // [rsp+88h] [rbp-80h]
  __int64 v159; // [rsp+90h] [rbp-78h]
  __int64 v160; // [rsp+98h] [rbp-70h]
  int v161; // [rsp+A0h] [rbp-68h]
  int v162; // [rsp+A8h] [rbp-60h] BYREF
  int v163; // [rsp+ACh] [rbp-5Ch]
  __int64 v164; // [rsp+B0h] [rbp-58h]
  int v165; // [rsp+B8h] [rbp-50h]
  int v166; // [rsp+BCh] [rbp-4Ch]
  int v167; // [rsp+C0h] [rbp-48h]
  __int64 v168; // [rsp+C8h] [rbp-40h]
  int v169; // [rsp+D0h] [rbp-38h]
  int v170; // [rsp+D4h] [rbp-34h]
  unsigned int v171; // [rsp+D8h] [rbp-30h]
  int v172; // [rsp+DCh] [rbp-2Ch]
  int v173; // [rsp+E4h] [rbp-24h]
  int v174; // [rsp+E8h] [rbp-20h]
  int v175; // [rsp+ECh] [rbp-1Ch]
  int v176; // [rsp+F0h] [rbp-18h]
  int v177; // [rsp+F4h] [rbp-14h]
  int v178; // [rsp+F8h] [rbp-10h]
  unsigned int v179; // [rsp+FCh] [rbp-Ch]
  unsigned int v180; // [rsp+100h] [rbp-8h]
  int v181; // [rsp+104h] [rbp-4h]
  int v182; // [rsp+108h] [rbp+0h]
  int v183; // [rsp+10Ch] [rbp+4h]
  char v184; // [rsp+110h] [rbp+8h] BYREF
  char v185; // [rsp+130h] [rbp+28h] BYREF
  int v186; // [rsp+150h] [rbp+48h]
  int v187; // [rsp+154h] [rbp+4Ch]
  int v188; // [rsp+158h] [rbp+50h]
  int v189; // [rsp+15Ch] [rbp+54h]
  int v190; // [rsp+160h] [rbp+58h]
  unsigned __int64 v191; // [rsp+164h] [rbp+5Ch]
  int v192; // [rsp+174h] [rbp+6Ch]
  int v193; // [rsp+178h] [rbp+70h]
  int v194; // [rsp+17Ch] [rbp+74h]
  unsigned __int64 v195; // [rsp+180h] [rbp+78h]
  unsigned __int64 v196; // [rsp+188h] [rbp+80h]
  unsigned __int64 v197; // [rsp+190h] [rbp+88h]
  unsigned __int64 v198; // [rsp+198h] [rbp+90h]
  __int128 v199; // [rsp+1A8h] [rbp+A0h] BYREF
  __int128 v200; // [rsp+1B8h] [rbp+B0h]
  unsigned __int64 v201; // [rsp+1C8h] [rbp+C0h]
  int v204; // [rsp+238h] [rbp+130h]
  int v205; // [rsp+240h] [rbp+138h]
  int v206; // [rsp+258h] [rbp+150h]

  v8 = a3[1];
  v10 = *a3;
  v11 = *a4;
  v12 = a4[1];
  v158 = v8 - *a3;
  v13 = v12 - *a4;
  v14 = HIDWORD(*a4);
  result = (unsigned int)(HIDWORD(v12) - HIDWORD(*a4));
  v154 = HIDWORD(v8);
  v157 = result;
  v142 = HIDWORD(*a3);
  v161 = HIDWORD(v8) - HIDWORD(*a3);
  if ( v13 >= 128000000 || (int)result >= 128000000 || v13 <= -128000000 || (int)result <= -128000000 )
    return result;
  memset_0(&v162, 0, 0xF8uLL);
  v16 = v10 - v11;
  v17 = *(_QWORD *)(a1 + 48);
  v18 = v8 - v11;
  LODWORD(v154) = v154 - v14;
  v19 = *(_QWORD *)(a2 + 48);
  v20 = v17 + *(unsigned int *)(a1 + 40);
  v21 = *(_DWORD *)(a2 + 32);
  v198 = v19 + *(unsigned int *)(a2 + 40);
  v194 = *(_DWORD *)(a1 + 32);
  v22 = *(_DWORD *)(a1 + 64);
  v197 = v19;
  v153 = v17;
  v204 = v22 / 4;
  v23 = v22 / 4;
  v165 = v22 / 4;
  v24 = *(_DWORD *)(a2 + 64);
  v143 = v142 - v14;
  v195 = v17;
  v196 = v20;
  v206 = v24 / 4;
  v169 = v24 / 4;
  v150 = v16;
  v162 = v16;
  v163 = v18;
  v159 = *(_QWORD *)(a1 + 56) + 4 * (v204 * (v157 - v143 - 1) - (__int64)v16);
  v25 = *a5;
  LODWORD(v19) = a5[1];
  v26 = a5[2] - v25;
  v205 = a5[3] - v19;
  v27 = v24 / 4 * (v205 - 1);
  v28 = *(_QWORD *)(a2 + 56) + 4 * (v25 + v27 + v24 / 4 * (int)v19);
  v160 = v28;
  if ( (*a6 & 0x20) != 0 )
  {
    v84 = v23;
    v95 = v23 * (v157 - 1);
    v96 = v143;
    v97 = v159 + 4 * (v84 * v143 - (__int64)v95);
    result = v154;
    v98 = v206 * v143 - v27;
    v99 = v205;
    if ( v205 >= (int)v154 )
      v99 = v154;
    v100 = v28 + 4 * v98;
    if ( v26 >= v18 )
      v26 = v18;
    if ( v26 > v16 && v143 < v99 )
    {
      result = v16;
      v101 = 4 * (v26 - v16);
      v152 = v101;
      v102 = 4LL * v16;
      do
      {
        v103 = (const void *)(v102 + v100);
        v104 = (char *)(v102 + v97);
        if ( v101 <= 0 )
          break;
        v105 = &v104[v101];
        if ( v105 <= v104 )
          break;
        result = (unsigned __int64)v103 + v101;
        if ( result <= (unsigned __int64)v103 || (unsigned __int64)v105 > v20 || v17 > (unsigned __int64)v104 )
          break;
        if ( (result > v20 || v17 > (unsigned __int64)v103) && (result > v198 || v197 > (unsigned __int64)v103) )
          break;
        memmove(v104, v103, v101);
        v84 = v204;
        ++v96;
        result = v206;
        v17 = v153;
        v101 = v152;
        v97 += 4LL * v204;
        v100 += 4LL * v206;
      }
      while ( v96 < v99 );
    }
    goto LABEL_66;
  }
  v188 = *a6 & 2;
  v29 = 1;
  v167 = v158;
  v171 = v205;
  v30 = a6[1];
  v31 = a6[2];
  v166 = v13;
  v170 = v26;
  v172 = v21;
  v173 = v30;
  v139 = v31;
  v176 = v31;
  if ( v13 - v31 - v30 <= 0 || v26 - v30 - v31 <= 0 )
  {
    v32 = 0;
    v33 = 0;
    v183 = 0;
    if ( v30 + v31 )
    {
      v32 = v13 * v30 / (v30 + v31);
      v186 = v32;
      v33 = v183;
    }
    else
    {
      v186 = 0;
    }
    v34 = v13 - v32;
    v144 = v13 - v32;
    v187 = v13 - v32;
  }
  else
  {
    v33 = 1;
    v183 = 1;
    v34 = v31;
    v144 = v31;
    v187 = v31;
    v32 = v30;
    v186 = v30;
  }
  v174 = v16;
  if ( v32 >= v18 )
  {
    v35 = v18;
    v175 = v18;
  }
  else
  {
    v35 = v32;
    v175 = v32;
  }
  if ( !v33 && v32 )
  {
    DNG_InitStretch((unsigned int)&v184, v32, v30, v16, v35);
    v17 = v195;
    v34 = v187;
    v31 = v176;
    v16 = v162;
    v20 = v196;
    v32 = v186;
    v30 = v173;
    v26 = v170;
    v13 = v166;
    v23 = v165;
    v18 = v163;
    v153 = v195;
    v144 = v187;
    v139 = v176;
    v150 = v162;
  }
  v36 = v16;
  v37 = v26 - v31 - v30;
  v38 = v13 - v34;
  v179 = v37;
  v39 = v13 - v34 - v32;
  v155 = v38;
  v180 = v39;
  v40 = v18;
  if ( v32 > v16 )
    v36 = v32;
  v181 = v36;
  if ( (int)(v39 + v32) < v18 )
    v40 = v39 + v32;
  v41 = v183;
  v182 = v40;
  if ( v183 )
  {
    v193 = v40 - v32;
    v42 = (unsigned int)(v36 - v32);
    v192 = v42;
    v146 = (((unsigned __int64)v37 << 32) - 1) / v39 + 1;
    v43 = (unsigned __int64)v37 << 32;
    v44 = (v43 / v39) >> 1;
    v45 = (v43 / v39) >> 33;
    v191 = v146;
    if ( (int)v42 <= 5 )
    {
      if ( (int)v42 > 0 )
      {
        do
        {
          v87 = __PAIR64__(v45, v44) + v146;
          LODWORD(v45) = (__PAIR64__(v45, v44) + v146) >> 32;
          LODWORD(v44) = v87;
          --v42;
        }
        while ( v42 );
        v17 = v153;
      }
    }
    else
    {
      v44 = (int)v42 * (unsigned __int64)(unsigned int)v146 + (unsigned int)v44;
      LODWORD(v45) = v45 + v42 * HIDWORD(v146) + HIDWORD(v44);
    }
    v41 = v183;
    v190 = v44;
    v38 = v155;
    v189 = v45;
  }
  v46 = v16;
  if ( v38 > v16 )
    v46 = v38;
  v47 = v46 - v39 - v32;
  v177 = v47;
  if ( v13 < v18 )
    v18 = v13;
  v48 = v18 - v39 - v32;
  v178 = v48;
  if ( !v41 && v144 )
  {
    DNG_InitStretch((unsigned int)&v185, v144, v139, v47, v48);
    v17 = v195;
    v20 = v196;
    v23 = v165;
    v153 = v195;
    v150 = v162;
  }
  v49 = a6;
  v50 = v157;
  v51 = a6[3];
  v52 = a6[4];
  v140 = v52;
  v151 = v51;
  if ( (int)(v157 - v51 - v52) <= 0 || (int)(v205 - v51 - v52) <= 0 )
  {
    v53 = 0;
    if ( v51 + v52 )
      v54 = (int)(v157 * v51) / (int)(v51 + v52);
    else
      v54 = 0;
    v145 = v54;
    v55 = v157 - v54;
  }
  else
  {
    v145 = a6[3];
    v53 = 1;
    v55 = a6[4];
  }
  v56 = v154;
  v57 = v157 - v55;
  v58 = v143;
  v59 = v154;
  if ( v157 - v55 > v143 )
    v58 = v157 - v55;
  if ( v157 < (int)v154 )
    v59 = v157;
  if ( (int)v154 <= v57 )
    goto LABEL_35;
  v164 = v159;
  v168 = v160;
  if ( v52 != v55 )
  {
    if ( v55 > 0 )
    {
      v199 = 0LL;
      v200 = 0LL;
      DNG_InitStretch((unsigned int)&v199, v55, v52, v157 - v59, v157 - v58);
      DNG_StretchCol(&v162, (int *)&v199);
      v17 = v195;
      v60 = v162;
      v20 = v196;
      v23 = v165;
      v56 = v154;
      v153 = v195;
      v150 = v162;
      goto LABEL_36;
    }
    goto LABEL_35;
  }
  v106 = v52 - v58 - v55 + v157 - 1;
  v164 = v159 - 4LL * v106 * v204;
  v168 = v160 - 4LL * v106 * v206;
  if ( v58 >= v59 )
  {
LABEL_35:
    v60 = v150;
    goto LABEL_36;
  }
  v107 = (unsigned int)(v59 - v58);
  do
  {
    DNG_DrawRow(&v162);
    v164 += 4LL * v204;
    v168 += 4LL * v206;
    --v107;
  }
  while ( v107 );
  v17 = v195;
  v60 = v162;
  v20 = v196;
  v23 = v165;
  v50 = v157;
  v56 = v154;
  v49 = a6;
  v153 = v195;
  v150 = v162;
LABEL_36:
  v61 = v49[4];
  result = (unsigned int)v49[3];
  v62 = v205;
  v63 = v50 - result - v61;
  v64 = v143;
  v65 = v205 - result - v61;
  if ( !v53 || v65 <= 0 || v63 <= 0 || v56 <= v145 || v143 >= v57 )
  {
LABEL_62:
    v84 = v204;
    goto LABEL_63;
  }
  v66 = v159 - 4LL * v204 * v61;
  v67 = v160 - 4LL * v206 * v61;
  v68 = v143;
  if ( (int)v151 > v143 )
    v68 = v151;
  if ( !v188 )
  {
    v69 = v154;
    if ( v157 - v140 < (int)v154 )
      v69 = v157 - v140;
    v147 = v63 + v151 - v68;
    v141 = v63 + v151 - v69;
    v70 = (unsigned int)v63;
    v71 = (((unsigned __int64)(unsigned int)v65 << 32) - 1) / (unsigned int)v63 + 1;
    v72 = ((unsigned __int64)(unsigned int)v65 << 32) / v70;
    v73 = v141;
    v74 = v72 >> 1;
    v156 = v71;
    v75 = v72 >> 33;
    v201 = HIDWORD(v71);
    if ( v141 <= 5 )
    {
      if ( v141 > 0 )
      {
        v88 = (unsigned int)v141;
        do
        {
          v89 = __PAIR64__(v75, v74) + v71;
          LODWORD(v75) = (__PAIR64__(v75, v74) + v71) >> 32;
          LODWORD(v74) = v89;
          --v88;
        }
        while ( v88 );
      }
    }
    else
    {
      v76 = ((unsigned int)v74 + (unsigned __int64)(unsigned int)v71 * v141) >> 32;
      LODWORD(v74) = v74 + v71 * v141;
      v73 = v141;
      LODWORD(v75) = v76 + v141 * HIDWORD(v71) + v75;
    }
    v77 = v66 - 4LL * v23 * v73;
    result = 4LL * v169 * (int)v75;
    v78 = 0;
    v79 = v67 - result;
    for ( i = v66 - 4LL * v23 * v147; v77 != i; v77 -= 4LL * v23 )
    {
      if ( v29 )
      {
        v164 = v77;
        v168 = v79;
        DNG_DrawRow(&v162);
        v20 = v196;
        v23 = v165;
        v153 = v195;
        v150 = v162;
      }
      else
      {
        v80 = 4 * v167;
        result = v60 + (__int64)v23;
        v81 = (char *)(v77 + 4LL * v60);
        v82 = (const void *)(v77 + 4 * result);
        if ( 4 * v167 <= 0 )
          break;
        v83 = &v81[v80];
        if ( v83 <= v81 )
          break;
        result = (unsigned __int64)v82 + v80;
        if ( result <= (unsigned __int64)v82 || (unsigned __int64)v83 > v20 || v17 > (unsigned __int64)v81 )
          break;
        if ( (result > v20 || v17 > (unsigned __int64)v82) && (result > v198 || v197 > (unsigned __int64)v82) )
          break;
        memmove(v81, v82, v80);
      }
      v29 = ((int)v74 + v156 < (unsigned int)v74) + (_DWORD)v201;
      v78 += v29;
      if ( v78 < v171 )
        v79 -= 4LL * v169 * v29;
      v17 = v153;
      LODWORD(v74) = v74 + v156;
      v60 = v150;
      result = -(__int64)v23;
    }
    v62 = v205;
    v64 = v143;
    goto LABEL_62;
  }
  v108 = v66 + 4 * ((int)(v204 * (v68 - v151)) - (__int64)(v204 * (v63 - 1)));
  v164 = v108;
  v168 = v67 + 4 * (v169 * ((int)(v68 - v151) % v65) - (__int64)(v206 * (v65 - 1)));
  v109 = v154;
  v110 = v63;
  v111 = v154;
  if ( v65 < v63 )
    v110 = v65;
  v112 = v157 - v140;
  if ( v157 - v140 < (int)v154 )
    v111 = v157 - v140;
  if ( v68 + v110 < v111 )
  {
    if ( v65 < v63 )
      v63 = v65;
    v113 = v63 + v68;
  }
  else
  {
    v113 = v154;
    if ( v112 < (int)v154 )
      v113 = v157 - v140;
  }
  if ( v68 < v113 )
  {
    v124 = v65 - (int)(v68 - v151) % v65;
    v125 = 4LL * v204;
    v126 = (unsigned int)(v113 - v68);
    do
    {
      DNG_DrawRow(&v162);
      if ( --v124 )
      {
        v127 = v168;
      }
      else
      {
        v124 = v65;
        v127 = v168 - 4LL * v206 * v65;
      }
      v108 = v125 + v164;
      v168 = 4LL * v206 + v127;
      v164 += v125;
      --v126;
    }
    while ( v126 );
    v17 = v195;
    v20 = v196;
    v60 = v162;
    v112 = v157 - v140;
    v109 = v154;
    v153 = v195;
  }
  v84 = v204;
  v114 = v108 - 4LL * v204 * v65;
  result = (unsigned int)v109;
  if ( v112 < v109 )
    result = (unsigned int)v112;
  v149 = result;
  if ( v113 < (int)result )
  {
    v115 = 4 * v167;
    result = v60;
    v116 = 4LL * v60;
    do
    {
      v117 = (const void *)(v114 + v116);
      v118 = (char *)(v108 + v116);
      if ( v115 <= 0 )
        break;
      v119 = &v118[v115];
      if ( v119 <= v118 )
        break;
      result = (unsigned __int64)v117 + v115;
      if ( result <= (unsigned __int64)v117 || (unsigned __int64)v119 > v20 || v17 > (unsigned __int64)v118 )
        break;
      if ( (result > v20 || v17 > (unsigned __int64)v117) && (result > v198 || v197 > (unsigned __int64)v117) )
        break;
      memmove(v118, v117, v115);
      v84 = v204;
      ++v113;
      v17 = v153;
      result = 4LL * v204;
      v108 += result;
      v114 += result;
    }
    while ( v113 < v149 );
  }
  v64 = v143;
  v62 = v205;
LABEL_63:
  v85 = v154;
  if ( v145 < (int)v154 )
    v85 = v145;
  if ( v64 < v145 )
  {
    v164 = v159 - 4LL * v84 * (v157 - v145);
    result = 4LL * v206 * (v62 - a6[3]);
    v90 = v160 - result;
    v168 = v160 - result;
    if ( v151 == v145 )
    {
      v91 = v151 - v64 - 1;
      v92 = v159 - 4LL * v84 * (v157 - v145) - 4LL * v84 * v91;
      result = 4LL * v206 * v91;
      v164 = v92;
      v168 = v90 - result;
      if ( v64 < v85 )
      {
        v93 = 4LL * v84;
        v94 = (unsigned int)(v85 - v64);
        do
        {
          result = DNG_DrawRow(&v162);
          v164 += v93;
          v168 += 4LL * v206;
          --v94;
        }
        while ( v94 );
        v84 = v204;
      }
    }
    else if ( v145 > 0 )
    {
      v120 = v145 - v85;
      HIDWORD(v200) = v145 - v64;
      DWORD2(v200) = v120;
      v86 = 0LL;
      *(_QWORD *)&v200 = 0LL;
      v121 = (((unsigned __int64)v151 << 32) - 1) / (unsigned int)v145 + 1;
      *((_QWORD *)&v199 + 1) = v121;
      v122 = (((unsigned __int64)v151 << 32) / (unsigned int)v145) >> 1;
      v123 = (((unsigned __int64)v151 << 32) / (unsigned int)v145) >> 33;
      if ( v120 <= 5 )
      {
        if ( v120 > 0 )
        {
          v128 = (unsigned int)v120;
          do
          {
            v129 = __PAIR64__(v123, v122) + v121;
            LODWORD(v123) = (__PAIR64__(v123, v122) + v121) >> 32;
            LODWORD(v122) = v129;
            --v128;
          }
          while ( v128 );
        }
      }
      else
      {
        v122 = v120 * (unsigned __int64)(unsigned int)v121 + (unsigned int)v122;
        LODWORD(v123) = HIDWORD(v122) + v120 * HIDWORD(v121) + v123;
      }
      *(_QWORD *)&v199 = __PAIR64__(v122, v123);
      result = DNG_StretchCol(&v162, (int *)&v199);
      v84 = v204;
      goto LABEL_67;
    }
  }
LABEL_66:
  v86 = 0LL;
LABEL_67:
  if ( a8 )
  {
    v130 = a1;
    if ( v161 <= *(_DWORD *)(a1 + 36) )
    {
      result = v158;
      if ( v158 <= *(_DWORD *)(a1 + 32) && v161 > 0 )
      {
        v131 = v84;
        v132 = (unsigned int)v161;
        result = (unsigned int)(v158 / 2);
        v133 = (unsigned int)result;
        v134 = 4 * v131;
        do
        {
          v135 = (unsigned int *)(v86 + *(_QWORD *)(v130 + 56));
          v136 = &v135[v158 - 1];
          if ( (int)v133 > 0 )
          {
            v137 = v133;
            do
            {
              v138 = *v135++;
              result = *v136--;
              *(v135 - 1) = result;
              v136[1] = v138;
              --v137;
            }
            while ( v137 );
            v130 = a1;
          }
          v86 += v134;
          --v132;
        }
        while ( v132 );
      }
    }
  }
  return result;
}
