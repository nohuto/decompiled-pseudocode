/*
 * XREFs of RenderNineGridInternal @ 0x1C00C2240
 * Callers:
 *     RenderNineGrid @ 0x1C00C1F78 (RenderNineGrid.c)
 * Callees:
 *     DNG_StretchCol @ 0x1C00C1918 (DNG_StretchCol.c)
 *     DNG_DrawRow @ 0x1C00C2FA0 (DNG_DrawRow.c)
 *     DNG_InitStretch @ 0x1C00C3308 (DNG_InitStretch.c)
 *     ?DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z @ 0x1C013E0F4 (-DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

int __fastcall RenderNineGridInternal(
        __int64 a1,
        __int64 a2,
        __m128i *a3,
        __m128i *a4,
        int *a5,
        _DWORD *a6,
        __int64 a7,
        int a8)
{
  unsigned __int64 v9; // rdi
  __int64 v10; // r10
  unsigned __int64 v11; // xmm0_8
  unsigned __int64 v12; // xmm1_8
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r14
  int v15; // esi
  int v16; // r9d
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  int v19; // edi
  int v20; // ebx
  int v21; // r10d
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // r13
  int v24; // r12d
  int v25; // edx
  __int64 v26; // r8
  int v27; // edi
  int v28; // esi
  int v29; // r14d
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // r8
  __int64 v34; // r11
  int v35; // ecx
  int v36; // edx
  int v37; // r10d
  int v38; // edi
  int v39; // eax
  unsigned int v40; // esi
  int v41; // r11d
  unsigned int v42; // r14d
  int v43; // edi
  int v44; // ecx
  int v45; // edi
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // r8
  unsigned __int64 v50; // r8
  unsigned __int64 v51; // rsi
  unsigned __int64 v52; // rdx
  int v53; // ecx
  int v54; // r11d
  int v55; // r9d
  _DWORD *v56; // rbx
  int v57; // r11d
  int v58; // edx
  int v59; // esi
  BOOL v60; // r14d
  int v61; // edx
  int v62; // edi
  int v63; // r9d
  int v64; // r8d
  int v65; // r10d
  int v66; // edx
  int v67; // ecx
  int v68; // r9d
  int v69; // r8d
  int v70; // ebx
  int v71; // r14d
  int v72; // r11d
  int v73; // ecx
  int v74; // r10d
  unsigned __int64 v75; // rcx
  int v76; // esi
  int v77; // r10d
  unsigned __int64 v78; // r9
  unsigned __int64 v79; // rdi
  unsigned __int64 v80; // r8
  unsigned __int64 v81; // rdx
  __int64 v82; // r9
  int v83; // edx
  __int64 v84; // rax
  __int64 v85; // r10
  __int64 v86; // rbx
  __int64 v87; // rax
  unsigned int v88; // esi
  __int64 v89; // rcx
  __int64 v90; // r14
  int v91; // r8d
  void *v92; // rcx
  char *v93; // rdx
  char *v94; // r9
  int v95; // edx
  int v96; // r10d
  __int64 v97; // rdx
  unsigned __int64 v98; // kr08_8
  int v99; // edx
  __int64 v100; // rbx
  __int64 v101; // r11
  unsigned __int64 v102; // rbx
  int v103; // eax
  __int64 v104; // rbx
  int v105; // r12d
  __int64 v106; // rdi
  __int64 v107; // r14
  int v108; // ecx
  int v109; // ebx
  char *v110; // rdx
  void *v111; // rcx
  char *v112; // r9
  unsigned __int64 v113; // rcx
  int v114; // ecx
  __int64 v115; // rdi
  int v116; // r15d
  int v117; // eax
  int v118; // edx
  int v119; // r14d
  int v120; // ecx
  int v121; // esi
  __int64 v122; // r12
  __int64 v123; // r14
  __int64 v124; // rdx
  int v125; // r15d
  unsigned __int64 v126; // rbx
  int v127; // r12d
  __int64 v128; // r14
  BOOL v129; // eax
  __int64 v130; // r11
  __int64 v131; // r9
  int *v132; // rdx
  int *v133; // r8
  __int64 v134; // r10
  int v135; // ecx
  int v137; // [rsp+30h] [rbp-D0h]
  int v138; // [rsp+30h] [rbp-D0h]
  int v139; // [rsp+38h] [rbp-C8h]
  int v140; // [rsp+40h] [rbp-C0h]
  int v141; // [rsp+48h] [rbp-B8h]
  int v142; // [rsp+50h] [rbp-B0h]
  __int64 v143; // [rsp+50h] [rbp-B0h]
  int v144; // [rsp+58h] [rbp-A8h]
  int v145; // [rsp+58h] [rbp-A8h]
  __int64 v146; // [rsp+60h] [rbp-A0h]
  int v147; // [rsp+60h] [rbp-A0h]
  __int64 v148; // [rsp+68h] [rbp-98h]
  __int64 v149; // [rsp+68h] [rbp-98h]
  int v150; // [rsp+70h] [rbp-90h]
  int v151; // [rsp+74h] [rbp-8Ch]
  __int64 v152; // [rsp+78h] [rbp-88h]
  int v153; // [rsp+78h] [rbp-88h]
  __int64 v154; // [rsp+80h] [rbp-80h]
  __int64 v155; // [rsp+88h] [rbp-78h]
  int v156; // [rsp+90h] [rbp-70h]
  int v157; // [rsp+A0h] [rbp-60h] BYREF
  int v158; // [rsp+A4h] [rbp-5Ch]
  __int64 v159; // [rsp+A8h] [rbp-58h]
  int v160; // [rsp+B0h] [rbp-50h]
  int v161; // [rsp+B4h] [rbp-4Ch]
  int v162; // [rsp+B8h] [rbp-48h]
  __int64 v163; // [rsp+C0h] [rbp-40h]
  int v164; // [rsp+C8h] [rbp-38h]
  int v165; // [rsp+CCh] [rbp-34h]
  unsigned int v166; // [rsp+D0h] [rbp-30h]
  int v167; // [rsp+D4h] [rbp-2Ch]
  int v168; // [rsp+DCh] [rbp-24h]
  int v169; // [rsp+E0h] [rbp-20h]
  int v170; // [rsp+E4h] [rbp-1Ch]
  int v171; // [rsp+E8h] [rbp-18h]
  int v172; // [rsp+ECh] [rbp-14h]
  int v173; // [rsp+F0h] [rbp-10h]
  unsigned int v174; // [rsp+F4h] [rbp-Ch]
  unsigned int v175; // [rsp+F8h] [rbp-8h]
  int v176; // [rsp+FCh] [rbp-4h]
  int v177; // [rsp+100h] [rbp+0h]
  int v178; // [rsp+104h] [rbp+4h]
  char v179; // [rsp+108h] [rbp+8h] BYREF
  char v180; // [rsp+128h] [rbp+28h] BYREF
  int v181; // [rsp+148h] [rbp+48h]
  int v182; // [rsp+14Ch] [rbp+4Ch]
  int v183; // [rsp+150h] [rbp+50h]
  int v184; // [rsp+154h] [rbp+54h]
  int v185; // [rsp+158h] [rbp+58h]
  unsigned __int64 v186; // [rsp+15Ch] [rbp+5Ch]
  int v187; // [rsp+16Ch] [rbp+6Ch]
  int v188; // [rsp+170h] [rbp+70h]
  int v189; // [rsp+174h] [rbp+74h]
  unsigned __int64 v190; // [rsp+178h] [rbp+78h]
  unsigned __int64 v191; // [rsp+180h] [rbp+80h]
  unsigned __int64 v192; // [rsp+188h] [rbp+88h]
  unsigned __int64 v193; // [rsp+190h] [rbp+90h]
  __int64 v194; // [rsp+1A0h] [rbp+A0h]
  unsigned __int64 v195; // [rsp+1A8h] [rbp+A8h]
  int v196[8]; // [rsp+1B0h] [rbp+B0h] BYREF
  int v198; // [rsp+220h] [rbp+120h]
  int v199; // [rsp+228h] [rbp+128h]
  int v200; // [rsp+240h] [rbp+140h]

  v9 = a3->m128i_i64[0];
  v10 = a4->m128i_i64[0];
  v11 = _mm_srli_si128(*a3, 8).m128i_u64[0];
  v12 = _mm_srli_si128(*a4, 8).m128i_u64[0];
  v151 = v11 - a3->m128i_i64[0];
  v13 = HIDWORD(a4->m128i_i64[0]);
  v14 = HIDWORD(v9);
  v15 = HIDWORD(v12) - HIDWORD(a4->m128i_i64[0]);
  v16 = v12 - a4->m128i_i64[0];
  LODWORD(v17) = HIDWORD(v11) - HIDWORD(v9);
  v141 = HIDWORD(v12) - HIDWORD(v10);
  v156 = HIDWORD(v11) - HIDWORD(v9);
  if ( v16 >= 128000000 || v15 >= 128000000 || v16 <= -128000000 || v15 <= -128000000 )
    return v17;
  v18 = *(unsigned int *)(a2 + 40);
  v19 = v9 - v10;
  v144 = HIDWORD(v11) - v13;
  v20 = v11 - v10;
  v21 = *(_DWORD *)(a2 + 32);
  v22 = *(_QWORD *)(a1 + 48);
  v23 = v22 + *(unsigned int *)(a1 + 40);
  v192 = *(_QWORD *)(a2 + 48);
  v193 = v192 + v18;
  v189 = *(_DWORD *)(a1 + 32);
  LODWORD(v18) = *(_DWORD *)(a1 + 64);
  v139 = v19;
  v157 = v19;
  v140 = v14 - v13;
  v198 = (int)v18 / 4;
  v24 = (int)v18 / 4;
  v160 = (int)v18 / 4;
  LODWORD(v18) = *(_DWORD *)(a2 + 64);
  v190 = v22;
  v191 = v23;
  v158 = v20;
  v199 = (int)v18 / 4;
  v164 = (int)v18 / 4;
  v146 = v19;
  v154 = *(_QWORD *)(a1 + 56) + 4 * (v198 * (v15 - ((int)v14 - (int)v13) - 1) - (__int64)v19);
  v25 = a5[1];
  v26 = *a5;
  v27 = a5[3] - v25;
  v28 = a5[2] - v26;
  v200 = v27;
  v29 = v27 - 1;
  v30 = (int)v18 / 4 * v25 + (__int64)((int)v18 / 4 * (v27 - 1));
  v31 = *(_QWORD *)(a2 + 56);
  v32 = v26 + v30;
  v33 = 0LL;
  v194 = 0LL;
  v34 = v31 + 4 * v32;
  v155 = v34;
  if ( (*a6 & 0x20) != 0 )
  {
    v96 = v24;
    v105 = v140;
    v106 = v154 + 4 * (v96 * v140 - (__int64)(v96 * (v141 - 1)));
    LODWORD(v17) = v139;
    v107 = v34 + 4 * (v199 * v140 - (__int64)(v199 * v29));
    v108 = v144;
    if ( v200 < v144 )
      v108 = v200;
    v145 = v108;
    if ( v28 < v20 )
      v20 = v28;
    if ( v20 <= v139 || v140 >= v108 )
      goto LABEL_73;
    v109 = 4 * (v20 - v139);
    do
    {
      v110 = (char *)(v107 + 4 * v146);
      v111 = (void *)(v106 + 4 * v146);
      if ( v109 <= 0 )
        break;
      v17 = (unsigned __int64)v111 + v109;
      if ( v17 <= (unsigned __int64)v111 )
        break;
      v112 = &v110[v109];
      if ( v112 <= v110 || v22 > (unsigned __int64)v111 || v17 > v23 )
        break;
      if ( (v22 > (unsigned __int64)v110 || (unsigned __int64)v112 > v23)
        && (v192 > (unsigned __int64)v110 || (unsigned __int64)v112 > v193) )
      {
        break;
      }
      memmove(v111, v110, v109);
      v96 = v198;
      ++v105;
      LODWORD(v17) = v199;
      v106 += 4LL * v198;
      v107 += 4LL * v199;
    }
    while ( v105 < v145 );
    goto LABEL_72;
  }
  v183 = *a6 & 2;
  v162 = v151;
  v35 = a6[1];
  v36 = a6[2];
  v161 = v16;
  v165 = v28;
  v167 = v21;
  v166 = v27;
  v168 = v35;
  v137 = v36;
  v171 = v36;
  if ( v16 - v36 - v35 <= 0 || v28 - v36 - v35 <= 0 )
  {
    v178 = 0;
    if ( v36 + v35 )
    {
      v37 = v16 * v35 / (v36 + v35);
      v181 = v37;
    }
    else
    {
      v37 = 0;
      v181 = 0;
    }
    v38 = v16 - v37;
    v142 = v16 - v37;
    v182 = v16 - v37;
  }
  else
  {
    LODWORD(v33) = 1;
    v181 = v35;
    v178 = 1;
    v37 = v35;
    v38 = v36;
    v142 = v36;
    v182 = v36;
  }
  v39 = v20;
  v169 = v139;
  if ( v37 < v20 )
    v39 = v37;
  v170 = v39;
  if ( !(_DWORD)v33 && v37 )
  {
    DNG_InitStretch((unsigned int)&v179, v37, v35, v139, v39);
    v36 = v171;
    v38 = v182;
    v23 = v191;
    v22 = v190;
    v37 = v181;
    v35 = v168;
    v28 = v165;
    v16 = v161;
    v24 = v160;
    v20 = v158;
    LODWORD(v33) = v178;
    v137 = v171;
    v139 = v157;
    v142 = v182;
  }
  v40 = v28 - v36 - v35;
  v41 = v16 - v38;
  v42 = v16 - v38 - v37;
  v174 = v40;
  v175 = v42;
  v43 = v139;
  v44 = v20;
  if ( v37 > v139 )
    v43 = v37;
  v176 = v43;
  if ( (int)(v42 + v37) < v20 )
    v44 = v42 + v37;
  v177 = v44;
  if ( (_DWORD)v33 )
  {
    v45 = v43 - v37;
    v188 = v44 - v37;
    v46 = ((unsigned __int64)v40 << 32) - 1;
    v187 = v45;
    if ( v42 == 4LL )
      v47 = v46 >> 2;
    else
      v47 = v46 / v42;
    v48 = v47 + 1;
    v49 = (unsigned __int64)v40 << 32;
    if ( v42 == 4LL )
      v50 = v49 >> 2;
    else
      v50 = v49 / v42;
    v33 = v50 >> 1;
    v51 = HIDWORD(v48);
    v52 = HIDWORD(v33);
    v53 = v48;
    v186 = v48;
    if ( v45 > 5 )
    {
      v113 = (unsigned int)v33 + v45 * (unsigned __int64)(unsigned int)v48;
      LODWORD(v33) = v33 + v45 * v48;
      LODWORD(v52) = HIDWORD(v113) + v45 * HIDWORD(v48) + v52;
    }
    else if ( v45 > 0 )
    {
      v149 = (unsigned int)v45;
      do
      {
        v129 = (int)v33 + v53 < (unsigned int)v33;
        LODWORD(v33) = v33 + v53;
        LODWORD(v52) = v51 + v129 + v52;
        --v149;
      }
      while ( v149 );
      v24 = v160;
    }
    v184 = v52;
    v36 = v137;
    v185 = v33;
    LODWORD(v33) = v178;
  }
  if ( v41 <= v139 )
    v41 = v139;
  v54 = v41 - v42 - v37;
  v172 = v54;
  if ( v16 >= v20 )
    v16 = v20;
  v55 = v16 - v42 - v37;
  v173 = v55;
  if ( !(_DWORD)v33 && v142 )
  {
    DNG_InitStretch((unsigned int)&v180, v142, v36, v54, v55);
    v23 = v191;
    v22 = v190;
    v24 = v160;
    v139 = v157;
  }
  v56 = a6;
  v57 = v141;
  v58 = a6[3];
  v59 = a6[4];
  v150 = v58;
  v60 = v141 - v58 - v59 > 0 && v200 - v58 - v59 > 0;
  if ( v60 )
  {
    v138 = a6[3];
    v61 = a6[4];
  }
  else
  {
    if ( v59 + v58 )
      v114 = v141 * v58 / (v59 + v58);
    else
      v114 = 0;
    v138 = v114;
    v61 = v141 - v114;
  }
  v62 = v141 - v61;
  v63 = v140;
  v64 = v144;
  if ( v141 - v61 > v140 )
    v63 = v141 - v61;
  if ( v141 < v144 )
    v64 = v141;
  if ( v144 <= v62 )
    goto LABEL_39;
  v159 = v154;
  v163 = v155;
  if ( v59 != v61 )
  {
    if ( v61 > 0 )
    {
      DNG_InitStretch((unsigned int)v196, v61, v59, v141 - v64, v141 - v63);
      DNG_StretchCol((struct _DNGINTERNALDATA *)&v157, v196);
      v65 = v157;
      v23 = v191;
      v22 = v190;
      v24 = v160;
      v57 = v141;
      v139 = v157;
      goto LABEL_40;
    }
    goto LABEL_39;
  }
  v99 = v59 - (v61 + v63 - v141) - 1;
  v159 = v154 - 4LL * v198 * v99;
  v163 = v155 - 4LL * v199 * v99;
  if ( v63 >= v64 )
  {
LABEL_39:
    v65 = v139;
    goto LABEL_40;
  }
  v100 = (unsigned int)(v64 - v63);
  do
  {
    DNG_DrawRow(&v157);
    v159 += 4LL * v198;
    v163 += 4LL * v199;
    --v100;
  }
  while ( v100 );
  v65 = v157;
  v23 = v191;
  v22 = v190;
  v24 = v160;
  v57 = v141;
  v56 = a6;
  v139 = v157;
LABEL_40:
  v66 = v56[4];
  LODWORD(v17) = v56[3];
  v67 = v200;
  v68 = v57 - v17 - v66;
  v69 = v140;
  v70 = v200 - v17 - v66;
  if ( !v60 || v70 <= 0 || v68 <= 0 || v140 >= v62 )
  {
LABEL_68:
    v71 = v144;
    v95 = v138;
    if ( v138 < v144 )
      v71 = v138;
    goto LABEL_70;
  }
  v71 = v144;
  if ( v144 > v138 )
  {
    v72 = v140;
    v143 = v154 - 4LL * v198 * v66;
    v148 = v155 - 4LL * v199 * v66;
    if ( v150 > v140 )
      v72 = v150;
    if ( v183 )
    {
      v115 = v143 - 4LL * v198 * (v68 - 1) + 4LL * v198 * (v72 - v150);
      v159 = v115;
      v116 = v70 - (v72 - v150) % v70;
      v163 = v148 - 4LL * v199 * (v70 - 1) + 4LL * v164 * ((v72 - v150) % v70);
      if ( v70 >= v68 )
        v117 = v68;
      else
        v117 = v200 - v17 - v66;
      v118 = v144;
      v119 = v141 - v59;
      v153 = v141 - v59;
      if ( v141 - v59 >= v144 )
        v120 = v144;
      else
        v120 = v141 - v59;
      if ( v72 + v117 >= v120 )
      {
        v121 = v144;
        if ( v119 < v144 )
          v121 = v119;
      }
      else
      {
        if ( v70 < v68 )
          v68 = v70;
        v121 = v68 + v72;
      }
      if ( v72 < v121 )
      {
        v122 = 4LL * v198;
        v123 = (unsigned int)(v121 - v72);
        do
        {
          DNG_DrawRow(&v157);
          if ( --v116 )
          {
            v124 = v163;
          }
          else
          {
            v116 = v70;
            v124 = v163 - 4LL * v199 * v70;
          }
          v115 = v122 + v159;
          v163 = 4LL * v199 + v124;
          v159 += v122;
          --v123;
        }
        while ( v123 );
        v65 = v157;
        v119 = v153;
        v118 = v144;
      }
      v125 = v118;
      v17 = 4LL * v198 * v70;
      v126 = v115 - v17;
      v163 = v115 - v17;
      if ( v119 < v118 )
        v125 = v119;
      if ( v121 < v125 )
      {
        v127 = 4 * v162;
        v128 = 4LL * v65;
        do
        {
          LODWORD(v17) = DNG_CopyMemory(
                           (struct _DNGINTERNALDATA *)&v157,
                           (void *)(v128 + v115),
                           (void *)(v128 + v126),
                           v127);
          if ( !(_DWORD)v17 )
            break;
          ++v121;
          LODWORD(v17) = 4 * v198;
          v115 += 4LL * v198;
          v126 += 4LL * v198;
          v159 = v115;
          v163 = v126;
        }
        while ( v121 < v125 );
      }
    }
    else
    {
      v73 = v144;
      if ( v141 - v59 < v144 )
        v73 = v141 - v59;
      v74 = v68 - v73;
      v75 = (unsigned int)v68;
      v76 = v150 + v68 - v72;
      v77 = v150 + v74;
      v78 = (((unsigned __int64)(unsigned int)v70 << 32) - 1) / (unsigned int)v68 + 1;
      v79 = (((unsigned __int64)(unsigned int)v70 << 32) / v75) >> 1;
      v80 = (((unsigned __int64)(unsigned int)v70 << 32) / v75) >> 33;
      v195 = HIDWORD(v78);
      v147 = v78;
      if ( v77 <= 5 )
      {
        if ( v77 > 0 )
        {
          v97 = (unsigned int)v77;
          do
          {
            v98 = __PAIR64__(v80, v79) + v78;
            LODWORD(v80) = (__PAIR64__(v80, v79) + v78) >> 32;
            LODWORD(v79) = v98;
            --v97;
          }
          while ( v97 );
          v24 = v160;
        }
      }
      else
      {
        v81 = (unsigned int)v79 + v77 * (unsigned __int64)(unsigned int)v78;
        LODWORD(v79) = v79 + v77 * v78;
        LODWORD(v80) = HIDWORD(v81) + v77 * HIDWORD(v78) + v80;
      }
      v82 = v143;
      v83 = 1;
      v84 = v24 * v77;
      v85 = v148;
      v86 = v143 - 4 * v84;
      v87 = 4LL * v24 * v76;
      v88 = 0;
      v89 = v143 - v87;
      v17 = 4LL * v164 * (int)v80;
      v90 = v148 - v17;
      v152 = v89;
      if ( v86 != v89 )
      {
        do
        {
          if ( v83 )
          {
            v159 = v86;
            v163 = v90;
            DNG_DrawRow(&v157);
            v23 = v191;
            v22 = v190;
            v24 = v160;
            v139 = v157;
          }
          else
          {
            v91 = 4 * v162;
            v17 = v139 + (__int64)v24;
            v92 = (void *)(v86 + 4LL * v139);
            v93 = (char *)(v86 + 4 * v17);
            if ( 4 * v162 <= 0 )
              break;
            v17 = (unsigned __int64)v92 + v91;
            if ( v17 <= (unsigned __int64)v92 )
              break;
            v94 = &v93[v91];
            if ( v94 <= v93 || v22 > (unsigned __int64)v92 || v17 > v23 )
              break;
            if ( (v22 > (unsigned __int64)v93 || (unsigned __int64)v94 > v23)
              && (v192 > (unsigned __int64)v93 || (unsigned __int64)v94 > v193) )
            {
              break;
            }
            memmove(v92, v93, v91);
          }
          v83 = ((int)v79 + v147 < (unsigned int)v79) + (_DWORD)v195;
          v88 += v83;
          if ( v88 < v166 )
            v90 -= 4LL * v164 * v83;
          LODWORD(v79) = v79 + v147;
          v17 = -(__int64)v24;
          v86 -= 4LL * v24;
        }
        while ( v86 != v152 );
        v82 = v143;
        v85 = v148;
      }
      v159 = v82;
      v163 = v85;
    }
    v57 = v141;
    v69 = v140;
    v67 = v200;
    goto LABEL_68;
  }
  v95 = v138;
LABEL_70:
  if ( v69 < v95 )
  {
    v96 = v198;
    v101 = v154 - 4LL * v198 * (v57 - v95);
    v159 = v101;
    v17 = 4LL * v199 * (v67 - a6[3]);
    v102 = v155 - v17;
    v163 = v155 - v17;
    if ( v150 == v95 )
    {
      v103 = v150 - v69 - 1;
      v159 = v101 - 4LL * v198 * v103;
      v17 = v102 - 4LL * v199 * v103;
      v163 = v17;
      if ( v69 >= v71 )
        goto LABEL_72;
      v104 = (unsigned int)(v71 - v69);
      do
      {
        LODWORD(v17) = DNG_DrawRow(&v157);
        v159 += 4LL * v198;
        v163 += 4LL * v199;
        --v104;
      }
      while ( v104 );
    }
    else
    {
      if ( v95 <= 0 )
        goto LABEL_72;
      DNG_InitStretch((unsigned int)v196, v95, v150, v95 - v71, v95 - v69);
      LODWORD(v17) = DNG_StretchCol((struct _DNGINTERNALDATA *)&v157, v196);
    }
  }
  v96 = v198;
LABEL_72:
  v33 = 0LL;
LABEL_73:
  if ( a8 )
  {
    v130 = (unsigned int)v156;
    if ( v156 <= *(_DWORD *)(a1 + 36) )
    {
      LODWORD(v17) = v151;
      if ( v151 <= *(_DWORD *)(a1 + 32) && v156 > 0 )
      {
        LODWORD(v17) = v151 / 2;
        v131 = 4LL * v96;
        do
        {
          v132 = (int *)(v33 + *(_QWORD *)(a1 + 56));
          v133 = &v132[v151 - 1];
          if ( v151 / 2 > 0 )
          {
            v134 = (unsigned int)(v151 / 2);
            do
            {
              v135 = *v132++;
              LODWORD(v17) = *v133--;
              *(v132 - 1) = v17;
              v133[1] = v135;
              --v134;
            }
            while ( v134 );
          }
          v33 = v131 + v194;
          v194 += v131;
          --v130;
        }
        while ( v130 );
      }
    }
  }
  return v17;
}
