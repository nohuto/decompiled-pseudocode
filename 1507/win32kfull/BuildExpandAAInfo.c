/*
 * XREFs of BuildExpandAAInfo @ 0x1C0003AC0
 * Callers:
 *     <none>
 * Callees:
 *     BuildRepData @ 0x1C0003DB8 (BuildRepData.c)
 *     _ALIGN_MEM @ 0x1C00A4600 (_ALIGN_MEM.c)
 *     DivFD6 @ 0x1C00A7640 (DivFD6.c)
 *     RaisePower @ 0x1C00A7894 (RaisePower.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
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
  __int64 v29; // r8
  int *v30; // rbx
  _QWORD *v31; // rdi
  _OWORD *v32; // rsi
  int v33; // ecx
  int v34; // edx
  int v35; // eax
  __int16 v36; // cx
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  int *v43; // rsi
  int *v44; // r15
  _DWORD *v45; // r12
  _DWORD *v46; // r13
  unsigned int v48; // eax
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rax
  unsigned int v51; // r8d
  unsigned __int64 v52; // rax
  unsigned int v53; // eax
  unsigned __int64 v54; // rcx
  __int64 v55; // r11
  __int64 v56; // r10
  __int64 v57; // rax
  __int64 v58; // r9
  int v59; // r14d
  unsigned int *v60; // rdx
  int *v61; // r12
  int v62; // esi
  int *v63; // r13
  int v64; // eax
  __int64 v65; // r8
  __int64 v66; // r10
  __int64 v67; // r8
  _QWORD *v68; // rcx
  __int64 v69; // rax
  unsigned int v70; // r9d
  unsigned int v71; // ecx
  int v72; // eax
  unsigned int v73; // r12d
  int v74; // r11d
  unsigned int v75; // ecx
  int *v76; // rdx
  unsigned int v77; // r10d
  signed int v78; // ecx
  unsigned int v79; // r8d
  int v80; // eax
  __int64 v81; // rsi
  __int64 v82; // r11
  __int64 v83; // rdx
  __int64 v84; // rcx
  int *v85; // rax
  int v86; // r11d
  __int64 v87; // rsi
  __int64 v88; // rax
  int v89; // r13d
  int v90; // r10d
  __int64 v91; // rax
  int v92; // edx
  int v93; // eax
  int v94; // ecx
  int v95; // r9d
  int v96; // eax
  __int64 *v97; // rcx
  bool v98; // cf
  int v99; // eax
  int v100; // ecx
  int v101; // r8d
  __int64 i; // rdx
  __int64 v103; // rax
  unsigned int v104; // [rsp+20h] [rbp-C9h] BYREF
  unsigned int v105; // [rsp+24h] [rbp-C5h] BYREF
  int v106; // [rsp+28h] [rbp-C1h]
  unsigned int v107; // [rsp+30h] [rbp-B9h] BYREF
  unsigned int v108; // [rsp+38h] [rbp-B1h]
  int v109; // [rsp+3Ch] [rbp-ADh]
  int v110; // [rsp+40h] [rbp-A9h]
  int v111; // [rsp+44h] [rbp-A5h]
  int v112; // [rsp+48h] [rbp-A1h]
  int v113; // [rsp+4Ch] [rbp-9Dh]
  int *v114; // [rsp+50h] [rbp-99h]
  int *v115; // [rsp+58h] [rbp-91h]
  int v116; // [rsp+60h] [rbp-89h]
  int v117; // [rsp+64h] [rbp-85h]
  int v118; // [rsp+68h] [rbp-81h]
  int v119; // [rsp+6Ch] [rbp-7Dh]
  int v120; // [rsp+70h] [rbp-79h]
  __int64 v121; // [rsp+78h] [rbp-71h]
  __int64 v122; // [rsp+80h] [rbp-69h]
  int *v123; // [rsp+88h] [rbp-61h]
  __int64 v124; // [rsp+90h] [rbp-59h]
  _QWORD *v125; // [rsp+98h] [rbp-51h]
  unsigned int *v126; // [rsp+A0h] [rbp-49h]
  int *v127; // [rsp+A8h] [rbp-41h]
  _DWORD *v128; // [rsp+B0h] [rbp-39h]
  _DWORD *v129; // [rsp+B8h] [rbp-31h]
  int *v130; // [rsp+C0h] [rbp-29h]
  __int64 v131; // [rsp+C8h] [rbp-21h]
  __int64 v132; // [rsp+D0h] [rbp-19h]
  __int64 v133; // [rsp+D8h] [rbp-11h]
  unsigned int v134; // [rsp+160h] [rbp+77h]

  v10 = *a3;
  v11 = a7 - a6;
  v12 = *a4;
  v13 = *a4 - *a3;
  v14 = a10;
  v127 = a3;
  v15 = a2;
  v130 = a4;
  v106 = a2;
  v128 = a8;
  v129 = a9;
  v107 = a10;
  v117 = 0;
  v116 = 0;
  v118 = 0;
  v111 = v10;
  v134 = a7 - a6;
  if ( (int)v13 <= 0 )
    return 0LL;
  v16 = *a8;
  v17 = *a9;
  v18 = v10;
  if ( v10 < 0 )
    v18 = 0;
  v119 = *a8;
  v109 = v18;
  if ( v12 > a5 )
    v12 = a5;
  v113 = -1;
  v110 = v12;
  v120 = v17;
  v112 = 0;
  if ( v16 >= v17 || (int)v13 >= v11 )
    return 0LL;
  v131 = 0xFFFFFFFFLL;
  if ( (v15 & 0x4A80) != 0 )
  {
    v19 = v12 - v18;
    if ( v19 + 3 < v19 )
      return 0LL;
    v20 = 2LL * (v19 + 3);
    if ( v20 > 0xFFFFFFFF || (int)ALIGN_MEM(&v104, (unsigned int)v20) < 0 )
      return 0LL;
    v21 = v104;
    v11 = v134;
  }
  else
  {
    v21 = 0;
  }
  if ( (v15 & 0x4200) != 0 )
  {
    v108 = 0;
    v22 = 0;
    v104 = 0;
  }
  else
  {
    v48 = v11 + v13 - 1;
    if ( v48 < v11 )
      return 0LL;
    v49 = 2LL * (v48 / v13);
    if ( v49 > 0xFFFFFFFF )
      return 0LL;
    if ( !(_DWORD)v49 )
      return 0LL;
    v50 = 4LL * (unsigned int)(v49 - 1);
    v108 = v49 - 1;
    if ( v50 > 0xFFFFFFFF )
      return 0LL;
    v105 = 4 * (v49 - 1);
    if ( (int)ALIGN_MEM(&v105, (unsigned int)v50) < 0 )
      return 0LL;
    v52 = 8LL * v51;
    if ( v52 > 0xFFFFFFFF )
      return 0LL;
    v104 = 8 * v51;
    if ( (int)ALIGN_MEM(&v104, (unsigned int)v52) < 0 )
      return 0LL;
    v53 = v104;
    v104 = v105;
    if ( v53 + v105 < v53 )
      return 0LL;
    v54 = 8LL * (unsigned int)(v17 - v16);
    if ( v54 > 0xFFFFFFFF || (int)ALIGN_MEM(&v105, (unsigned int)v54) < 0 )
      return 0LL;
    v22 = v105;
  }
  if ( (int)ALIGN_MEM(&v107, v14) < 0 )
    return 0LL;
  v24 = v22 + v21;
  if ( v22 + v21 < v21 )
    return 0LL;
  v25 = v107;
  v26 = v107 + v24;
  if ( v107 + v24 < v24 )
    return 0LL;
  v27 = v26 + v23;
  if ( v26 + v23 < v26 || v27 + 240 < v27 )
    return 0LL;
  v28 = (char *)EngAllocMem(1u, v27 + 240, 0x34355448u);
  v123 = (int *)v28;
  v30 = (int *)v28;
  if ( !v28 )
    return v30;
  v31 = v28 + 240;
  if ( (_DWORD)v25 )
  {
    *((_QWORD *)v28 + 4) = v31;
    v31 = (_QWORD *)((char *)v31 + v25);
  }
  if ( v21 )
  {
    v32 = v28 + 48;
    v33 = v109;
    v34 = v119;
    *((_DWORD *)v28 + 13) = v134;
    v35 = v110;
    v30[17] = v110;
    v30[16] = v33;
    v30[18] = v34;
    v30[19] = v120;
    *((_QWORD *)v30 + 12) = (char *)v31 + 2 * (v35 - v33);
    *((_QWORD *)v30 + 11) = v31;
    v31 = (_QWORD *)((char *)v31 + v21);
    v30[12] = v13;
    if ( !(unsigned int)BuildRepData(v30 + 12, (unsigned int)v10, (unsigned int)a6) )
      goto LABEL_44;
    v36 = v106;
    v37 = *((_OWORD *)v30 + 4);
    *((_OWORD *)v30 + 7) = *v32;
    v38 = *((_OWORD *)v30 + 5);
    *((_OWORD *)v30 + 8) = v37;
    v39 = *((_OWORD *)v30 + 6);
    *((_OWORD *)v30 + 9) = v38;
    *((_OWORD *)v30 + 10) = v39;
    v40 = *((_OWORD *)v30 + 8);
    *((_OWORD *)v30 + 11) = *((_OWORD *)v30 + 7);
    v41 = *((_OWORD *)v30 + 9);
    *((_OWORD *)v30 + 12) = v40;
    v42 = *((_OWORD *)v30 + 10);
    *((_OWORD *)v30 + 13) = v41;
    *((_OWORD *)v30 + 14) = v42;
    if ( (v36 & 0x4000) != 0 )
    {
      v30[16] -= *((unsigned __int8 *)v30 + 80);
      v30[17] += *((unsigned __int8 *)v30 + 81);
    }
  }
  else
  {
    v36 = v106;
  }
  if ( !v22 )
  {
    v43 = v127;
    v44 = v130;
    v45 = v128;
    v46 = v129;
    *v127 = v30[16];
    *v44 = v30[17] - 1;
    *v45 = v30[18];
    *v46 = v30[19] - 1;
LABEL_29:
    *v30 = *v44 - *v43 + 1;
    v30[1] = *v46 - *v45 + 1;
    return v30;
  }
  v55 = v108;
  v56 = 1000000LL;
  v57 = v104;
  v58 = v108;
  v59 = 4;
  v60 = (unsigned int *)((char *)v31 + v22);
  *((_QWORD *)v30 + 5) = v31;
  v126 = v60;
  v125 = (_QWORD *)((char *)v60 + v57);
  v121 = v55;
  v122 = 1000000LL;
  v61 = (int *)&v60[(unsigned __int64)(unsigned int)v55 >> 1];
  v114 = v61;
  *v61 = 1000000;
  if ( (v36 & 0x200) == 0 )
  {
    v62 = v134 - v13;
    if ( (int)(v134 - v13) <= 0 )
    {
LABEL_58:
      v67 = 0LL;
      if ( (_DWORD)v55 )
      {
        v68 = v125;
        do
        {
          v69 = *v60++;
          v67 += v69;
          *v68++ = v67;
          --v58;
        }
        while ( v58 );
      }
      goto LABEL_61;
    }
    v63 = (int *)v60;
    while ( 1 )
    {
      if ( --v61 < v63 )
      {
LABEL_57:
        v30 = v123;
        v10 = v111;
        v58 = v121;
        v60 = v126;
        LODWORD(v55) = v108;
        goto LABEL_58;
      }
      v64 = DivFD6((unsigned int)v62, v134, v29, v58);
      if ( v64 < 500000 )
        break;
      if ( v64 > 500000 )
      {
        v65 = 1LL;
        goto LABEL_55;
      }
LABEL_56:
      v62 -= v13;
      v66 = v122;
      *++v114 = v64;
      *v61 = v64;
      v56 = v66 + 2LL * v64;
      v122 = v56;
      if ( v62 <= 0 )
        goto LABEL_57;
    }
    v65 = 0LL;
LABEL_55:
    v64 = RaisePower((unsigned int)v64, 1414214LL, v65);
    goto LABEL_56;
  }
  *((_WORD *)v30 + 4) |= 4u;
LABEL_61:
  v70 = v134;
  v71 = (unsigned int)v55 >> 1;
  v72 = v134;
  v122 = (int)v13 * v56;
  v106 = 0;
  v104 = 0;
  v73 = v134 + v13 * ((unsigned int)v55 >> 1);
  if ( !v134 )
    goto LABEL_44;
  v74 = v109;
  v75 = v71 - v134;
  do
  {
    v76 = (int *)v126;
    v77 = v108;
    v78 = v75 + 1;
    v111 = v72 - 1;
    v79 = v73;
    v80 = 0;
    v123 = 0LL;
    v105 = v78;
    v81 = 0LL;
    v114 = 0LL;
    v121 = 0LL;
    v124 = 0LL;
    LOWORD(v107) = 0;
    v115 = (int *)v126;
    if ( v13 < v73 )
    {
      v73 -= v13;
    }
    else
    {
      v73 += v70 - v13;
      v80 = 0;
    }
    if ( !v108 )
      goto LABEL_91;
    v82 = v78;
    v132 = v78;
    while ( 1 )
    {
      while ( 1 )
      {
        v77 += v131;
        v83 = *v76;
        LOBYTE(v80) = v79 < v13;
        ++v115;
        if ( v80 )
          break;
        v86 = v79 / v13;
        if ( v79 / v13 > v77 + 1 )
          v86 = v77 + 1;
        if ( v108 - v77 == 1 )
          v87 = 0LL;
        else
          v87 = v125[v108 - v77 - 2];
        v70 = v134;
        v81 = v13 * (v125[v86 - 2 + v108 - v77] - v87) + v124;
        v79 -= v13 * v86;
        v77 += 1 - v86;
        v88 = (unsigned int)(v86 - 1);
        v82 = v132;
        v76 = &v115[v88];
        v115 = v76;
LABEL_82:
        v80 = 0;
        v124 = v81;
        if ( !v77 )
        {
          v74 = v109;
          goto LABEL_91;
        }
        v78 = v105;
      }
      if ( v82 >= 0 && v77 < v78 )
      {
        v84 = v83;
        v76 = v115;
        v81 += v13 * v84;
        v79 -= v13;
        goto LABEL_82;
      }
      if ( v79 )
      {
        v81 += v83 * v79;
        v78 = v105;
      }
      v123 = v114;
      v85 = (int *)v121;
      v121 = v81;
      v114 = v85;
      v81 = v83 * (v13 - v79);
      v124 = v81;
      v79 += v70 - v13;
      v80 = 0;
      if ( !v77 )
        break;
      v76 = v115;
    }
    v74 = v109;
    v89 = v10 + 1;
    if ( v89 >= v109 && v89 < v110 )
    {
      ++v112;
      ++v89;
      v107 = 0x8000;
      if ( v89 < v109 || v89 >= v110 )
        LOWORD(v107) = -16384;
    }
    v10 = v89 - 1;
LABEL_91:
    v90 = v110;
    if ( v10 < v74 || v10 >= v110 || a6 < v119 || a6 >= v120 )
    {
      v92 = v113;
      if ( v113 == -1 )
        goto LABEL_104;
LABEL_106:
      v93 = v117 + 1;
      if ( v117 + 1 < v74 || v93 >= v90 )
        v93 = v117;
      v94 = v116;
      v43 = v127;
      v44 = v130;
      v45 = v128;
      v46 = v129;
      v95 = v112;
      *v127 = v92;
      *v44 = v93;
      v96 = v118;
      *v45 = v94;
      *v46 = v96;
      v97 = (__int64 *)*((_QWORD *)v30 + 5);
      v30[5] = v95;
      v30[4] = v31 - v97;
      if ( v104 )
      {
        v98 = v106 != 0;
        v106 = -v106;
        v99 = v98 + 3;
      }
      else
      {
        v99 = 2;
      }
      v30[6] = v99;
      v133 = *v97;
      if ( (v133 & 0x8000u) == 0LL )
      {
        if ( v92 + 1 < v74 || v92 + 1 >= v90 )
          *((_WORD *)v30 + 4) |= 2u;
        v100 = v92;
      }
      else
      {
        v100 = v92 - 1;
        v59 = 3;
      }
      v101 = 0;
      for ( i = 0LL; i < v59; ++i )
      {
        if ( (*((_WORD *)&v133 + i) & 0x3FFF) != 0 )
          break;
        ++v101;
      }
      if ( v59 > v101 )
      {
        v103 = (unsigned int)(v59 - v101);
        do
        {
          if ( v100 < v74 || v100 >= v90 )
          {
            *((_WORD *)v30 + 6) += 16;
          }
          else
          {
            *v43 = v100;
            ++*((_WORD *)v30 + 6);
          }
          --v100;
          --v103;
        }
        while ( v103 );
      }
      if ( *((_WORD *)v30 + 6) && v100 >= v74 && v100 < v90 )
      {
        *v43 = v100;
        *((_WORD *)v30 + 4) |= 1u;
      }
      goto LABEL_29;
    }
    HIWORD(v133) = (v81 << 13) / v122;
    WORD2(v133) = ((v81 << 13) % v122 + (v121 << 13)) / v122;
    if ( v114 )
    {
      ++v104;
      WORD1(v133) = (((v81 << 13) % v122 + (v121 << 13)) % v122 + ((_QWORD)v114 << 13)) / v122;
      if ( v123 )
      {
        ++v106;
        v91 = ((((v81 << 13) % v122 + (v121 << 13)) % v122 + ((_QWORD)v114 << 13)) % v122 + ((_QWORD)v123 << 13)) / v122;
        goto LABEL_100;
      }
    }
    else
    {
      WORD1(v133) = 0;
    }
    LOWORD(v91) = 0;
LABEL_100:
    v92 = v113;
    LOWORD(v133) = v107 | v91;
    *v31++ = v133;
    if ( v92 == -1 )
    {
      v92 = v10;
      v116 = a6;
      v113 = v10;
    }
    v117 = v10;
    v118 = a6;
LABEL_104:
    v72 = v111;
    v75 = v105;
    ++a6;
  }
  while ( v111 );
  if ( v92 != -1 )
    goto LABEL_106;
LABEL_44:
  EngFreeMem(v30);
  return 0LL;
}
