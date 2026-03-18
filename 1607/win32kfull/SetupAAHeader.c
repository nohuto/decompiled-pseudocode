/*
 * XREFs of SetupAAHeader @ 0x1C00F649C
 * Callers:
 *     AAHalftoneBitmap @ 0x1C00F36D4 (AAHalftoneBitmap.c)
 * Callees:
 *     _ALIGN_MEM @ 0x1C00F6CF8 (_ALIGN_MEM.c)
 *     ComputeByteOffset @ 0x1C00F6D10 (ComputeByteOffset.c)
 *     CheckBMPNeedFixup @ 0x1C00F6D5C (CheckBMPNeedFixup.c)
 *     ComputeInputColorInfo @ 0x1C00F7758 (ComputeInputColorInfo.c)
 *     ComputeAABBP @ 0x1C00F787C (ComputeAABBP.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ComputeBytesPerScanLine @ 0x1C024A6D8 (ComputeBytesPerScanLine.c)
 */

__int64 __fastcall SetupAAHeader(_QWORD *a1, __int64 a2, __int64 a3, __int64 (__fastcall **a4)())
{
  int v4; // r15d
  _BYTE *v5; // r10
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // r14d
  unsigned int v11; // r12d
  unsigned int v12; // edi
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // r15
  __int64 v17; // rdx
  char v18; // al
  int v19; // r15d
  unsigned int *v20; // rsi
  bool v21; // zf
  __int16 v22; // r15
  __int64 v23; // rax
  int v24; // r9d
  __int64 v25; // r14
  __int64 v26; // r13
  unsigned int v27; // r10d
  unsigned __int8 v28; // cl
  __int64 (__fastcall *v29)(__int64); // rdx
  void (__fastcall *v30)(__int64, __int16 *, __int64, __int64, int); // rax
  __int64 (__fastcall *v31)(int, int, int, int, int); // rcx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  char v36; // al
  unsigned int v37; // ecx
  __int64 v38; // rax
  unsigned __int64 v39; // rax
  unsigned int v40; // r8d
  unsigned int v41; // r10d
  __int64 v42; // r11
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned int v46; // r9d
  __int64 v47; // r11
  int v48; // r14d
  int v49; // r10d
  int v50; // r9d
  _QWORD *v51; // r13
  int v52; // r8d
  int v53; // r15d
  int v54; // r13d
  unsigned __int64 v55; // rcx
  unsigned int v56; // edx
  unsigned int v57; // ecx
  unsigned int v58; // eax
  unsigned int v59; // ecx
  unsigned int v60; // eax
  unsigned int v61; // ecx
  unsigned int v62; // r12d
  __int64 v63; // rax
  int *v64; // r14
  __int64 v65; // rdx
  int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // r9
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // r8
  unsigned int v73; // r12d
  unsigned int v74; // r15d
  int v75; // r10d
  int v76; // eax
  __int64 v77; // rdi
  __int64 v78; // rdx
  int v79; // r9d
  int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rdi
  int v83; // r9d
  __int64 v84; // rcx
  __int64 v85; // rdx
  int v86; // eax
  int v87; // r10d
  int v88; // r11d
  __int64 v89; // rcx
  int v90; // eax
  int v91; // r9d
  int v92; // r10d
  __int64 v93; // rdx
  int v94; // eax
  __int64 (__fastcall **v95)(); // rcx
  int v96; // eax
  __int64 (__fastcall *v97)(); // rax
  __int64 result; // rax
  _QWORD *v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rax
  unsigned __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  unsigned __int64 v106; // rcx
  __int64 (__fastcall *v107)(); // r11
  __int64 v108; // rax
  unsigned __int64 v109; // rax
  unsigned __int64 v110; // rcx
  unsigned __int64 v111; // rax
  unsigned __int64 v112; // rdx
  unsigned int v113; // eax
  __int64 (__fastcall *v114)(); // r11
  unsigned __int64 v115; // rcx
  unsigned __int64 v116; // rcx
  bool v117; // cf
  unsigned int v118; // eax
  __int64 v119; // rcx
  unsigned __int64 v120; // rcx
  unsigned __int64 v121; // rcx
  unsigned int v122; // eax
  unsigned int v123; // eax
  __int64 v124; // rdx
  __int64 v125; // rax
  int v126; // eax
  __int64 v127; // rax
  int v128; // r13d
  int v129; // r8d
  int v130; // r12d
  __int64 v131; // rdx
  int v132; // ecx
  __int64 v133; // r8
  int v134; // eax
  int v135; // r12d
  int v136; // r9d
  _DWORD *v137; // r8
  __int64 v138; // rcx
  _BYTE *v139; // rax
  int *v140; // rcx
  int v141; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v142; // [rsp+64h] [rbp-9Ch] BYREF
  int v143; // [rsp+68h] [rbp-98h] BYREF
  __int64 (__fastcall *v144)(); // [rsp+70h] [rbp-90h]
  int v145; // [rsp+78h] [rbp-88h] BYREF
  int v146; // [rsp+7Ch] [rbp-84h]
  int v147; // [rsp+80h] [rbp-80h]
  int v148; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v149; // [rsp+88h] [rbp-78h]
  int v150; // [rsp+8Ch] [rbp-74h]
  unsigned int v151; // [rsp+90h] [rbp-70h]
  __int64 v152; // [rsp+98h] [rbp-68h]
  unsigned int v153; // [rsp+A0h] [rbp-60h]
  _DWORD *v154; // [rsp+A8h] [rbp-58h]
  _QWORD *v155; // [rsp+B0h] [rbp-50h]
  _BYTE *v156; // [rsp+B8h] [rbp-48h]
  __int64 v157; // [rsp+C0h] [rbp-40h]
  __int64 v158; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall **v159)(); // [rsp+D0h] [rbp-30h]
  unsigned int v160; // [rsp+E0h] [rbp-20h] BYREF
  char v161; // [rsp+E4h] [rbp-1Ch]
  char v162; // [rsp+E5h] [rbp-1Bh]
  void (__fastcall *v163)(__int64, __int16 *, __int64, __int64, int); // [rsp+E8h] [rbp-18h]
  __int64 (__fastcall *v164)(__int64, __int64, unsigned int *, _BYTE *, _DWORD, int, int, int *, int *, int); // [rsp+F0h] [rbp-10h]
  __int64 (__fastcall *v165)(__int64, _QWORD, int *, char *, _DWORD, int, int, int *, int *, unsigned int); // [rsp+F8h] [rbp-8h]
  __int64 v166; // [rsp+100h] [rbp+0h]
  __int64 v167; // [rsp+108h] [rbp+8h]
  __int64 v168; // [rsp+110h] [rbp+10h]
  __int64 v169; // [rsp+118h] [rbp+18h]
  unsigned int v170; // [rsp+120h] [rbp+20h] BYREF
  int v171; // [rsp+124h] [rbp+24h] BYREF
  _BYTE v172[4]; // [rsp+128h] [rbp+28h] BYREF
  char v173[4]; // [rsp+12Ch] [rbp+2Ch] BYREF
  int v174; // [rsp+130h] [rbp+30h] BYREF
  int v175; // [rsp+134h] [rbp+34h] BYREF
  int v176; // [rsp+138h] [rbp+38h] BYREF
  int v177; // [rsp+13Ch] [rbp+3Ch] BYREF
  int v178; // [rsp+140h] [rbp+40h]
  int v179; // [rsp+144h] [rbp+44h]
  int v180; // [rsp+148h] [rbp+48h]
  int v181; // [rsp+14Ch] [rbp+4Ch]
  int v182; // [rsp+150h] [rbp+50h]
  int v183; // [rsp+154h] [rbp+54h]
  int v184; // [rsp+160h] [rbp+60h]
  int v185; // [rsp+164h] [rbp+64h]
  int v186; // [rsp+168h] [rbp+68h]
  int v187; // [rsp+16Ch] [rbp+6Ch]

  v4 = (int)a1;
  v5 = (_BYTE *)a1[2];
  v152 = a1[3];
  v154 = (_DWORD *)a1[4];
  v155 = a1;
  v157 = a2;
  v8 = a1[5];
  v159 = a4;
  v156 = v5;
  v158 = v8;
  v151 = *(unsigned __int8 *)(v8 + 10);
  v9 = a1[1];
  v10 = *(_DWORD *)(v9 + 56);
  v11 = (2 * ((*(_BYTE *)(v9 + 24) & 1) == 0)) | 1;
  v153 = v11;
  v160 = (v10 & 0x80000) != 0 ? 0x200 : 0;
  if ( (*v5 & 0x40) != 0 )
    v160 = 1536;
  v12 = 0;
  if ( (int)ComputeAABBP(v5, v8, &v160, v11 == 1) <= 0 )
    return 0LL;
  v13 = v160;
  v14 = 3100LL;
  v141 = 3100;
  if ( (v10 & 0x100000) != 0 )
  {
    v13 = v160 | 0x800;
    v160 |= 0x800u;
    if ( (v10 & 0x200000) != 0 )
    {
      v13 |= 0x1000u;
      v14 = 5148LL;
      v160 = v13;
    }
    else
    {
      if ( (v10 & 0x800000) != 0 )
        *(_BYTE *)(a3 + 8) |= 8u;
      if ( (v10 & 0x1000000) != 0 )
      {
        v13 |= 0x100000u;
        v160 = v13;
      }
      v14 = 3868LL;
    }
    v141 = v14;
  }
  if ( (v10 & 0x40000000) != 0 )
    v160 = v13 & 0xFFFFFFE7;
  if ( (int)ALIGN_MEM(&v141, v14) < 0 )
    return 4294967294LL;
  v15 = v4 + 64;
  v16 = v152;
  ComputeInputColorInfo(
    *(_QWORD *)(*(_QWORD *)(v152 + 32) + 16LL),
    *(unsigned __int8 *)(*(_QWORD *)(v152 + 32) + 2LL),
    *(unsigned __int8 *)(*(_QWORD *)(v152 + 32) + 3LL),
    v15,
    a3 + 8);
  v17 = v160;
  v18 = 0;
  if ( v11 == 1 )
    v18 = 4;
  *(_BYTE *)(a3 + 8) |= v18 | 2;
  if ( (v10 & 0x4000) != 0 )
  {
    v17 = (unsigned int)v17 | 4;
    v160 = v17;
  }
  if ( (*v156 & 0x40) != 0 )
  {
    v17 = (unsigned int)v17 & 0xFFFFFFBF;
    v160 = v17;
  }
  if ( (v17 & 0x200) != 0 )
  {
    v17 = (unsigned int)v17 & 0xFFFFFFBF;
    v160 = v17;
  }
  if ( (v17 & 0x40) != 0 )
  {
    CheckBMPNeedFixup(4294967231LL, a3, v16, &v160);
    v17 = v160;
    if ( (v160 & 0x80000) != 0 )
    {
      if ( (v10 & 0x80000) != 0 )
        LODWORD(v17) = v160 | 0x200;
      else
        LODWORD(v17) = v160 & 0xFFFFFDFF;
      v160 = v17;
    }
  }
  if ( (v17 & 0x200) != 0 )
  {
    LODWORD(v17) = v17 & 0xFFFFBFFF;
    v160 = v17;
  }
  if ( v154 )
  {
    LODWORD(v17) = v17 | 0x80;
    v160 = v17;
  }
  v19 = v141;
  v20 = (unsigned int *)v164(a2, v17, &v170, v172, *(_DWORD *)(v152 + 12), v178, v180, &v174, &v176, v141);
  if ( !v20 )
  {
    v19 = 0;
    v20 = (unsigned int *)v164(a2, v160, &v170, v172, *(_DWORD *)(v152 + 12), v178, v180, &v174, &v176, 0);
    if ( !v20 )
      return 4294967294LL;
  }
  if ( !*v20 || !v20[1] )
    goto LABEL_165;
  v21 = v19 == 0;
  v22 = v160;
  if ( v21 )
  {
    v160 |= 0x80000000;
    v22 = v160;
    *(_QWORD *)(a3 + 376) = a2 + 856;
    v24 = v22 & 0x800;
    if ( (v22 & 0x800) == 0 )
      goto LABEL_27;
    v104 = *(_QWORD *)(a2 + 7064);
    *(_QWORD *)(a3 + 336) = v104;
    if ( (v10 & 0x200000) == 0 )
      goto LABEL_27;
    v103 = v104 + 768;
    goto LABEL_138;
  }
  v23 = *((_QWORD *)v20 + 4);
  *(_QWORD *)(a3 + 376) = v23;
  v24 = v22 & 0x800;
  if ( (v22 & 0x800) != 0 )
  {
    v103 = v23 + 3100;
LABEL_138:
    *(_QWORD *)(a3 + 336) = v103;
  }
