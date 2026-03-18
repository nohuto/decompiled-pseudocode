/*
 * XREFs of CreateHalftoneBrushPat @ 0x1C024F4A4
 * Callers:
 *     HT_CreateHalftoneBrush @ 0x1C024D928 (HT_CreateHalftoneBrush.c)
 * Callees:
 *     CachedHalftonePattern @ 0x1C00A55D8 (CachedHalftonePattern.c)
 *     ComputeRGBLUTAA @ 0x1C00A6FC0 (ComputeRGBLUTAA.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     ComputeBGRMappingTable @ 0x1C024E430 (ComputeBGRMappingTable.c)
 */

__int64 __fastcall CreateHalftoneBrushPat(__int64 a1, __int128 *a2, __int64 a3, _BYTE *a4, int a5)
{
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int128 v11; // xmm0
  int v12; // edi
  int v13; // esi
  __int64 v14; // xmm1_8
  int v15; // ebx
  unsigned int v16; // r15d
  unsigned int v17; // r12d
  unsigned int v18; // r13d
  unsigned __int8 v19; // cl
  unsigned int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r11
  _BYTE *v24; // r10
  __int64 v25; // r8
  _BYTE *v26; // r9
  char v27; // r14
  unsigned __int16 *v28; // r8
  unsigned int v29; // esi
  unsigned __int64 v30; // rcx
  unsigned int v31; // edx
  unsigned int v32; // eax
  char v33; // al
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned __int16 *v36; // r11
  unsigned __int16 *v37; // r8
  _BYTE *v38; // r10
  unsigned __int16 *v39; // r8
  unsigned int v40; // ecx
  char v41; // dl
  unsigned int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r11
  _BYTE *v46; // r10
  __int64 v47; // r8
  _BYTE *v48; // r9
  char v49; // r14
  unsigned __int16 *v50; // r8
  unsigned int v51; // esi
  unsigned int v52; // edx
  unsigned int v53; // ecx
  unsigned int v54; // eax
  char v55; // al
  unsigned int v56; // r13d
  char *v57; // r12
  unsigned int v58; // r15d
  unsigned int v59; // esi
  unsigned int v60; // edi
  const void *v61; // rdi
  int i; // esi
  char v63; // r8
  __int64 v64; // rax
  unsigned int v65; // r11d
  __int64 v66; // rcx
  int v67; // edi
  unsigned __int16 *v68; // r10
  int v69; // r11d
  unsigned __int16 *v70; // r9
  int v71; // edi
  int v72; // esi
  int v73; // r14d
  unsigned int v74; // r10d
  char v75; // dl
  int v76; // eax
  unsigned int v77; // ecx
  char v78; // dl
  __int64 v79; // rcx
  unsigned int v80; // r10d
  char v81; // r11
  __int64 v82; // rdx
  unsigned int v83; // ecx
  __int64 v84; // r15
  int v85; // edi
  unsigned __int16 *v86; // rax
  int v87; // ecx
  unsigned __int16 *v88; // r8
  _BYTE *v89; // r12
  int v90; // r15d
  char v91; // dl
  int v92; // eax
  unsigned int v93; // ecx
  int v94; // r15d
  int v95; // eax
  unsigned __int16 *v96; // r13
  int v97; // ecx
  __int64 v98; // rax
  __int64 v99; // rcx
  unsigned __int16 *v100; // r9
  _BYTE *v101; // r10
  unsigned __int16 *v102; // r8
  _BYTE *v103; // r11
  unsigned __int16 *v104; // r8
  int v105; // eax
  unsigned __int64 v106; // rdx
  __int64 v107; // rax
  unsigned int v108; // r11d
  __int64 v109; // rcx
  int v110; // edi
  unsigned __int16 *v111; // r9
  unsigned int v112; // r11d
  unsigned __int16 *v113; // r10
  unsigned __int64 v114; // rdx
  _BYTE *v115; // rdi
  unsigned __int64 v116; // rsi
  unsigned __int64 v117; // r9
  unsigned __int64 v118; // r14
  int v119; // eax
  unsigned __int64 v120; // r8
  __int64 v121; // rax
  __int64 v122; // rcx
  unsigned __int16 *v123; // r9
  unsigned __int16 *v124; // r8
  _BYTE *v125; // r10
  int v126; // r11d
  unsigned __int16 *v127; // r8
  int v128; // eax
  unsigned __int64 v129; // rdx
  __int64 v130; // rcx
  unsigned int v131; // eax
  __int64 v132; // rdx
  int v133; // edi
  unsigned __int16 *v134; // r11
  int v135; // eax
  unsigned __int16 *v136; // r8
  int v137; // r10d
  _DWORD *v138; // rdi
  unsigned int v139; // edx
  int v140; // eax
  int v141; // ecx
  int v143; // r11d
  __int64 v144; // r15
  unsigned __int16 *v145; // rdx
  unsigned __int16 *v146; // r8
  _BYTE *v147; // r9
  int v148; // r10d
  unsigned __int16 *v149; // r8
  int v150; // eax
  __int64 v151; // rax
  __int64 v152; // rcx
  unsigned __int16 *v153; // r9
  _BYTE *v154; // r10
  unsigned __int16 *v155; // r8
  _BYTE *v156; // r11
  unsigned __int16 *v157; // r8
  int v158; // eax
  unsigned __int64 v159; // rdx
  __int64 v160; // rax
  __int64 v161; // rcx
  unsigned __int16 *v162; // r10
  unsigned __int16 *v163; // r8
  _BYTE *v164; // r11
  unsigned __int16 *v165; // r8
  int v166; // eax
  char v167; // dl
  unsigned int v168; // ecx
  int v169; // [rsp+38h] [rbp-C8h]
  int v170; // [rsp+38h] [rbp-C8h]
  unsigned int v171; // [rsp+38h] [rbp-C8h]
  int v172; // [rsp+38h] [rbp-C8h]
  int v173; // [rsp+38h] [rbp-C8h]
  int v174; // [rsp+38h] [rbp-C8h]
  int v175; // [rsp+38h] [rbp-C8h]
  int v176; // [rsp+3Ch] [rbp-C4h]
  unsigned int v177; // [rsp+3Ch] [rbp-C4h]
  int v178; // [rsp+40h] [rbp-C0h] BYREF
  int v179; // [rsp+44h] [rbp-BCh]
  __int64 v180; // [rsp+48h] [rbp-B8h]
  __int64 v181; // [rsp+58h] [rbp-A8h]
  __int128 v182; // [rsp+60h] [rbp-A0h]
  __int64 v183; // [rsp+70h] [rbp-90h]
  _BYTE *v184; // [rsp+78h] [rbp-88h]
  unsigned int v185; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v186; // [rsp+90h] [rbp-70h] BYREF
  int v187; // [rsp+A8h] [rbp-58h]
  unsigned __int8 v188; // [rsp+B5h] [rbp-4Bh]
  unsigned __int8 v189; // [rsp+B6h] [rbp-4Ah]
  unsigned __int8 v190; // [rsp+B7h] [rbp-49h]
  int v191; // [rsp+E0h] [rbp-20h]
  int v192; // [rsp+E4h] [rbp-1Ch]
  unsigned int v193; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v194; // [rsp+F0h] [rbp-10h]
  unsigned int v195; // [rsp+F8h] [rbp-8h]
  unsigned int v196; // [rsp+FCh] [rbp-4h]

  v181 = a3;
  v180 = a1;
  v184 = 0LL;
  ComputeRGBLUTAA((_DWORD *)a1, (__int128 *)a3, (_DWORD *)(a1 + 3956));
  v9 = -10005;
  if ( (unsigned int)ComputeBGRMappingTable(v10, a3, a2, &v178) == 1 )
  {
    v193 = CachedHalftonePattern(a1, a3, (__int64)&v186, 0, 0, 0);
    v9 = v193;
    if ( (int)v193 > 0 )
    {
      v11 = *(_OWORD *)(a1 + 3960);
      v12 = *(unsigned __int16 *)(a1 + 166);
      v13 = *(unsigned __int16 *)(a1 + 170);
      v14 = *(_QWORD *)(a1 + 3976);
      v15 = *(_DWORD *)(a3 + 56);
      v179 = v12;
      v169 = v13;
      v183 = v14;
      v182 = v11;
      if ( (v15 & 0x400000) != 0 )
        v184 = *(&p8BPPXlate + BYTE12(v182));
      v176 = v15 & 0x2000000;
      if ( (v15 & 0x2000000) != 0 )
        v184 = (_BYTE *)(a1 + 548);
      v16 = *(_DWORD *)(a1 + 4LL * (unsigned __int8)v178 + 3984);
      v17 = *(_DWORD *)(a1 + 4LL * ((unsigned int)BYTE1(v178) + 256) + 3984);
      v18 = *(_DWORD *)(a1 + 4LL * ((unsigned int)BYTE2(v178) + 512) + 3984);
      EngReleaseSemaphore(*(HSEMAPHORE *)(v180 + 8));
      v19 = *(_BYTE *)(v181 + 31);
      if ( v19 > 0xF9u )
      {
        if ( v19 == 250 )
        {
          if ( v176 )
          {
            if ( v13 )
            {
              v151 = v187;
              v152 = a5;
              v153 = v186;
              v154 = v184;
              do
              {
                v155 = v153;
                v156 = a4;
                v153 = (unsigned __int16 *)((char *)v153 + v151);
                a4 += v152;
                --v13;
                if ( v12 )
                {
                  v157 = v155 + 1;
                  do
                  {
                    v158 = *v157;
                    v159 = (v16 - *(v157 - 1)) & 0x30000 | (unsigned __int64)((v18 - v157[1]) & 0xE00000);
                    v157 += 3;
                    *v156++ = v154[((v17 - v158) & 0x1C0000 | v159) >> 16];
                    --v12;
                  }
                  while ( v12 );
                  v12 = v179;
                  v151 = v187;
                  v152 = a5;
                }
              }
              while ( v13 );
            }
          }
          else if ( v13 )
          {
            v160 = v187;
            v161 = a5;
            v162 = v186;
            do
            {
              v163 = v162;
              v164 = a4;
              v162 = (unsigned __int16 *)((char *)v162 + v160);
              a4 += v161;
              --v13;
              if ( v12 )
              {
                v165 = v163 + 1;
                do
                {
                  v166 = *v165;
                  v167 = ((v18 - v165[1]) >> 16) & 0xE0;
                  v168 = (v16 - *(v165 - 1)) >> 16;
                  v165 += 3;
                  *v164++ = ((v17 - v166) >> 16) & 0x1C | v168 & 3 | v167;
                  --v12;
                }
                while ( v12 );
                v12 = v179;
                v160 = v187;
                v161 = a5;
              }
            }
            while ( v13 );
          }
          return v193;
        }
        if ( v19 == 251 )
        {
          v143 = dwGrayIdxHB[(unsigned __int8)((unsigned __int16)(v16 + v17 + v18) >> 8)]
               + (unsigned __int16)wGrayIdxLB[(unsigned __int8)(v16 + v17 + v18)];
          if ( v13 )
          {
            v144 = v187;
            v145 = v186;
            do
            {
              v146 = v145;
              v147 = a4;
              v145 = (unsigned __int16 *)((char *)v145 + v144);
              a4 += a5;
              --v13;
              v148 = v12;
              if ( v12 )
              {
                v149 = v146 + 1;
                do
                {
                  v150 = *v149;
                  v149 += 3;
                  *v147++ = BYTE13(v182) ^ ((unsigned int)(v143 - v150) >> 12);
                  --v148;
                }
                while ( v148 );
              }
            }
            while ( v13 );
          }
          return v193;
        }
        if ( *(unsigned __int8 *)(v181 + 31) > 0xFBu )
        {
          if ( *(unsigned __int8 *)(v181 + 31) <= 0xFDu )
          {
            if ( v13 )
            {
              v130 = v187;
              v131 = v12;
              v132 = a5;
              v133 = v12 & 1;
              v134 = v186;
              v135 = v131 >> 1;
              LODWORD(v181) = v135;
              v179 = v133;
              do
              {
                v136 = v134;
                v180 = (__int64)a4;
                v134 = (unsigned __int16 *)((char *)v134 + v130);
                a4 += v132;
                --v13;
                v137 = v135;
                if ( v135 )
                {
                  v138 = (_DWORD *)v180;
                  do
                  {
                    v139 = DWORD2(v182) & (v18 - v136[5]) | (((unsigned int)v182 & (v16 - *v136) | DWORD1(v182) & (v17 - v136[1]) | DWORD2(v182) & (v18 - v136[2])) >> 16);
                    v140 = v136[3];
                    v141 = DWORD1(v182) & (v17 - v136[4]);
                    v136 += 6;
                    *v138++ = HIDWORD(v182) ^ (v182 & (v16 - v140) | v141 | v139);
                    --v137;
                  }
                  while ( v137 );
                  v180 = (__int64)v138;
                  v133 = v179;
                }
                if ( v133 )
                  *(_WORD *)v180 = HIWORD(v182) ^ (WORD1(v182) & ((v16 - *v136) >> 16) | WORD3(v182) & ((v17 - v136[1]) >> 16) | WORD5(v182) & ((v18 - v136[2]) >> 16));
                v135 = v181;
                v130 = v187;
                v132 = a5;
              }
              while ( v13 );
            }
          }
          else if ( v19 == 254 )
          {
            if ( v13 )
            {
              v121 = v187;
              v122 = a5;
              v123 = v186;
              do
              {
                v124 = v123;
                v125 = a4;
                v123 = (unsigned __int16 *)((char *)v123 + v121);
                a4 += v122;
                --v13;
                v126 = v12;
                if ( v12 )
                {
                  v127 = v124 + 1;
                  do
                  {
                    v128 = *v127;
                    v129 = (v18 - v127[1]) & 0x70000 | (unsigned __int64)((v16 - *(v127 - 1)) & 0x1C00000);
                    v127 += 3;
                    *v125++ = VGA256Xlate[((v17 - v128) & 0x380000 | v129) >> 16];
                    --v126;
                  }
                  while ( v126 );
                  v12 = v179;
                  v121 = v187;
                  v122 = a5;
                }
              }
              while ( v13 );
            }
          }
          else if ( v13 )
          {
            v107 = v187;
            v108 = v12;
            v109 = a5;
            v110 = v12 & 1;
            v111 = v186;
            v112 = v108 >> 1;
            v185 = v112;
            v179 = v110;
            do
            {
              --v13;
              v180 = (__int64)a4;
              a4 += v109;
              v175 = v13;
              v113 = v111;
              v184 = a4;
              v111 = (unsigned __int16 *)((char *)v111 + v107);
              v194 = (unsigned __int64)v111;
              if ( v112 )
              {
                v114 = HIDWORD(v183);
                v115 = (_BYTE *)v180;
                v116 = DWORD1(v182);
                v117 = DWORD2(v182);
                v118 = HIDWORD(v182);
                do
                {
                  v119 = *v113;
                  v120 = (v116 >> 16) & ((unsigned __int64)(v17 - v113[1]) >> 16) | (v117 >> 16) & ((unsigned __int64)(v18 - v113[2]) >> 16) | (v118 >> 16) & ((unsigned __int64)(v16 - v113[3]) >> 16) | ((unsigned __int64)(unsigned int)v183 >> 16) & ((unsigned __int64)(v17 - v113[4]) >> 16) | (v114 >> 16) & ((unsigned __int64)(v18 - v113[5]) >> 16);
                  v113 += 6;
                  v114 = HIDWORD(v183);
                  *v115++ = VGA16Xlate[(((unsigned __int64)(unsigned int)v182 >> 16) & ((unsigned __int64)(v16 - v119) >> 16) | v120) ^ 0x77];
                  --v112;
                }
                while ( v112 );
                v13 = v175;
                a4 = v184;
                v111 = (unsigned __int16 *)v194;
                v112 = v185;
                v180 = (__int64)v115;
                v110 = v179;
              }
              if ( v110 )
                *(_BYTE *)v180 = VGA16Xlate[(((unsigned int)v182 & (v16 - *v113) | DWORD1(v182) & (v17 - v113[1]) | (unsigned __int64)(DWORD2(v182) & (v18 - v113[2]))) ^ 0x700000) >> 16];
              v107 = v187;
              v109 = a5;
            }
            while ( v13 );
          }
          return v193;
        }
      }
      else
      {
        if ( *(unsigned __int8 *)(v181 + 31) >= 0xF8u )
        {
          if ( v13 )
          {
            v98 = v187;
            v99 = a5;
            v100 = v186;
            v101 = v184;
            do
            {
              v102 = v100;
              v103 = a4;
              v100 = (unsigned __int16 *)((char *)v100 + v98);
              a4 += v99;
              --v13;
              if ( v12 )
              {
                v104 = v102 + 1;
                do
                {
                  v105 = *v104;
                  v106 = (v16 - *(v104 - 1)) & 0x70000 | (unsigned __int64)((v18 - v104[1]) & 0x1C00000);
                  v104 += 3;
                  *v103++ = v101[((v17 - v105) & 0x380000 | v106) >> 16];
                  --v12;
                }
                while ( v12 );
                v12 = v179;
                v98 = v187;
                v99 = a5;
              }
            }
            while ( v13 );
          }
          return v193;
        }
        if ( v19 == 1 )
        {
          v80 = ((v16 + v17 + v18) ^ 0xFFF0) >> 4;
          v81 = -((v15 & 0x4000) == 0);
          if ( v13 )
          {
            v82 = v187;
            v83 = v12;
            v84 = a5;
            v85 = v12 & 7;
            v86 = v186;
            v87 = v83 >> 3;
            LODWORD(v181) = v87;
            do
            {
              v88 = v86;
              v180 = (__int64)a4;
              v89 = a4;
              a4 += v84;
              v194 = (unsigned __int64)v86 + v82;
              --v13;
              v90 = v87;
              if ( v87 )
              {
                do
                {
                  v91 = ((v80 - v88[7]) >> 16) & 0x20 | ((v80 - v88[16]) >> 16) & 4 | ((v80 - v88[19]) >> 16) & 2 | ((v80 - v88[4]) >> 16) & 0x40 | ((v80 - v88[22]) >> 16) & 1 | ((v80 - v88[1]) >> 16) & 0x80;
                  v92 = v88[10];
                  v93 = (v80 - v88[13]) >> 16;
                  v88 += 24;
                  *v89++ = v81 ^ (((v80 - v92) >> 16) & 0x10 | v93 & 8 | v91);
                  --v90;
                }
                while ( v90 );
                v180 = (__int64)v89;
              }
              v94 = v85;
              if ( v85 )
              {
                v95 = 0;
                v96 = v88 + 1;
                do
                {
                  v97 = *v96;
                  v96 += 3;
                  v95 = (2 * v95) | (v80 - v97) & 0x10000;
                  --v94;
                }
                while ( v94 );
                v174 = v95;
                BYTE2(v174) = v81 ^ BYTE2(v95);
                *(_BYTE *)v180 = (unsigned int)(v174 << (8 - v85)) >> 16;
              }
              v86 = (unsigned __int16 *)v194;
              v87 = v181;
              v82 = v187;
              v84 = a5;
            }
            while ( v13 );
          }
          return v193;
        }
        if ( v19 == 2 )
        {
          v63 = (v15 & 0x4000) == 0 ? 0x77 : 0;
          if ( v13 )
          {
            v64 = v187;
            v65 = v12;
            v66 = a5;
            v67 = v12 & 1;
            v68 = v186;
            v69 = v65 >> 1;
            LODWORD(v181) = v69;
            v179 = v67;
            do
            {
              --v13;
              v180 = (__int64)a4;
              a4 += v66;
              v173 = v13;
              v70 = v68;
              v184 = a4;
              v68 = (unsigned __int16 *)((char *)v68 + v64);
              v194 = (unsigned __int64)v68;
              if ( v69 )
              {
                v71 = HIWORD(HIDWORD(v183));
                v178 = HIWORD(DWORD2(v182));
                v72 = HIWORD(DWORD2(v182));
                v192 = HIWORD(DWORD1(v182));
                v73 = HIWORD(DWORD1(v182));
                v191 = HIWORD(HIDWORD(v182));
                v74 = WORD1(v183);
                v185 = WORD1(v182);
                do
                {
                  v75 = v73 & ((v17 - v70[1]) >> 16) | v191 & ((v16 - v70[3]) >> 16) | v72 & ((v18 - v70[2]) >> 16) | v74 & ((v17 - v70[4]) >> 16);
                  v76 = *v70;
                  v77 = (v18 - v70[5]) >> 16;
                  v70 += 6;
                  v78 = v185 & ((v16 - v76) >> 16) | v71 & v77 | v75;
                  v79 = v180;
                  *(_BYTE *)v180 = v63 ^ v78;
                  v180 = v79 + 1;
                  --v69;
                }
                while ( v69 );
                v13 = v173;
                a4 = v184;
                v67 = v179;
                v68 = (unsigned __int16 *)v194;
                v69 = v181;
              }
              if ( v67 )
                *(_BYTE *)v180 = v63 ^ (BYTE2(v182) & ((v16 - *v70) >> 16) | BYTE6(v182) & ((v17 - v70[1]) >> 16) | BYTE10(v182) & ((v18 - v70[2]) >> 16));
              v64 = v187;
              v66 = a5;
            }
            while ( v13 );
          }
          return v193;
        }
        v20 = 4;
        v180 = 4LL;
        if ( v19 > 4u )
        {
          if ( v19 <= 6u )
          {
            a4[v188] = ~(_BYTE)v18;
            a4[v189] = ~(_BYTE)v17;
            a4[v190] = ~(_BYTE)v16;
            if ( v19 == 5 )
            {
              v20 = 3;
              v56 = 3 * v12;
              v180 = 3LL;
            }
            else
            {
              a4[3] = 0;
              v56 = 4 * v12;
            }
            v57 = &a4[v20];
            v58 = v56 - v20;
            if ( v56 != v20 )
            {
              v59 = v180;
              do
              {
                v60 = v59;
                if ( v59 > v58 )
                  v60 = v58;
                memmove(v57, a4, v60);
                v57 += v60;
                v59 += v60;
                v58 -= v60;
              }
              while ( v58 );
              v13 = v169;
            }
            v61 = a4;
            for ( i = v13 - 1; i; --i )
            {
              a4 += a5;
              memmove(a4, v61, v56);
            }
            return v193;
          }
          if ( v19 > 0xF4u )
          {
            if ( v19 <= 0xF6u )
            {
              if ( v13 )
              {
                v43 = v187;
                v44 = a5;
                v45 = (__int64)v186;
                v46 = v184;
                do
                {
                  --v13;
                  v47 = v45;
                  v45 += v43;
                  v172 = v13;
                  v48 = a4;
                  v180 = v45;
                  a4 += v44;
                  v184 = a4;
                  if ( v12 )
                  {
                    v49 = BYTE14(v182);
                    v50 = (unsigned __int16 *)(v47 + 4);
                    v194 = __PAIR64__(v17, v18);
                    v196 = v16;
                    v195 = v16;
                    do
                    {
                      v51 = *v50;
                      --v12;
                      v52 = *(v50 - 1);
                      v53 = *(v50 - 2);
                      v54 = *((_DWORD *)&v194
                            + ((v18 >= v17) | (unsigned __int64)(2
                                                               * (unsigned int)(*((_DWORD *)&v194 + (v18 >= v17)) >= v16)))) >> 21;
                      v178 = v53;
                      if ( v54 >= v51 || v54 >= v52 || v54 >= v53 )
                        v55 = v49;
                      else
                        v55 = v46[((unsigned __int16)(v16 - v178) & (unsigned __int16)(v178 - v182) & 0x7000 | (v17 - v52) & (v52 - DWORD1(v182)) & 0x38000 | (unsigned __int64)((v18 - v51) & (v51 - DWORD2(v182)) & 0x1C0000)) >> 12];
                      *v48 = v55;
                      v50 += 3;
                      ++v48;
                    }
                    while ( v12 );
                    v13 = v172;
                    a4 = v184;
                    v12 = v179;
                    v45 = v180;
                    v43 = v187;
                    v44 = a5;
                  }
                }
                while ( v13 );
              }
            }
            else if ( v176 )
            {
              if ( v13 )
              {
                v21 = v187;
                v22 = a5;
                v23 = (__int64)v186;
                v24 = v184;
                do
                {
                  --v13;
                  v25 = v23;
                  v23 += v21;
                  v170 = v13;
                  v26 = a4;
                  v180 = v23;
                  a4 += v22;
                  v184 = a4;
                  if ( v12 )
                  {
                    v27 = BYTE14(v182);
                    v28 = (unsigned __int16 *)(v25 + 4);
                    v194 = __PAIR64__(v17, v18);
                    v196 = v16;
                    v195 = v16;
                    do
                    {
                      v29 = *v28;
                      --v12;
                      v30 = (v18 >= v17) | (unsigned __int64)(2
                                                            * (unsigned int)(*((_DWORD *)&v194 + (v18 >= v17)) >= v16));
                      v31 = *(v28 - 1);
                      v178 = v31;
                      v32 = *((_DWORD *)&v194 + v30) >> 21;
                      if ( v32 >= v29 || v32 >= v31 || v32 >= *(v28 - 2) )
                        v33 = v27;
                      else
                        v33 = v24[((unsigned __int16)(v16 - *(v28 - 2)) & (unsigned __int16)(*(v28 - 2) - v182) & 0x3000 | (v17 - v178) & (v178 - DWORD1(v182)) & 0x1C000 | (unsigned __int64)((v18 - v29) & (v29 - DWORD2(v182)) & 0xE0000)) >> 12];
                      *v26 = v33;
                      v28 += 3;
                      ++v26;
                    }
                    while ( v12 );
                    v13 = v170;
                    a4 = v184;
                    v12 = v179;
                    v23 = v180;
                    v21 = v187;
                    v22 = a5;
                  }
                }
                while ( v13 );
              }
            }
            else if ( v13 )
            {
              v34 = v187;
              v35 = a5;
              v36 = v186;
              do
              {
                v37 = v36;
                v38 = a4;
                v36 = (unsigned __int16 *)((char *)v36 + v34);
                a4 += v35;
                --v13;
                if ( v12 )
                {
                  v194 = __PAIR64__(v17, v18);
                  v39 = v37 + 2;
                  v196 = v16;
                  v195 = v16;
                  do
                  {
                    --v12;
                    v171 = *(v39 - 1);
                    v177 = *v39;
                    v40 = *(v39 - 2);
                    v41 = BYTE14(v182);
                    v42 = *((_DWORD *)&v194
                          + ((v18 >= v17) | (unsigned __int64)(2
                                                             * (unsigned int)(*((_DWORD *)&v194 + (v18 >= v17)) >= v16)))) >> 21;
                    v178 = v40;
                    if ( v42 < v177 && v42 < v171 && v42 < v40 )
                      v41 = ((v16 - v178) >> 12) & ((unsigned int)(v178 - v182) >> 12) & 3 | ((v17 - v171) >> 12) & ((v171 - DWORD1(v182)) >> 12) & 0x1C | ((v18 - v177) >> 12) & ((v177 - DWORD2(v182)) >> 12) & 0xE0;
                    *v38 = v41;
                    v39 += 3;
                    ++v38;
                  }
                  while ( v12 );
                  v12 = v179;
                  v34 = v187;
                  v35 = a5;
                }
              }
              while ( v13 );
            }
            return v193;
          }
        }
      }
      return 4294967285LL;
    }
  }
  EngReleaseSemaphore(*(HSEMAPHORE *)(a1 + 8));
  return v9;
}
