/*
 * XREFs of vSrcTranCopyS4D24 @ 0x1C0263C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vSrcTranCopyS4D24(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        int a10,
        __int64 a11)
{
  __int64 v12; // rsi
  __int64 v14; // rax
  int v15; // ecx
  int *v16; // rcx
  int v17; // r11d
  int v18; // eax
  int v19; // r13d
  int v20; // r15d
  int v21; // ebp
  int v22; // r10d
  unsigned int v23; // ebx
  unsigned int v24; // edx
  unsigned int v25; // eax
  char v26; // cl
  int v27; // r10d
  signed int v28; // r8d
  unsigned int v29; // r9d
  __int64 result; // rax
  _BYTE *v31; // r12
  __int64 v32; // rdi
  int v33; // ecx
  int v34; // edx
  _BYTE *v35; // r14
  __int64 v36; // r11
  int v37; // ecx
  int v38; // ecx
  unsigned __int8 v39; // r8
  unsigned int v40; // r11d
  _DWORD *v41; // rax
  unsigned int v42; // edx
  __int64 v43; // r9
  int v44; // r11d
  _DWORD *v45; // rax
  unsigned int v46; // r11d
  unsigned int v47; // r8d
  int v48; // edx
  _DWORD *v49; // rax
  unsigned int v50; // r11d
  unsigned int v51; // r8d
  unsigned __int8 v52; // r8
  unsigned int v53; // r15d
  _DWORD *v54; // rax
  unsigned int v55; // edx
  __int64 v56; // r9
  int v57; // r15d
  _DWORD *v58; // rax
  unsigned int v59; // r15d
  unsigned int v60; // r8d
  int v61; // edx
  _DWORD *v62; // rax
  unsigned int v63; // r15d
  unsigned int v64; // r8d
  unsigned __int8 v65; // r8
  unsigned int v66; // r15d
  _DWORD *v67; // rax
  unsigned int v68; // edx
  __int64 v69; // r9
  int v70; // r15d
  _DWORD *v71; // rax
  unsigned int v72; // r15d
  unsigned int v73; // r8d
  int v74; // edx
  _DWORD *v75; // rax
  unsigned int v76; // r15d
  unsigned int v77; // r8d
  unsigned __int8 v78; // r8
  unsigned int v79; // r15d
  _DWORD *v80; // rax
  unsigned int v81; // edx
  __int64 v82; // r9
  int v83; // r15d
  _DWORD *v84; // rax
  unsigned int v85; // r15d
  unsigned int v86; // r8d
  int v87; // edx
  _DWORD *v88; // rax
  unsigned int v89; // edx
  unsigned int v90; // r8d
  int v91; // r15d
  unsigned __int8 v92; // r8
  unsigned int v93; // r15d
  _DWORD *v94; // rax
  unsigned int v95; // edx
  __int64 v96; // r9
  int v97; // r15d
  _DWORD *v98; // rax
  unsigned int v99; // r15d
  unsigned int v100; // r8d
  int v101; // edx
  _DWORD *v102; // rax
  unsigned int v103; // edx
  unsigned int v104; // r8d
  int v105; // r15d
  unsigned __int8 v106; // r8
  unsigned int v107; // r15d
  _DWORD *v108; // rax
  unsigned int v109; // edx
  __int64 v110; // r9
  int v111; // r15d
  _DWORD *v112; // rax
  unsigned int v113; // r15d
  unsigned int v114; // r8d
  int v115; // edx
  _DWORD *v116; // rax
  unsigned int v117; // edx
  unsigned int v118; // r8d
  int v119; // r15d
  unsigned __int8 v120; // r8
  unsigned int v121; // r15d
  _DWORD *v122; // rax
  unsigned int v123; // edx
  __int64 v124; // r9
  int v125; // r15d
  _DWORD *v126; // rax
  unsigned int v127; // r15d
  unsigned int v128; // r8d
  int v129; // edx
  _DWORD *v130; // rax
  unsigned int v131; // edx
  unsigned int v132; // r8d
  int v133; // r15d
  int v134; // ecx
  unsigned __int8 v135; // r8
  unsigned int v136; // r15d
  _DWORD *v137; // rax
  unsigned int v138; // edx
  __int64 v139; // r9
  int v140; // r15d
  _DWORD *v141; // rax
  unsigned int v142; // r15d
  unsigned int v143; // r8d
  int v144; // edx
  _DWORD *v145; // rax
  unsigned int v146; // r15d
  unsigned int v147; // r8d
  int v148; // ecx
  unsigned __int8 v149; // r8
  unsigned int v150; // r15d
  _DWORD *v151; // rax
  unsigned int v152; // edx
  __int64 v153; // r9
  int v154; // r15d
  _DWORD *v155; // rax
  unsigned int v156; // r15d
  unsigned int v157; // r8d
  int v158; // edx
  _DWORD *v159; // rax
  unsigned int v160; // r15d
  unsigned int v161; // r8d
  unsigned __int8 v162; // r8
  unsigned int v163; // r14d
  _DWORD *v164; // rax
  unsigned int v165; // edx
  __int64 v166; // r9
  int v167; // r14d
  _DWORD *v168; // rax
  unsigned int v169; // r14d
  unsigned int v170; // r8d
  int v171; // edx
  _DWORD *v172; // rax
  unsigned int v173; // r14d
  unsigned int v174; // r8d
  unsigned __int8 v175; // r8
  unsigned int v176; // r11d
  _DWORD *v177; // rax
  unsigned int v178; // edx
  __int64 v179; // r9
  int v180; // r11d
  _DWORD *v181; // rax
  unsigned int v182; // r11d
  unsigned int v183; // r8d
  int v184; // edx
  _DWORD *v185; // rax
  unsigned int v186; // r11d
  unsigned int v187; // r8d
  unsigned int v188; // eax
  unsigned __int8 v189; // r8
  _DWORD *v190; // rsi
  _DWORD *v191; // rax
  unsigned int v192; // edx
  __int64 v193; // r9
  int v194; // ebx
  _DWORD *v195; // rax
  unsigned int v196; // r8d
  unsigned int v197; // ebx
  unsigned int v198; // ebx
  unsigned int v199; // edx
  unsigned int v200; // [rsp+0h] [rbp-68h]
  unsigned int v201; // [rsp+4h] [rbp-64h]
  char v202; // [rsp+8h] [rbp-60h]
  int v203; // [rsp+Ch] [rbp-5Ch]
  __int64 v204; // [rsp+10h] [rbp-58h]
  _BYTE *v205; // [rsp+18h] [rbp-50h]
  __int64 v206; // [rsp+20h] [rbp-48h]
  int v207; // [rsp+70h] [rbp+8h]
  int v209; // [rsp+78h] [rbp+10h]
  char v210; // [rsp+88h] [rbp+20h]
  int v211; // [rsp+98h] [rbp+30h]
  unsigned int v212; // [rsp+B0h] [rbp+48h]
  char v213; // [rsp+C0h] [rbp+58h]

  v12 = a3;
  v14 = *(_QWORD *)(a11 + 120);
  if ( !v14 )
    v14 = *(_QWORD *)(*(_QWORD *)(a11 + 48) + 1832LL);
  v15 = *(_DWORD *)(v14 + 24);
  if ( (v15 & 2) != 0 )
  {
    v16 = *(int **)(v14 + 120);
    v17 = *v16;
    v18 = v16[6];
    v19 = v16[1];
    v20 = v16[7];
    v21 = v16[2];
    v22 = v16[8];
    v207 = *v16;
  }
  else
  {
    v19 = 65280;
    LOBYTE(v20) = 8;
    if ( (v15 & 4) != 0 )
    {
      LOBYTE(v22) = 16;
      v17 = 255;
      v207 = 255;
      v21 = 16711680;
      LOBYTE(v18) = 0;
    }
    else
    {
      LOBYTE(v18) = 16;
      v17 = 16711680;
      v207 = 16711680;
      v21 = 255;
      LOBYTE(v22) = 0;
    }
  }
  v23 = a9;
  v213 = v18;
  v24 = (a9 & v17) >> v18;
  v25 = a9 & v19;
  v212 = v24;
  v202 = v22;
  v200 = v25 >> v20;
  v26 = v22;
  v27 = a6;
  v210 = v20;
  v201 = (v23 & v21) >> v26;
  v28 = (a5 + 3) & 0xFFFFFFFC;
  v29 = a6 & 0xFFFFFFFC;
  result = (unsigned int)(3 * a5);
  v31 = (_BYTE *)(a2 / 2 + a1);
  v32 = (int)result + a4;
  v205 = v31;
  v206 = v32;
  if ( v28 > (int)(a6 & 0xFFFFFFFC) )
  {
    if ( (a5 & 3) == 1 )
    {
      v175 = *v31 & 0xF;
      if ( v175 )
      {
        if ( v175 == 15 )
        {
          v176 = v23;
        }
        else
        {
          LOWORD(a10) = *(_WORD *)v32;
          BYTE2(a10) = *(_BYTE *)(v32 + 2);
          v177 = &unk_1C02EFD10;
          v178 = (a10 & (unsigned int)v17) >> v213;
          if ( (int)(v212 - v178) >= 0 )
            v177 = &unk_1C02E7180;
          v179 = v175;
          v180 = v177[v175];
          v181 = &unk_1C02EFD10;
          v182 = v207 & (((v178 << 16) + (v212 - v178) * v180) >> 16 << v213);
          v183 = (a10 & (unsigned int)v19) >> v20;
          if ( (int)(v200 - v183) >= 0 )
            v181 = &unk_1C02E7180;
          v184 = v181[v179];
          v185 = &unk_1C02EFD10;
          v27 = a6;
          v186 = v19 & (((v183 << 16) + (v200 - v183) * v184) >> 16 << v20) | v182;
          v187 = (a10 & (unsigned int)v21) >> v202;
          if ( (int)(v201 - v187) >= 0 )
            v185 = &unk_1C02E7180;
          v176 = v21 & (((v187 << 16) + (v201 - v187) * v185[v179]) >> 16 << v202) | v186;
        }
        *(_BYTE *)v32 = v176;
        v188 = v176 >> 8;
        *(_BYTE *)(v32 + 2) = BYTE2(v176);
        v17 = v207;
        *(_BYTE *)(v32 + 1) = v188;
      }
      v32 += 3LL;
      result = (unsigned int)(a5 + 1);
      if ( (_DWORD)result == v27 )
        return result;
      ++v31;
    }
    else if ( (a5 & 3) != 2 )
    {
      return result;
    }
    v189 = *v31 >> 4;
    if ( v189 )
    {
      if ( v189 != 15 )
      {
        v190 = &unk_1C02EFD10;
        LOWORD(a10) = *(_WORD *)v32;
        BYTE2(a10) = *(_BYTE *)(v32 + 2);
        v191 = &unk_1C02EFD10;
        v192 = (a10 & (unsigned int)v17) >> v213;
        if ( (int)(v212 - v192) >= 0 )
          v191 = &unk_1C02E7180;
        v193 = v189;
        v194 = v191[v189];
        v195 = &unk_1C02EFD10;
        v196 = (a10 & (unsigned int)v19) >> v20;
        v197 = v17 & (((v192 << 16) + (v212 - v192) * v194) >> 16 << v213);
        if ( (int)(v200 - v196) >= 0 )
          v195 = &unk_1C02E7180;
        v198 = v19 & (((v196 << 16) + (v200 - v196) * v195[v193]) >> 16 << v20) | v197;
        v199 = (a10 & (unsigned int)v21) >> v202;
        if ( (int)(v201 - v199) >= 0 )
          v190 = &unk_1C02E7180;
        v23 = v21 & (((v199 << 16) + (v201 - v199) * v190[v193]) >> 16 << v202) | v198;
      }
      *(_BYTE *)v32 = v23;
      result = v23 >> 8;
      *(_BYTE *)(v32 + 2) = BYTE2(v23);
      *(_BYTE *)(v32 + 1) = BYTE1(v23);
    }
    return result;
  }
  v33 = v28 - a5;
  v203 = v28 - a5;
  result = (unsigned int)((int)(v29 - v28) / 4);
  v34 = (int)(v29 - v28) / 4;
  v209 = v34;
  v211 = a6 - v29;
  if ( a8 )
  {
    while ( 1 )
    {
      v35 = v31;
      v36 = v32;
      v37 = v33 - 1;
      if ( !v37 )
        goto LABEL_37;
      v38 = v37 - 1;
      if ( !v38 )
        goto LABEL_25;
      if ( v38 == 1 )
        break;
LABEL_49:
      if ( v34 > 0 )
      {
        v204 = (unsigned int)v34;
        do
        {
          v78 = *v35 >> 4;
          if ( v78 )
          {
            if ( v78 == 15 )
            {
              v79 = v23;
            }
            else
            {
              LOWORD(a10) = *(_WORD *)v36;
              BYTE2(a10) = *(_BYTE *)(v36 + 2);
              v80 = &unk_1C02EFD10;
              v81 = (a10 & (unsigned int)v207) >> v213;
              if ( (int)(v212 - v81) >= 0 )
                v80 = &unk_1C02E7180;
              v82 = v78;
              v83 = v80[v78];
              v84 = &unk_1C02EFD10;
              v85 = v207 & (((v81 << 16) + (v212 - v81) * v83) >> 16 << v213);
              v86 = (a10 & (unsigned int)v19) >> v210;
              if ( (int)(v200 - v86) >= 0 )
                v84 = &unk_1C02E7180;
              v87 = v84[v82];
              v88 = &unk_1C02EFD10;
              v89 = (v86 << 16) + (v200 - v86) * v87;
              v90 = (a10 & (unsigned int)v21) >> v202;
              v91 = v19 & (HIWORD(v89) << v210) | v85;
              if ( (int)(v201 - v90) >= 0 )
                v88 = &unk_1C02E7180;
              v79 = v21 & (((v90 << 16) + (v201 - v90) * v88[v82]) >> 16 << v202) | v91;
            }
            *(_BYTE *)v36 = v79;
            *(_BYTE *)(v36 + 2) = BYTE2(v79);
            *(_BYTE *)(v36 + 1) = BYTE1(v79);
          }
          v92 = *v35 & 0xF;
          if ( v92 )
          {
            if ( v92 == 15 )
            {
              v93 = v23;
            }
            else
            {
              LOWORD(a10) = *(_WORD *)(v36 + 3);
              BYTE2(a10) = *(_BYTE *)(v36 + 5);
              v94 = &unk_1C02EFD10;
              v95 = (a10 & (unsigned int)v207) >> v213;
              if ( (int)(v212 - v95) >= 0 )
                v94 = &unk_1C02E7180;
              v96 = v92;
              v97 = v94[v92];
              v98 = &unk_1C02EFD10;
              v99 = v207 & (((v95 << 16) + (v212 - v95) * v97) >> 16 << v213);
              v100 = (a10 & (unsigned int)v19) >> v210;
              if ( (int)(v200 - v100) >= 0 )
                v98 = &unk_1C02E7180;
              v101 = v98[v96];
              v102 = &unk_1C02EFD10;
              v103 = (v100 << 16) + (v200 - v100) * v101;
              v104 = (a10 & (unsigned int)v21) >> v202;
              v105 = v19 & (HIWORD(v103) << v210) | v99;
              if ( (int)(v201 - v104) >= 0 )
                v102 = &unk_1C02E7180;
              v93 = v21 & (((v104 << 16) + (v201 - v104) * v102[v96]) >> 16 << v202) | v105;
            }
            *(_BYTE *)(v36 + 3) = v93;
            *(_BYTE *)(v36 + 5) = BYTE2(v93);
            *(_BYTE *)(v36 + 4) = BYTE1(v93);
          }
          v106 = v35[1] >> 4;
          if ( v106 )
          {
            if ( v106 == 15 )
            {
              v107 = v23;
            }
            else
            {
              LOWORD(a10) = *(_WORD *)(v36 + 6);
              BYTE2(a10) = *(_BYTE *)(v36 + 8);
              v108 = &unk_1C02EFD10;
              v109 = (a10 & (unsigned int)v207) >> v213;
              if ( (int)(v212 - v109) >= 0 )
                v108 = &unk_1C02E7180;
              v110 = v106;
              v111 = v108[v106];
              v112 = &unk_1C02EFD10;
              v113 = v207 & (((v109 << 16) + (v212 - v109) * v111) >> 16 << v213);
              v114 = (a10 & (unsigned int)v19) >> v210;
              if ( (int)(v200 - v114) >= 0 )
                v112 = &unk_1C02E7180;
              v115 = v112[v110];
              v116 = &unk_1C02EFD10;
              v117 = (v114 << 16) + (v200 - v114) * v115;
              v118 = (a10 & (unsigned int)v21) >> v202;
              v119 = v19 & (HIWORD(v117) << v210) | v113;
              if ( (int)(v201 - v118) >= 0 )
                v116 = &unk_1C02E7180;
              v107 = v21 & (((v118 << 16) + (v201 - v118) * v116[v110]) >> 16 << v202) | v119;
            }
            *(_BYTE *)(v36 + 6) = v107;
            *(_BYTE *)(v36 + 8) = BYTE2(v107);
            *(_BYTE *)(v36 + 7) = BYTE1(v107);
          }
          v120 = v35[1] & 0xF;
          if ( v120 )
          {
            if ( v120 == 15 )
            {
              v121 = v23;
            }
            else
            {
              LOWORD(a10) = *(_WORD *)(v36 + 9);
              BYTE2(a10) = *(_BYTE *)(v36 + 11);
              v122 = &unk_1C02EFD10;
              v123 = (a10 & (unsigned int)v207) >> v213;
              if ( (int)(v212 - v123) >= 0 )
                v122 = &unk_1C02E7180;
              v124 = v120;
              v125 = v122[v120];
              v126 = &unk_1C02EFD10;
              v127 = v207 & (((v123 << 16) + (v212 - v123) * v125) >> 16 << v213);
              v128 = (a10 & (unsigned int)v19) >> v210;
              if ( (int)(v200 - v128) >= 0 )
                v126 = &unk_1C02E7180;
              v129 = v126[v124];
              v130 = &unk_1C02EFD10;
              v131 = (v128 << 16) + (v200 - v128) * v129;
              v132 = (a10 & (unsigned int)v21) >> v202;
              v133 = v19 & (HIWORD(v131) << v210) | v127;
              if ( (int)(v201 - v132) >= 0 )
                v130 = &unk_1C02E7180;
              v121 = v21 & (((v132 << 16) + (v201 - v132) * v130[v124]) >> 16 << v202) | v133;
            }
            *(_BYTE *)(v36 + 9) = v121;
            *(_BYTE *)(v36 + 11) = BYTE2(v121);
            *(_BYTE *)(v36 + 10) = BYTE1(v121);
          }
          v36 += 12LL;
          v35 += 2;
          --v204;
        }
        while ( v204 );
        v32 = v206;
        v31 = v205;
      }
      v134 = v211;
      if ( v211 )
      {
        v135 = *v35 >> 4;
        if ( v135 )
        {
          if ( v135 == 15 )
          {
            v136 = v23;
          }
          else
          {
            LOWORD(a10) = *(_WORD *)v36;
            BYTE2(a10) = *(_BYTE *)(v36 + 2);
            v137 = &unk_1C02EFD10;
            v138 = (a10 & (unsigned int)v207) >> v213;
            if ( (int)(v212 - v138) >= 0 )
              v137 = &unk_1C02E7180;
            v139 = v135;
            v140 = v137[v135];
            v141 = &unk_1C02EFD10;
            v142 = v207 & (((v138 << 16) + (v212 - v138) * v140) >> 16 << v213);
            v143 = (a10 & (unsigned int)v19) >> v210;
            if ( (int)(v200 - v143) >= 0 )
              v141 = &unk_1C02E7180;
            v144 = v141[v139];
            v145 = &unk_1C02EFD10;
            v146 = v19 & (((v143 << 16) + (v200 - v143) * v144) >> 16 << v210) | v142;
            v147 = (a10 & (unsigned int)v21) >> v202;
            if ( (int)(v201 - v147) >= 0 )
              v145 = &unk_1C02E7180;
            v134 = v211;
            v136 = v21 & (((v147 << 16) + (v201 - v147) * v145[v139]) >> 16 << v202) | v146;
          }
          *(_BYTE *)v36 = v136;
          *(_BYTE *)(v36 + 2) = BYTE2(v136);
          *(_BYTE *)(v36 + 1) = BYTE1(v136);
        }
        v148 = v134 - 1;
        if ( v148 )
        {
          v149 = *v35 & 0xF;
          if ( v149 )
          {
            if ( v149 == 15 )
            {
              v150 = v23;
            }
            else
            {
              LOWORD(a10) = *(_WORD *)(v36 + 3);
              BYTE2(a10) = *(_BYTE *)(v36 + 5);
              v151 = &unk_1C02EFD10;
              v152 = (a10 & (unsigned int)v207) >> v213;
              if ( (int)(v212 - v152) >= 0 )
                v151 = &unk_1C02E7180;
              v153 = v149;
              v154 = v151[v149];
              v155 = &unk_1C02EFD10;
              v156 = v207 & (((v152 << 16) + (v212 - v152) * v154) >> 16 << v213);
              v157 = (a10 & (unsigned int)v19) >> v210;
              if ( (int)(v200 - v157) >= 0 )
                v155 = &unk_1C02E7180;
              v158 = v155[v153];
              v159 = &unk_1C02EFD10;
              v160 = v19 & (((v157 << 16) + (v200 - v157) * v158) >> 16 << v210) | v156;
              v161 = (a10 & (unsigned int)v21) >> v202;
              if ( (int)(v201 - v161) >= 0 )
                v159 = &unk_1C02E7180;
              v150 = v21 & (((v161 << 16) + (v201 - v161) * v159[v153]) >> 16 << v202) | v160;
            }
            *(_BYTE *)(v36 + 3) = v150;
            *(_BYTE *)(v36 + 5) = BYTE2(v150);
            *(_BYTE *)(v36 + 4) = BYTE1(v150);
          }
          if ( v148 != 1 )
          {
            v162 = v35[1] >> 4;
            if ( v162 )
            {
              if ( v162 == 15 )
              {
                v163 = v23;
              }
              else
              {
                LOWORD(a10) = *(_WORD *)(v36 + 6);
                BYTE2(a10) = *(_BYTE *)(v36 + 8);
                v164 = &unk_1C02EFD10;
                v165 = (a10 & (unsigned int)v207) >> v213;
                if ( (int)(v212 - v165) >= 0 )
                  v164 = &unk_1C02E7180;
                v166 = v162;
                v167 = v164[v162];
                v168 = &unk_1C02EFD10;
                v169 = v207 & (((v165 << 16) + (v212 - v165) * v167) >> 16 << v213);
                v170 = (a10 & (unsigned int)v19) >> v210;
                if ( (int)(v200 - v170) >= 0 )
                  v168 = &unk_1C02E7180;
                v171 = v168[v166];
                v172 = &unk_1C02EFD10;
                v173 = v19 & (((v170 << 16) + (v200 - v170) * v171) >> 16 << v210) | v169;
                v174 = (a10 & (unsigned int)v21) >> v202;
                if ( (int)(v201 - v174) >= 0 )
                  v172 = &unk_1C02E7180;
                v163 = v21 & (((v174 << 16) + (v201 - v174) * v172[v166]) >> 16 << v202) | v173;
              }
              *(_BYTE *)(v36 + 6) = v163;
              *(_BYTE *)(v36 + 8) = BYTE2(v163);
              *(_BYTE *)(v36 + 7) = BYTE1(v163);
            }
          }
        }
      }
      result = (unsigned int)(a8 - 1);
      v31 += v12;
      v32 += a7;
      LOBYTE(v20) = v210;
      v33 = v203;
      v34 = v209;
      a8 = result;
      v205 = v31;
      v206 = v32;
      if ( !(_DWORD)result )
        return result;
    }
    v39 = *v31 & 0xF;
    if ( v39 )
    {
      if ( v39 == 15 )
      {
        v40 = v23;
      }
      else
      {
        LOWORD(a10) = *(_WORD *)v32;
        BYTE2(a10) = *(_BYTE *)(v32 + 2);
        v41 = &unk_1C02EFD10;
        v42 = (a10 & (unsigned int)v207) >> v213;
        if ( (int)(v212 - v42) >= 0 )
          v41 = &unk_1C02E7180;
        v43 = v39;
        v44 = v41[v39];
        v45 = &unk_1C02EFD10;
        v46 = v207 & (((v42 << 16) + (v212 - v42) * v44) >> 16 << v213);
        v47 = (a10 & (unsigned int)v19) >> v20;
        if ( (int)(v200 - v47) >= 0 )
          v45 = &unk_1C02E7180;
        v48 = v45[v43];
        v49 = &unk_1C02EFD10;
        v50 = v19 & (((v47 << 16) + (v200 - v47) * v48) >> 16 << v20) | v46;
        v51 = (a10 & (unsigned int)v21) >> v202;
        if ( (int)(v201 - v51) >= 0 )
          v49 = &unk_1C02E7180;
        v40 = v21 & (((v51 << 16) + (v201 - v51) * v49[v43]) >> 16 << v202) | v50;
      }
      *(_BYTE *)v32 = v40;
      *(_BYTE *)(v32 + 2) = BYTE2(v40);
      *(_BYTE *)(v32 + 1) = BYTE1(v40);
    }
    v36 = v32 + 3;
    v35 = v31 + 1;
LABEL_25:
    v52 = *v35 >> 4;
    if ( v52 )
    {
      if ( v52 == 15 )
      {
        v53 = v23;
      }
      else
      {
        LOWORD(a10) = *(_WORD *)v36;
        BYTE2(a10) = *(_BYTE *)(v36 + 2);
        v54 = &unk_1C02EFD10;
        v55 = (a10 & (unsigned int)v207) >> v213;
        if ( (int)(v212 - v55) >= 0 )
          v54 = &unk_1C02E7180;
        v56 = v52;
        v57 = v54[v52];
        v58 = &unk_1C02EFD10;
        v59 = v207 & (((v55 << 16) + (v212 - v55) * v57) >> 16 << v213);
        v60 = (a10 & (unsigned int)v19) >> v210;
        if ( (int)(v200 - v60) >= 0 )
          v58 = &unk_1C02E7180;
        v61 = v58[v56];
        v62 = &unk_1C02EFD10;
        v63 = v19 & (((v60 << 16) + (v200 - v60) * v61) >> 16 << v210) | v59;
        v64 = (a10 & (unsigned int)v21) >> v202;
        if ( (int)(v201 - v64) >= 0 )
          v62 = &unk_1C02E7180;
        v53 = v21 & (((v64 << 16) + (v201 - v64) * v62[v56]) >> 16 << v202) | v63;
      }
      *(_BYTE *)v36 = v53;
      *(_BYTE *)(v36 + 2) = BYTE2(v53);
      *(_BYTE *)(v36 + 1) = BYTE1(v53);
    }
    v36 += 3LL;
LABEL_37:
    v65 = *v35 & 0xF;
    if ( v65 )
    {
      if ( v65 == 15 )
      {
        v66 = v23;
      }
      else
      {
        LOWORD(a10) = *(_WORD *)v36;
        BYTE2(a10) = *(_BYTE *)(v36 + 2);
        v67 = &unk_1C02EFD10;
        v68 = (a10 & (unsigned int)v207) >> v213;
        if ( (int)(v212 - v68) >= 0 )
          v67 = &unk_1C02E7180;
        v69 = v65;
        v70 = v67[v65];
        v71 = &unk_1C02EFD10;
        v72 = v207 & (((v68 << 16) + (v212 - v68) * v70) >> 16 << v213);
        v73 = (a10 & (unsigned int)v19) >> v210;
        if ( (int)(v200 - v73) >= 0 )
          v71 = &unk_1C02E7180;
        v74 = v71[v69];
        v75 = &unk_1C02EFD10;
        v76 = v19 & (((v73 << 16) + (v200 - v73) * v74) >> 16 << v210) | v72;
        v77 = (a10 & (unsigned int)v21) >> v202;
        if ( (int)(v201 - v77) >= 0 )
          v75 = &unk_1C02E7180;
        v66 = v21 & (((v77 << 16) + (v201 - v77) * v75[v69]) >> 16 << v202) | v76;
      }
      *(_BYTE *)v36 = v66;
      *(_BYTE *)(v36 + 2) = BYTE2(v66);
      *(_BYTE *)(v36 + 1) = BYTE1(v66);
    }
    v34 = v209;
    v36 += 3LL;
    ++v35;
    goto LABEL_49;
  }
  return result;
}