LABEL_27:
  *(_QWORD *)(a3 + 384) = *(_QWORD *)(a3 + 376) + 28LL;
  if ( (v22 & 1) != 0 )
  {
    v174 = v182 - v174 - 1;
    v176 = v182 - v176 - 1;
  }
  v25 = *v20;
  v26 = v20[1];
  v149 = v25;
  v146 = v26;
  v27 = v25 + 6;
  if ( (int)v25 + 6 < (unsigned int)v25 )
    goto LABEL_165;
  v28 = v161;
  v142 = 0;
  v144 = 0LL;
  v29 = (__int64 (__fastcall *)(__int64))BltDIB_CY;
  if ( (v22 & 0x200) != 0 )
  {
    if ( v161 == 1 )
      goto LABEL_32;
    if ( (unsigned __int8)v161 > 1u )
    {
      if ( (unsigned __int8)v161 <= 3u )
      {
        v29 = (__int64 (__fastcall *)(__int64))SkipDIB_CY;
        goto LABEL_32;
      }
      if ( (unsigned __int8)v161 <= 5u )
      {
        if ( v24 )
        {
          v105 = (unsigned int)(v26 + 6);
          if ( (unsigned int)v105 < (unsigned int)v26 || (unsigned __int64)(3 * v105) > 0xFFFFFFFF )
            goto LABEL_165;
          v142 = 3 * v105;
        }
        else
        {
          v142 = 0;
        }
        v29 = RepDIB_CY;
LABEL_32:
        v144 = (__int64 (__fastcall *)())v29;
        if ( !v29 )
          goto LABEL_39;
        if ( v162 )
        {
          if ( v162 == 1 )
          {
            v30 = (void (__fastcall *)(__int64, __int16 *, __int64, __int64, int))SkipDIB_CX;
            v31 = GraySkipDIB_CX;
          }
          else
          {
            if ( v162 != 2 )
            {
LABEL_38:
              v28 = -1;
              v161 = -1;
              goto LABEL_39;
            }
            v30 = RepDIB_CX;
            v31 = GrayRepDIB_CX;
          }
        }
        else
        {
          v30 = (void (__fastcall *)(__int64, __int16 *, __int64, __int64, int))CopyDIB_CX;
          v31 = (__int64 (__fastcall *)(int, int, int, int, int))GrayCopyDIB_CXGray;
        }
        if ( v11 == 1 )
          v30 = (void (__fastcall *)(__int64, __int16 *, __int64, __int64, int))v31;
        v163 = v30;
        goto LABEL_38;
      }
    }
  }
