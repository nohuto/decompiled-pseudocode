/*
 * XREFs of ?vSrcTranCopyS4D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x140217260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcTranCopyS4D24(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  __int64 v11; // rbp
  __int64 v14; // rax
  int v15; // ecx
  int *v16; // rcx
  int v17; // edx
  int v18; // eax
  int v19; // r13d
  unsigned int v20; // r9d
  int v21; // r12d
  unsigned int v22; // edi
  unsigned int v23; // esi
  unsigned int v24; // r11d
  unsigned int v25; // ebx
  signed int v26; // r10d
  const unsigned __int8 *v27; // r8
  unsigned __int8 *v28; // r14
  int v29; // ecx
  int v30; // edx
  const unsigned __int8 *v31; // r15
  unsigned __int8 *v32; // rdi
  int v33; // ecx
  unsigned __int8 v34; // dl
  int v35; // r8d
  unsigned __int8 *v36; // rcx
  unsigned __int8 v37; // dl
  unsigned __int8 v38; // dl
  _BYTE *v39; // rdi
  unsigned __int8 v40; // dl
  _BYTE *v41; // rcx
  unsigned __int8 v42; // dl
  int v43; // r10d
  unsigned __int8 *v44; // r13
  __int64 v45; // r10
  unsigned int v46; // r11d
  _DWORD *v47; // rax
  unsigned int v48; // r8d
  unsigned int v49; // edx
  unsigned int v50; // r13d
  _DWORD *v51; // rax
  int v52; // r13d
  int v53; // r9d
  _DWORD *v54; // rax
  unsigned int v55; // r13d
  unsigned int v56; // r13d
  __int64 v57; // r10
  unsigned int v58; // r11d
  _DWORD *v59; // rax
  unsigned int v60; // r8d
  unsigned int v61; // edx
  unsigned int v62; // r13d
  _DWORD *v63; // rax
  int v64; // r13d
  int v65; // r9d
  _DWORD *v66; // rax
  unsigned int v67; // r13d
  unsigned int v68; // r13d
  _BYTE *v69; // r8
  _BYTE *v70; // r9
  unsigned int v71; // r13d
  _BYTE *v72; // r8
  char *v73; // r10
  char v74; // al
  __int64 v75; // r10
  unsigned int v76; // r11d
  _DWORD *v77; // rax
  unsigned int v78; // r8d
  unsigned int v79; // edx
  unsigned int v80; // r13d
  _DWORD *v81; // rax
  int v82; // r13d
  int v83; // r9d
  _DWORD *v84; // rax
  unsigned int v85; // r9d
  int v86; // r13d
  int v87; // ebx
  int v88; // ebx
  unsigned int v89; // r13d
  __int64 v90; // r10
  unsigned int v91; // r11d
  _DWORD *v92; // rax
  unsigned int v93; // r8d
  unsigned int v94; // edx
  unsigned int v95; // r13d
  _DWORD *v96; // rax
  int v97; // r13d
  int v98; // r9d
  _DWORD *v99; // rax
  unsigned int v100; // r9d
  int v101; // r13d
  int v102; // ecx
  unsigned __int8 v103; // dl
  int v104; // ecx
  unsigned __int8 v105; // dl
  unsigned int v106; // edx
  __int64 v107; // r10
  unsigned int v108; // r11d
  _DWORD *v109; // rax
  unsigned int v110; // r8d
  unsigned int v111; // edx
  int v112; // ecx
  _DWORD *v113; // rax
  unsigned int v114; // edx
  int v115; // r9d
  _DWORD *v116; // rax
  unsigned int v117; // r9d
  int v118; // edx
  int v119; // ebx
  unsigned int v120; // edx
  unsigned __int8 v121; // dl
  unsigned int v122; // edi
  __int64 v123; // r10
  unsigned int v124; // r11d
  _DWORD *v125; // rax
  unsigned int v126; // r8d
  unsigned int v127; // edx
  unsigned int v128; // edi
  _DWORD *v129; // rax
  int v130; // edi
  int v131; // r9d
  _DWORD *v132; // rax
  int v133; // edi
  int v134; // ebx
  unsigned __int8 v135; // dl
  _BYTE *v136; // rcx
  _BYTE *v137; // r8
  unsigned int v138; // r13d
  __int64 v139; // r10
  unsigned int v140; // r11d
  _DWORD *v141; // rax
  unsigned int v142; // r8d
  unsigned int v143; // edx
  unsigned int v144; // r13d
  _DWORD *v145; // rax
  int v146; // r13d
  int v147; // r9d
  _DWORD *v148; // rax
  unsigned int v149; // r9d
  int v150; // r13d
  int v151; // ebx
  unsigned int v152; // eax
  _BYTE *v153; // rcx
  char *v154; // r10
  unsigned int v155; // r13d
  char v156; // al
  __int64 v157; // r10
  unsigned int v158; // r11d
  _DWORD *v159; // rax
  unsigned int v160; // r8d
  unsigned int v161; // edx
  unsigned int v162; // r13d
  _DWORD *v163; // rax
  int v164; // r13d
  int v165; // r9d
  _DWORD *v166; // rax
  unsigned int v167; // r9d
  int v168; // r13d
  int v169; // ebx
  int v170; // ebx
  __int64 v171; // r10
  unsigned int v172; // r11d
  _DWORD *v173; // rax
  unsigned int v174; // r8d
  unsigned int v175; // edx
  int v176; // ecx
  _DWORD *v177; // rax
  unsigned int v178; // edx
  int v179; // r9d
  _DWORD *v180; // rax
  unsigned int v181; // edx
  unsigned __int8 v182; // dl
  unsigned int v183; // edi
  __int64 v184; // r10
  unsigned int v185; // r11d
  _DWORD *v186; // rax
  unsigned int v187; // r8d
  unsigned int v188; // edx
  unsigned int v189; // edi
  _DWORD *v190; // rax
  int v191; // edi
  int v192; // r9d
  _DWORD *v193; // rax
  unsigned int v194; // edi
  unsigned __int8 v195; // dl
  __int64 v196; // r10
  unsigned int v197; // r11d
  _DWORD *v198; // rax
  unsigned int v199; // r8d
  unsigned int v200; // edx
  unsigned int v201; // edi
  _DWORD *v202; // rax
  int v203; // edi
  int v204; // r9d
  _DWORD *v205; // rax
  unsigned int v206; // r9d
  int v207; // edi
  int v208; // ebx
  unsigned int v209; // eax
  unsigned __int8 v210; // dl
  _BYTE *v211; // rcx
  __int64 v212; // r9
  unsigned int v213; // r10d
  _DWORD *v214; // rax
  unsigned int v215; // r8d
  unsigned int v216; // edx
  unsigned int v217; // esi
  _DWORD *v218; // rdx
  _DWORD *v219; // rax
  int v220; // esi
  unsigned int v221; // esi
  int v222; // ebx
  char v223; // [rsp+0h] [rbp-88h]
  int v224; // [rsp+4h] [rbp-84h]
  char v225; // [rsp+8h] [rbp-80h]
  int v226; // [rsp+Ch] [rbp-7Ch]
  unsigned int v227; // [rsp+10h] [rbp-78h]
  unsigned int v228; // [rsp+14h] [rbp-74h]
  __int64 v229; // [rsp+28h] [rbp-60h]
  int v230; // [rsp+30h] [rbp-58h]
  const unsigned __int8 *v231; // [rsp+90h] [rbp+8h]
  int v233; // [rsp+98h] [rbp+10h]
  unsigned __int8 *v234; // [rsp+A8h] [rbp+20h]
  int v235; // [rsp+A8h] [rbp+20h]
  int v236; // [rsp+B8h] [rbp+30h]
  unsigned int v237; // [rsp+D0h] [rbp+48h]
  char v238; // [rsp+E0h] [rbp+58h]

  v11 = a3;
  v14 = *((_QWORD *)a11 + 16);
  if ( !v14 )
    v14 = *(_QWORD *)(*((_QWORD *)a11 + 6) + 1792LL);
  v15 = *(_DWORD *)(v14 + 24);
  if ( (v15 & 2) != 0 )
  {
    v16 = *(int **)(v14 + 112);
    v17 = *v16;
    v18 = v16[6];
    v19 = v16[1];
    v20 = v16[7];
    v21 = v16[2];
    v22 = v16[8];
  }
  else
  {
    v19 = 65280;
    LOBYTE(v20) = 8;
    if ( (v15 & 4) != 0 )
    {
      LOBYTE(v18) = 0;
      v17 = 255;
      v21 = 16711680;
      LOBYTE(v22) = 16;
    }
    else
    {
      v17 = 16711680;
      LOBYTE(v18) = 16;
      LOBYTE(v22) = 0;
      v21 = 255;
    }
  }
  v23 = a9;
  v238 = v18;
  v24 = a6 & 0xFFFFFFFC;
  v25 = (a9 & v17) >> v18;
  v224 = v17;
  v226 = v19;
  v227 = (a9 & v19) >> v20;
  v223 = v20;
  v225 = v22;
  v26 = (a5 + 3) & 0xFFFFFFFC;
  v228 = (a9 & v21) >> v22;
  v237 = v25;
  v27 = &a1[a2 / 2];
  v28 = &a4[3 * a5];
  v231 = v27;
  v234 = v28;
  if ( v26 > (int)(a6 & 0xFFFFFFFC) )
  {
    if ( (a5 & 3) == 1 )
    {
      v195 = *v27 & 0xF;
      if ( v195 )
      {
        if ( v195 == 15 )
        {
          v22 = v23;
        }
        else
        {
          LOWORD(a10) = *(_WORD *)v28;
          v196 = v195;
          BYTE2(a10) = v28[2];
          v197 = (a10 & v224) >> v18;
          v198 = &unk_140362570;
          v199 = (a10 & v19) >> v20;
          v200 = (a10 & v21) >> v22;
          if ( (int)(v228 - v200) >= 0 )
            v198 = &unk_1403625B0;
          v201 = (v200 << 16) + v198[v196] * (v228 - v200);
          v202 = &unk_140362570;
          v203 = v21 & (HIWORD(v201) << v225);
          if ( (int)(v227 - v199) >= 0 )
            v202 = &unk_1403625B0;
          v204 = v202[v196] * (v227 - v199);
          v205 = &unk_140362570;
          v206 = (v199 << 16) + v204;
          v27 = v231;
          v207 = v19 & (HIWORD(v206) << v223) | v203;
          v208 = v25 - v197;
          if ( v208 >= 0 )
            v205 = &unk_1403625B0;
          v22 = v224 & (((v197 << 16) + v205[v196] * v208) >> 16 << v238) | v207;
          v25 = v237;
        }
        *v28 = v22;
        v209 = v22 >> 8;
        v28[2] = BYTE2(v22);
        LOBYTE(v22) = v225;
        v28[1] = v209;
      }
      v28 += 3;
      if ( a5 + 1 == a6 )
        return;
      ++v27;
    }
    else if ( (a5 & 3) != 2 )
    {
      return;
    }
    v210 = *v27 >> 4;
    if ( v210 )
    {
      v211 = v28 + 2;
      if ( v210 != 15 )
      {
        v212 = v210;
        LOWORD(a10) = *(_WORD *)v28;
        BYTE2(a10) = *v211;
        v213 = (a10 & v224) >> v238;
        v214 = &unk_140362570;
        v215 = (a10 & v19) >> v223;
        v216 = (a10 & v21) >> v22;
        if ( (int)(v228 - v216) >= 0 )
          v214 = &unk_1403625B0;
        v217 = (v216 << 16) + v214[v212] * (v228 - v216);
        v218 = &unk_140362570;
        v219 = &unk_140362570;
        v220 = v21 & (HIWORD(v217) << v22);
        if ( (int)(v227 - v215) >= 0 )
          v219 = &unk_1403625B0;
        v221 = v19 & (((v215 << 16) + v219[v212] * (v227 - v215)) >> 16 << v223) | v220;
        v222 = v25 - v213;
        if ( v222 >= 0 )
          v218 = &unk_1403625B0;
        v211 = v28 + 2;
        v23 = v224 & (((v213 << 16) + v218[v212] * v222) >> 16 << v238) | v221;
      }
      *v28 = v23;
      *v211 = BYTE2(v23);
      v28[1] = BYTE1(v23);
    }
    return;
  }
  v236 = a6 - v24;
  v29 = v26 - a5;
  v230 = v26 - a5;
  v30 = (int)(v24 - v26) / 4;
  v233 = v30;
  if ( a8 )
  {
    while ( 1 )
    {
      v31 = v27;
      v32 = v28;
      v33 = v29 - 1;
      if ( !v33 )
        goto LABEL_8;
      v102 = v33 - 1;
      if ( !v102 )
        goto LABEL_95;
      if ( v102 == 1 )
        break;
      v35 = v226;
LABEL_11:
      if ( v30 > 0 )
      {
        v229 = (unsigned int)v30;
        while ( 1 )
        {
          v36 = v32;
          v37 = *v31 >> 4;
          if ( v37 )
          {
            v72 = v32 + 1;
            v73 = (char *)(v32 + 2);
            if ( v37 == 15 )
            {
              v89 = v23;
            }
            else
            {
              LOBYTE(a10) = *v32;
              BYTE1(a10) = *v72;
              v74 = *v73;
              v75 = v37;
              BYTE2(a10) = v74;
              v76 = (a10 & v224) >> v238;
              v77 = &unk_140362570;
              v78 = (a10 & v226) >> v20;
              v79 = (a10 & v21) >> v225;
              if ( (int)(v228 - v79) >= 0 )
                v77 = &unk_1403625B0;
              v80 = (v79 << 16) + v77[v75] * (v228 - v79);
              v81 = &unk_140362570;
              v82 = v21 & (HIWORD(v80) << v225);
              if ( (int)(v227 - v78) >= 0 )
                v81 = &unk_1403625B0;
              v83 = v81[v75] * (v227 - v78);
              v84 = &unk_140362570;
              v85 = (v78 << 16) + v83;
              v72 = v32 + 1;
              v86 = v226 & (HIWORD(v85) << v223) | v82;
              v87 = v25 - v76;
              if ( v87 >= 0 )
                v84 = &unk_1403625B0;
              v88 = v84[v75] * v87;
              v73 = (char *)(v32 + 2);
              v36 = v32;
              v89 = v224 & (((v76 << 16) + v88) >> 16 << v238) | v86;
            }
            *v32 = v89;
            *v73 = BYTE2(v89);
            *v72 = BYTE1(v89);
          }
          v38 = *v31 & 0xF;
          if ( v38 )
          {
            if ( v38 == 15 )
            {
              v68 = v23;
            }
            else
            {
              LOBYTE(a10) = v32[3];
              BYTE1(a10) = v36[4];
              v57 = v38;
              BYTE2(a10) = v36[5];
              v58 = (a10 & v224) >> v238;
              v59 = &unk_140362570;
              v60 = (a10 & v226) >> v223;
              v61 = (a10 & v21) >> v225;
              if ( (int)(v228 - v61) >= 0 )
                v59 = &unk_1403625B0;
              v62 = (v61 << 16) + v59[v57] * (v228 - v61);
              v63 = &unk_140362570;
              v64 = v21 & (HIWORD(v62) << v225);
              if ( (int)(v227 - v60) >= 0 )
                v63 = &unk_1403625B0;
              v65 = v63[v57] * (v227 - v60);
              v66 = &unk_140362570;
              v67 = v226 & (((v60 << 16) + v65) >> 16 << v223) | v64;
              if ( (int)(v237 - v58) >= 0 )
                v66 = &unk_1403625B0;
              v36 = v32;
              v68 = v224 & (((v58 << 16) + v66[v57] * (v237 - v58)) >> 16 << v238) | v67;
            }
            v32[3] = v68;
            v36[5] = BYTE2(v68);
            v36[4] = BYTE1(v68);
          }
          v39 = v36 + 6;
          v40 = v31[1] >> 4;
          v41 = v36 + 6;
          if ( v40 )
          {
            v69 = v39 + 1;
            v70 = v39 + 2;
            if ( v40 == 15 )
            {
              v71 = v23;
            }
            else
            {
              LOBYTE(a10) = *v39;
              BYTE1(a10) = *v69;
              v90 = v40;
              BYTE2(a10) = *v70;
              v91 = (a10 & v224) >> v238;
              v92 = &unk_140362570;
              v93 = (a10 & v226) >> v223;
              v94 = (a10 & v21) >> v225;
              if ( (int)(v228 - v94) >= 0 )
                v92 = &unk_1403625B0;
              v95 = (v94 << 16) + v92[v90] * (v228 - v94);
              v96 = &unk_140362570;
              v97 = v21 & (HIWORD(v95) << v225);
              if ( (int)(v227 - v93) >= 0 )
                v96 = &unk_1403625B0;
              v98 = v96[v90] * (v227 - v93);
              v99 = &unk_140362570;
              v100 = (v93 << 16) + v98;
              v69 = v39 + 1;
              v101 = v226 & (HIWORD(v100) << v223) | v97;
              v70 = v39 + 2;
              if ( (int)(v237 - v91) >= 0 )
                v99 = &unk_1403625B0;
              v41 = v39;
              v71 = v224 & (((v91 << 16) + v99[v90] * (v237 - v91)) >> 16 << v238) | v101;
            }
            *v39 = v71;
            *v70 = BYTE2(v71);
            *v69 = BYTE1(v71);
          }
          v42 = v31[1] & 0xF;
          if ( v42 )
          {
            if ( v42 == 15 )
            {
              v56 = v23;
            }
            else
            {
              LOBYTE(a10) = v39[3];
              BYTE1(a10) = v41[4];
              v45 = v42;
              BYTE2(a10) = v41[5];
              v46 = (a10 & v224) >> v238;
              v47 = &unk_140362570;
              v48 = (a10 & v226) >> v223;
              v49 = (a10 & v21) >> v225;
              if ( (int)(v228 - v49) >= 0 )
                v47 = &unk_1403625B0;
              v50 = (v49 << 16) + v47[v45] * (v228 - v49);
              v51 = &unk_140362570;
              v52 = v21 & (HIWORD(v50) << v225);
              if ( (int)(v227 - v48) >= 0 )
                v51 = &unk_1403625B0;
              v53 = v51[v45] * (v227 - v48);
              v54 = &unk_140362570;
              v55 = v226 & (((v48 << 16) + v53) >> 16 << v223) | v52;
              if ( (int)(v237 - v46) >= 0 )
                v54 = &unk_1403625B0;
              v41 = v39;
              v56 = v224 & (((v46 << 16) + v54[v45] * (v237 - v46)) >> 16 << v238) | v55;
            }
            v39[3] = v56;
            v41[5] = BYTE2(v56);
            v41[4] = BYTE1(v56);
          }
          v31 += 2;
          v32 = v41 + 6;
          if ( !--v229 )
            break;
          LOBYTE(v20) = v223;
          v25 = v237;
        }
        v28 = v234;
        v35 = v226;
      }
      v43 = v236;
      v44 = v32;
      if ( v236 )
      {
        v103 = *v31 >> 4;
        if ( v103 )
        {
          if ( v103 == 15 )
          {
            v120 = v23;
          }
          else
          {
            v107 = v103;
            LOWORD(a10) = *(_WORD *)v32;
            BYTE2(a10) = v32[2];
            v108 = (a10 & v224) >> v238;
            v109 = &unk_140362570;
            v110 = (a10 & v35) >> v223;
            v111 = (a10 & v21) >> v225;
            if ( (int)(v228 - v111) >= 0 )
              v109 = &unk_1403625B0;
            v112 = v109[v107] * (v228 - v111);
            v113 = &unk_140362570;
            v114 = v21 & (((v111 << 16) + v112) >> 16 << v225);
            if ( (int)(v227 - v110) >= 0 )
              v113 = &unk_1403625B0;
            v115 = v113[v107] * (v227 - v110);
            v116 = &unk_140362570;
            v117 = (v110 << 16) + v115;
            v35 = v226;
            v118 = v226 & (HIWORD(v117) << v223) | v114;
            if ( (int)(v237 - v108) >= 0 )
              v116 = &unk_1403625B0;
            v119 = v116[v107] * (v237 - v108);
            v43 = v236;
            v120 = v224 & (((v108 << 16) + v119) >> 16 << v238) | v118;
          }
          *v32 = v120;
          v32[2] = BYTE2(v120);
          v32[1] = BYTE1(v120);
        }
        v104 = v43 - 1;
        v235 = v43 - 1;
        if ( v43 != 1 )
        {
          v105 = *v31 & 0xF;
          if ( v105 )
          {
            if ( v105 == 15 )
            {
              v106 = v23;
            }
            else
            {
              v171 = v105;
              LOWORD(a10) = *(_WORD *)(v32 + 3);
              BYTE2(a10) = v32[5];
              v172 = (a10 & v224) >> v238;
              v173 = &unk_140362570;
              v174 = (a10 & v35) >> v223;
              v175 = (a10 & v21) >> v225;
              if ( (int)(v228 - v175) >= 0 )
                v173 = &unk_1403625B0;
              v176 = v173[v171] * (v228 - v175);
              v177 = &unk_140362570;
              v178 = v21 & (((v175 << 16) + v176) >> 16 << v225);
              if ( (int)(v227 - v174) >= 0 )
                v177 = &unk_1403625B0;
              v179 = v177[v171] * (v227 - v174);
              v180 = &unk_140362570;
              v181 = v226 & (((v174 << 16) + v179) >> 16 << v223) | v178;
              if ( (int)(v237 - v172) >= 0 )
                v180 = &unk_1403625B0;
              v104 = v235;
              v106 = v224 & (((v172 << 16) + v180[v171] * (v237 - v172)) >> 16 << v238) | v181;
            }
            v32[3] = v106;
            v32[5] = BYTE2(v106);
            v32[4] = BYTE1(v106);
          }
          if ( v104 != 1 )
          {
            v182 = v31[1] >> 4;
            if ( v182 )
            {
              if ( v182 == 15 )
              {
                v183 = v23;
              }
              else
              {
                LOWORD(a10) = *((_WORD *)v32 + 3);
                v184 = v182;
                BYTE2(a10) = v32[8];
                v185 = (a10 & v224) >> v238;
                v186 = &unk_140362570;
                v187 = (a10 & v226) >> v223;
                v188 = (a10 & v21) >> v225;
                if ( (int)(v228 - v188) >= 0 )
                  v186 = &unk_1403625B0;
                v189 = (v188 << 16) + v186[v184] * (v228 - v188);
                v190 = &unk_140362570;
                v191 = v21 & (HIWORD(v189) << v225);
                if ( (int)(v227 - v187) >= 0 )
                  v190 = &unk_1403625B0;
                v192 = v190[v184] * (v227 - v187);
                v193 = &unk_140362570;
                v194 = v226 & (((v187 << 16) + v192) >> 16 << v223) | v191;
                if ( (int)(v237 - v185) >= 0 )
                  v193 = &unk_1403625B0;
                v183 = v224 & (((v185 << 16) + v193[v184] * (v237 - v185)) >> 16 << v238) | v194;
              }
              v44[6] = v183;
              v44[8] = BYTE2(v183);
              v44[7] = BYTE1(v183);
            }
          }
        }
      }
      v27 = &v231[v11];
      v28 += a7;
      v19 = v226;
      LOBYTE(v20) = v223;
      v25 = v237;
      v29 = v230;
      v30 = v233;
      --a8;
      v231 += v11;
      v234 = v28;
      if ( !a8 )
        return;
    }
    v121 = *v27 & 0xF;
    if ( v121 )
    {
      if ( v121 == 15 )
      {
        v122 = v23;
      }
      else
      {
        LOWORD(a10) = *(_WORD *)v28;
        v123 = v121;
        BYTE2(a10) = v28[2];
        v124 = (a10 & v224) >> v238;
        v125 = &unk_140362570;
        v126 = (a10 & v19) >> v20;
        v127 = (a10 & v21) >> v225;
        if ( (int)(v228 - v127) >= 0 )
          v125 = &unk_1403625B0;
        v128 = (v127 << 16) + v125[v123] * (v228 - v127);
        v129 = &unk_140362570;
        v130 = v21 & (HIWORD(v128) << v225);
        if ( (int)(v227 - v126) >= 0 )
          v129 = &unk_1403625B0;
        v131 = v129[v123] * (v227 - v126);
        v132 = &unk_140362570;
        v20 = (v126 << 16) + v131;
        v27 = v231;
        v133 = v19 & (HIWORD(v20) << v223) | v130;
        LOBYTE(v20) = v223;
        v134 = v25 - v124;
        if ( v134 >= 0 )
          v132 = &unk_1403625B0;
        v122 = v224 & (((v124 << 16) + v132[v123] * v134) >> 16 << v238) | v133;
        v25 = v237;
      }
      *v28 = v122;
      v28[2] = BYTE2(v122);
      v28[1] = BYTE1(v122);
    }
    v32 = v28 + 3;
    v31 = v27 + 1;
LABEL_95:
    v135 = *v31 >> 4;
    if ( v135 )
    {
      v136 = v32 + 1;
      v137 = v32 + 2;
      if ( v135 == 15 )
      {
        v138 = v23;
      }
      else
      {
        LOBYTE(a10) = *v32;
        BYTE1(a10) = *v136;
        v139 = v135;
        BYTE2(a10) = *v137;
        v140 = (a10 & v224) >> v238;
        v141 = &unk_140362570;
        v142 = (a10 & v19) >> v20;
        v143 = (a10 & v21) >> v225;
        if ( (int)(v228 - v143) >= 0 )
          v141 = &unk_1403625B0;
        v144 = (v143 << 16) + v141[v139] * (v228 - v143);
        v145 = &unk_140362570;
        v146 = v21 & (HIWORD(v144) << v225);
        if ( (int)(v227 - v142) >= 0 )
          v145 = &unk_1403625B0;
        v147 = v145[v139] * (v227 - v142);
        v148 = &unk_140362570;
        v149 = (v142 << 16) + v147;
        v137 = v32 + 2;
        v150 = v226 & (HIWORD(v149) << v223) | v146;
        v151 = v25 - v140;
        if ( v151 >= 0 )
          v148 = &unk_1403625B0;
        v136 = v32 + 1;
        v138 = v224 & (((v140 << 16) + v148[v139] * v151) >> 16 << v238) | v150;
      }
      *v32 = v138;
      v152 = v138 >> 8;
      *v137 = BYTE2(v138);
      v19 = v226;
      *v136 = v152;
    }
    LOBYTE(v20) = v223;
    v32 += 3;
    v25 = v237;
LABEL_8:
    v34 = *v31 & 0xF;
    if ( v34 )
    {
      v153 = v32 + 1;
      v154 = (char *)(v32 + 2);
      if ( v34 == 15 )
      {
        v35 = v226;
        v155 = v23;
      }
      else
      {
        LOBYTE(a10) = *v32;
        BYTE1(a10) = *v153;
        v156 = *v154;
        v157 = v34;
        BYTE2(a10) = v156;
        v158 = (a10 & v224) >> v238;
        v159 = &unk_140362570;
        v160 = (a10 & v19) >> v20;
        v161 = (a10 & v21) >> v225;
        if ( (int)(v228 - v161) >= 0 )
          v159 = &unk_1403625B0;
        v162 = (v161 << 16) + v159[v157] * (v228 - v161);
        v163 = &unk_140362570;
        v164 = v21 & (HIWORD(v162) << v225);
        if ( (int)(v227 - v160) >= 0 )
          v163 = &unk_1403625B0;
        v165 = v163[v157] * (v227 - v160);
        v166 = &unk_140362570;
        v167 = (v160 << 16) + v165;
        v35 = v226;
        v168 = v226 & (HIWORD(v167) << v223) | v164;
        v169 = v25 - v158;
        if ( v169 >= 0 )
          v166 = &unk_1403625B0;
        v170 = v166[v157] * v169;
        v154 = (char *)(v32 + 2);
        v153 = v32 + 1;
        v155 = v224 & (((v158 << 16) + v170) >> 16 << v238) | v168;
      }
      *v32 = v155;
      *v154 = BYTE2(v155);
      *v153 = BYTE1(v155);
    }
    else
    {
      v35 = v226;
    }
    LOBYTE(v20) = v223;
    v32 += 3;
    v25 = v237;
    ++v31;
    v30 = v233;
    goto LABEL_11;
  }
}
