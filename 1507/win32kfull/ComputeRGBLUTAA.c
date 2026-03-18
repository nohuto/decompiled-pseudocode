/*
 * XREFs of ComputeRGBLUTAA @ 0x1C00A6FC0
 * Callers:
 *     CreateDyesColorMappingTable @ 0x1C00A5548 (CreateDyesColorMappingTable.c)
 *     CreateHalftoneBrushPat @ 0x1C024F4A4 (CreateHalftoneBrushPat.c)
 * Callees:
 *     MulFD6 @ 0x1C00A7520 (MulFD6.c)
 *     DivFD6 @ 0x1C00A7640 (DivFD6.c)
 *     RaisePower @ 0x1C00A7894 (RaisePower.c)
 *     Log @ 0x1C00A7ABC (Log.c)
 *     ComputeChecksum @ 0x1C00A7BB4 (ComputeChecksum.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall ComputeRGBLUTAA(_DWORD *a1, __int128 *a2, _DWORD *a3)
{
  _DWORD *v3; // rsi
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  int v17; // eax
  __int16 v18; // ax
  __int128 v19; // xmm0
  int v20; // r14d
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  unsigned __int64 v23; // rax
  int v24; // r10d
  unsigned int v25; // eax
  unsigned int v26; // r11d
  unsigned int v27; // eax
  int v28; // r11d
  unsigned int v29; // eax
  int v30; // r11d
  int v31; // eax
  __int64 v32; // r9
  int v33; // r10d
  __int64 v34; // r12
  int v35; // edx
  int v36; // ecx
  char v37; // r13
  __int64 result; // rax
  int v39; // ebx
  unsigned __int64 v40; // r8
  int v41; // edx
  int v42; // r13d
  char *v43; // rcx
  char v44; // al
  _BYTE *v45; // r14
  char *v46; // rax
  __int64 v47; // rcx
  unsigned int v48; // eax
  unsigned int v49; // eax
  __int64 v50; // r8
  __int64 v51; // r9
  int v52; // edx
  int v53; // edi
  int v54; // r15d
  unsigned int v55; // ebx
  __int64 v56; // r8
  int v57; // r15d
  __int64 v58; // rdx
  bool v59; // zf
  unsigned int v60; // eax
  __int64 v61; // r8
  __int64 v62; // r9
  int v63; // eax
  int v64; // eax
  unsigned int v65; // eax
  int v66; // ecx
  unsigned int v67; // eax
  unsigned int v68; // eax
  int v69; // eax
  int v70; // eax
  __int32 v71; // ecx
  unsigned int v72; // ebx
  unsigned int v73; // eax
  unsigned int v74; // eax
  unsigned int v75; // eax
  __int64 v76; // rbx
  __int64 v77; // r8
  unsigned int v78; // eax
  unsigned int v79; // eax
  unsigned int v80; // eax
  unsigned __int8 *v81; // rbx
  char v82; // r13
  int v83; // r11d
  _OWORD *v84; // r8
  _WORD *v85; // r10
  int v86; // edi
  _WORD *v87; // rsi
  __int64 v88; // r14
  unsigned int v89; // ecx
  unsigned int v90; // r9d
  unsigned int v91; // kr00_4
  __int64 v92; // rcx
  _OWORD *v93; // rax
  __int128 v94; // xmm1
  int v95; // edx
  __int64 v96; // rax
  unsigned int v97; // kr04_4
  char v98; // [rsp+20h] [rbp-E0h]
  int v99; // [rsp+24h] [rbp-DCh]
  int v100; // [rsp+28h] [rbp-D8h]
  int v101; // [rsp+2Ch] [rbp-D4h]
  _BYTE *v102; // [rsp+30h] [rbp-D0h]
  int v103; // [rsp+30h] [rbp-D0h]
  int v104; // [rsp+38h] [rbp-C8h]
  unsigned int v105; // [rsp+3Ch] [rbp-C4h]
  int v106; // [rsp+40h] [rbp-C0h]
  int v107; // [rsp+44h] [rbp-BCh]
  int v108; // [rsp+4Ch] [rbp-B4h]
  int v109; // [rsp+50h] [rbp-B0h]
  char v110; // [rsp+54h] [rbp-ACh]
  unsigned int v111; // [rsp+58h] [rbp-A8h]
  unsigned int v112; // [rsp+5Ch] [rbp-A4h]
  int v113; // [rsp+60h] [rbp-A0h]
  int v114; // [rsp+64h] [rbp-9Ch]
  unsigned int v115; // [rsp+68h] [rbp-98h]
  int v116; // [rsp+6Ch] [rbp-94h]
  int v117; // [rsp+70h] [rbp-90h]
  unsigned int v118; // [rsp+74h] [rbp-8Ch]
  int v119; // [rsp+78h] [rbp-88h]
  __m256i v120; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v121; // [rsp+A0h] [rbp-60h]
  _DWORD *v122; // [rsp+A8h] [rbp-58h]
  _DWORD *v123; // [rsp+B0h] [rbp-50h]
  char *v124; // [rsp+B8h] [rbp-48h]
  char *v125; // [rsp+C0h] [rbp-40h]
  __int128 v126; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v127; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v128; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v129; // [rsp+F8h] [rbp-8h]
  __int128 v130; // [rsp+100h] [rbp+0h] BYREF
  __int128 v131; // [rsp+110h] [rbp+10h] BYREF
  __int128 v132; // [rsp+120h] [rbp+20h]
  __int128 v133; // [rsp+130h] [rbp+30h]
  __int128 v134; // [rsp+140h] [rbp+40h]
  __int128 v135; // [rsp+150h] [rbp+50h]
  __int128 v136; // [rsp+160h] [rbp+60h]
  __int128 v137; // [rsp+170h] [rbp+70h]
  __int128 v138; // [rsp+180h] [rbp+80h]
  __int128 v139; // [rsp+190h] [rbp+90h]
  __int128 v140; // [rsp+1A0h] [rbp+A0h]
  __int128 v141; // [rsp+1B0h] [rbp+B0h]
  __int128 v142; // [rsp+1C0h] [rbp+C0h]
  __int128 v143; // [rsp+1D0h] [rbp+D0h]
  int v144; // [rsp+1E0h] [rbp+E0h]
  int v145; // [rsp+1F0h] [rbp+F0h]
  int v146; // [rsp+1F4h] [rbp+F4h]
  int v147; // [rsp+1F8h] [rbp+F8h]
  _DWORD v148[4]; // [rsp+200h] [rbp+100h]
  _DWORD *v149; // [rsp+210h] [rbp+110h]
  _DWORD *v150; // [rsp+218h] [rbp+118h]
  _DWORD *v151; // [rsp+220h] [rbp+120h]

  v122 = a1;
  memset(&v120.m256i_i16[1], 0, 30);
  v3 = a1;
  v5 = *(__int128 *)((char *)a2 + 72);
  v130 = *(__int128 *)((char *)a2 + 56);
  v6 = *(__int128 *)((char *)a2 + 88);
  v131 = v5;
  v7 = *(__int128 *)((char *)a2 + 104);
  v132 = v6;
  v8 = *(__int128 *)((char *)a2 + 120);
  v133 = v7;
  v9 = *(__int128 *)((char *)a2 + 136);
  v134 = v8;
  v10 = *(__int128 *)((char *)a2 + 152);
  v135 = v9;
  v11 = *(__int128 *)((char *)a2 + 184);
  v136 = v10;
  v137 = *(__int128 *)((char *)a2 + 168);
  v12 = *(__int128 *)((char *)a2 + 200);
  v138 = v11;
  v13 = *(__int128 *)((char *)a2 + 216);
  v139 = v12;
  v14 = *(__int128 *)((char *)a2 + 232);
  v140 = v13;
  v15 = *(__int128 *)((char *)a2 + 248);
  v141 = v14;
  v16 = *(__int128 *)((char *)a2 + 264);
  v17 = *((_DWORD *)a2 + 70);
  *((_DWORD *)a2 + 14) &= 0xFFFFECC1;
  v142 = v15;
  *(_QWORD *)&v15 = *((_QWORD *)a2 + 2);
  v143 = v16;
  v144 = v17;
  v18 = 255;
  v19 = *a2;
  v20 = v130;
  v129 = v15;
  v21 = *(__int128 *)((char *)a2 + 40);
  v128 = v19;
  v22 = *(__int128 *)((char *)a2 + 24);
  v127 = v21;
  v126 = v22;
  if ( (v130 & 0x2000) == 0 )
    v18 = 0;
  HIWORD(v129) = v18;
  WORD2(v129) = v18;
  *((_WORD *)a2 + 1) &= 0xFFFCu;
  *((_WORD *)a2 + 8) = -21555;
  *((_WORD *)a2 + 9) = -1;
  v23 = DWORD1(v127);
  *((_DWORD *)a2 + 2) = 0;
  *((_WORD *)a2 + 3) = 0;
  *((_DWORD *)a2 + 3) = 1450709556;
  v147 = 1000000;
  v146 = 1000000;
  v145 = 1000000;
  v148[2] = v23;
  v148[1] = v23;
  v148[0] = v23;
  v151 = 0LL;
  v150 = 0LL;
  v149 = 0LL;
  if ( (v20 & 0x40000) != 0 )
  {
    DWORD2(v126) = MulFD6(299000LL, HIDWORD(*((_QWORD *)&v126 + 1)));
    LODWORD(v127) = MulFD6(114000LL, HIDWORD(v126));
    *(_WORD *)((char *)&v127 + 9) = 256;
    HIDWORD(v126) -= DWORD2(v126) + v127;
    WORD1(v126) = 0;
    BYTE1(v126) = 0;
    BYTE11(v127) = 2;
  }
  else if ( (v20 & 0x10000) != 0 )
  {
    v59 = (a1[46] & 0x4000) == 0;
    v145 = a1[117];
    v146 = a1[116];
    v147 = a1[115];
    if ( !v59 )
    {
      v149 = a1 + 131;
      v150 = a1 + 125;
      v151 = a1 + 119;
    }
  }
  v24 = HIDWORD(v127);
  if ( (v20 & 0x20000) == 0 )
    v24 = 1000000;
  HIDWORD(v127) = v24;
  v25 = ComputeChecksum((char *)&v130 + 4, v20 & 0x40321000, 12LL);
  v27 = ComputeChecksum(&v131, v25, v26);
  v29 = ComputeChecksum(&v128, v27, (unsigned int)(v28 + 12));
  v31 = ComputeChecksum(&v126, v29, (unsigned int)(v30 + 20));
  v34 = 256LL;
  v35 = *((unsigned __int16 *)v3 + 3529);
  v36 = *((unsigned __int16 *)v3 + 3528);
  v37 = v126;
  v106 = v35;
  if ( *a3 != v31 )
  {
    *a3 = v31;
    v39 = v20 & 0x1000;
    *((_WORD *)v3 + 3528) = 256;
    v100 = v39;
    if ( (v20 & 0x1000) != 0 )
      v120 = *(__m256i *)&RegData[*((unsigned __int8 *)v3 + 34)][0];
    v40 = (unsigned int)(DWORD1(v127) - 1);
    v121 = a3 + 7;
    v113 = DWORD1(v127) - 1;
    v41 = 3;
    v112 = 1000000 - v33;
    v98 = v37 & 1;
    if ( (v37 & 1) == 0 && (v20 & 0x100000) != 0 )
      v102 = (_BYTE *)*((_QWORD *)v3 + 883);
    else
      v102 = 0LL;
    v42 = HIDWORD(v127);
    v43 = (char *)&v127 + 12;
    v109 = v20 & 2;
    v114 = v20 & 8;
    v107 = v20 & 0x10;
    v117 = v20 & 0x20;
    v108 = v20 & 0x100;
    v119 = v20 & 0x200;
    v44 = v20;
    v45 = v102;
    v116 = v44 & 4;
    v104 = ~(_DWORD)v40;
    v46 = (char *)&v131 + 12;
    while ( 1 )
    {
      v125 = v46 - 4;
      v103 = v41 - 1;
      v124 = v43 - 1;
      v111 = *((_DWORD *)v46 - 1);
      v47 = (unsigned __int8)*(v43 - 1);
      v105 = *((_DWORD *)v46 - 4);
      v118 = *(&v145 + (unsigned __int8)*v124);
      v101 = v148[v47];
      DWORD1(v127) = v101;
      v110 = *((_BYTE *)&v126 + v47 + 1);
      v115 = *((_DWORD *)&v126 + v47 + 2);
      v123 = (&v149)[v47];
      v48 = 0;
      v99 = 0;
      do
      {
        v49 = DivFD6(v48, 255LL, v40, v32);
        v52 = 0;
        v53 = v49;
        v54 = v49;
        if ( v109 )
        {
          v53 = RaisePower(v49, v105, 0LL);
          v52 = 0;
        }
        if ( v114 )
        {
          if ( v53 <= (int)v133 )
          {
            v58 = DWORD2(v133);
LABEL_50:
            v53 = MulFD6((unsigned int)v53, v58);
          }
          else
          {
            if ( v53 < SDWORD1(v133) )
            {
              v53 -= v133;
              v58 = (unsigned int)v134;
              goto LABEL_50;
            }
            v53 = MulFD6((unsigned int)(v53 - DWORD1(v133)), HIDWORD(v133)) + 1000000;
          }
          v52 = 0;
        }
        if ( v107 )
        {
          v53 = MulFD6((unsigned int)v53, HIDWORD(v131));
          v52 = 0;
        }
        if ( v117 )
          v53 += v132;
        if ( v108 )
        {
          v60 = Log((unsigned int)(7 * v53 + 1000000));
          v53 = DivFD6(v60, (unsigned int)LogFilterMax, v61, v62);
          v52 = 0;
        }
        if ( v53 < 0 )
        {
          v53 = 0;
        }
        else if ( v53 > 1000000 )
        {
          v53 = 1000000;
        }
        if ( v119 )
          v53 = 1000000 - v53;
        if ( v39 )
        {
          if ( v53 > v120.m256i_i32[1] )
          {
            if ( v53 < v120.m256i_i32[2] )
            {
              if ( v53 <= 79996 )
              {
                v74 = DivFD6((unsigned int)v53, 9033000LL, v50, v51);
              }
              else
              {
                v72 = DivFD6((unsigned int)(v53 + 160000), 1160000LL, v50, v51);
                v73 = MulFD6(v72, v72);
                v74 = MulFD6(v72, v73);
              }
              v75 = Log(v74);
              v70 = MulFD6(v75, v120.m256i_u32[7]);
              v71 = v120.m256i_i32[6];
            }
            else
            {
              v67 = DivFD6(
                      (unsigned int)(v53 - v120.m256i_i32[2]),
                      (unsigned int)(1000000 - v120.m256i_i32[2]),
                      v50,
                      v51);
              v68 = RaisePower(v67, 2000000LL, 0LL);
              v69 = MulFD6(v68, (unsigned int)(1000000 - v120.m256i_i32[2]));
              v70 = MulFD6((unsigned int)(v120.m256i_i32[2] + v69), v120.m256i_u32[5]);
              v71 = v120.m256i_i32[4];
            }
            v66 = v70 + v71 + 50;
          }
          else
          {
            v63 = DivFD6((unsigned int)v53, v120.m256i_u32[1], v50, v51);
            v64 = RaisePower((unsigned int)(1000000 - v63), 1500000LL, 0LL);
            v65 = MulFD6((unsigned int)(1000000 - v64), v120.m256i_u32[1]);
            v66 = MulFD6(v65, v120.m256i_u32[3]) + 50;
          }
          v53 = v66 / 100;
          v52 = 0;
        }
        if ( v53 < 0 )
        {
          v53 = 0;
        }
        else if ( v53 > 1000000 )
        {
          v53 = 1000000;
        }
        if ( v116 )
        {
          v53 = RaisePower((unsigned int)v53, v111, 0LL);
          v52 = 0;
        }
        if ( v45 )
        {
          *v45 = MulFD6((unsigned int)v53, 255LL);
          v53 = v54;
          ++v45;
          v52 = 0;
        }
        if ( !v98 )
          v53 = 1000000 - v53;
        if ( v123 )
        {
          LODWORD(v76) = -1;
          do
          {
            v76 = (unsigned int)(v76 + 1);
            v77 = (unsigned int)v52;
            v52 = v123[v76];
          }
          while ( v53 > v52 );
          v78 = DivFD6((unsigned int)(v53 - v77), (unsigned int)(v52 - v77), v77, v51);
          v55 = v101 + MulFD6(v78, 4095LL) + ((_DWORD)v76 << 12);
        }
        else
        {
          v55 = v101 + MulFD6((unsigned int)v53, v115);
        }
        v57 = ((v55 & v104) << v110) | MulFD6(v113 & v55, v118);
        if ( v53 > v42 )
        {
          v79 = DivFD6((unsigned int)(v53 - v42), v112, v56, v32);
          v80 = RaisePower(v79, 2000000LL, 0LL);
          v57 |= (unsigned int)MulFD6(v80, 1365LL) << 21;
        }
        v39 = v100;
        v48 = ++v99;
        *v121 = v57;
        v40 = (unsigned __int64)++v121;
      }
      while ( v99 < 256 );
      v41 = v103;
      v46 = v125;
      v43 = v124;
      if ( !v103 )
      {
        v3 = v122;
        v36 = 256;
        v20 = v130;
        v37 = v126;
        v35 = v106;
        break;
      }
    }
  }
  result = 3145728LL;
  if ( (v20 & 0x300000) == 0x300000 && v36 != v35 )
  {
    v81 = (unsigned __int8 *)*((_QWORD *)v3 + 883);
    v82 = v37 & 1;
    *((_WORD *)v3 + 3528) = v35;
    *((_WORD *)v3 + 3529) = v35;
    v83 = 127;
    v84 = v81 + 768;
    v85 = v81 + 2304;
    v86 = 127;
    v87 = v81 + 2304;
    v88 = 256LL;
    v89 = (v35 * ((unsigned int)(unsigned __int8)-(v82 != 0) + 65280) + 127) / 0xFF;
    v90 = (unsigned __int8)-(v82 != 0) + 65280 - v89;
    do
    {
      v91 = v86;
      v86 += v89;
      *v87++ = v91 / 0xFF;
      --v88;
    }
    while ( v88 );
    if ( v82 )
    {
      v92 = 4LL;
      v93 = v81 + 2304;
      do
      {
        *v84 = *v93;
        v84[1] = v93[1];
        v84[2] = v93[2];
        v84[3] = v93[3];
        v84[4] = v93[4];
        v84[5] = v93[5];
        v84[6] = v93[6];
        v84 += 8;
        v94 = v93[7];
        v93 += 8;
        *(v84 - 1) = v94;
        --v92;
      }
      while ( v92 );
    }
    else
    {
      v95 = 768;
      do
      {
        v96 = *v81++;
        *(_WORD *)v84 = v85[v96];
        v84 = (_OWORD *)((char *)v84 + 2);
        --v95;
      }
      while ( v95 );
    }
    do
    {
      v97 = v83;
      result = (unsigned int)(-2139062143 * v83);
      v83 += v90;
      *v85++ = v97 / 0xFF;
      --v34;
    }
    while ( v34 );
  }
  return result;
}