LABEL_39:
  if ( v28 )
  {
    v32 = v28 - 1;
    if ( !v32 )
    {
      v144 = BltDIB_CY;
      goto LABEL_45;
    }
    v33 = v32 - 1;
    if ( v33 )
    {
      v34 = v33 - 1;
      if ( !v34 )
      {
        v118 = v20[5];
        v144 = ShrinkDIB_CY_SrkCX;
        v119 = v118 + 2;
        if ( (unsigned int)v119 < v118 )
          goto LABEL_165;
        v120 = 36 * v119;
        if ( v120 > 0xFFFFFFFF )
          goto LABEL_165;
        v113 = v120 + 2048;
        v117 = (unsigned int)v120 >= 0xFFFFF800;
        goto LABEL_164;
      }
      v35 = v34 - 1;
      if ( v35 )
      {
        if ( v35 != 1 )
          goto LABEL_45;
        if ( (v22 & 0x4000) != 0 )
        {
          v106 = v11 * (unsigned __int64)v27;
          if ( v106 <= 0xFFFFFFFF && 5 * (unsigned __int64)(unsigned int)v106 <= 0xFFFFFFFF )
          {
            v142 = 5 * v106;
            v144 = FastExpAA_CY;
            goto LABEL_45;
          }
          goto LABEL_165;
        }
        v107 = ExpandDIB_CY_ExpCX;
        if ( v11 == 1 )
          v107 = GrayExpandDIB_CY_ExpCX;
        v108 = (unsigned int)(v26 + 6);
        v144 = v107;
        if ( (unsigned int)v108 < (unsigned int)v26 )
          goto LABEL_210;
        v109 = v11 * v108;
        if ( v109 > 0xFFFFFFFF )
          goto LABEL_210;
        v110 = 4LL * (unsigned int)v109;
        if ( v110 > 0xFFFFFFFF )
          goto LABEL_210;
        v111 = v11 * (unsigned __int64)v27;
        if ( v111 > 0xFFFFFFFF )
          goto LABEL_210;
        v112 = 3LL * (unsigned int)v111;
        if ( v112 > 0xFFFFFFFF )
          goto LABEL_210;
        if ( (int)v112 + (int)v110 < (unsigned int)v112 )
          goto LABEL_210;
        v113 = v112 + v110 + 4096;
        if ( v113 < 0x1000 )
          goto LABEL_210;
        goto LABEL_157;
      }
      v114 = ExpandDIB_CY;
      if ( v11 == 1 )
        v114 = GrayExpandDIB_CY;
      v144 = v114;
      if ( (int)v26 + 6 >= (unsigned int)v26 )
      {
        v115 = v11 * (unsigned __int64)(unsigned int)(v26 + 6);
        if ( v115 <= 0xFFFFFFFF )
        {
          v116 = 6LL * (unsigned int)v115;
          if ( v116 <= 0xFFFFFFFF )
          {
            v113 = v116 + 4096;
            v117 = (unsigned int)v116 >= 0xFFFFF000;
LABEL_164:
            if ( !v117 )
            {
LABEL_157:
              v142 = v113;
              goto LABEL_45;
            }
          }
        }
      }
LABEL_165:
      EngFreeMem(v20);
      return 0LL;
    }
    if ( v11 == 1 )
    {
      v144 = GrayShrinkDIB_CY;
      LODWORD(v121) = 12 * v26;
      if ( (unsigned __int64)(12 * v26) > 0xFFFFFFFF || (int)v26 + 6 < (unsigned int)v26 )
        goto LABEL_165;
      v122 = v26 + 2054;
    }
    else
    {
      v121 = v11 * (unsigned __int64)v27;
      v144 = ShrinkDIB_CY;
      if ( v121 > 0xFFFFFFFF || (unsigned __int64)(36 * v25) > 0xFFFFFFFF )
        goto LABEL_165;
      v122 = 36 * v25 + 2048;
    }
    if ( v122 < 0x800 || (unsigned int)v121 + v122 < (unsigned int)v121 )
      goto LABEL_165;
    v142 = v121 + v122;
  }
  else
  {
    v144 = TileDIB_CY;
    if ( v11 == 1 )
    {
      if ( (unsigned __int64)(2 * v25) > 0xFFFFFFFF )
        goto LABEL_165;
      v142 = 2 * v25;
    }
    else
    {
      v142 = 0;
    }
  }
