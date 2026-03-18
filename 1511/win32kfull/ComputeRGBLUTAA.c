/*
 * XREFs of ComputeRGBLUTAA @ 0x1C00C08DC
 * Callers:
 *     CreateDyesColorMappingTable @ 0x1C00BECF8 (CreateDyesColorMappingTable.c)
 *     CreateHalftoneBrushPat @ 0x1C024F434 (CreateHalftoneBrushPat.c)
 * Callees:
 *     RaisePower @ 0x1C0001738 (RaisePower.c)
 *     Log @ 0x1C0001938 (Log.c)
 *     MulFD6 @ 0x1C00C0E40 (MulFD6.c)
 *     DivFD6 @ 0x1C00C0F60 (DivFD6.c)
 *     ComputeChecksum @ 0x1C00C11A0 (ComputeChecksum.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
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
  int v32; // r10d
  __int64 v33; // r12
  int v34; // edx
  int v35; // ecx
  char v36; // r13
  __int64 result; // rax
  int v38; // ebx
  int v39; // edx
  int v40; // r13d
  char *v41; // rcx
  char v42; // al
  _BYTE *v43; // r14
  char *v44; // rax
  __int64 v45; // rcx
  unsigned int v46; // eax
  int v47; // eax
  int v48; // edx
  int v49; // edi
  int v50; // r15d
  unsigned int v51; // ebx
  int v52; // r15d
  __int64 v53; // rdx
  bool v54; // zf
  unsigned int v55; // eax
  int v56; // eax
  int v57; // eax
  unsigned int v58; // eax
  int v59; // ecx
  int v60; // eax
  unsigned int v61; // eax
  int v62; // eax
  int v63; // eax
  __int32 v64; // ecx
  unsigned int v65; // ebx
  unsigned int v66; // eax
  unsigned int v67; // eax
  unsigned int v68; // eax
  __int64 v69; // rbx
  int v70; // r8d
  unsigned int v71; // eax
  int v72; // eax
  unsigned int v73; // eax
  unsigned __int8 *v74; // rbx
  char v75; // r13
  int v76; // r11d
  _OWORD *v77; // r8
  _WORD *v78; // r10
  int v79; // edi
  _WORD *v80; // rsi
  __int64 v81; // r14
  unsigned int v82; // ecx
  unsigned int v83; // r9d
  unsigned int v84; // kr00_4
  __int64 v85; // rcx
  _OWORD *v86; // rax
  __int128 v87; // xmm1
  int v88; // edx
  __int64 v89; // rax
  unsigned int v90; // kr04_4
  char v91; // [rsp+20h] [rbp-E0h]
  int v92; // [rsp+24h] [rbp-DCh]
  int v93; // [rsp+28h] [rbp-D8h]
  int v94; // [rsp+2Ch] [rbp-D4h]
  _BYTE *v95; // [rsp+30h] [rbp-D0h]
  int v96; // [rsp+30h] [rbp-D0h]
  int v97; // [rsp+38h] [rbp-C8h]
  unsigned int v98; // [rsp+3Ch] [rbp-C4h]
  int v99; // [rsp+40h] [rbp-C0h]
  int v100; // [rsp+44h] [rbp-BCh]
  int v101; // [rsp+4Ch] [rbp-B4h]
  int v102; // [rsp+50h] [rbp-B0h]
  char v103; // [rsp+54h] [rbp-ACh]
  unsigned int v104; // [rsp+58h] [rbp-A8h]
  unsigned int v105; // [rsp+5Ch] [rbp-A4h]
  int v106; // [rsp+60h] [rbp-A0h]
  int v107; // [rsp+64h] [rbp-9Ch]
  unsigned int v108; // [rsp+68h] [rbp-98h]
  int v109; // [rsp+6Ch] [rbp-94h]
  int v110; // [rsp+70h] [rbp-90h]
  unsigned int v111; // [rsp+74h] [rbp-8Ch]
  int v112; // [rsp+78h] [rbp-88h]
  __m256i v113; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v114; // [rsp+A0h] [rbp-60h]
  _DWORD *v115; // [rsp+A8h] [rbp-58h]
  _DWORD *v116; // [rsp+B0h] [rbp-50h]
  char *v117; // [rsp+B8h] [rbp-48h]
  char *v118; // [rsp+C0h] [rbp-40h]
  __int128 v119; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v120; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v121; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v122; // [rsp+F8h] [rbp-8h]
  __int128 v123; // [rsp+100h] [rbp+0h] BYREF
  __int128 v124; // [rsp+110h] [rbp+10h] BYREF
  __int128 v125; // [rsp+120h] [rbp+20h]
  __int128 v126; // [rsp+130h] [rbp+30h]
  __int128 v127; // [rsp+140h] [rbp+40h]
  __int128 v128; // [rsp+150h] [rbp+50h]
  __int128 v129; // [rsp+160h] [rbp+60h]
  __int128 v130; // [rsp+170h] [rbp+70h]
  __int128 v131; // [rsp+180h] [rbp+80h]
  __int128 v132; // [rsp+190h] [rbp+90h]
  __int128 v133; // [rsp+1A0h] [rbp+A0h]
  __int128 v134; // [rsp+1B0h] [rbp+B0h]
  __int128 v135; // [rsp+1C0h] [rbp+C0h]
  __int128 v136; // [rsp+1D0h] [rbp+D0h]
  int v137; // [rsp+1E0h] [rbp+E0h]
  int v138; // [rsp+1F0h] [rbp+F0h]
  int v139; // [rsp+1F4h] [rbp+F4h]
  int v140; // [rsp+1F8h] [rbp+F8h]
  _DWORD v141[4]; // [rsp+200h] [rbp+100h]
  _DWORD *v142; // [rsp+210h] [rbp+110h]
  _DWORD *v143; // [rsp+218h] [rbp+118h]
  _DWORD *v144; // [rsp+220h] [rbp+120h]

  v115 = a1;
  memset(&v113.m256i_i16[1], 0, 30);
  v3 = a1;
  v5 = *(__int128 *)((char *)a2 + 72);
  v123 = *(__int128 *)((char *)a2 + 56);
  v6 = *(__int128 *)((char *)a2 + 88);
  v124 = v5;
  v7 = *(__int128 *)((char *)a2 + 104);
  v125 = v6;
  v8 = *(__int128 *)((char *)a2 + 120);
  v126 = v7;
  v9 = *(__int128 *)((char *)a2 + 136);
  v127 = v8;
  v10 = *(__int128 *)((char *)a2 + 152);
  v128 = v9;
  v11 = *(__int128 *)((char *)a2 + 184);
  v129 = v10;
  v130 = *(__int128 *)((char *)a2 + 168);
  v12 = *(__int128 *)((char *)a2 + 200);
  v131 = v11;
  v13 = *(__int128 *)((char *)a2 + 216);
  v132 = v12;
  v14 = *(__int128 *)((char *)a2 + 232);
  v133 = v13;
  v15 = *(__int128 *)((char *)a2 + 248);
  v134 = v14;
  v16 = *(__int128 *)((char *)a2 + 264);
  v17 = *((_DWORD *)a2 + 70);
  *((_DWORD *)a2 + 14) &= 0xFFFFECC1;
  v135 = v15;
  *(_QWORD *)&v15 = *((_QWORD *)a2 + 2);
  v136 = v16;
  v137 = v17;
  v18 = 255;
  v19 = *a2;
  v20 = v123;
  v122 = v15;
  v21 = *(__int128 *)((char *)a2 + 40);
  v121 = v19;
  v22 = *(__int128 *)((char *)a2 + 24);
  v120 = v21;
  v119 = v22;
  if ( (v123 & 0x2000) == 0 )
    v18 = 0;
  HIWORD(v122) = v18;
  WORD2(v122) = v18;
  *((_WORD *)a2 + 1) &= 0xFFFCu;
  *((_WORD *)a2 + 8) = -21555;
  *((_WORD *)a2 + 9) = -1;
  v23 = DWORD1(v120);
  *((_DWORD *)a2 + 2) = 0;
  *((_WORD *)a2 + 3) = 0;
  *((_DWORD *)a2 + 3) = 1450709556;
  v140 = 1000000;
  v139 = 1000000;
  v138 = 1000000;
  v141[2] = v23;
  v141[1] = v23;
  v141[0] = v23;
  v144 = 0LL;
  v143 = 0LL;
  v142 = 0LL;
  if ( (v20 & 0x40000) != 0 )
  {
    DWORD2(v119) = MulFD6(299000LL, HIDWORD(*((_QWORD *)&v119 + 1)));
    LODWORD(v120) = MulFD6(114000LL, HIDWORD(v119));
    *(_WORD *)((char *)&v120 + 9) = 256;
    HIDWORD(v119) -= DWORD2(v119) + v120;
    WORD1(v119) = 0;
    BYTE1(v119) = 0;
    BYTE11(v120) = 2;
  }
  else if ( (v20 & 0x10000) != 0 )
  {
    v54 = (a1[46] & 0x4000) == 0;
    v138 = a1[117];
    v139 = a1[116];
    v140 = a1[115];
    if ( !v54 )
    {
      v142 = a1 + 131;
      v143 = a1 + 125;
      v144 = a1 + 119;
    }
  }
  v24 = HIDWORD(v120);
  if ( (v20 & 0x20000) == 0 )
    v24 = 1000000;
  HIDWORD(v120) = v24;
  v25 = ComputeChecksum((char *)&v123 + 4, v20 & 0x40321000, 12LL);
  v27 = ComputeChecksum(&v124, v25, v26);
  v29 = ComputeChecksum(&v121, v27, (unsigned int)(v28 + 12));
  v31 = ComputeChecksum(&v119, v29, (unsigned int)(v30 + 20));
  v33 = 256LL;
  v34 = *((unsigned __int16 *)v3 + 3529);
  v35 = *((unsigned __int16 *)v3 + 3528);
  v36 = v119;
  v99 = v34;
  if ( *a3 != v31 )
  {
    *a3 = v31;
    v38 = v20 & 0x1000;
    *((_WORD *)v3 + 3528) = 256;
    v93 = v38;
    if ( (v20 & 0x1000) != 0 )
      v113 = *(__m256i *)&RegData[*((unsigned __int8 *)v3 + 34)][0];
    v114 = a3 + 7;
    v106 = DWORD1(v120) - 1;
    v39 = 3;
    v105 = 1000000 - v32;
    v91 = v36 & 1;
    if ( (v36 & 1) == 0 && (v20 & 0x100000) != 0 )
      v95 = (_BYTE *)*((_QWORD *)v3 + 883);
    else
      v95 = 0LL;
    v40 = HIDWORD(v120);
    v41 = (char *)&v120 + 12;
    v102 = v20 & 2;
    v107 = v20 & 8;
    v100 = v20 & 0x10;
    v110 = v20 & 0x20;
    v101 = v20 & 0x100;
    v112 = v20 & 0x200;
    v42 = v20;
    v43 = v95;
    v109 = v42 & 4;
    v97 = ~(DWORD1(v120) - 1);
    v44 = (char *)&v124 + 12;
    while ( 1 )
    {
      v118 = v44 - 4;
      v96 = v39 - 1;
      v117 = v41 - 1;
      v104 = *((_DWORD *)v44 - 1);
      v45 = (unsigned __int8)*(v41 - 1);
      v98 = *((_DWORD *)v44 - 4);
      v111 = *(&v138 + (unsigned __int8)*v117);
      v94 = v141[v45];
      DWORD1(v120) = v94;
      v103 = *((_BYTE *)&v119 + v45 + 1);
      v108 = *((_DWORD *)&v119 + v45 + 2);
      v116 = (&v142)[v45];
      v46 = 0;
      v92 = 0;
      do
      {
        v47 = DivFD6(v46, 255LL);
        v48 = 0;
        v49 = v47;
        v50 = v47;
        if ( v102 )
        {
          v49 = RaisePower(v47, v98, 0LL);
          v48 = 0;
        }
        if ( v107 )
        {
          if ( v49 <= (int)v126 )
          {
            v53 = DWORD2(v126);
LABEL_51:
            v49 = MulFD6((unsigned int)v49, v53);
          }
          else
          {
            if ( v49 < SDWORD1(v126) )
            {
              v49 -= v126;
              v53 = (unsigned int)v127;
              goto LABEL_51;
            }
            v49 = MulFD6((unsigned int)(v49 - DWORD1(v126)), HIDWORD(v126)) + 1000000;
          }
          v48 = 0;
        }
        if ( v100 )
        {
          v49 = MulFD6((unsigned int)v49, HIDWORD(v124));
          v48 = 0;
        }
        if ( v110 )
          v49 += v125;
        if ( v101 )
        {
          v55 = Log((unsigned int)(7 * v49 + 1000000));
          v49 = DivFD6(v55, (unsigned int)LogFilterMax);
          v48 = 0;
        }
        if ( v49 < 0 )
        {
          v49 = 0;
        }
        else if ( v49 > 1000000 )
        {
          v49 = 1000000;
        }
        if ( v112 )
          v49 = 1000000 - v49;
        if ( v38 )
        {
          if ( v49 > v113.m256i_i32[1] )
          {
            if ( v49 < v113.m256i_i32[2] )
            {
              if ( v49 <= 79996 )
              {
                v67 = DivFD6((unsigned int)v49, 9033000LL);
              }
              else
              {
                v65 = DivFD6((unsigned int)(v49 + 160000), 1160000LL);
                v66 = MulFD6(v65, v65);
                v67 = MulFD6(v65, v66);
              }
              v68 = Log(v67);
              v63 = MulFD6(v68, v113.m256i_u32[7]);
              v64 = v113.m256i_i32[6];
            }
            else
            {
              v60 = DivFD6((unsigned int)(v49 - v113.m256i_i32[2]), (unsigned int)(1000000 - v113.m256i_i32[2]));
              v61 = RaisePower(v60, 2000000LL, 0LL);
              v62 = MulFD6(v61, (unsigned int)(1000000 - v113.m256i_i32[2]));
              v63 = MulFD6((unsigned int)(v113.m256i_i32[2] + v62), v113.m256i_u32[5]);
              v64 = v113.m256i_i32[4];
            }
            v59 = v63 + v64 + 50;
          }
          else
          {
            v56 = DivFD6((unsigned int)v49, v113.m256i_u32[1]);
            v57 = RaisePower(1000000 - v56, 1500000LL, 0LL);
            v58 = MulFD6((unsigned int)(1000000 - v57), v113.m256i_u32[1]);
            v59 = MulFD6(v58, v113.m256i_u32[3]) + 50;
          }
          v49 = v59 / 100;
          v48 = 0;
        }
        if ( v49 < 0 )
        {
          v49 = 0;
        }
        else if ( v49 > 1000000 )
        {
          v49 = 1000000;
        }
        if ( v109 )
        {
          v49 = RaisePower(v49, v104, 0LL);
          v48 = 0;
        }
        if ( v43 )
        {
          *v43 = MulFD6((unsigned int)v49, 255LL);
          v49 = v50;
          ++v43;
          v48 = 0;
        }
        if ( !v91 )
          v49 = 1000000 - v49;
        if ( v116 )
        {
          LODWORD(v69) = -1;
          do
          {
            v69 = (unsigned int)(v69 + 1);
            v70 = v48;
            v48 = v116[v69];
          }
          while ( v49 > v48 );
          v71 = DivFD6((unsigned int)(v49 - v70), (unsigned int)(v48 - v70));
          v51 = v94 + MulFD6(v71, 4095LL) + ((_DWORD)v69 << 12);
        }
        else
        {
          v51 = v94 + MulFD6((unsigned int)v49, v108);
        }
        v52 = ((v51 & v97) << v103) | MulFD6(v106 & v51, v111);
        if ( v49 > v40 )
        {
          v72 = DivFD6((unsigned int)(v49 - v40), v105);
          v73 = RaisePower(v72, 2000000LL, 0LL);
          v52 |= (unsigned int)MulFD6(v73, 1365LL) << 21;
        }
        v38 = v93;
        v46 = ++v92;
        *v114++ = v52;
      }
      while ( v92 < 256 );
      v39 = v96;
      v44 = v118;
      v41 = v117;
      if ( !v96 )
      {
        v3 = v115;
        v35 = 256;
        v20 = v123;
        v36 = v119;
        v34 = v99;
        break;
      }
    }
  }
  result = 3145728LL;
  if ( (v20 & 0x300000) == 0x300000 && v35 != v34 )
  {
    v74 = (unsigned __int8 *)*((_QWORD *)v3 + 883);
    v75 = v36 & 1;
    *((_WORD *)v3 + 3528) = v34;
    *((_WORD *)v3 + 3529) = v34;
    v76 = 127;
    v77 = v74 + 768;
    v78 = v74 + 2304;
    v79 = 127;
    v80 = v74 + 2304;
    v81 = 256LL;
    v82 = (v34 * ((unsigned int)(unsigned __int8)-(v75 != 0) + 65280) + 127) / 0xFF;
    v83 = (unsigned __int8)-(v75 != 0) + 65280 - v82;
    do
    {
      v84 = v79;
      v79 += v82;
      *v80++ = v84 / 0xFF;
      --v81;
    }
    while ( v81 );
    if ( v75 )
    {
      v85 = 4LL;
      v86 = v74 + 2304;
      do
      {
        *v77 = *v86;
        v77[1] = v86[1];
        v77[2] = v86[2];
        v77[3] = v86[3];
        v77[4] = v86[4];
        v77[5] = v86[5];
        v77[6] = v86[6];
        v77 += 8;
        v87 = v86[7];
        v86 += 8;
        *(v77 - 1) = v87;
        --v85;
      }
      while ( v85 );
    }
    else
    {
      v88 = 768;
      do
      {
        v89 = *v74++;
        *(_WORD *)v77 = v78[v89];
        v77 = (_OWORD *)((char *)v77 + 2);
        --v88;
      }
      while ( v88 );
    }
    do
    {
      v90 = v76;
      result = (unsigned int)(-2139062143 * v76);
      v76 += v83;
      *v78++ = v90 / 0xFF;
      --v33;
    }
    while ( v33 );
  }
  return result;
}
