/*
 * XREFs of SetupAAHeader @ 0x140142A9C
 * Callers:
 *     AAHalftoneBitmap @ 0x140141E5C (AAHalftoneBitmap.c)
 * Callees:
 *     ComputeByteOffset @ 0x140143948 (ComputeByteOffset.c)
 *     ComputeAABBP @ 0x1401439E0 (ComputeAABBP.c)
 *     ComputeInputColorInfo @ 0x140143FD8 (ComputeInputColorInfo.c)
 *     CheckBMPNeedFixup @ 0x140144330 (CheckBMPNeedFixup.c)
 *     _ALIGN_MEM @ 0x1401E8C9C (_ALIGN_MEM.c)
 *     ComputeBytesPerScanLine @ 0x140215F98 (ComputeBytesPerScanLine.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall SetupAAHeader(_QWORD *a1, __int64 a2, __int64 a3, __int64 (__fastcall **a4)())
{
  __int64 v6; // rdx
  _BYTE *v7; // r10
  __int64 v8; // rax
  int v9; // edi
  int v10; // r12d
  unsigned int v11; // r15d
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // esi
  __int64 v15; // rdx
  char v16; // al
  __int64 v17; // r13
  unsigned int *v18; // r14
  unsigned int v19; // r12d
  __int64 v20; // rcx
  __int64 v21; // r11
  __int64 v22; // r13
  unsigned int v23; // r9d
  __int64 result; // rax
  PVOID v25; // rcx
  unsigned __int64 v26; // rdx
  char v27; // r8
  unsigned int v28; // r10d
  __int64 (__fastcall *v29)(int, int, int, int, int); // rax
  __int64 (__fastcall *v30)(int, int, int, int, int); // rcx
  unsigned int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rsi
  unsigned __int64 v34; // rax
  int v35; // r10d
  __int64 v36; // rax
  unsigned int v37; // r8d
  unsigned __int64 v38; // rax
  int v39; // edi
  unsigned __int64 v40; // rax
  int v41; // r11d
  signed int v42; // edx
  int v43; // r12d
  unsigned int v44; // r13d
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned int v47; // esi
  unsigned int v48; // r14d
  unsigned __int64 v49; // rcx
  unsigned int v50; // eax
  unsigned int v51; // ecx
  unsigned int v52; // eax
  unsigned int v53; // edx
  unsigned int v54; // ecx
  unsigned int v55; // eax
  unsigned int v56; // r8d
  __int64 v57; // rax
  int *v58; // rdi
  unsigned int v59; // ecx
  __int64 v60; // rdx
  __int64 v61; // r8
  int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // r8
  _QWORD *v65; // rax
  __int64 v66; // r9
  __int64 v67; // rax
  __int64 v68; // rdx
  char *v69; // rcx
  size_t v70; // r8
  unsigned int v71; // r13d
  int v72; // eax
  unsigned int v73; // r14d
  int v74; // esi
  int v75; // r11d
  _DWORD *v76; // r9
  int v77; // eax
  __int64 v78; // r15
  __int64 v79; // rdx
  int v80; // r10d
  int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // r15
  int v84; // r10d
  __int64 v85; // rcx
  __int64 v86; // rdx
  int v87; // eax
  int v88; // r11d
  __int64 v89; // rcx
  int v90; // eax
  int v91; // r10d
  int v92; // r11d
  __int64 v93; // rdx
  int v94; // eax
  __int64 (__fastcall **v95)(); // rcx
  int v96; // eax
  __int64 v97; // rax
  __int64 v98; // rax
  unsigned __int64 v99; // rcx
  unsigned int v100; // edx
  bool v101; // cf
  __int64 (__fastcall *v102)(); // r8
  bool v103; // sf
  unsigned int v104; // r12d
  int v105; // r8d
  int v106; // r15d
  int v107; // r15d
  __int64 v108; // rdx
  unsigned int v109; // eax
  __int64 v110; // rcx
  unsigned __int64 v111; // rcx
  unsigned __int64 v112; // rcx
  __int64 v113; // rax
  __int64 (__fastcall *v114)(); // r8
  __int64 v115; // rax
  unsigned __int64 v116; // rcx
  unsigned __int64 v117; // rcx
  __int64 v118; // rax
  __int64 (__fastcall *v119)(); // r8
  __int64 v120; // rax
  unsigned __int64 v121; // rax
  unsigned __int64 v122; // rdx
  unsigned __int64 v123; // rax
  unsigned __int64 v124; // rcx
  unsigned int v125; // edx
  unsigned int v126; // eax
  __int64 v127; // r8
  int v128; // eax
  int v129; // r15d
  int v130; // r10d
  _DWORD *v131; // r8
  __int64 v132; // rcx
  _BYTE *v133; // rax
  int v134; // [rsp+60h] [rbp-A0h]
  __int64 (__fastcall *v135)(); // [rsp+68h] [rbp-98h]
  signed int v136; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v137; // [rsp+74h] [rbp-8Ch]
  int v138; // [rsp+78h] [rbp-88h]
  int v139; // [rsp+7Ch] [rbp-84h]
  unsigned int v140; // [rsp+80h] [rbp-80h]
  unsigned int v141; // [rsp+84h] [rbp-7Ch]
  __int64 v142; // [rsp+88h] [rbp-78h]
  PVOID pv; // [rsp+90h] [rbp-70h]
  _DWORD *v144; // [rsp+98h] [rbp-68h]
  _QWORD *v145; // [rsp+A0h] [rbp-60h]
  __int64 v146; // [rsp+A8h] [rbp-58h]
  _BYTE *v147; // [rsp+B0h] [rbp-50h]
  __int64 v148; // [rsp+B8h] [rbp-48h]
  __int64 (__fastcall **v149)(); // [rsp+C0h] [rbp-40h]
  unsigned int v150; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int8 v151; // [rsp+D4h] [rbp-2Ch]
  char v152; // [rsp+D5h] [rbp-2Bh]
  __int64 (__fastcall *v153)(int, int, int, int, int); // [rsp+D8h] [rbp-28h]
  __int64 (__fastcall *v154)(__int64, __int64, unsigned int *, _BYTE *, _DWORD, int, int, int *, int *, unsigned int); // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v155)(__int64, _QWORD, int *, char *, _DWORD, int, int, int *, int *, unsigned int); // [rsp+E8h] [rbp-18h]
  __int64 v156; // [rsp+F0h] [rbp-10h]
  __int64 v157; // [rsp+F8h] [rbp-8h]
  __int64 v158; // [rsp+100h] [rbp+0h]
  __int64 v159; // [rsp+108h] [rbp+8h]
  unsigned int v160; // [rsp+110h] [rbp+10h] BYREF
  int v161; // [rsp+114h] [rbp+14h] BYREF
  _BYTE v162[4]; // [rsp+118h] [rbp+18h] BYREF
  char v163[4]; // [rsp+11Ch] [rbp+1Ch] BYREF
  int v164; // [rsp+120h] [rbp+20h] BYREF
  int v165; // [rsp+124h] [rbp+24h] BYREF
  int v166; // [rsp+128h] [rbp+28h] BYREF
  int v167; // [rsp+12Ch] [rbp+2Ch] BYREF
  int v168; // [rsp+130h] [rbp+30h]
  int v169; // [rsp+134h] [rbp+34h]
  int v170; // [rsp+138h] [rbp+38h]
  int v171; // [rsp+13Ch] [rbp+3Ch]
  int v172; // [rsp+140h] [rbp+40h]
  int v173; // [rsp+144h] [rbp+44h]
  int v174; // [rsp+150h] [rbp+50h]
  int v175; // [rsp+154h] [rbp+54h]
  unsigned int v176; // [rsp+158h] [rbp+58h]
  int v177; // [rsp+15Ch] [rbp+5Ch]

  v146 = a2;
  v145 = a1;
  v149 = a4;
  memset_0(&v150, 0, 0x90uLL);
  v6 = a1[5];
  v7 = (_BYTE *)a1[2];
  v142 = a1[3];
  v144 = (_DWORD *)a1[4];
  v141 = *(unsigned __int8 *)(v6 + 10);
  v8 = a1[1];
  v147 = v7;
  v148 = v6;
  v9 = *(_DWORD *)(v8 + 56);
  v10 = 2 * ((*(_BYTE *)(v8 + 24) & 1) == 0) + 1;
  v134 = v10;
  v150 = (v9 & 0x80000) != 0 ? 0x200 : 0;
  if ( (*v7 & 0x40) != 0 )
    v150 = 1536;
  v11 = 0;
  if ( (int)ComputeAABBP(v7, v6, &v150, v10 == 1) <= 0 )
    return 0LL;
  v12 = v150;
  v13 = 3100;
  if ( (v9 & 0x100000) != 0 )
  {
    v12 = v150 | 0x800;
    v150 |= 0x800u;
    if ( (v9 & 0x200000) != 0 )
    {
      v12 |= 0x1000u;
      v13 = 5148;
      v150 = v12;
    }
    else
    {
      if ( (v9 & 0x800000) != 0 )
        *(_BYTE *)(a3 + 8) |= 8u;
      if ( (v9 & 0x1000000) != 0 )
      {
        v12 |= 0x100000u;
        v150 = v12;
      }
      v13 = 3868;
    }
  }
  if ( (v9 & 0x40000000) != 0 )
    v150 = v12 & 0xFFFFFFE7;
  if ( v13 + 8 < v13 )
    return 4294967294LL;
  v14 = (v13 + 8) & 0xFFFFFFF8;
  ComputeInputColorInfo(
    *(_QWORD *)(*(_QWORD *)(v142 + 32) + 16LL),
    *(unsigned __int8 *)(*(_QWORD *)(v142 + 32) + 2LL),
    *(unsigned __int8 *)(*(_QWORD *)(v142 + 32) + 3LL),
    (_DWORD)a1 + 64,
    a3 + 8);
  v15 = v150;
  v16 = 6;
  if ( v10 != 1 )
    v16 = 2;
  *(_BYTE *)(a3 + 8) |= v16;
  if ( (v9 & 0x4000) != 0 )
  {
    v15 = (unsigned int)v15 | 4;
    v150 = v15;
  }
  if ( (*v147 & 0x40) != 0 )
  {
    v15 = (unsigned int)v15 & 0xFFFFFFBF;
    v150 = v15;
  }
  if ( (v15 & 0x200) != 0 )
  {
    v15 = (unsigned int)v15 & 0xFFFFFFBF;
    v150 = v15;
  }
  if ( (v15 & 0x40) != 0 )
  {
    CheckBMPNeedFixup(4294967231LL, a3, v142, &v150);
    v15 = v150;
    if ( (v150 & 0x80000) != 0 )
    {
      if ( (v9 & 0x80000) != 0 )
        v15 = v150 | 0x200;
      else
        LODWORD(v15) = v150 & 0xFFFFFDFF;
      v150 = v15;
    }
  }
  if ( (v15 & 0x200) != 0 )
  {
    LODWORD(v15) = v15 & 0xFFFFBFFF;
    v150 = v15;
  }
  if ( v144 )
  {
    LODWORD(v15) = v15 | 0x80;
    v150 = v15;
  }
  v17 = v146;
  pv = (PVOID)v154(v146, v15, &v160, v162, *(_DWORD *)(v142 + 12), v168, v170, &v164, &v166, v14);
  v18 = (unsigned int *)pv;
  if ( !pv )
  {
    v14 = 0;
    pv = (PVOID)v154(v146, v150, &v160, v162, *(_DWORD *)(v142 + 12), v168, v170, &v164, &v166, 0);
    v18 = (unsigned int *)pv;
    if ( !pv )
      return 4294967294LL;
  }
  if ( !*v18 || !v18[1] )
    goto LABEL_30;
  v19 = v150;
  *(_QWORD *)(a3 + 304) = v18;
  if ( v14 )
  {
    v20 = *((_QWORD *)v18 + 4);
    *(_QWORD *)(a3 + 376) = v20;
    if ( (v19 & 0x800) == 0 )
      goto LABEL_27;
    v98 = v20 + 3100;
    goto LABEL_119;
  }
  v19 |= 0x80000000;
  v20 = v17 + 856;
  v150 = v19;
  *(_QWORD *)(a3 + 376) = v17 + 856;
  if ( (v19 & 0x800) != 0 )
  {
    v97 = *(_QWORD *)(v17 + 7064);
    *(_QWORD *)(a3 + 336) = v97;
    if ( (v9 & 0x200000) != 0 )
    {
      v98 = v97 + 768;
LABEL_119:
      *(_QWORD *)(a3 + 336) = v98;
    }
  }
LABEL_27:
  *(_QWORD *)(a3 + 384) = v20 + 28;
  if ( (v19 & 1) != 0 )
  {
    v164 = v172 - v164 - 1;
    v166 = v172 - v166 - 1;
  }
  v21 = *v18;
  v22 = v18[1];
  v137 = v21;
  v138 = v22;
  v23 = v21 + 6;
  if ( (int)v21 + 6 < (unsigned int)v21 )
    goto LABEL_30;
  v135 = 0LL;
  LODWORD(v26) = 0;
  if ( (v19 & 0x200) != 0 )
  {
    v27 = v151;
    if ( v151 == 1 )
    {
      v135 = (__int64 (__fastcall *)())BltDIB_CY;
      goto LABEL_38;
    }
    if ( v151 == 2 || v151 == 3 )
    {
      v102 = (__int64 (__fastcall *)())SkipDIB_CY;
LABEL_140:
      v135 = v102;
LABEL_38:
      v28 = v134;
      if ( v152 )
      {
        if ( v152 == 1 )
        {
          v29 = SkipDIB_CX;
          v30 = GraySkipDIB_CX;
        }
        else
        {
          if ( v152 != 2 )
          {
LABEL_43:
            v27 = -1;
            v151 = -1;
            goto LABEL_44;
          }
          v29 = RepDIB_CX;
          v30 = GrayRepDIB_CX;
        }
      }
      else
      {
        v29 = CopyDIB_CX;
        v30 = GrayCopyDIB_CXGray;
      }
      if ( v134 == 1 )
        v29 = v30;
      v153 = v29;
      goto LABEL_43;
    }
    if ( (unsigned int)v151 - 4 <= 1 )
    {
      if ( (v19 & 0x800) != 0 )
      {
        v118 = (unsigned int)(v22 + 6);
        if ( (unsigned int)v118 < (unsigned int)v22 )
          goto LABEL_30;
        LODWORD(v26) = 3 * v118;
        if ( (unsigned __int64)(3 * v118) > 0xFFFFFFFF )
          goto LABEL_30;
      }
      v102 = (__int64 (__fastcall *)())RepDIB_CY;
      goto LABEL_140;
    }
  }
  else
  {
    v27 = v151;
  }
  v28 = v134;
LABEL_44:
  switch ( v27 )
  {
    case 0:
      v135 = TileDIB_CY;
      if ( v28 != 1 )
      {
        LODWORD(v26) = 0;
        break;
      }
      LODWORD(v26) = 2 * v21;
      if ( (unsigned __int64)(2 * v21) <= 0xFFFFFFFF )
        break;
      goto LABEL_30;
    case 1:
      v135 = (__int64 (__fastcall *)())BltDIB_CY;
      break;
    case 2:
      if ( v28 == 1 )
      {
        LODWORD(v99) = 12 * v22;
        v135 = (__int64 (__fastcall *)())GrayShrinkDIB_CY;
        if ( (unsigned __int64)(12 * v22) > 0xFFFFFFFF
          || (int)v22 + 6 < (unsigned int)v22
          || (unsigned int)(v22 + 2054) < 0x800 )
        {
          goto LABEL_30;
        }
        LODWORD(v26) = v99 + v22 + 2054;
      }
      else
      {
        v99 = v23 * (unsigned __int64)v28;
        v135 = (__int64 (__fastcall *)())ShrinkDIB_CY;
        if ( v99 > 0xFFFFFFFF )
          goto LABEL_30;
        if ( (unsigned __int64)(36 * v21) > 0xFFFFFFFF )
          goto LABEL_30;
        v100 = 36 * v21 + 2048;
        if ( v100 < 0x800 )
          goto LABEL_30;
        LODWORD(v26) = v99 + v100;
      }
      v101 = (unsigned int)v26 < (unsigned int)v99;
      goto LABEL_133;
    case 3:
      v109 = v18[5];
      v135 = (__int64 (__fastcall *)())ShrinkDIB_CY_SrkCX;
      v110 = v109 + 2;
      if ( (unsigned int)v110 < v109 )
        goto LABEL_30;
      v111 = 36 * v110;
      if ( v111 > 0xFFFFFFFF )
        goto LABEL_30;
      LODWORD(v26) = v111 + 2048;
      v101 = (unsigned int)v111 >= 0xFFFFF800;
      goto LABEL_133;
    case 4:
      v114 = GrayExpandDIB_CY;
      if ( v28 != 1 )
        v114 = ExpandDIB_CY;
      v115 = (unsigned int)(v22 + 6);
      v135 = v114;
      if ( (unsigned int)v115 < (unsigned int)v22 )
        goto LABEL_30;
      v116 = v115 * v28;
      if ( v116 > 0xFFFFFFFF )
        goto LABEL_30;
      v117 = 6LL * (unsigned int)v116;
      if ( v117 > 0xFFFFFFFF )
        goto LABEL_30;
      LODWORD(v26) = v117 + 4096;
LABEL_167:
      v101 = (unsigned int)v26 < 0x1000;
LABEL_133:
      if ( !v101 )
        break;
LABEL_30:
      EngFreeMem(v18);
      return 0LL;
    case 5:
      if ( (v19 & 0x4000) != 0 )
      {
        v112 = v23 * (unsigned __int64)v28;
        if ( v112 <= 0xFFFFFFFF )
        {
          v26 = 5LL * (unsigned int)v112;
          if ( v26 <= 0xFFFFFFFF )
          {
            v135 = (__int64 (__fastcall *)())FastExpAA_CY;
            break;
          }
        }
        goto LABEL_30;
      }
      v119 = GrayExpandDIB_CY_ExpCX;
      if ( v28 != 1 )
        v119 = ExpandDIB_CY_ExpCX;
      v120 = (unsigned int)(v22 + 6);
      v135 = v119;
      if ( (unsigned int)v120 < (unsigned int)v22 )
        goto LABEL_30;
      v121 = v28 * v120;
      if ( v121 > 0xFFFFFFFF )
        goto LABEL_30;
      v122 = 4LL * (unsigned int)v121;
      if ( v122 > 0xFFFFFFFF )
        goto LABEL_30;
      v123 = v28 * (unsigned __int64)v23;
      if ( v123 > 0xFFFFFFFF )
        goto LABEL_30;
      v124 = 3LL * (unsigned int)v123;
      if ( v124 > 0xFFFFFFFF )
        goto LABEL_30;
      v125 = v124 + v122;
      if ( v125 < (unsigned int)v124 )
        goto LABEL_30;
      LODWORD(v26) = v125 + 4096;
      goto LABEL_167;
  }
  v31 = (v19 & 0x800) != 0 ? v22 : 0;
  *(_BYTE *)(a3 + 96) = v28 != 1 ? 0 : 4;
  *(_DWORD *)(a3 + 152) = v31 * v28;
  v32 = v31 + 8;
  if ( (unsigned int)v32 < v31 )
    goto LABEL_32;
  v33 = v28;
  v34 = v28 * v32;
  if ( v34 > 0xFFFFFFFF )
    goto LABEL_32;
  if ( (int)v34 + 8 < (unsigned int)v34 )
    goto LABEL_32;
  v35 = (v34 + 8) & 0xFFFFFFF8;
  if ( (int)v26 + 8 < (unsigned int)v26 )
    goto LABEL_32;
  v36 = (unsigned int)(v21 + 8);
  v37 = (v26 + 8) & 0xFFFFFFF8;
  v140 = v37;
  if ( (unsigned int)v36 < v23 )
    goto LABEL_32;
  v38 = v33 * v36;
  if ( v38 > 0xFFFFFFFF )
    goto LABEL_32;
  if ( (int)v38 + 8 < (unsigned int)v38 )
    goto LABEL_32;
  v39 = (v38 + 8) & 0xFFFFFFF8;
  if ( (unsigned int)v22 >= 0xFFFFFFF6 )
    goto LABEL_32;
  v40 = 4LL * (unsigned int)(v22 + 10);
  if ( v40 > 0xFFFFFFFF || (int)v40 + 8 < (unsigned int)v40 )
    goto LABEL_32;
  v41 = (v40 + 8) & 0xFFFFFFF8;
  if ( (v19 & 0x80u) != 0 )
  {
    v126 = ComputeBytesPerScanLine(1LL, 4LL, v137);
    if ( v126 + 4 < v126 )
      goto LABEL_32;
    v136 = v126 + 4;
    if ( (int)ALIGN_MEM(&v136) < 0 )
      goto LABEL_32;
    v42 = v136;
    v37 = v140;
  }
  else
  {
    v42 = 0;
  }
  v136 = v42;
  if ( v39 < v35 )
    v39 = v35;
  v139 = v39;
  if ( (v19 & 0x1800) == 0x800 )
  {
    if ( (int)v22 + 8 < (unsigned int)v22 )
      goto LABEL_32;
    v43 = (v22 + 8) & 0xFFFFFFF8;
  }
  else
  {
    v43 = 0;
  }
  if ( v141 != 254 || (v44 = 368, !v145[7]) )
    v44 = 0;
  if ( (v150 & 0x40) == 0 )
  {
    v47 = 0;
    goto LABEL_73;
  }
  v45 = v137 + 4;
  if ( (unsigned int)v45 < v137 || (v46 = v33 * v45, v46 > 0xFFFFFFFF) || (int)v46 + 8 < (unsigned int)v46 )
  {
LABEL_32:
    v25 = v18;
LABEL_33:
    EngFreeMem(v25);
    return 4294967294LL;
  }
  v47 = (v46 + 8) & 0xFFFFFFF8;
LABEL_73:
  if ( (*(_BYTE *)(a3 + 8) & 4) == 0
    || (v145[8] & 1) == 0
    || (*(_BYTE *)(a3 + 72) & 1) == 0
    || (v48 = 3080, *((_BYTE *)v145 + 84) == 4) )
  {
    v48 = 0;
  }
  v49 = 6LL * v47;
  if ( v49 > 0xFFFFFFFF )
    goto LABEL_76;
  v50 = v49 + v39;
  if ( (int)v49 + v39 < (unsigned int)v49 )
    goto LABEL_76;
  v51 = v50 + v41;
  if ( v50 + v41 < v50
    || (v52 = v51 + v42, v51 + v42 < v51)
    || (v53 = v52 + v43, v52 + v43 < v52)
    || (v54 = v53 + v48, v53 + v48 < v53)
    || (v55 = v54 + v44, v54 + v44 < v54)
    || (v56 = v55 + v37, v56 < v55)
    || (v57 = v155(v146, v150, &v161, v163, *(_DWORD *)(v142 + 16), v169, v171, &v165, &v167, v56),
        (v58 = (int *)v57) == 0LL) )
  {
LABEL_76:
    v25 = pv;
    goto LABEL_33;
  }
  if ( !*(_DWORD *)v57 || !*(_DWORD *)(v57 + 4) )
  {
    v76 = pv;
    goto LABEL_143;
  }
  v59 = v150;
  v60 = v140;
  *(_QWORD *)(a3 + 312) = v57;
  v61 = v60 + *(_QWORD *)(v57 + 32);
  v62 = v137 * v134;
  *(_DWORD *)a3 = v59;
  v63 = v61 + v139;
  *(_QWORD *)(a3 + 536) = v61;
  *(_DWORD *)(a3 + 64) = v62;
  if ( v43 )
  {
    v64 = v138;
    *(_QWORD *)(a3 + 352) = v63;
    *(_QWORD *)(a3 + 344) = v63;
    *(_DWORD *)(a3 + 368) = 1;
    *(_QWORD *)(a3 + 360) = v63 + v64;
    v63 += v43;
  }
  else
  {
    LODWORD(v64) = v138;
  }
  if ( v47 )
  {
    *(_QWORD *)(a3 + 264) = v63;
    v65 = (_QWORD *)(a3 + 480);
    *(_DWORD *)(a3 + 528) = v47;
    v66 = 6LL;
    do
    {
      *v65 = v63;
      v63 += (int)v47;
      ++v65;
      --v66;
    }
    while ( v66 );
  }
  if ( v44 )
  {
    *(_QWORD *)(a3 + 400) = v63;
    v63 += v44;
  }
  v67 = v136;
  if ( v136 )
  {
    *(_QWORD *)(a3 + 208) = v63;
    v63 += v67;
  }
  v68 = v63;
  if ( v48 )
    v63 += v48;
  else
    v68 = *(_QWORD *)(a3 + 384);
  *(_QWORD *)(a3 + 16) = v68;
  v69 = (char *)(v63 + 20);
  *(_QWORD *)(a3 + 576) = v69;
  *(_QWORD *)(a3 + 544) = v69;
  *(_QWORD *)(a3 + 560) = v69;
  v70 = 4LL * (int)v64;
  *(_QWORD *)(a3 + 568) = &v69[v70];
  *(_QWORD *)(a3 + 552) = &v69[v70];
  *(_QWORD *)(a3 + 584) = &v69[v70];
  memset_0(v69, 255, v70);
  v71 = v164;
  if ( v164 > v166 )
  {
    v71 = v166;
    v166 = v164;
    v113 = *(_QWORD *)(a3 + 568) - 4LL;
    v164 = v71;
    *(_QWORD *)(a3 + 576) = v113;
    *(_QWORD *)(a3 + 584) = *(_QWORD *)(a3 + 560) - 4LL;
    *(_QWORD *)(a3 + 352) = *(_QWORD *)(a3 + 360) - 1LL;
    *(_QWORD *)(a3 + 360) = *(_QWORD *)(a3 + 344) - 1LL;
    *(_DWORD *)(a3 + 368) = -*(_DWORD *)(a3 + 368);
    v72 = -4;
  }
  else
  {
    v72 = 4;
  }
  *(_DWORD *)(a3 + 592) = v72;
  v73 = v150;
  *(_DWORD *)(a3 + 328) = v71 - v174;
  if ( (v73 & 2) != 0 )
  {
    v75 = v173 - v165 - 1;
    v74 = v173 - v167 - 1;
    v165 = v75;
    v167 = v74;
  }
  else
  {
    v74 = v167;
    v75 = v165;
  }
  v76 = pv;
  *(_DWORD *)(a3 + 332) = v75 - v175;
  *(_QWORD *)(a3 + 288) = v153;
  *(_DWORD *)(a3 + 56) = *v76;
  v77 = *v58;
  *(_DWORD *)(a3 + 60) = *v58;
  *(_DWORD *)(a3 + 40) = v77;
  if ( (v73 & 0x80u) == 0 )
    goto LABEL_105;
  v103 = (int)(v76[30] + v176) < 0;
  v104 = v76[30] + v176;
  v105 = v144[5];
  v176 = v104;
  v106 = v58[30];
  v139 = v105;
  v107 = v106 + v177;
  v177 = v107;
  v108 = v104 + v76[31];
  if ( v103 || v107 < 0 || (int)v108 > v144[3] || v107 + v58[31] > v144[4] )
  {
    v11 = -13;
LABEL_143:
    EngFreeMem(v76);
    EngFreeMem(v58);
    return v11;
  }
  *(_DWORD *)(a3 + 224) = v105;
  *(_DWORD *)(a3 + 228) = v58[31];
  ComputeByteOffset(1LL, v108, a3 + 4);
  v128 = ComputeByteOffset(1LL, v104, v127);
  v129 = v139 * v107;
  v131 = v144;
  *(_DWORD *)(a3 + 200) = v130 - v128 + 1;
  v132 = v128 + *((_QWORD *)v131 + 3) + v129;
  v133 = v147;
  *(_QWORD *)(a3 + 216) = v132;
  if ( (*v133 & 8) != 0 )
  {
    v73 |= 0x100u;
    v150 = v73;
  }
  *(_QWORD *)(a3 + 184) = v156;
  *(_QWORD *)(a3 + 192) = v157;
LABEL_105:
  v78 = v142;
  v79 = v160;
  v80 = *(_DWORD *)(v142 + 20);
  *(_DWORD *)(a3 + 68) = v80;
  *(_DWORD *)(a3 + 260) = v80;
  v81 = ComputeByteOffset(*(unsigned __int8 *)(v78 + 10), v79, a3 + 9);
  v82 = *(_QWORD *)(v78 + 24);
  v83 = v148;
  v85 = v84 * v161 + (__int64)v81;
  *(_QWORD *)(a3 + 232) = v158;
  v86 = v85 + v82;
  *(_QWORD *)(a3 + 240) = v159;
  *(_QWORD *)(a3 + 48) = v86;
  *(_QWORD *)(a3 + 32) = v86;
  v87 = *(_DWORD *)(v83 + 20);
  if ( v88 > v74 )
    v87 = -v87;
  v89 = v141;
  *(_DWORD *)(a3 + 156) = v87;
  v90 = ComputeByteOffset(v89, v71, a3 + 97);
  v93 = v91 * v92 + (__int64)v90 + *(_QWORD *)(v83 + 24);
  *(_QWORD *)(a3 + 136) = v93;
  *(_QWORD *)(a3 + 120) = v93;
  v94 = v138;
  *(_QWORD *)(a3 + 320) = v93 + *(_DWORD *)(a3 + 156) * v58[1];
  v95 = v149;
  *(_DWORD *)(a3 + 144) = v94;
  v96 = v58[1];
  *(_DWORD *)(a3 + 148) = v96;
  *(_DWORD *)(a3 + 128) = v96;
  *(_DWORD *)a3 = v73;
  *v95 = v135;
  if ( (v73 & 0x400) != 0 )
  {
    *(_BYTE *)(a3 + 8) |= 1u;
    *(_QWORD *)(a3 + 48) += v58[6] * *(_DWORD *)(a3 + 68);
    *(_DWORD *)(a3 + 60) -= v58[6];
  }
  result = 1LL;
  *(_QWORD *)(a3 + 248) = *(_QWORD *)(a3 + 48);
  *(_DWORD *)(a3 + 256) = *(_DWORD *)(a3 + 60);
  return result;
}