LABEL_45:
  v36 = 0;
  v37 = v24 != 0 ? v26 : 0;
  if ( v11 == 1 )
    v36 = 4;
  *(_BYTE *)(a3 + 96) = v36;
  *(_DWORD *)(a3 + 152) = v11 * v37;
  v38 = v37 + 8;
  if ( (unsigned int)v38 < v37 )
    goto LABEL_209;
  v39 = v11 * v38;
  if ( v39 > 0xFFFFFFFF )
    goto LABEL_209;
  v141 = v39;
  if ( (int)ALIGN_MEM(&v141, (unsigned int)v39) < 0 )
    goto LABEL_209;
  if ( (int)ALIGN_MEM(&v142, v40) < 0 )
    goto LABEL_209;
  v43 = v41 + 2;
  if ( (unsigned int)v43 < v41 )
    goto LABEL_209;
  v44 = v42 * v43;
  if ( v44 > 0xFFFFFFFF )
    goto LABEL_209;
  v143 = v44;
  if ( (int)ALIGN_MEM(&v143, (unsigned int)v44) < 0 )
    goto LABEL_209;
  if ( (unsigned int)v26 >= 0xFFFFFFF6 )
    goto LABEL_209;
  v45 = 4LL * (unsigned int)(v26 + 10);
  if ( v45 > 0xFFFFFFFF )
    goto LABEL_209;
  v148 = 4 * (v26 + 10);
  if ( (int)ALIGN_MEM(&v148, (unsigned int)v45) < 0 )
    goto LABEL_209;
  if ( (v22 & 0x80u) != 0 )
  {
    v123 = ComputeBytesPerScanLine(1LL, v46, (unsigned int)v25);
    v124 = v123 + 4;
    if ( (unsigned int)v124 < v123 )
      goto LABEL_209;
    v145 = v123 + 4;
    if ( (int)ALIGN_MEM(&v145, v124) < 0 )
      goto LABEL_209;
    v48 = v145;
    v150 = v145;
  }
  else
  {
    v48 = 0;
    v150 = 0;
  }
  v49 = v143;
  if ( v143 < v141 )
    v49 = v141;
  v147 = v49;
  if ( (v22 & 0x1800) == 0x800 )
  {
    if ( (int)ALIGN_MEM(&v141, (unsigned int)v26) < 0 )
      goto LABEL_209;
    v50 = v141;
    v145 = v141;
  }
  else
  {
    v50 = 0;
    v145 = 0;
  }
  v51 = v155;
  if ( v151 == 254 && v155[7] )
  {
    if ( (int)ALIGN_MEM(&v143, 366LL) < 0 )
      goto LABEL_209;
    v52 = v143;
    v141 = v143;
  }
  else
  {
    v52 = 0;
    v141 = 0;
  }
  if ( (v22 & 0x40) != 0 )
  {
    v101 = v149 + 4;
    if ( (unsigned int)v101 >= v149 )
    {
      v102 = v47 * v101;
      if ( v102 <= 0xFFFFFFFF )
      {
        v143 = v102;
        if ( (int)ALIGN_MEM(&v143, (unsigned int)v102) >= 0 )
        {
          v53 = v143;
          goto LABEL_67;
        }
      }
    }
LABEL_209:
    v12 = -2;
LABEL_210:
    v140 = (int *)v20;
    goto LABEL_211;
  }
  v53 = 0;
