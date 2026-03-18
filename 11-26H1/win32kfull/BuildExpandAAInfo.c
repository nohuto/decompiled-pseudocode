/*
 * XREFs of BuildExpandAAInfo @ 0x1401485D0
 * Callers:
 *     <none>
 * Callees:
 *     RaisePower @ 0x140146BD0 (RaisePower.c)
 *     DivFD6 @ 0x140146D00 (DivFD6.c)
 *     BuildRepData @ 0x140148F68 (BuildRepData.c)
 */

_DWORD *__fastcall BuildExpandAAInfo(
        __int64 a1,
        __int16 a2,
        int *a3,
        int *a4,
        int a5,
        signed int a6,
        int a7,
        int *a8,
        int *a9,
        unsigned int a10)
{
  int v10; // r13d
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // r12d
  int v14; // r8d
  int v15; // r9d
  int v16; // r10d
  unsigned int v17; // eax
  unsigned int v19; // edi
  unsigned int v20; // edx
  unsigned int v21; // r15d
  unsigned int v22; // ebp
  unsigned int v23; // esi
  unsigned int v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // eax
  char *v27; // rax
  _DWORD *v28; // rbx
  _QWORD *v29; // r14
  _OWORD *v30; // rsi
  int v31; // edx
  __int16 v32; // cx
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  int *v39; // rdi
  int *v40; // r15
  unsigned __int64 v41; // rax
  unsigned int v42; // r11d
  __int64 v43; // r9
  __int64 v44; // r10
  unsigned int *v45; // rdx
  int v46; // esi
  int *v47; // r15
  int *v48; // rbp
  __int64 v49; // rbp
  int v50; // r10d
  int v51; // r8d
  __int64 v52; // rax
  int v53; // r9d
  int v54; // eax
  unsigned int v55; // edi
  int v56; // r15d
  unsigned int v57; // eax
  __int64 v58; // rcx
  unsigned int v59; // r9d
  int *v60; // r11
  unsigned int v61; // r8d
  __int64 v62; // rdi
  unsigned int v63; // eax
  unsigned int v64; // ecx
  __int64 v65; // rdx
  int v66; // r11d
  int v67; // r13d
  __int16 v68; // r8
  int v69; // eax
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rdx
  __int128 v73; // rtt
  __int64 v74; // rax
  int v75; // edx
  int v76; // edi
  __int64 v77; // r11
  unsigned int v78; // eax
  unsigned __int64 v79; // rcx
  unsigned __int64 v80; // rax
  __int64 v81; // rcx
  unsigned __int64 v82; // rcx
  unsigned int v83; // eax
  unsigned __int64 v84; // rcx
  int v85; // ecx
  __int64 *v86; // rcx
  int v87; // eax
  int v88; // eax
  int v89; // ecx
  int v90; // r8d
  __int64 v91; // rax
  int v92; // edi
  int *v93; // r13
  int v94; // eax
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // r8
  _QWORD *v98; // rcx
  __int64 v99; // rax
  __int64 i; // rdx
  unsigned int v101; // [rsp+20h] [rbp-C8h]
  int v102; // [rsp+24h] [rbp-C4h]
  int v103; // [rsp+2Ch] [rbp-BCh]
  int v104; // [rsp+30h] [rbp-B8h]
  int v105; // [rsp+34h] [rbp-B4h]
  unsigned int v106; // [rsp+34h] [rbp-B4h]
  __int64 v107; // [rsp+38h] [rbp-B0h]
  int v108; // [rsp+40h] [rbp-A8h]
  int v109; // [rsp+44h] [rbp-A4h]
  int v110; // [rsp+48h] [rbp-A0h]
  __int64 v111; // [rsp+50h] [rbp-98h]
  int v112; // [rsp+58h] [rbp-90h]
  int v113; // [rsp+5Ch] [rbp-8Ch]
  int v114; // [rsp+60h] [rbp-88h]
  int v115; // [rsp+64h] [rbp-84h]
  int v116; // [rsp+68h] [rbp-80h]
  __int64 v117; // [rsp+70h] [rbp-78h]
  __int64 v118; // [rsp+78h] [rbp-70h]
  int v119; // [rsp+80h] [rbp-68h]
  unsigned int *v120; // [rsp+88h] [rbp-60h]
  _QWORD *v121; // [rsp+90h] [rbp-58h]
  _DWORD *v122; // [rsp+98h] [rbp-50h]
  int *v123; // [rsp+A0h] [rbp-48h]
  __int64 v124; // [rsp+A8h] [rbp-40h]
  int v128; // [rsp+120h] [rbp+38h]

  v10 = *a3;
  v11 = a7 - a6;
  v12 = *a4;
  v13 = *a4 - *a3;
  v114 = 0;
  v115 = 0;
  v116 = 0;
  v105 = v10;
  v128 = a7 - a6;
  if ( (int)v13 <= 0 )
    return 0LL;
  v14 = 0;
  if ( v10 >= 0 )
    v14 = v10;
  v103 = -1;
  v15 = *a8;
  if ( v12 > a5 )
    v12 = a5;
  v16 = *a9;
  v104 = v12;
  v102 = v14;
  v112 = *a8;
  v113 = v16;
  v110 = 0;
  if ( v15 >= v16 || (int)v13 >= v11 )
    return 0LL;
  if ( (a2 & 0x4A80) != 0 )
  {
    v17 = v12 - v14;
    if ( v17 + 3 < v17 )
      return 0LL;
    v41 = 2LL * (v17 + 3);
    if ( v41 > 0xFFFFFFFF || (int)v41 + 8 < (unsigned int)v41 )
      return 0LL;
    v11 = v128;
    v19 = (v41 + 8) & 0xFFFFFFF8;
  }
  else
  {
    v19 = 0;
  }
  if ( (a2 & 0x4200) != 0 )
  {
    v20 = 0;
    v101 = 0;
    v21 = 0;
    v22 = 0;
  }
  else
  {
    v78 = v11 + v13 - 1;
    if ( v78 < v11 )
      return 0LL;
    v79 = 2LL * (v78 / v13);
    if ( v79 > 0xFFFFFFFF )
      return 0LL;
    if ( !(_DWORD)v79 )
      return 0LL;
    v80 = 4LL * (unsigned int)(v79 - 1);
    v101 = v79 - 1;
    v81 = (unsigned int)(v79 - 1);
    if ( v80 > 0xFFFFFFFF )
      return 0LL;
    if ( (int)v80 + 8 < (unsigned int)v80 )
      return 0LL;
    v22 = (v80 + 8) & 0xFFFFFFF8;
    v82 = 8 * v81;
    if ( v82 > 0xFFFFFFFF )
      return 0LL;
    v83 = v82 + 8;
    if ( (int)v82 + 8 < (unsigned int)v82 )
      return 0LL;
    v20 = v83 + v22;
    if ( v83 + v22 < v83 )
      return 0LL;
    v84 = 8LL * (unsigned int)(v16 - v15);
    if ( v84 > 0xFFFFFFFF )
      return 0LL;
    v21 = v84 + 8;
    if ( (int)v84 + 8 < (unsigned int)v84 )
      return 0LL;
  }
  if ( a10 + 8 < a10 )
    return 0LL;
  v23 = (a10 + 8) & 0xFFFFFFF8;
  v24 = v21 + v19;
  if ( v21 + v19 < v19 )
    return 0LL;
  v25 = v24 + v23;
  if ( v24 + v23 < v24 )
    return 0LL;
  v26 = v25 + v20;
  if ( v25 + v20 < v25 || v26 + 240 < v26 )
    return 0LL;
  v27 = (char *)EngAllocMem(1u, v26 + 240, 0x34355448u);
  v122 = v27;
  v28 = v27;
  if ( !v27 )
    return v28;
  v29 = v27 + 240;
  if ( v23 )
  {
    *((_QWORD *)v27 + 4) = v29;
    v29 = (_QWORD *)((char *)v29 + v23);
  }
  if ( v19 )
  {
    v30 = v27 + 48;
    v31 = v112;
    *((_DWORD *)v27 + 13) = v128;
    *((_DWORD *)v27 + 17) = v104;
    *((_DWORD *)v27 + 16) = v102;
    *((_DWORD *)v27 + 18) = v31;
    *((_DWORD *)v27 + 19) = v113;
    *((_QWORD *)v27 + 12) = (char *)v29 + 2 * (v104 - v102);
    *((_QWORD *)v27 + 11) = v29;
    v29 = (_QWORD *)((char *)v29 + v19);
    *((_DWORD *)v27 + 12) = v13;
    if ( !(unsigned int)BuildRepData(v27 + 48, (unsigned int)v10, (unsigned int)a6) )
      goto LABEL_66;
    v32 = a2;
    v33 = *((_OWORD *)v28 + 4);
    *((_OWORD *)v28 + 7) = *v30;
    v34 = *((_OWORD *)v28 + 5);
    *((_OWORD *)v28 + 8) = v33;
    v35 = *((_OWORD *)v28 + 6);
    *((_OWORD *)v28 + 9) = v34;
    *((_OWORD *)v28 + 10) = v35;
    v36 = *((_OWORD *)v28 + 8);
    *((_OWORD *)v28 + 11) = *((_OWORD *)v28 + 7);
    v37 = *((_OWORD *)v28 + 9);
    *((_OWORD *)v28 + 12) = v36;
    v38 = *((_OWORD *)v28 + 10);
    *((_OWORD *)v28 + 13) = v37;
    *((_OWORD *)v28 + 14) = v38;
    if ( (a2 & 0x4000) != 0 )
    {
      v28[16] -= *((unsigned __int8 *)v28 + 80);
      v28[17] += *((unsigned __int8 *)v28 + 81);
    }
  }
  else
  {
    v32 = a2;
  }
  if ( !v21 )
  {
    v39 = a3;
    v40 = a4;
    *a3 = v28[16];
    *a4 = v28[17] - 1;
    *a8 = v28[18];
    *a9 = v28[19] - 1;
    goto LABEL_28;
  }
  v42 = v101;
  v43 = 1000000LL;
  v44 = v101;
  v45 = (unsigned int *)((char *)v29 + v21);
  *((_QWORD *)v28 + 5) = v29;
  v121 = (_QWORD *)((char *)v45 + v22);
  v46 = 4;
  v107 = 0LL;
  v120 = v45;
  v118 = v101;
  v111 = 1000000LL;
  v47 = (int *)&v45[(unsigned __int64)v101 >> 1];
  *v47 = 1000000;
  v48 = v47;
  if ( (v32 & 0x200) == 0 )
  {
    v92 = v128 - v13;
    if ( (int)(v128 - v13) <= 0 )
    {
LABEL_120:
      v49 = 0LL;
      v97 = 0LL;
      if ( v42 )
      {
        v98 = v121;
        do
        {
          v99 = *v45++;
          v97 += v99;
          *v98++ = v97;
          --v44;
        }
        while ( v44 );
      }
      goto LABEL_36;
    }
    v93 = (int *)v45;
    while ( 1 )
    {
      if ( --v47 < v93 )
      {
LABEL_119:
        v28 = v122;
        v10 = v105;
        v44 = v118;
        v45 = v120;
        v42 = v101;
        goto LABEL_120;
      }
      v94 = DivFD6(v92, v128);
      if ( v94 >= 500000 )
      {
        if ( v94 <= 500000 )
          goto LABEL_118;
        v95 = 1LL;
      }
      else
      {
        v95 = 0LL;
      }
      v94 = RaisePower(v94, 1414214LL, v95);
LABEL_118:
      v96 = v111;
      ++v48;
      v92 -= v13;
      *v48 = v94;
      *v47 = v94;
      v43 = v96 + 2LL * v94;
      v111 = v43;
      if ( v92 <= 0 )
        goto LABEL_119;
    }
  }
  *((_WORD *)v28 + 4) |= 4u;
  v49 = 0LL;
LABEL_36:
  v50 = v128;
  v51 = 0;
  v52 = v43 * (int)v13;
  v108 = 0;
  v53 = 0;
  v124 = v52;
  v54 = v128;
  v109 = 0;
  v55 = v128 + v13 * (v42 >> 1);
  if ( !v128 )
  {
    v75 = -1;
    v66 = v102;
    goto LABEL_65;
  }
  v56 = (v42 >> 1) - v128;
  while ( 2 )
  {
    v117 = 0LL;
    v119 = v54 - 1;
    v111 = 0LL;
    v57 = v55 - v13;
    ++v56;
    v58 = 0LL;
    v118 = 0LL;
    v59 = v42;
    v60 = (int *)v120;
    v61 = v55;
    if ( v13 >= v55 )
      v57 += v50;
    v106 = v57;
    v62 = 0LL;
    v63 = v101;
    if ( !v101 )
    {
LABEL_76:
      v68 = 0;
      v66 = v102;
      goto LABEL_53;
    }
    while ( 1 )
    {
      v64 = v59--;
      v65 = *v60++;
      v123 = v60;
      if ( v61 < v13 )
        break;
      v76 = v61 / v13;
      if ( v61 / v13 > v64 )
        v76 = v64;
      if ( v63 - v59 == 1 )
        v77 = 0LL;
      else
        v77 = v121[v63 - v59 - 2];
      v50 = v128;
      v49 += v13 * (v121[v76 - 2 + v63 - v59] - v77);
      v61 -= v13 * v76;
      v59 += 1 - v76;
      v60 = &v123[v76 - 1];
LABEL_74:
      v62 = v117;
      if ( !v59 )
      {
        v58 = v118;
        goto LABEL_76;
      }
LABEL_47:
      v63 = v101;
    }
    if ( v56 >= 0 && v59 < v56 )
    {
      v49 += v13 * v65;
      v61 -= v13;
      goto LABEL_74;
    }
    if ( v61 )
      v49 += v65 * v61;
    v58 = v62;
    v62 = v111;
    v111 = v49;
    v118 = v58;
    v49 = v65 * (v13 - v61);
    v61 += v50 - v13;
    v117 = v62;
    if ( v59 )
      goto LABEL_47;
    v66 = v102;
    v67 = v10 + 1;
    if ( v67 < v102 || v67 >= v104 )
    {
      v68 = 0;
    }
    else
    {
      ++v110;
      ++v67;
      v68 = 0x8000;
      if ( v67 < v102 || v67 >= v104 )
        v68 = -16384;
    }
    v10 = v67 - 1;
LABEL_53:
    v69 = a6;
    if ( v10 < v66 || v10 >= v104 || a6 < v112 || a6 >= v113 )
    {
      v75 = v103;
      v49 = 0LL;
      if ( v103 == -1 )
        goto LABEL_63;
    }
    else
    {
      v70 = v49 << 13;
      v49 = 0LL;
      HIWORD(v107) = v70 / v124;
      v71 = (v70 % v124 + (v111 << 13)) % v124;
      WORD2(v107) = (v70 % v124 + (v111 << 13)) / v124;
      if ( v62 )
      {
        ++v109;
        v73 = v71 + (v62 << 13);
        v72 = (v71 + (v62 << 13)) % v124;
        WORD1(v107) = v73 / v124;
        if ( v58 )
        {
          ++v108;
          v74 = (v72 + (v58 << 13)) / v124;
          goto LABEL_60;
        }
      }
      else
      {
        WORD1(v107) = 0;
      }
      LOWORD(v74) = 0;
LABEL_60:
      v75 = v103;
      LOWORD(v107) = v68 | v74;
      *v29++ = v107;
      if ( v103 == -1 )
      {
        v75 = v10;
        v103 = v10;
        v115 = a6;
      }
      v69 = a6;
      v116 = a6;
      v114 = v10;
LABEL_63:
      v55 = v106;
      a6 = v69 + 1;
      v54 = v119;
      if ( v119 )
      {
        v42 = v101;
        continue;
      }
    }
    break;
  }
  v28 = v122;
  v51 = v108;
  v53 = v109;
LABEL_65:
  if ( v75 == -1 )
  {
LABEL_66:
    EngFreeMem(v28);
    return 0LL;
  }
  v85 = v114 + 1;
  if ( v114 + 1 >= v104 || v85 < v66 )
    v85 = v114;
  v39 = a3;
  v40 = a4;
  *a3 = v75;
  *a4 = v85;
  *a8 = v115;
  *a9 = v116;
  v86 = (__int64 *)*((_QWORD *)v28 + 5);
  v87 = v110;
  v28[4] = v29 - v86;
  v28[5] = v87;
  if ( v53 )
    v88 = (v51 != 0) + 3;
  else
    v88 = 2;
  v28[6] = v88;
  v107 = *v86;
  if ( (v107 & 0x8000u) == 0LL )
  {
    if ( ++v75 < v66 || v75 >= v104 )
      *((_WORD *)v28 + 4) |= 2u;
  }
  else
  {
    v46 = 3;
  }
  v89 = v75 - 1;
  v90 = 0;
  for ( i = 0LL; i < (unsigned int)v46; ++i )
  {
    if ( (*((_WORD *)&v107 + i) & 0x3FFF) != 0 )
      break;
    ++v90;
  }
  if ( v46 > v90 )
  {
    v91 = (unsigned int)(v46 - v90);
    do
    {
      if ( v89 < v66 || v89 >= v104 )
      {
        *((_WORD *)v28 + 6) += 16;
      }
      else
      {
        *a3 = v89;
        ++*((_WORD *)v28 + 6);
      }
      --v89;
      --v91;
    }
    while ( v91 );
  }
  if ( *((_WORD *)v28 + 6) && v89 >= v66 && v89 < v104 )
  {
    *a3 = v89;
    *((_WORD *)v28 + 4) |= 1u;
  }
LABEL_28:
  *v28 = *v40 - *v39 + 1;
  v28[1] = *a9 - *a8 + 1;
  return v28;
}
