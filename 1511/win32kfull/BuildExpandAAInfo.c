/*
 * XREFs of BuildExpandAAInfo @ 0x1C00034E0
 * Callers:
 *     <none>
 * Callees:
 *     RaisePower @ 0x1C0001738 (RaisePower.c)
 *     BuildRepData @ 0x1C00037D8 (BuildRepData.c)
 *     _ALIGN_MEM @ 0x1C00BDDD0 (_ALIGN_MEM.c)
 *     DivFD6 @ 0x1C00C0F60 (DivFD6.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

int *__fastcall BuildExpandAAInfo(
        __int64 a1,
        int a2,
        int *a3,
        int *a4,
        int a5,
        signed int a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9,
        unsigned int a10)
{
  int v10; // r13d
  signed int v11; // ecx
  int v12; // eax
  unsigned int v13; // r15d
  unsigned int v14; // r10d
  __int16 v15; // r8
  int v16; // ebx
  int v17; // edi
  int v18; // edx
  unsigned int v19; // eax
  unsigned __int64 v20; // rax
  unsigned int v21; // r14d
  unsigned int v22; // r12d
  int v23; // r8d
  unsigned int v24; // eax
  __int64 v25; // rsi
  unsigned int v26; // ecx
  unsigned int v27; // eax
  char *v28; // rax
  int *v29; // rbx
  _QWORD *v30; // rdi
  _OWORD *v31; // rsi
  int v32; // ecx
  int v33; // edx
  int v34; // eax
  __int16 v35; // cx
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  int *v42; // rsi
  int *v43; // r15
  _DWORD *v44; // r12
  _DWORD *v45; // r13
  unsigned int v47; // eax
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rax
  unsigned int v50; // r8d
  unsigned __int64 v51; // rax
  unsigned int v52; // eax
  unsigned __int64 v53; // rcx
  __int64 v54; // r11
  __int64 v55; // r10
  __int64 v56; // rax
  __int64 v57; // r9
  int v58; // r14d
  unsigned int *v59; // rdx
  int *v60; // r12
  int v61; // esi
  int *v62; // r13
  int v63; // eax
  __int64 v64; // r8
  __int64 v65; // r10
  __int64 v66; // r8
  _QWORD *v67; // rcx
  __int64 v68; // rax
  unsigned int v69; // r9d
  unsigned int v70; // ecx
  int v71; // eax
  unsigned int v72; // r12d
  int v73; // r11d
  unsigned int v74; // ecx
  int *v75; // rdx
  unsigned int v76; // r10d
  signed int v77; // ecx
  unsigned int v78; // r8d
  int v79; // eax
  __int64 v80; // rsi
  __int64 v81; // r11
  __int64 v82; // rdx
  __int64 v83; // rcx
  int *v84; // rax
  int v85; // r11d
  __int64 v86; // rsi
  __int64 v87; // rax
  int v88; // r13d
  int v89; // r10d
  __int64 v90; // rax
  int v91; // edx
  int v92; // eax
  int v93; // ecx
  int v94; // r9d
  int v95; // eax
  __int64 *v96; // rcx
  bool v97; // cf
  int v98; // eax
  int v99; // ecx
  int v100; // r8d
  __int64 i; // rdx
  __int64 v102; // rax
  unsigned int v103; // [rsp+20h] [rbp-C9h] BYREF
  unsigned int v104; // [rsp+24h] [rbp-C5h] BYREF
  int v105; // [rsp+28h] [rbp-C1h]
  unsigned int v106; // [rsp+30h] [rbp-B9h] BYREF
  unsigned int v107; // [rsp+38h] [rbp-B1h]
  int v108; // [rsp+3Ch] [rbp-ADh]
  int v109; // [rsp+40h] [rbp-A9h]
  int v110; // [rsp+44h] [rbp-A5h]
  int v111; // [rsp+48h] [rbp-A1h]
  int v112; // [rsp+4Ch] [rbp-9Dh]
  int *v113; // [rsp+50h] [rbp-99h]
  int *v114; // [rsp+58h] [rbp-91h]
  int v115; // [rsp+60h] [rbp-89h]
  int v116; // [rsp+64h] [rbp-85h]
  int v117; // [rsp+68h] [rbp-81h]
  int v118; // [rsp+6Ch] [rbp-7Dh]
  int v119; // [rsp+70h] [rbp-79h]
  __int64 v120; // [rsp+78h] [rbp-71h]
  __int64 v121; // [rsp+80h] [rbp-69h]
  int *v122; // [rsp+88h] [rbp-61h]
  __int64 v123; // [rsp+90h] [rbp-59h]
  _QWORD *v124; // [rsp+98h] [rbp-51h]
  unsigned int *v125; // [rsp+A0h] [rbp-49h]
  int *v126; // [rsp+A8h] [rbp-41h]
  _DWORD *v127; // [rsp+B0h] [rbp-39h]
  _DWORD *v128; // [rsp+B8h] [rbp-31h]
  int *v129; // [rsp+C0h] [rbp-29h]
  __int64 v130; // [rsp+C8h] [rbp-21h]
  __int64 v131; // [rsp+D0h] [rbp-19h]
  __int64 v132; // [rsp+D8h] [rbp-11h]
  unsigned int v133; // [rsp+160h] [rbp+77h]

  v10 = *a3;
  v11 = a7 - a6;
  v12 = *a4;
  v13 = *a4 - *a3;
  v14 = a10;
  v126 = a3;
  v15 = a2;
  v129 = a4;
  v105 = a2;
  v127 = a8;
  v128 = a9;
  v106 = a10;
  v116 = 0;
  v115 = 0;
  v117 = 0;
  v110 = v10;
  v133 = a7 - a6;
  if ( (int)v13 <= 0 )
    return 0LL;
  v16 = *a8;
  v17 = *a9;
  v18 = v10;
  if ( v10 < 0 )
    v18 = 0;
  v118 = *a8;
  v108 = v18;
  if ( v12 > a5 )
    v12 = a5;
  v112 = -1;
  v109 = v12;
  v119 = v17;
  v111 = 0;
  if ( v16 >= v17 || (int)v13 >= v11 )
    return 0LL;
  v130 = 0xFFFFFFFFLL;
  if ( (v15 & 0x4A80) != 0 )
  {
    v19 = v12 - v18;
    if ( v19 + 3 < v19 )
      return 0LL;
    v20 = 2LL * (v19 + 3);
    if ( v20 > 0xFFFFFFFF || (int)ALIGN_MEM(&v103, (unsigned int)v20) < 0 )
      return 0LL;
    v21 = v103;
    v11 = v133;
  }
  else
  {
    v21 = 0;
  }
  if ( (v15 & 0x4200) != 0 )
  {
    v107 = 0;
    v22 = 0;
    v103 = 0;
  }
  else
  {
    v47 = v11 + v13 - 1;
    if ( v47 < v11 )
      return 0LL;
    v48 = 2LL * (v47 / v13);
    if ( v48 > 0xFFFFFFFF )
      return 0LL;
    if ( !(_DWORD)v48 )
      return 0LL;
    v49 = 4LL * (unsigned int)(v48 - 1);
    v107 = v48 - 1;
    if ( v49 > 0xFFFFFFFF )
      return 0LL;
    v104 = 4 * (v48 - 1);
    if ( (int)ALIGN_MEM(&v104, (unsigned int)v49) < 0 )
      return 0LL;
    v51 = 8LL * v50;
    if ( v51 > 0xFFFFFFFF )
      return 0LL;
    v103 = 8 * v50;
    if ( (int)ALIGN_MEM(&v103, (unsigned int)v51) < 0 )
      return 0LL;
    v52 = v103;
    v103 = v104;
    if ( v52 + v104 < v52 )
      return 0LL;
    v53 = 8LL * (unsigned int)(v17 - v16);
    if ( v53 > 0xFFFFFFFF || (int)ALIGN_MEM(&v104, (unsigned int)v53) < 0 )
      return 0LL;
    v22 = v104;
  }
  if ( (int)ALIGN_MEM(&v106, v14) < 0 )
    return 0LL;
  v24 = v22 + v21;
  if ( v22 + v21 < v21 )
    return 0LL;
  v25 = v106;
  v26 = v106 + v24;
  if ( v106 + v24 < v24 )
    return 0LL;
  v27 = v26 + v23;
  if ( v26 + v23 < v26 || v27 + 240 < v27 )
    return 0LL;
  v28 = (char *)EngAllocMem(1u, v27 + 240, 0x34355448u);
  v122 = (int *)v28;
  v29 = (int *)v28;
  if ( !v28 )
    return v29;
  v30 = v28 + 240;
  if ( (_DWORD)v25 )
  {
    *((_QWORD *)v28 + 4) = v30;
    v30 = (_QWORD *)((char *)v30 + v25);
  }
  if ( v21 )
  {
    v31 = v28 + 48;
    v32 = v108;
    v33 = v118;
    *((_DWORD *)v28 + 13) = v133;
    v34 = v109;
    v29[17] = v109;
    v29[16] = v32;
    v29[18] = v33;
    v29[19] = v119;
    *((_QWORD *)v29 + 12) = (char *)v30 + 2 * (v34 - v32);
    *((_QWORD *)v29 + 11) = v30;
    v30 = (_QWORD *)((char *)v30 + v21);
    v29[12] = v13;
    if ( !(unsigned int)BuildRepData(v29 + 12, (unsigned int)v10, (unsigned int)a6) )
      goto LABEL_44;
    v35 = v105;
    v36 = *((_OWORD *)v29 + 4);
    *((_OWORD *)v29 + 7) = *v31;
    v37 = *((_OWORD *)v29 + 5);
    *((_OWORD *)v29 + 8) = v36;
    v38 = *((_OWORD *)v29 + 6);
    *((_OWORD *)v29 + 9) = v37;
    *((_OWORD *)v29 + 10) = v38;
    v39 = *((_OWORD *)v29 + 8);
    *((_OWORD *)v29 + 11) = *((_OWORD *)v29 + 7);
    v40 = *((_OWORD *)v29 + 9);
    *((_OWORD *)v29 + 12) = v39;
    v41 = *((_OWORD *)v29 + 10);
    *((_OWORD *)v29 + 13) = v40;
    *((_OWORD *)v29 + 14) = v41;
    if ( (v35 & 0x4000) != 0 )
    {
      v29[16] -= *((unsigned __int8 *)v29 + 80);
      v29[17] += *((unsigned __int8 *)v29 + 81);
    }
  }
  else
  {
    v35 = v105;
  }
  if ( !v22 )
  {
    v42 = v126;
    v43 = v129;
    v44 = v127;
    v45 = v128;
    *v126 = v29[16];
    *v43 = v29[17] - 1;
    *v44 = v29[18];
    *v45 = v29[19] - 1;
LABEL_29:
    *v29 = *v43 - *v42 + 1;
    v29[1] = *v45 - *v44 + 1;
    return v29;
  }
  v54 = v107;
  v55 = 1000000LL;
  v56 = v103;
  v57 = v107;
  v58 = 4;
  v59 = (unsigned int *)((char *)v30 + v22);
  *((_QWORD *)v29 + 5) = v30;
  v125 = v59;
  v124 = (_QWORD *)((char *)v59 + v56);
  v120 = v54;
  v121 = 1000000LL;
  v60 = (int *)&v59[(unsigned __int64)(unsigned int)v54 >> 1];
  v113 = v60;
  *v60 = 1000000;
  if ( (v35 & 0x200) == 0 )
  {
    v61 = v133 - v13;
    if ( (int)(v133 - v13) <= 0 )
    {
LABEL_58:
      v66 = 0LL;
      if ( (_DWORD)v54 )
      {
        v67 = v124;
        do
        {
          v68 = *v59++;
          v66 += v68;
          *v67++ = v66;
          --v57;
        }
        while ( v57 );
      }
      goto LABEL_61;
    }
    v62 = (int *)v59;
    while ( 1 )
    {
      if ( --v60 < v62 )
      {
LABEL_57:
        v29 = v122;
        v10 = v110;
        v57 = v120;
        v59 = v125;
        LODWORD(v54) = v107;
        goto LABEL_58;
      }
      v63 = DivFD6((unsigned int)v61, v133);
      if ( v63 < 500000 )
        break;
      if ( v63 > 500000 )
      {
        v64 = 1LL;
        goto LABEL_55;
      }
LABEL_56:
      v61 -= v13;
      v65 = v121;
      *++v113 = v63;
      *v60 = v63;
      v55 = v65 + 2LL * v63;
      v121 = v55;
      if ( v61 <= 0 )
        goto LABEL_57;
    }
    v64 = 0LL;
LABEL_55:
    v63 = RaisePower(v63, 1414214LL, v64);
    goto LABEL_56;
  }
  *((_WORD *)v29 + 4) |= 4u;
LABEL_61:
  v69 = v133;
  v70 = (unsigned int)v54 >> 1;
  v71 = v133;
  v121 = (int)v13 * v55;
  v105 = 0;
  v103 = 0;
  v72 = v133 + v13 * ((unsigned int)v54 >> 1);
  if ( !v133 )
    goto LABEL_44;
  v73 = v108;
  v74 = v70 - v133;
  do
  {
    v75 = (int *)v125;
    v76 = v107;
    v77 = v74 + 1;
    v110 = v71 - 1;
    v78 = v72;
    v79 = 0;
    v122 = 0LL;
    v104 = v77;
    v80 = 0LL;
    v113 = 0LL;
    v120 = 0LL;
    v123 = 0LL;
    LOWORD(v106) = 0;
    v114 = (int *)v125;
    if ( v13 < v72 )
    {
      v72 -= v13;
    }
    else
    {
      v72 += v69 - v13;
      v79 = 0;
    }
    if ( !v107 )
      goto LABEL_91;
    v81 = v77;
    v131 = v77;
    while ( 1 )
    {
      while ( 1 )
      {
        v76 += v130;
        v82 = *v75;
        LOBYTE(v79) = v78 < v13;
        ++v114;
        if ( v79 )
          break;
        v85 = v78 / v13;
        if ( v78 / v13 > v76 + 1 )
          v85 = v76 + 1;
        if ( v107 - v76 == 1 )
          v86 = 0LL;
        else
          v86 = v124[v107 - v76 - 2];
        v69 = v133;
        v80 = v13 * (v124[v85 - 2 + v107 - v76] - v86) + v123;
        v78 -= v13 * v85;
        v76 += 1 - v85;
        v87 = (unsigned int)(v85 - 1);
        v81 = v131;
        v75 = &v114[v87];
        v114 = v75;
LABEL_82:
        v79 = 0;
        v123 = v80;
        if ( !v76 )
        {
          v73 = v108;
          goto LABEL_91;
        }
        v77 = v104;
      }
      if ( v81 >= 0 && v76 < v77 )
      {
        v83 = v82;
        v75 = v114;
        v80 += v13 * v83;
        v78 -= v13;
        goto LABEL_82;
      }
      if ( v78 )
      {
        v80 += v82 * v78;
        v77 = v104;
      }
      v122 = v113;
      v84 = (int *)v120;
      v120 = v80;
      v113 = v84;
      v80 = v82 * (v13 - v78);
      v123 = v80;
      v78 += v69 - v13;
      v79 = 0;
      if ( !v76 )
        break;
      v75 = v114;
    }
    v73 = v108;
    v88 = v10 + 1;
    if ( v88 >= v108 && v88 < v109 )
    {
      ++v111;
      ++v88;
      v106 = 0x8000;
      if ( v88 < v108 || v88 >= v109 )
        LOWORD(v106) = -16384;
    }
    v10 = v88 - 1;
LABEL_91:
    v89 = v109;
    if ( v10 < v73 || v10 >= v109 || a6 < v118 || a6 >= v119 )
    {
      v91 = v112;
      if ( v112 == -1 )
        goto LABEL_104;
LABEL_106:
      v92 = v116 + 1;
      if ( v116 + 1 < v73 || v92 >= v89 )
        v92 = v116;
      v93 = v115;
      v42 = v126;
      v43 = v129;
      v44 = v127;
      v45 = v128;
      v94 = v111;
      *v126 = v91;
      *v43 = v92;
      v95 = v117;
      *v44 = v93;
      *v45 = v95;
      v96 = (__int64 *)*((_QWORD *)v29 + 5);
      v29[5] = v94;
      v29[4] = v30 - v96;
      if ( v103 )
      {
        v97 = v105 != 0;
        v105 = -v105;
        v98 = v97 + 3;
      }
      else
      {
        v98 = 2;
      }
      v29[6] = v98;
      v132 = *v96;
      if ( (v132 & 0x8000u) == 0LL )
      {
        if ( v91 + 1 < v73 || v91 + 1 >= v89 )
          *((_WORD *)v29 + 4) |= 2u;
        v99 = v91;
      }
      else
      {
        v99 = v91 - 1;
        v58 = 3;
      }
      v100 = 0;
      for ( i = 0LL; i < v58; ++i )
      {
        if ( (*((_WORD *)&v132 + i) & 0x3FFF) != 0 )
          break;
        ++v100;
      }
      if ( v58 > v100 )
      {
        v102 = (unsigned int)(v58 - v100);
        do
        {
          if ( v99 < v73 || v99 >= v89 )
          {
            *((_WORD *)v29 + 6) += 16;
          }
          else
          {
            *v42 = v99;
            ++*((_WORD *)v29 + 6);
          }
          --v99;
          --v102;
        }
        while ( v102 );
      }
      if ( *((_WORD *)v29 + 6) && v99 >= v73 && v99 < v89 )
      {
        *v42 = v99;
        *((_WORD *)v29 + 4) |= 1u;
      }
      goto LABEL_29;
    }
    HIWORD(v132) = (v80 << 13) / v121;
    WORD2(v132) = ((v80 << 13) % v121 + (v120 << 13)) / v121;
    if ( v113 )
    {
      ++v103;
      WORD1(v132) = (((v80 << 13) % v121 + (v120 << 13)) % v121 + ((_QWORD)v113 << 13)) / v121;
      if ( v122 )
      {
        ++v105;
        v90 = ((((v80 << 13) % v121 + (v120 << 13)) % v121 + ((_QWORD)v113 << 13)) % v121 + ((_QWORD)v122 << 13)) / v121;
        goto LABEL_100;
      }
    }
    else
    {
      WORD1(v132) = 0;
    }
    LOWORD(v90) = 0;
LABEL_100:
    v91 = v112;
    LOWORD(v132) = v106 | v90;
    *v30++ = v132;
    if ( v91 == -1 )
    {
      v91 = v10;
      v115 = a6;
      v112 = v10;
    }
    v116 = v10;
    v117 = a6;
LABEL_104:
    v71 = v110;
    v74 = v104;
    ++a6;
  }
  while ( v110 );
  if ( v91 != -1 )
    goto LABEL_106;
LABEL_44:
  EngFreeMem(v29);
  return 0LL;
}