LABEL_67:
  if ( (*(_BYTE *)(a3 + 8) & 4) != 0 && (v51[8] & 1) != 0 && (*(_BYTE *)(a3 + 72) & 1) != 0 && *((_BYTE *)v51 + 84) != 4 )
  {
    if ( (int)ALIGN_MEM(&v143, 3072LL) >= 0 )
    {
      v54 = v143;
      goto LABEL_69;
    }
    goto LABEL_209;
  }
  v54 = 0;
LABEL_69:
  v55 = 6LL * (unsigned int)v53;
  if ( v55 > 0xFFFFFFFF )
    goto LABEL_126;
  v56 = v55 + v49;
  if ( (int)v55 + v49 < (unsigned int)v55 )
    goto LABEL_126;
  v57 = v56 + v148;
  if ( v56 + v148 < v56
    || (v58 = v57 + v48, v57 + v48 < v57)
    || (v59 = v58 + v50, v58 + v50 < v58)
    || (v60 = v59 + v54, v59 + v54 < v59)
    || (v61 = v60 + v52, v60 + v52 < v60)
    || (v62 = v142, v61 + v142 < v61)
    || (v63 = v165(v157, v160, &v171, v173, *(_DWORD *)(v152 + 16), v179, v181, &v175, &v177, v61 + v142),
        (v64 = (int *)v63) == 0LL) )
  {
LABEL_126:
    EngFreeMem(v20);
    return 4294967294LL;
  }
  if ( !*(_DWORD *)v63 || !*(_DWORD *)(v63 + 4) )
    goto LABEL_208;
  v65 = *(_QWORD *)(v63 + 32) + v62;
  v66 = v153 * v149;
  *(_DWORD *)a3 = v160;
  v67 = v145;
  *(_QWORD *)(a3 + 536) = v65;
  *(_DWORD *)(a3 + 64) = v66;
  v68 = v147 + v65;
  if ( (_DWORD)v67 )
  {
    v69 = v146;
    *(_QWORD *)(a3 + 352) = v68;
    *(_QWORD *)(a3 + 344) = v68;
    *(_DWORD *)(a3 + 368) = 1;
    v125 = v68 + v69;
    v68 += v67;
    *(_QWORD *)(a3 + 360) = v125;
  }
  else
  {
    LODWORD(v69) = v146;
  }
  if ( v53 )
  {
    *(_QWORD *)(a3 + 264) = v68;
    v99 = (_QWORD *)(a3 + 480);
    *(_DWORD *)(a3 + 528) = v53;
    v100 = 6LL;
    do
    {
      *v99 = v68;
      v68 += v53;
      ++v99;
      --v100;
    }
    while ( v100 );
  }
  v70 = v141;
  if ( v141 )
  {
    *(_QWORD *)(a3 + 400) = v68;
    v68 += v70;
  }
  v71 = v150;
  if ( v150 )
  {
    *(_QWORD *)(a3 + 208) = v68;
    v68 += v71;
  }
  if ( v54 )
  {
    *(_QWORD *)(a3 + 16) = v68;
    v68 += v54;
  }
  else
  {
    *(_QWORD *)(a3 + 16) = *(_QWORD *)(a3 + 384);
  }
  *(_QWORD *)(a3 + 576) = v68 + 20;
  *(_QWORD *)(a3 + 544) = v68 + 20;
  *(_QWORD *)(a3 + 560) = v68 + 20;
  v72 = v68 + 20 + 4LL * (int)v69;
  *(_QWORD *)(a3 + 568) = v72;
  *(_QWORD *)(a3 + 552) = v72;
  *(_QWORD *)(a3 + 584) = v72;
  memset((void *)(v68 + 20), 255, 4LL * (int)v69);
  v73 = v174;
  if ( v174 > v176 )
  {
    v126 = v174;
    *(_DWORD *)(a3 + 592) = -4;
    v73 = v176;
    v176 = v126;
    v127 = *(_QWORD *)(a3 + 568) - 4LL;
    v174 = v73;
    *(_QWORD *)(a3 + 576) = v127;
    *(_QWORD *)(a3 + 584) = *(_QWORD *)(a3 + 560) - 4LL;
    *(_QWORD *)(a3 + 352) = *(_QWORD *)(a3 + 360) - 1LL;
    *(_QWORD *)(a3 + 360) = *(_QWORD *)(a3 + 344) - 1LL;
    *(_DWORD *)(a3 + 368) = -*(_DWORD *)(a3 + 368);
  }
  else
  {
    *(_DWORD *)(a3 + 592) = 4;
  }
  v74 = v160;
  *(_DWORD *)(a3 + 328) = v73 - v184;
  if ( (v74 & 2) != 0 )
  {
    v75 = v183 - v175 - 1;
    v175 = v75;
    v177 = v183 - v177 - 1;
  }
  else
  {
    v75 = v175;
  }
  *(_QWORD *)(a3 + 304) = v20;
  *(_DWORD *)(a3 + 332) = v75 - v185;
  *(_QWORD *)(a3 + 288) = v163;
  *(_QWORD *)(a3 + 312) = v64;
  *(_DWORD *)(a3 + 56) = *v20;
  v76 = *v64;
  *(_DWORD *)(a3 + 60) = *v64;
  *(_DWORD *)(a3 + 40) = v76;
  if ( (v74 & 0x80u) == 0 )
    goto LABEL_94;
  v128 = v20[30] + v186;
  v129 = v154[5];
  v186 = v128;
  v130 = v64[30] + v187;
  v187 = v130;
  v131 = v128 + v20[31];
  v132 = v130 + v64[31];
  v147 = v129;
  if ( v128 < 0 || v130 < 0 || (int)v131 > v154[3] || v132 > v154[4] )
  {
    v12 = -13;
LABEL_208:
    EngFreeMem(v20);
    v140 = v64;
LABEL_211:
    EngFreeMem(v140);
    return v12;
  }
  *(_DWORD *)(a3 + 224) = v129;
  *(_DWORD *)(a3 + 228) = v64[31];
  ComputeByteOffset(1LL, v131, a3 + 4);
  v134 = ComputeByteOffset(1LL, (unsigned int)v128, v133);
  v135 = v147 * v130;
  v137 = v154;
  *(_DWORD *)(a3 + 200) = v136 - v134 + 1;
  v138 = v134 + *((_QWORD *)v137 + 3) + v135;
  v139 = v156;
  *(_QWORD *)(a3 + 216) = v138;
  if ( (*v139 & 8) != 0 )
  {
    v74 |= 0x100u;
    v160 = v74;
  }
  v73 = v174;
  *(_QWORD *)(a3 + 184) = v166;
  *(_QWORD *)(a3 + 192) = v167;
