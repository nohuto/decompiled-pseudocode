/*
 * XREFs of ComputeRGBLUTAA @ 0x1401460F4
 * Callers:
 *     CreateDyesColorMappingTable @ 0x1401441D4 (CreateDyesColorMappingTable.c)
 *     CreateHalftoneBrushPat @ 0x140305660 (CreateHalftoneBrushPat.c)
 * Callees:
 *     MulFD6 @ 0x140146A98 (MulFD6.c)
 *     RaisePower @ 0x140146BD0 (RaisePower.c)
 *     DivFD6 @ 0x140146D00 (DivFD6.c)
 *     U64DivU32RoundUp @ 0x140146DC0 (U64DivU32RoundUp.c)
 *     Log @ 0x140147308 (Log.c)
 */

__int64 __fastcall ComputeRGBLUTAA(__int64 a1, __int128 *a2, _DWORD *a3)
{
  __int64 v5; // rsi
  __int64 SessionState; // rax
  __int128 v7; // xmm0
  unsigned int v8; // edi
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int16 v21; // ax
  __int128 v22; // xmm0
  int v23; // r14d
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  unsigned __int64 v26; // rax
  int v27; // r11d
  char *v28; // r8
  int v29; // r9d
  int v30; // r10d
  unsigned __int16 v31; // cx
  unsigned int v32; // edx
  char v33; // al
  char *v34; // r8
  char v35; // al
  char *v36; // r8
  int v37; // r9d
  char v38; // al
  char *v39; // r8
  int v40; // r9d
  char v41; // al
  char v42; // r13
  __int64 v43; // r12
  int v44; // eax
  int v45; // ecx
  __int64 v46; // r8
  __int64 result; // rax
  bool v48; // zf
  int v49; // ecx
  int v50; // esi
  int v51; // r15d
  char v52; // al
  _BYTE *v53; // r14
  char *v54; // rdx
  char *v55; // rax
  char *v56; // rdx
  unsigned int v57; // r9d
  __int64 v58; // rax
  unsigned int v59; // ecx
  unsigned int v60; // eax
  unsigned int v61; // r10d
  unsigned int v62; // r9d
  unsigned int v63; // ecx
  unsigned int v64; // eax
  int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  signed int v68; // edi
  int v69; // eax
  int v70; // ebx
  int v71; // r15d
  char *v72; // rdx
  unsigned int v73; // ebx
  int v74; // r15d
  unsigned int v75; // ebx
  unsigned int v76; // eax
  unsigned int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // r8
  unsigned int v80; // eax
  int v81; // eax
  int v82; // eax
  int v83; // eax
  unsigned int v84; // eax
  unsigned int v85; // ebx
  unsigned int v86; // eax
  unsigned int v87; // eax
  int v88; // eax
  __int64 v89; // rax
  __int128 v90; // xmm1
  unsigned int v91; // eax
  __int64 v92; // r8
  unsigned int v93; // edx
  __int64 v94; // rbx
  __int64 v95; // r8
  unsigned int v96; // eax
  unsigned int v97; // eax
  unsigned int v98; // eax
  unsigned __int8 *v99; // rbx
  int v100; // r11d
  _OWORD *v101; // r8
  _WORD *v102; // r10
  int v103; // r9d
  int v104; // edi
  _WORD *v105; // rsi
  __int64 v106; // r14
  unsigned int v107; // ecx
  unsigned int v108; // r9d
  unsigned int v109; // kr08_4
  __int64 v110; // rcx
  _OWORD *v111; // rax
  __int128 v112; // xmm1
  int v113; // edx
  __int64 v114; // rax
  unsigned int v115; // kr0C_4
  __int16 v116; // [rsp+20h] [rbp-E0h]
  __int16 v117; // [rsp+20h] [rbp-E0h]
  __int16 v118; // [rsp+20h] [rbp-E0h]
  __int16 v119; // [rsp+20h] [rbp-E0h]
  unsigned int v120; // [rsp+24h] [rbp-DCh]
  __int128 v121; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v122; // [rsp+38h] [rbp-C8h] BYREF
  int v123; // [rsp+48h] [rbp-B8h]
  int v124; // [rsp+4Ch] [rbp-B4h]
  _BYTE *v125; // [rsp+50h] [rbp-B0h]
  int v126; // [rsp+58h] [rbp-A8h]
  int v127; // [rsp+5Ch] [rbp-A4h]
  int v128; // [rsp+60h] [rbp-A0h]
  int v129; // [rsp+68h] [rbp-98h]
  int v130; // [rsp+6Ch] [rbp-94h]
  int v131; // [rsp+70h] [rbp-90h]
  int v132; // [rsp+74h] [rbp-8Ch]
  unsigned int v133; // [rsp+78h] [rbp-88h]
  unsigned int v134; // [rsp+7Ch] [rbp-84h]
  int v135; // [rsp+80h] [rbp-80h]
  int v136; // [rsp+84h] [rbp-7Ch]
  unsigned int v137; // [rsp+88h] [rbp-78h]
  int v138; // [rsp+8Ch] [rbp-74h]
  int v139; // [rsp+90h] [rbp-70h]
  unsigned int v140; // [rsp+94h] [rbp-6Ch]
  int v141; // [rsp+98h] [rbp-68h]
  unsigned int v142; // [rsp+9Ch] [rbp-64h]
  int v143; // [rsp+A4h] [rbp-5Ch]
  int v144; // [rsp+A8h] [rbp-58h]
  char *v145; // [rsp+B0h] [rbp-50h]
  __int128 v146; // [rsp+B8h] [rbp-48h]
  __int128 v147; // [rsp+C8h] [rbp-38h]
  _DWORD v148[4]; // [rsp+D8h] [rbp-28h]
  __int64 v149; // [rsp+E8h] [rbp-18h]
  __int64 v150; // [rsp+F0h] [rbp-10h]
  __int64 v151; // [rsp+F8h] [rbp-8h]
  __int64 v152; // [rsp+100h] [rbp+0h]
  char *v153; // [rsp+108h] [rbp+8h]
  char *v154; // [rsp+110h] [rbp+10h]
  __int64 v155; // [rsp+118h] [rbp+18h]
  __int128 v156; // [rsp+120h] [rbp+20h] BYREF
  __int64 v157; // [rsp+130h] [rbp+30h]
  __int64 v158; // [rsp+138h] [rbp+38h]
  __int128 v159; // [rsp+140h] [rbp+40h] BYREF
  __int128 v160; // [rsp+150h] [rbp+50h] BYREF
  __int128 v161; // [rsp+160h] [rbp+60h]
  __int128 v162; // [rsp+170h] [rbp+70h]
  __int128 v163; // [rsp+180h] [rbp+80h]
  __int128 v164; // [rsp+190h] [rbp+90h]
  __int128 v165; // [rsp+1A0h] [rbp+A0h]
  __int128 v166; // [rsp+1B0h] [rbp+B0h]
  __int128 v167; // [rsp+1C0h] [rbp+C0h]
  __int128 v168; // [rsp+1D0h] [rbp+D0h]
  __int128 v169; // [rsp+1E0h] [rbp+E0h]
  __int128 v170; // [rsp+1F0h] [rbp+F0h]
  __int128 v171; // [rsp+200h] [rbp+100h]
  __int128 v172; // [rsp+210h] [rbp+110h]
  int v173; // [rsp+220h] [rbp+120h]

  v155 = a1;
  v146 = 0LL;
  v147 = 0LL;
  v5 = a1;
  SessionState = W32GetSessionState(a1, a2, a3);
  v7 = *(__int128 *)((char *)a2 + 56);
  v8 = 0;
  v9 = *(__int128 *)((char *)a2 + 72);
  v158 = *(_QWORD *)(SessionState + 112);
  v159 = v7;
  v10 = *(__int128 *)((char *)a2 + 88);
  v160 = v9;
  v11 = *(__int128 *)((char *)a2 + 104);
  v161 = v10;
  v12 = *(__int128 *)((char *)a2 + 120);
  v162 = v11;
  v13 = *(__int128 *)((char *)a2 + 136);
  v163 = v12;
  v14 = *(__int128 *)((char *)a2 + 152);
  v164 = v13;
  v15 = *(__int128 *)((char *)a2 + 184);
  v165 = v14;
  v166 = *(__int128 *)((char *)a2 + 168);
  v16 = *(__int128 *)((char *)a2 + 200);
  v167 = v15;
  v17 = *(__int128 *)((char *)a2 + 216);
  v168 = v16;
  v18 = *(__int128 *)((char *)a2 + 232);
  v169 = v17;
  v19 = *(__int128 *)((char *)a2 + 248);
  v170 = v18;
  v20 = *(__int128 *)((char *)a2 + 264);
  LODWORD(SessionState) = *((_DWORD *)a2 + 70);
  *((_DWORD *)a2 + 14) &= 0xFFFFECC1;
  v171 = v19;
  *(_QWORD *)&v19 = *((_QWORD *)a2 + 2);
  v172 = v20;
  v173 = SessionState;
  v21 = 255;
  v22 = *a2;
  v23 = v159;
  v157 = v19;
  v24 = *(__int128 *)((char *)a2 + 40);
  v156 = v22;
  v25 = *(__int128 *)((char *)a2 + 24);
  v122 = v24;
  v121 = v25;
  if ( (v159 & 0x2000) == 0 )
    v21 = 0;
  HIWORD(v157) = v21;
  WORD2(v157) = v21;
  *((_WORD *)a2 + 1) &= 0xFFFCu;
  v26 = DWORD1(v122);
  *((_DWORD *)a2 + 2) = 0;
  *((_WORD *)a2 + 3) = 0;
  *((_DWORD *)a2 + 3) = 1450709556;
  *((_DWORD *)a2 + 4) = -21555;
  v128 = 1000000;
  v127 = 1000000;
  v126 = 1000000;
  v148[2] = v26;
  v148[1] = v26;
  v148[0] = v26;
  v151 = 0LL;
  v150 = 0LL;
  v149 = 0LL;
  if ( (v23 & 0x40000) != 0 )
  {
    DWORD2(v121) = MulFD6(299000LL, HIDWORD(*((_QWORD *)&v121 + 1)));
    LODWORD(v122) = MulFD6(114000LL, HIDWORD(v121));
    *(_WORD *)((char *)&v122 + 9) = 256;
    HIDWORD(v121) -= DWORD2(v121) + v122;
    v8 = 0;
    BYTE11(v122) = 2;
    WORD1(v121) = 0;
    BYTE1(v121) = 0;
  }
  else if ( (v23 & 0x10000) != 0 )
  {
    v48 = (*(_DWORD *)(v5 + 184) & 0x4000) == 0;
    v126 = *(_DWORD *)(v5 + 468);
    v127 = *(_DWORD *)(v5 + 464);
    v128 = *(_DWORD *)(v5 + 460);
    if ( !v48 )
    {
      v149 = v5 + 524;
      v150 = v5 + 500;
      v151 = v5 + 476;
    }
  }
  v27 = HIDWORD(v122);
  v28 = (char *)&v159 + 4;
  v29 = 6;
  if ( (v23 & 0x20000) == 0 )
    v27 = 1000000;
  v30 = 6;
  v31 = v23 & 0x1000;
  HIDWORD(v122) = v27;
  v32 = (v23 & 0x40321000u) >> 16;
  do
  {
    v33 = *v28;
    v28 += 2;
    LOBYTE(v116) = v33;
    HIBYTE(v116) = *(v28 - 1);
    v31 += v116;
    LOWORD(v32) = v31 + v32;
    --v30;
  }
  while ( v30 );
  v34 = (char *)&v160;
  do
  {
    v35 = *v34;
    v34 += 2;
    LOBYTE(v117) = v35;
    HIBYTE(v117) = *(v34 - 1);
    v31 += v117;
    LOWORD(v32) = v31 + v32;
    --v29;
  }
  while ( v29 );
  v36 = (char *)&v156;
  v37 = 12;
  do
  {
    v38 = *v36;
    v36 += 2;
    LOBYTE(v118) = v38;
    HIBYTE(v118) = *(v36 - 1);
    v31 += v118;
    LOWORD(v32) = v31 + v32;
    --v37;
  }
  while ( v37 );
  v39 = (char *)&v121;
  v40 = 16;
  do
  {
    v41 = *v39;
    v39 += 2;
    LOBYTE(v119) = v41;
    HIBYTE(v119) = *(v39 - 1);
    v31 += v119;
    LOWORD(v32) = v31 + v32;
    --v40;
  }
  while ( v40 );
  v42 = v121;
  v43 = 256LL;
  v44 = v31;
  v45 = *(unsigned __int16 *)(v5 + 7056);
  v46 = v44 | ((unsigned __int16)v32 << 16);
  result = *(unsigned __int16 *)(v5 + 7058);
  v142 = *(unsigned __int16 *)(v5 + 7058);
  if ( *a3 != (_DWORD)v46 )
  {
    *a3 = v46;
    *(_WORD *)(v5 + 7056) = 256;
    v131 = v23 & 0x1000;
    if ( (v23 & 0x1000) != 0 )
    {
      v89 = 32LL * *(unsigned __int8 *)(v5 + 34);
      v90 = *(_OWORD *)((char *)&RegData + v89 + 16);
      v146 = *(_OWORD *)((char *)&RegData + v89);
      v147 = v90;
    }
    v145 = (char *)(a3 + 7);
    v136 = DWORD1(v122) - 1;
    v49 = 3;
    v140 = 1000000 - v27;
    if ( (v23 & 0x100000) == 0 || (v42 & 1) != 0 )
      v125 = 0LL;
    else
      v125 = *(_BYTE **)(v5 + 7064);
    v50 = HIDWORD(v122);
    v141 = v23 & 8;
    v51 = v23 & 2;
    v124 = v51;
    v143 = v23 & 0x10;
    v144 = v23 & 0x20;
    v129 = v23 & 0x100;
    v130 = v23 & 0x200;
    v52 = v23;
    v53 = v125;
    v132 = v52 & 4;
    v54 = (char *)&v122 + 12;
    v138 = ~(DWORD1(v122) - 1);
    v55 = (char *)&v160 + 12;
    while ( 1 )
    {
      v153 = v55 - 4;
      v56 = v54 - 1;
      LODWORD(v125) = v49 - 1;
      v154 = v56;
      v57 = *((_DWORD *)v55 - 4);
      v133 = *((_DWORD *)v55 - 1);
      v58 = (unsigned __int8)*v56;
      v120 = v57;
      v137 = *(&v126 + v58);
      v135 = v148[v58];
      DWORD1(v122) = v135;
      v139 = *((unsigned __int8 *)&v121 + v58 + 1);
      v59 = *((_DWORD *)&v121 + v58 + 2);
      v152 = *(&v149 + v58);
      v60 = 0;
      v123 = 0;
      v134 = v59;
      do
      {
        if ( v60 )
        {
          if ( v60 == 255 )
          {
            v8 = 1000000;
          }
          else
          {
            v61 = 62500 * (unsigned __int16)v60;
            v62 = -198967296 * HIWORD(v60) + v61;
            v63 = ((unsigned int)(62500 * HIWORD(v60)) >> 16) + 1;
            if ( v62 >= v61 )
              v63 = (unsigned int)(62500 * HIWORD(v60)) >> 16;
            v64 = U64DivU32RoundUp((v62 >> 28) | (16 * v63), 16 * v62, 255LL);
            v57 = v120;
            v8 = v64;
          }
        }
        v65 = v8;
        if ( v51 )
          v65 = RaisePower(v8, v57, 0LL);
        if ( v141 )
        {
          if ( v65 <= (int)v162 )
          {
            v66 = DWORD2(v162);
            goto LABEL_38;
          }
          if ( v65 < SDWORD1(v162) )
          {
            v65 -= v162;
            v66 = (unsigned int)v163;
LABEL_38:
            v65 = MulFD6((unsigned int)v65, v66);
            goto LABEL_39;
          }
          v65 = MulFD6((unsigned int)(v65 - DWORD1(v162)), HIDWORD(v162)) + 1000000;
        }
LABEL_39:
        if ( v143 )
          v65 = MulFD6((unsigned int)v65, HIDWORD(v160));
        if ( v144 )
          v65 += v161;
        if ( v129 )
        {
          v91 = Log((unsigned int)(7 * v65 + 1000000), v56, v46);
          v65 = DivFD6(v91, *(unsigned int *)(v158 + 1104), v92);
        }
        if ( v65 < 0 )
        {
          v65 = 0;
        }
        else if ( v65 > 1000000 )
        {
          v65 = 1000000;
        }
        v67 = (unsigned int)(1000000 - v65);
        if ( !v130 )
          v67 = (unsigned int)v65;
        if ( v131 )
        {
          v73 = DWORD1(v146);
          if ( (int)v67 <= SDWORD1(v146) )
          {
            v82 = DivFD6(v67, DWORD1(v146), v46);
            v83 = RaisePower((unsigned int)(1000000 - v82), 1500000LL, 0LL);
            v84 = MulFD6((unsigned int)(1000000 - v83), v73);
            v81 = MulFD6(v84, HIDWORD(v146));
          }
          else
          {
            v74 = DWORD2(v146);
            if ( (int)v67 >= SDWORD2(v146) )
            {
              v85 = 1000000 - DWORD2(v146);
              v86 = DivFD6((unsigned int)(v67 - DWORD2(v146)), (unsigned int)(1000000 - DWORD2(v146)), v46);
              v87 = RaisePower(v86, 2000000LL, 0LL);
              v88 = MulFD6(v87, v85);
              v81 = v147 + MulFD6((unsigned int)(v74 + v88), DWORD1(v147));
            }
            else
            {
              if ( (int)v67 <= 79996 )
              {
                v77 = DivFD6(v67, 9033000LL, v46);
              }
              else
              {
                v75 = DivFD6((unsigned int)(v67 + 160000), 1160000LL, v46);
                v76 = MulFD6(v75, v75);
                v77 = MulFD6(v75, v76);
              }
              v80 = Log(v77, v78, v79);
              v81 = DWORD2(v147) + MulFD6(v80, HIDWORD(v147));
            }
          }
          v67 = (unsigned int)((v81 + 50) / 100);
        }
        if ( (int)v67 < 0 )
        {
          v67 = 0LL;
        }
        else if ( (int)v67 > 1000000 )
        {
          v67 = 1000000LL;
        }
        if ( v132 )
          v67 = (unsigned int)RaisePower(v67, v133, 0LL);
        if ( v53 )
        {
          *v53 = MulFD6(v67, 255LL);
          LODWORD(v67) = v8;
          ++v53;
        }
        v68 = 1000000 - v67;
        if ( (v42 & 1) != 0 )
          v68 = v67;
        if ( v152 )
        {
          v93 = 0;
          LODWORD(v94) = -1;
          do
          {
            v94 = (unsigned int)(v94 + 1);
            v95 = v93;
            v93 = *(_DWORD *)(v152 + 4 * v94);
          }
          while ( v68 > (int)v93 );
          v96 = DivFD6((unsigned int)(v68 - v95), v93 - (unsigned int)v95, v95);
          v69 = ((_DWORD)v94 << 12) + MulFD6(v96, 4095LL);
        }
        else
        {
          v69 = MulFD6((unsigned int)v68, v134);
        }
        v70 = v69 + v135;
        v71 = ((v138 & v70) << v139) | MulFD6(v136 & (unsigned int)(v69 + v135), v137);
        if ( v68 > v50 )
        {
          v97 = DivFD6((unsigned int)(v68 - v50), v140, v46);
          v8 = 0;
          v98 = RaisePower(v97, 2000000LL, 0LL);
          v71 |= (unsigned int)MulFD6(v98, 1365LL) << 21;
        }
        else
        {
          v8 = 0;
        }
        v72 = v145;
        v57 = v120;
        v60 = ++v123;
        *(_DWORD *)v145 = v71;
        v56 = v72 + 4;
        v51 = v124;
        v145 = v56;
      }
      while ( (int)v60 < 256 );
      v49 = (int)v125;
      v55 = v153;
      v54 = v154;
      if ( !(_DWORD)v125 )
      {
        v5 = v155;
        v45 = 256;
        v23 = v159;
        v42 = v121;
        result = v142;
        break;
      }
    }
  }
  if ( (v23 & 0x300000) == 0x300000 && v45 != (_DWORD)result )
  {
    v99 = *(unsigned __int8 **)(v5 + 7064);
    *(_WORD *)(v5 + 7056) = result;
    *(_WORD *)(v5 + 7058) = result;
    v100 = 127;
    v101 = v99 + 768;
    v102 = v99 + 2304;
    v103 = (unsigned __int8)-((v42 & 1) != 0) + 65280;
    v104 = 127;
    v105 = v99 + 2304;
    v106 = 256LL;
    v107 = ((int)result * v103 + 127) / 0xFFu;
    v108 = v103 - v107;
    do
    {
      v109 = v104;
      v104 += v107;
      *v105++ = v109 / 0xFF;
      --v106;
    }
    while ( v106 );
    if ( (v42 & 1) != 0 )
    {
      v110 = 4LL;
      v111 = v99 + 2304;
      do
      {
        *v101 = *v111;
        v101[1] = v111[1];
        v101[2] = v111[2];
        v101[3] = v111[3];
        v101[4] = v111[4];
        v101[5] = v111[5];
        v101[6] = v111[6];
        v101 += 8;
        v112 = v111[7];
        v111 += 8;
        *(v101 - 1) = v112;
        --v110;
      }
      while ( v110 );
    }
    else
    {
      v113 = 768;
      do
      {
        v114 = *v99++;
        *(_WORD *)v101 = v102[v114];
        v101 = (_OWORD *)((char *)v101 + 2);
        --v113;
      }
      while ( v113 );
    }
    do
    {
      v115 = v100;
      result = (unsigned int)(-2139062143 * v100);
      v100 += v108;
      *v102++ = v115 / 0xFF;
      --v43;
    }
    while ( v43 );
  }
  return result;
}
