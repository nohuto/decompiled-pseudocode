/*
 * XREFs of CreateHalftoneBrushPat @ 0x140305660
 * Callers:
 *     HT_CreateHalftoneBrush @ 0x140303EB8 (HT_CreateHalftoneBrush.c)
 * Callees:
 *     ComputeRGBLUTAA @ 0x1401460F4 (ComputeRGBLUTAA.c)
 *     CachedHalftonePattern @ 0x1401E7BD4 (CachedHalftonePattern.c)
 *     ComputeBGRMappingTable @ 0x140304568 (ComputeBGRMappingTable.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall CreateHalftoneBrushPat(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, int a5)
{
  __int64 v8; // r12
  unsigned int v10; // edi
  int v11; // edx
  unsigned int v12; // r14d
  int v13; // edi
  __int64 v14; // rcx
  unsigned int v15; // r15d
  unsigned int v16; // r12d
  unsigned int v17; // ebx
  unsigned int v18; // ecx
  unsigned int v19; // r12d
  __int64 v20; // rcx
  __int64 v21; // rdx
  _BYTE *v22; // rax
  unsigned int v23; // r8d
  _BYTE *v24; // r10
  _BYTE *v25; // r12
  unsigned int v26; // r13d
  unsigned __int16 *v27; // r14
  unsigned int v28; // r11d
  unsigned __int16 *v29; // r10
  unsigned int v30; // edx
  char v31; // al
  unsigned int v32; // ecx
  _BYTE *v33; // r10
  _BYTE *v34; // r13
  unsigned int v35; // r11d
  unsigned __int16 *v36; // r10
  char v37; // dl
  unsigned int v38; // ecx
  __int64 v39; // rcx
  __int64 v40; // rdx
  _BYTE *v41; // rax
  unsigned int v42; // r8d
  _BYTE *v43; // r10
  _BYTE *v44; // r12
  unsigned int v45; // r13d
  unsigned __int16 *v46; // r14
  unsigned int v47; // r11d
  unsigned __int16 *v48; // r10
  unsigned int v49; // edx
  char v50; // al
  unsigned int v51; // ecx
  unsigned int v52; // r13d
  char *v53; // r15
  unsigned int v54; // r14d
  unsigned int v55; // eax
  __int64 v56; // rbx
  const void *v57; // r14
  int i; // edi
  char v59; // r8
  __int64 v60; // rax
  unsigned int v61; // r11d
  __int64 v62; // rcx
  int v63; // r14d
  unsigned __int16 *v64; // r13
  unsigned int v65; // r11d
  unsigned __int16 *v66; // r10
  unsigned int v67; // ecx
  int v68; // r11d
  unsigned int v69; // r14d
  int v70; // edi
  int v71; // r13d
  int v72; // esi
  char v73; // dl
  int v74; // eax
  unsigned int v75; // ecx
  char v76; // dl
  int v77; // ecx
  _BYTE *v78; // rax
  char v79; // dl
  unsigned int v80; // r8d
  char v81; // r9
  __int64 v82; // rax
  unsigned int v83; // r13d
  __int64 v84; // rcx
  int v85; // r14d
  unsigned __int16 *v86; // r15
  unsigned int v87; // r13d
  unsigned __int16 *v88; // r11
  unsigned int v89; // r10d
  _BYTE *v90; // r15
  char v91; // dl
  int v92; // eax
  unsigned int v93; // ecx
  int v94; // r10d
  int v95; // edx
  unsigned __int16 *v96; // r11
  unsigned int v97; // ecx
  unsigned int v98; // ecx
  unsigned int v99; // ecx
  unsigned int v100; // ecx
  unsigned int v101; // ecx
  unsigned int v102; // ecx
  unsigned int v103; // ecx
  __int64 v105; // rcx
  unsigned int v106; // r11d
  __int64 v107; // rdx
  int v108; // r14d
  unsigned __int16 *v109; // rax
  unsigned int v110; // r11d
  unsigned __int16 *v111; // r10
  unsigned int v112; // r13d
  _BYTE *v113; // r11
  int v114; // eax
  unsigned __int64 v115; // r8
  __int64 v116; // rax
  __int64 v117; // rcx
  __int64 v118; // r13
  __int64 v119; // r8
  _BYTE *v120; // r10
  unsigned int v121; // r11d
  unsigned __int16 *v122; // r8
  int v123; // eax
  unsigned __int64 v124; // rdx
  __int64 v125; // rcx
  unsigned int v126; // r11d
  __int64 v127; // rdx
  int v128; // r14d
  unsigned __int16 *v129; // rax
  unsigned int v130; // r11d
  unsigned __int16 *v131; // r10
  unsigned int v132; // r13d
  _DWORD *v133; // r11
  unsigned int v134; // edx
  int v135; // eax
  int v136; // ecx
  int v137; // r10d
  __int64 v138; // r15
  __int64 v139; // r11
  __int64 v140; // rdx
  _BYTE *v141; // r8
  unsigned int v142; // r9d
  unsigned __int16 *v143; // rdx
  int v144; // eax
  __int64 v145; // rcx
  __int64 v146; // rax
  __int64 v147; // r13
  __int64 v148; // r8
  _BYTE *v149; // r10
  unsigned int v150; // r11d
  unsigned __int16 *v151; // r14
  unsigned __int16 *v152; // r8
  int v153; // eax
  unsigned __int64 v154; // rdx
  __int64 v155; // rdx
  __int64 v156; // rax
  __int64 v157; // r10
  _BYTE *v158; // r11
  unsigned int v159; // r13d
  unsigned __int16 *v160; // r10
  int v161; // eax
  char v162; // dl
  unsigned int v163; // ecx
  __int64 v164; // rax
  __int64 v165; // rcx
  __int64 v166; // r13
  __int64 v167; // r8
  _BYTE *v168; // r10
  unsigned int v169; // r11d
  unsigned __int16 *v170; // r14
  unsigned __int16 *v171; // r8
  int v172; // eax
  unsigned __int64 v173; // rdx
  unsigned int v174; // [rsp+30h] [rbp-91h]
  unsigned int v175; // [rsp+30h] [rbp-91h]
  unsigned int v176; // [rsp+30h] [rbp-91h]
  unsigned int v177; // [rsp+30h] [rbp-91h]
  unsigned int v178; // [rsp+34h] [rbp-8Dh]
  int v179; // [rsp+34h] [rbp-8Dh]
  int v180; // [rsp+34h] [rbp-8Dh]
  int v181; // [rsp+38h] [rbp-89h]
  __int16 v182; // [rsp+3Ch] [rbp-85h]
  __int16 v183; // [rsp+40h] [rbp-81h] BYREF
  unsigned __int8 v184; // [rsp+42h] [rbp-7Fh]
  __int128 v185; // [rsp+48h] [rbp-79h]
  __int64 v186; // [rsp+58h] [rbp-69h]
  unsigned __int16 *v187; // [rsp+60h] [rbp-61h]
  _BYTE *v188; // [rsp+68h] [rbp-59h]
  unsigned __int64 v189; // [rsp+70h] [rbp-51h]
  unsigned int v190; // [rsp+78h] [rbp-49h]
  unsigned int v191; // [rsp+7Ch] [rbp-45h]
  _QWORD v192[3]; // [rsp+80h] [rbp-41h] BYREF
  int v193; // [rsp+98h] [rbp-29h]
  unsigned __int8 v194; // [rsp+A5h] [rbp-1Ch]
  unsigned __int8 v195; // [rsp+A6h] [rbp-1Bh]
  unsigned __int8 v196; // [rsp+A7h] [rbp-1Ah]
  int v197; // [rsp+D0h] [rbp+Fh]
  unsigned int v198; // [rsp+D4h] [rbp+13h]
  unsigned int v199; // [rsp+120h] [rbp+5Fh]
  unsigned int v200; // [rsp+120h] [rbp+5Fh]
  int v201; // [rsp+120h] [rbp+5Fh]
  _BYTE *v202; // [rsp+120h] [rbp+5Fh]
  _WORD *v203; // [rsp+120h] [rbp+5Fh]
  __int64 v204; // [rsp+120h] [rbp+5Fh]
  _BYTE *v206; // [rsp+138h] [rbp+77h]

  v8 = 0LL;
  memset_0(v192, 0, 0x48uLL);
  v183 = 0;
  v184 = 0;
  ComputeRGBLUTAA(a1, (__int128 *)a3, (_DWORD *)(a1 + 3956));
  v10 = -10005;
  if ( (unsigned int)ComputeBGRMappingTable(a1, a3, a2, &v183) == 1 )
  {
    v198 = CachedHalftonePattern(a1, a3, (__int64)v192, 0, 0, 0);
    v10 = v198;
    if ( (int)v198 > 0 )
    {
      v11 = *(_DWORD *)(a3 + 56);
      v12 = *(unsigned __int16 *)(a1 + 166);
      v13 = *(unsigned __int16 *)(a1 + 170);
      v178 = v12;
      v186 = *(_QWORD *)(a1 + 3976);
      v182 = v11;
      v185 = *(_OWORD *)(a1 + 3960);
      if ( (v11 & 0x400000) != 0 )
        v8 = (__int64)*(&p8BPPXlate + BYTE12(v185));
      v14 = a1 + 548;
      v181 = v11 & 0x2000000;
      if ( (v11 & 0x2000000) == 0 )
        v14 = v8;
      v187 = (unsigned __int16 *)v14;
      v15 = *(_DWORD *)(a1 + 4LL * (unsigned __int8)v183 + 3984);
      v16 = *(_DWORD *)(a1 + 4LL * ((unsigned int)HIBYTE(v183) + 256) + 3984);
      v174 = v16;
      v17 = *(_DWORD *)(a1 + 4LL * ((unsigned int)v184 + 512) + 3984);
      EngReleaseSemaphore(*(HSEMAPHORE *)(a1 + 8));
      v18 = *(unsigned __int8 *)(a3 + 31);
      if ( v18 > 0xF8 )
      {
        v98 = v18 - 249;
        if ( v98 )
        {
          v99 = v98 - 1;
          if ( !v99 )
          {
            if ( v13 )
            {
              v145 = a5;
              if ( v181 )
              {
                v146 = v193;
                v147 = v192[0];
                do
                {
                  v148 = v147;
                  v149 = a4;
                  v147 += v146;
                  a4 += v145;
                  --v13;
                  v150 = v12;
                  if ( v12 )
                  {
                    v151 = v187;
                    v152 = (unsigned __int16 *)(v148 + 2);
                    do
                    {
                      v153 = *v152;
                      v154 = (v15 - *(v152 - 1)) & 0x30000 | (unsigned __int64)((v17 - v152[1]) & 0xE00000);
                      v152 += 3;
                      *v149++ = *((_BYTE *)v151 + (((v16 - v153) & 0x1C0000 | v154) >> 16));
                      --v150;
                    }
                    while ( v150 );
                    v12 = v178;
                    v145 = a5;
                    v146 = v193;
                  }
                }
                while ( v13 );
              }
              else
              {
                v155 = v193;
                v156 = v192[0];
                do
                {
                  v157 = v156;
                  v158 = a4;
                  v156 += v155;
                  a4 += v145;
                  --v13;
                  v204 = v156;
                  v159 = v12;
                  if ( v12 )
                  {
                    v160 = (unsigned __int16 *)(v157 + 2);
                    do
                    {
                      v161 = *v160;
                      v162 = ((v17 - v160[1]) >> 16) & 0xE0;
                      v163 = (v15 - *(v160 - 1)) >> 16;
                      v160 += 3;
                      *v158++ = ((v16 - v161) >> 16) & 0x1C | v163 & 3 | v162;
                      --v159;
                    }
                    while ( v159 );
                    v156 = v204;
                    v145 = a5;
                    v155 = v193;
                  }
                }
                while ( v13 );
              }
            }
            return v198;
          }
          v100 = v99 - 1;
          if ( !v100 )
          {
            v137 = dwGrayIdxHB[(unsigned __int8)((unsigned __int16)(v15 + v17 + v16) >> 8)]
                 + (unsigned __int16)wGrayIdxLB[(unsigned __int8)(v15 + v17 + v16)];
            if ( v13 )
            {
              v138 = v193;
              v139 = v192[0];
              do
              {
                v140 = v139;
                v141 = a4;
                v139 += v138;
                a4 += a5;
                --v13;
                v142 = v12;
                if ( v12 )
                {
                  v143 = (unsigned __int16 *)(v140 + 2);
                  do
                  {
                    v144 = *v143;
                    v143 += 3;
                    *v141++ = BYTE13(v185) ^ ((unsigned int)(v137 - v144) >> 12);
                    --v142;
                  }
                  while ( v142 );
                }
              }
              while ( v13 );
            }
            return v198;
          }
          v101 = v100 - 1;
          if ( !v101 || (v102 = v101 - 1) == 0 )
          {
            if ( v13 )
            {
              v125 = v193;
              v126 = v12;
              v127 = a5;
              v128 = v12 & 1;
              v129 = (unsigned __int16 *)v192[0];
              v130 = v126 >> 1;
              LODWORD(v187) = v130;
              do
              {
                v131 = v129;
                v203 = a4;
                a4 += v127;
                --v13;
                v189 = (unsigned __int64)v129 + v125;
                v132 = v130;
                if ( v130 )
                {
                  v133 = v203;
                  do
                  {
                    v134 = DWORD2(v185) & (v17 - v131[5]) | (((unsigned int)v185 & (v15 - *v131) | DWORD1(v185) & (v16 - v131[1]) | DWORD2(v185) & (v17 - v131[2])) >> 16);
                    v135 = v131[3];
                    v136 = DWORD1(v185) & (v16 - v131[4]);
                    v131 += 6;
                    *v133++ = HIDWORD(v185) ^ (v185 & (v15 - v135) | v136 | v134);
                    --v132;
                  }
                  while ( v132 );
                  v203 = v133;
                  v130 = (unsigned int)v187;
                }
                if ( v128 )
                  *v203 = HIWORD(v185) ^ (WORD1(v185) & ((v15 - *v131) >> 16) | WORD3(v185) & ((v16 - v131[1]) >> 16) | WORD5(v185) & ((v17 - v131[2]) >> 16));
                v129 = (unsigned __int16 *)v189;
                v125 = v193;
                v127 = a5;
              }
              while ( v13 );
            }
            return v198;
          }
          v103 = v102 - 1;
          if ( !v103 )
          {
            if ( v13 )
            {
              v116 = v193;
              v117 = a5;
              v118 = v192[0];
              do
              {
                v119 = v118;
                v120 = a4;
                v118 += v116;
                a4 += v117;
                --v13;
                v121 = v12;
                if ( v12 )
                {
                  v122 = (unsigned __int16 *)(v119 + 4);
                  do
                  {
                    v123 = *v122;
                    v124 = (v16 - *(v122 - 1)) & 0x380000 | (unsigned __int64)((v15 - *(v122 - 2)) & 0x1C00000);
                    v122 += 3;
                    *v120++ = VGA256Xlate[((v17 - v123) & 0x70000 | v124) >> 16];
                    --v121;
                  }
                  while ( v121 );
                  v12 = v178;
                  v116 = v193;
                  v117 = a5;
                }
              }
              while ( v13 );
            }
            return v198;
          }
          if ( v103 == 1 )
          {
            if ( v13 )
            {
              v105 = v193;
              v106 = v12;
              v107 = a5;
              v108 = v12 & 1;
              v109 = (unsigned __int16 *)v192[0];
              v110 = v106 >> 1;
              LODWORD(v187) = v110;
              v180 = v108;
              do
              {
                v111 = v109;
                v202 = a4;
                a4 += v107;
                --v13;
                v189 = (unsigned __int64)v109 + v105;
                v112 = v110;
                if ( v110 )
                {
                  v113 = v202;
                  do
                  {
                    v114 = *v111;
                    v115 = (unsigned int)v186 & (v16 - v111[4]) | HIDWORD(v186) & (v17 - v111[5]) | DWORD1(v185) & (v16 - v111[1]) | DWORD2(v185) & (v17 - v111[2]) | (unsigned __int64)(HIDWORD(v185) & (v15 - v111[3]));
                    v111 += 6;
                    *v113++ = VGA16Xlate[(((unsigned int)v185 & (v15 - v114) | v115) ^ 0x770000) >> 16];
                    --v112;
                  }
                  while ( v112 );
                  v108 = v180;
                  v202 = v113;
                  v110 = (unsigned int)v187;
                }
                if ( v108 )
                  *v202 = VGA16Xlate[(((unsigned int)v185 & (v15 - *v111) | DWORD1(v185) & (v16 - v111[1]) | (unsigned __int64)(DWORD2(v185) & (v17 - v111[2]))) ^ 0x700000) >> 16];
                v109 = (unsigned __int16 *)v189;
                v105 = v193;
                v107 = a5;
              }
              while ( v13 );
            }
            return v198;
          }
          return 4294967285LL;
        }
      }
      else if ( v18 != 248 )
      {
        if ( v18 == 1 )
        {
          v80 = ((v15 + v17 + v16) ^ 0xFFF0) >> 4;
          v81 = -((v182 & 0x4000) == 0);
          if ( v13 )
          {
            v82 = v193;
            v83 = v12;
            v84 = a5;
            v85 = v12 & 7;
            v86 = (unsigned __int16 *)v192[0];
            v87 = v83 >> 3;
            do
            {
              v88 = v86;
              v188 = a4;
              v86 = (unsigned __int16 *)((char *)v86 + v82);
              a4 += v84;
              --v13;
              v187 = v86;
              v89 = v87;
              if ( v87 )
              {
                v90 = v188;
                do
                {
                  v91 = ((v80 - v88[7]) >> 16) & 0x20 | ((v80 - v88[16]) >> 16) & 4 | ((v80 - v88[19]) >> 16) & 2 | ((v80 - v88[4]) >> 16) & 0x40 | ((v80 - v88[22]) >> 16) & 1 | ((v80 - v88[1]) >> 16) & 0x80;
                  v92 = v88[10];
                  v93 = (v80 - v88[13]) >> 16;
                  v88 += 24;
                  *v90++ = v81 ^ (((v80 - v92) >> 16) & 0x10 | v93 & 8 | v91);
                  --v89;
                }
                while ( v89 );
                v188 = v90;
                v86 = v187;
              }
              v94 = v85;
              if ( v85 )
              {
                v95 = 0;
                v96 = v88 + 1;
                do
                {
                  v97 = v80 - *v96;
                  v96 += 3;
                  v95 = (2 * v95) | v97 & 0x10000;
                  --v94;
                }
                while ( v94 );
                v201 = v95;
                v86 = v187;
                BYTE2(v201) = v81 ^ BYTE2(v95);
                *v188 = (unsigned int)(v201 << (8 - v85)) >> 16;
              }
              v82 = v193;
              v84 = a5;
            }
            while ( v13 );
          }
          return v198;
        }
        if ( v18 == 2 )
        {
          v59 = (v182 & 0x4000) == 0 ? 0x77 : 0;
          if ( v13 )
          {
            v60 = v193;
            v61 = v12;
            v62 = a5;
            v63 = v12 & 1;
            v64 = (unsigned __int16 *)v192[0];
            v65 = v61 >> 1;
            LODWORD(v187) = v65;
            v179 = v63;
            do
            {
              --v13;
              v188 = a4;
              a4 += v62;
              v197 = v13;
              v66 = v64;
              v206 = a4;
              v64 = (unsigned __int16 *)((char *)v64 + v60);
              v67 = v65;
              v189 = (unsigned __int64)v64;
              if ( v65 )
              {
                v68 = HIWORD(DWORD2(v185));
                v69 = WORD1(v186);
                v70 = HIWORD(DWORD1(v185));
                v71 = HIWORD(HIDWORD(v186));
                v72 = HIWORD(HIDWORD(v185));
                v177 = WORD1(v185);
                do
                {
                  v200 = v67 - 1;
                  v73 = v68 & ((v17 - v66[2]) >> 16) | v69 & ((v16 - v66[4]) >> 16) | v70 & ((v16 - v66[1]) >> 16) | v72 & ((v15 - v66[3]) >> 16);
                  v74 = *v66;
                  v75 = (v17 - v66[5]) >> 16;
                  v66 += 6;
                  v76 = v71 & v75 | v73;
                  v77 = v15 - v74;
                  v78 = v188;
                  v79 = v177 & BYTE2(v77) | v76;
                  v67 = v200;
                  *v188 = v59 ^ v79;
                  v188 = v78 + 1;
                }
                while ( v200 );
                v13 = v197;
                a4 = v206;
                v63 = v179;
                v65 = (unsigned int)v187;
                v64 = (unsigned __int16 *)v189;
              }
              if ( v63 )
                *v188 = v59 ^ (BYTE2(v185) & ((v15 - *v66) >> 16) | BYTE6(v185) & ((v16 - v66[1]) >> 16) | BYTE10(v185) & ((v17 - v66[2]) >> 16));
              v60 = v193;
              v62 = a5;
            }
            while ( v13 );
          }
          return v198;
        }
        v19 = 3;
        switch ( v18 )
        {
          case 5u:
          case 6u:
            a4[v194] = ~(_BYTE)v17;
            a4[v195] = ~(_BYTE)v174;
            a4[v196] = ~(_BYTE)v15;
            if ( (_BYTE)v18 == 5 )
            {
              v52 = 3 * v12;
            }
            else
            {
              v19 = 4;
              a4[3] = 0;
              v52 = 4 * v12;
            }
            v53 = &a4[v19];
            v54 = v52 - v19;
            if ( v52 != v19 )
            {
              do
              {
                v55 = v54;
                if ( v19 <= v54 )
                  v55 = v19;
                v56 = v55;
                memmove(v53, a4, v55);
                v53 += v56;
                v19 += v56;
                v54 -= v56;
              }
              while ( v54 );
            }
            v57 = a4;
            for ( i = v13 - 1; i; --i )
            {
              a4 += a5;
              memmove(a4, v57, v52);
            }
            return v198;
          case 0xF5u:
          case 0xF6u:
            if ( v13 )
            {
              v39 = v193;
              v40 = a5;
              v41 = (_BYTE *)v192[0];
              v42 = v174;
              do
              {
                v43 = v41;
                v44 = a4;
                v41 += v39;
                a4 += v40;
                --v13;
                v188 = v41;
                v45 = v12;
                if ( v12 )
                {
                  v46 = v187;
                  v189 = __PAIR64__(v42, v17);
                  v191 = v15;
                  v190 = v15;
                  v47 = *((_DWORD *)&v189
                        + ((v17 >= v42) | (unsigned __int64)(*((_DWORD *)&v189 + (v17 >= v42)) >= v15 ? 2 : 0))) >> 21;
                  v48 = (unsigned __int16 *)(v43 + 2);
                  do
                  {
                    v49 = v48[1];
                    --v45;
                    v50 = BYTE14(v185);
                    if ( v47 < v49 )
                    {
                      v51 = *v48;
                      if ( v47 < v51 )
                      {
                        v176 = *(v48 - 1);
                        if ( v47 >= v176 )
                          v50 = BYTE14(v185);
                        else
                          v50 = *((_BYTE *)v46
                                + (((unsigned __int16)(v15 - v176) & (unsigned __int16)(v176 - v185) & 0x7000 | (v42 - v51) & (v51 - DWORD1(v185)) & 0x38000 | (unsigned __int64)((v17 - v49) & (v49 - DWORD2(v185)) & 0x1C0000)) >> 12));
                      }
                    }
                    *v44 = v50;
                    v48 += 3;
                    ++v44;
                  }
                  while ( v45 );
                  v12 = v178;
                  v41 = v188;
                  v39 = v193;
                  v40 = a5;
                }
              }
              while ( v13 );
            }
            return v198;
          case 0xF7u:
            if ( v13 )
            {
              v20 = a5;
              v21 = v193;
              v22 = (_BYTE *)v192[0];
              v23 = v174;
              if ( v181 )
              {
                do
                {
                  v24 = v22;
                  v25 = a4;
                  v22 += v21;
                  a4 += v20;
                  --v13;
                  v188 = v22;
                  v26 = v12;
                  if ( v12 )
                  {
                    v27 = v187;
                    v189 = __PAIR64__(v23, v17);
                    v191 = v15;
                    v190 = v15;
                    v28 = *((_DWORD *)&v189
                          + ((v17 >= v23) | (unsigned __int64)(*((_DWORD *)&v189 + (v17 >= v23)) >= v15 ? 2 : 0))) >> 21;
                    v29 = (unsigned __int16 *)(v24 + 2);
                    do
                    {
                      v30 = v29[1];
                      --v26;
                      v31 = BYTE14(v185);
                      if ( v28 < v30 )
                      {
                        v32 = *v29;
                        if ( v28 < v32 )
                        {
                          v175 = *(v29 - 1);
                          if ( v28 >= v175 )
                            v31 = BYTE14(v185);
                          else
                            v31 = *((_BYTE *)v27
                                  + (((unsigned __int16)(v15 - v175) & (unsigned __int16)(v175 - v185) & 0x3000 | (v23 - v32) & (v32 - DWORD1(v185)) & 0x1C000 | (unsigned __int64)((v17 - v30) & (v30 - DWORD2(v185)) & 0xE0000)) >> 12));
                        }
                      }
                      *v25 = v31;
                      v29 += 3;
                      ++v25;
                    }
                    while ( v26 );
                    v12 = v178;
                    v22 = v188;
                    v20 = a5;
                    v21 = v193;
                  }
                }
                while ( v13 );
              }
              else
              {
                do
                {
                  v33 = v22;
                  v34 = a4;
                  v22 += v21;
                  a4 += v20;
                  --v13;
                  v188 = v22;
                  if ( v12 )
                  {
                    v189 = __PAIR64__(v174, v17);
                    v191 = v15;
                    v190 = v15;
                    v35 = *((_DWORD *)&v189
                          + ((v17 >= v174) | (unsigned __int64)(*((_DWORD *)&v189 + (v17 >= v174)) >= v15 ? 2 : 0))) >> 21;
                    v36 = (unsigned __int16 *)(v33 + 2);
                    do
                    {
                      --v12;
                      v37 = BYTE14(v185);
                      v199 = v36[1];
                      if ( v35 < v199 )
                      {
                        v38 = *v36;
                        if ( v35 < v38 && v35 < *(v36 - 1) )
                          v37 = ((v15 - *(v36 - 1)) >> 12) & ((*(v36 - 1) - (unsigned int)v185) >> 12) & 3 | ((v174 - v38) >> 12) & ((v38 - DWORD1(v185)) >> 12) & 0x1C | ((v17 - v199) >> 12) & ((v199 - DWORD2(v185)) >> 12) & 0xE0;
                      }
                      *v34 = v37;
                      v36 += 3;
                      ++v34;
                    }
                    while ( v12 );
                    v12 = v178;
                    v22 = v188;
                    v20 = a5;
                    v21 = v193;
                  }
                }
                while ( v13 );
              }
            }
            return v198;
        }
        return 4294967285LL;
      }
      if ( v13 )
      {
        v164 = v193;
        v165 = a5;
        v166 = v192[0];
        do
        {
          v167 = v166;
          v168 = a4;
          v166 += v164;
          a4 += v165;
          --v13;
          v169 = v12;
          if ( v12 )
          {
            v170 = v187;
            v171 = (unsigned __int16 *)(v167 + 2);
            do
            {
              v172 = *v171;
              v173 = (v15 - *(v171 - 1)) & 0x70000 | (unsigned __int64)((v17 - v171[1]) & 0x1C00000);
              v171 += 3;
              *v168++ = *((_BYTE *)v170 + (((v16 - v172) & 0x380000 | v173) >> 16));
              --v169;
            }
            while ( v169 );
            v12 = v178;
            v164 = v193;
            v165 = a5;
          }
        }
        while ( v13 );
      }
      return v198;
    }
  }
  EngReleaseSemaphore(*(HSEMAPHORE *)(a1 + 8));
  return v10;
}