LABEL_94:
  v77 = v152;
  v78 = v170;
  v79 = *(_DWORD *)(v152 + 20);
  *(_DWORD *)(a3 + 68) = v79;
  *(_DWORD *)(a3 + 260) = v79;
  v80 = ComputeByteOffset(*(unsigned __int8 *)(v77 + 10), v78, a3 + 9);
  v81 = *(_QWORD *)(v77 + 24);
  v82 = v158;
  v84 = v83 * v171 + (__int64)v80;
  *(_QWORD *)(a3 + 232) = v168;
  v85 = v84 + v81;
  *(_QWORD *)(a3 + 240) = v169;
  *(_QWORD *)(a3 + 48) = v85;
  *(_QWORD *)(a3 + 32) = v85;
  v86 = *(_DWORD *)(v82 + 20);
  if ( v87 > v88 )
    v86 = -v86;
  v89 = v151;
  *(_DWORD *)(a3 + 156) = v86;
  v90 = ComputeByteOffset(v89, v73, a3 + 97);
  v93 = v92 * v91 + (__int64)v90 + *(_QWORD *)(v82 + 24);
  *(_QWORD *)(a3 + 136) = v93;
  *(_QWORD *)(a3 + 120) = v93;
  v94 = v146;
  *(_QWORD *)(a3 + 320) = v93 + *(_DWORD *)(a3 + 156) * v64[1];
  v95 = v159;
  *(_DWORD *)(a3 + 144) = v94;
  v96 = v64[1];
  *(_DWORD *)(a3 + 148) = v96;
  *(_DWORD *)(a3 + 128) = v96;
  v97 = v144;
  *(_DWORD *)a3 = v74;
  *v95 = v97;
  if ( (v74 & 0x400) != 0 )
  {
    *(_BYTE *)(a3 + 8) |= 1u;
    *(_QWORD *)(a3 + 48) += v64[6] * *(_DWORD *)(a3 + 68);
    *(_DWORD *)(a3 + 60) -= v64[6];
  }
  result = 1LL;
  *(_QWORD *)(a3 + 248) = *(_QWORD *)(a3 + 48);
  *(_DWORD *)(a3 + 256) = *(_DWORD *)(a3 + 60);
  return result;
}
