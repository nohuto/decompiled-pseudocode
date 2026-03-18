/*
 * XREFs of SetupAAHeader @ 0x1C00BD57C
 * Callers:
 *     AAHalftoneBitmap @ 0x1C00BE678 (AAHalftoneBitmap.c)
 * Callees:
 *     _ALIGN_MEM @ 0x1C00BDDD0 (_ALIGN_MEM.c)
 *     ComputeByteOffset @ 0x1C00BDDE8 (ComputeByteOffset.c)
 *     CheckBMPNeedFixup @ 0x1C00BDE34 (CheckBMPNeedFixup.c)
 *     ComputeInputColorInfo @ 0x1C00BE158 (ComputeInputColorInfo.c)
 *     ComputeAABBP @ 0x1C00BE27C (ComputeAABBP.c)
 *     ComputeBytesPerScanLine @ 0x1C0141100 (ComputeBytesPerScanLine.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall SetupAAHeader(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall **a4)(__int128 *a1, __int64 a2, __int64 a3))
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
  __int64 (__fastcall *v29)(); // rdx
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
  int v81; // r9d
  __int64 v82; // rcx
  __int64 v83; // rdi
  int v84; // eax
  int v85; // r10d
  int v86; // r11d
  __int64 v87; // rcx
  int v88; // eax
  int v89; // r9d
  int v90; // r10d
  __int64 v91; // rdx
  int v92; // eax
  __int64 (__fastcall **v93)(__int128 *, __int64, __int64); // rcx
  int v94; // eax
  __int64 (__fastcall *v95)(__int128 *, __int64, __int64); // rax
  __int64 result; // rax
  _QWORD *v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rax
  unsigned __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  unsigned __int64 v104; // rcx
  __int64 (__fastcall *v105)(); // r11
  __int64 v106; // rax
  unsigned __int64 v107; // rax
  unsigned __int64 v108; // rcx
  unsigned __int64 v109; // rax
  unsigned __int64 v110; // rdx
  unsigned int v111; // eax
  __int64 (__fastcall *v112)(); // r11
  unsigned __int64 v113; // rcx
  unsigned __int64 v114; // rcx
  bool v115; // cf
  unsigned int v116; // eax
  __int64 v117; // rcx
  unsigned __int64 v118; // rcx
  unsigned __int64 v119; // rcx
  unsigned int v120; // eax
  unsigned int v121; // eax
  __int64 v122; // rdx
  __int64 v123; // rax
  int v124; // eax
  __int64 v125; // rax
  int v126; // r13d
  int v127; // r8d
  int v128; // r12d
  __int64 v129; // rdx
  int v130; // ecx
  __int64 v131; // r8
  int v132; // eax
  int v133; // r12d
  int v134; // r9d
  _DWORD *v135; // r8
  __int64 v136; // rcx
  _BYTE *v137; // rax
  int *v138; // rcx
  int v139; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v140; // [rsp+64h] [rbp-9Ch] BYREF
  int v141; // [rsp+68h] [rbp-98h] BYREF
  __int64 (__fastcall *v142)(__int128 *, __int64, __int64); // [rsp+70h] [rbp-90h]
  int v143; // [rsp+78h] [rbp-88h] BYREF
  int v144; // [rsp+7Ch] [rbp-84h]
  int v145; // [rsp+80h] [rbp-80h]
  int v146; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v147; // [rsp+88h] [rbp-78h]
  unsigned int v148; // [rsp+90h] [rbp-70h]
  unsigned int v149; // [rsp+94h] [rbp-6Ch]
  int v150; // [rsp+98h] [rbp-68h]
  unsigned int v151; // [rsp+9Ch] [rbp-64h]
  _DWORD *v152; // [rsp+A0h] [rbp-60h]
  _QWORD *v153; // [rsp+A8h] [rbp-58h]
  _BYTE *v154; // [rsp+B0h] [rbp-50h]
  __int64 v155; // [rsp+B8h] [rbp-48h]
  __int64 (__fastcall **v156)(__int128 *, __int64, __int64); // [rsp+C0h] [rbp-40h]
  __int64 v157; // [rsp+C8h] [rbp-38h]
  unsigned int v158; // [rsp+D0h] [rbp-30h] BYREF
  char v159; // [rsp+D4h] [rbp-2Ch]
  char v160; // [rsp+D5h] [rbp-2Bh]
  void (__fastcall *v161)(__int64, __int16 *, __int64, __int64, int); // [rsp+D8h] [rbp-28h]
  __int64 (__fastcall *v162)(__int64, __int64, unsigned int *, _BYTE *, _DWORD, int, int, int *, int *, int); // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v163)(__int64, _QWORD, int *, char *, _DWORD, int, int, int *, int *, unsigned int); // [rsp+E8h] [rbp-18h]
  __int64 v164; // [rsp+F0h] [rbp-10h]
  __int64 v165; // [rsp+F8h] [rbp-8h]
  __int64 v166; // [rsp+100h] [rbp+0h]
  __int64 v167; // [rsp+108h] [rbp+8h]
  unsigned int v168; // [rsp+110h] [rbp+10h] BYREF
  int v169; // [rsp+114h] [rbp+14h] BYREF
  _BYTE v170[4]; // [rsp+118h] [rbp+18h] BYREF
  char v171[4]; // [rsp+11Ch] [rbp+1Ch] BYREF
  int v172; // [rsp+120h] [rbp+20h] BYREF
  int v173; // [rsp+124h] [rbp+24h] BYREF
  int v174; // [rsp+128h] [rbp+28h] BYREF
  int v175; // [rsp+12Ch] [rbp+2Ch] BYREF
  int v176; // [rsp+130h] [rbp+30h]
  int v177; // [rsp+134h] [rbp+34h]
  int v178; // [rsp+138h] [rbp+38h]
  int v179; // [rsp+13Ch] [rbp+3Ch]
  int v180; // [rsp+140h] [rbp+40h]
  int v181; // [rsp+144h] [rbp+44h]
  int v182; // [rsp+150h] [rbp+50h]
  int v183; // [rsp+154h] [rbp+54h]
  int v184; // [rsp+158h] [rbp+58h]
  int v185; // [rsp+15Ch] [rbp+5Ch]

  v4 = (int)a1;
  v5 = (_BYTE *)a1[2];
  v147 = a1[3];
  v152 = (_DWORD *)a1[4];
  v153 = a1;
  v155 = a2;
  v8 = a1[5];
  v156 = a4;
  v154 = v5;
  v157 = v8;
  v149 = *(unsigned __int8 *)(v8 + 10);
  v9 = a1[1];
  v10 = *(_DWORD *)(v9 + 56);
  v11 = (2 * ((*(_BYTE *)(v9 + 24) & 1) == 0)) | 1;
  v151 = v11;
  v158 = (v10 & 0x80000) != 0 ? 0x200 : 0;
  if ( (*v5 & 0x40) != 0 )
    v158 = 1536;
  v12 = 0;
  if ( (int)ComputeAABBP(v5, v8, &v158, v11 == 1) <= 0 )
    return 0LL;
  v13 = v158;
  v14 = 3100LL;
  v139 = 3100;
  if ( (v10 & 0x100000) != 0 )
  {
    v13 = v158 | 0x800;
    v158 |= 0x800u;
    if ( (v10 & 0x200000) != 0 )
    {
      v13 |= 0x1000u;
      v14 = 5148LL;
      v158 = v13;
    }
    else
    {
      if ( (v10 & 0x800000) != 0 )
        *(_BYTE *)(a3 + 8) |= 8u;
      if ( (v10 & 0x1000000) != 0 )
      {
        v13 |= 0x100000u;
        v158 = v13;
      }
      v14 = 3868LL;
    }
    v139 = v14;
  }
  if ( (v10 & 0x40000000) != 0 )
    v158 = v13 & 0xFFFFFFE7;
  if ( (int)ALIGN_MEM(&v139, v14) < 0 )
    return 4294967294LL;
  v15 = v4 + 64;
  v16 = v147;
  ComputeInputColorInfo(
    *(_QWORD *)(*(_QWORD *)(v147 + 32) + 16LL),
    *(unsigned __int8 *)(*(_QWORD *)(v147 + 32) + 2LL),
    *(unsigned __int8 *)(*(_QWORD *)(v147 + 32) + 3LL),
    v15,
    a3 + 8);
  v17 = v158;
  v18 = 0;
  if ( v11 == 1 )
    v18 = 4;
  *(_BYTE *)(a3 + 8) |= v18 | 2;
  if ( (v10 & 0x4000) != 0 )
  {
    v17 = (unsigned int)v17 | 4;
    v158 = v17;
  }
  if ( (*v154 & 0x40) != 0 )
  {
    v17 = (unsigned int)v17 & 0xFFFFFFBF;
    v158 = v17;
  }
  if ( (v17 & 0x200) != 0 )
  {
    v17 = (unsigned int)v17 & 0xFFFFFFBF;
    v158 = v17;
  }
  if ( (v17 & 0x40) != 0 )
  {
    CheckBMPNeedFixup(4294967231LL, a3, v16, &v158);
    v17 = v158;
    if ( (v158 & 0x80000) != 0 )
    {
      if ( (v10 & 0x80000) != 0 )
        LODWORD(v17) = v158 | 0x200;
      else
        LODWORD(v17) = v158 & 0xFFFFFDFF;
      v158 = v17;
    }
  }
  if ( (v17 & 0x200) != 0 )
  {
    LODWORD(v17) = v17 & 0xFFFFBFFF;
    v158 = v17;
  }
  if ( v152 )
  {
    LODWORD(v17) = v17 | 0x80;
    v158 = v17;
  }
  v19 = v139;
  v20 = (unsigned int *)v162(a2, v17, &v168, v170, *(_DWORD *)(v147 + 12), v176, v178, &v172, &v174, v139);
  if ( !v20 )
  {
    v19 = 0;
    v20 = (unsigned int *)v162(a2, v158, &v168, v170, *(_DWORD *)(v147 + 12), v176, v178, &v172, &v174, 0);
    if ( !v20 )
      return 4294967294LL;
  }
  if ( !*v20 || !v20[1] )
    goto LABEL_165;
  v21 = v19 == 0;
  v22 = v158;
  if ( v21 )
  {
    v158 |= 0x80000000;
    v22 = v158;
    *(_QWORD *)(a3 + 376) = a2 + 856;
    v24 = v22 & 0x800;
    if ( (v22 & 0x800) == 0 )
      goto LABEL_27;
    v102 = *(_QWORD *)(a2 + 7064);
    *(_QWORD *)(a3 + 336) = v102;
    if ( (v10 & 0x200000) == 0 )
      goto LABEL_27;
    v101 = v102 + 768;
    goto LABEL_138;
  }
  v23 = *((_QWORD *)v20 + 4);
  *(_QWORD *)(a3 + 376) = v23;
  v24 = v22 & 0x800;
  if ( (v22 & 0x800) != 0 )
  {
    v101 = v23 + 3100;
LABEL_138:
    *(_QWORD *)(a3 + 336) = v101;
  }
LABEL_27:
  *(_QWORD *)(a3 + 384) = *(_QWORD *)(a3 + 376) + 28LL;
  if ( (v22 & 1) != 0 )
  {
    v172 = v180 - v172 - 1;
    v174 = v180 - v174 - 1;
  }
  v25 = *v20;
  v26 = v20[1];
  v148 = v25;
  v144 = v26;
  v27 = v25 + 6;
  if ( (int)v25 + 6 < (unsigned int)v25 )
    goto LABEL_165;
  v28 = v159;
  v140 = 0;
  v142 = 0LL;
  v29 = (__int64 (__fastcall *)())BltDIB_CY;
  if ( (v22 & 0x200) != 0 )
  {
    if ( v159 == 1 )
      goto LABEL_32;
    if ( (unsigned __int8)v159 > 1u )
    {
      if ( (unsigned __int8)v159 <= 3u )
      {
        v29 = SkipDIB_CY;
        goto LABEL_32;
      }
      if ( (unsigned __int8)v159 <= 5u )
      {
        if ( v24 )
        {
          v103 = (unsigned int)(v26 + 6);
          if ( (unsigned int)v103 < (unsigned int)v26 || (unsigned __int64)(3 * v103) > 0xFFFFFFFF )
            goto LABEL_165;
          v140 = 3 * v103;
        }
        else
        {
          v140 = 0;
        }
        v29 = (__int64 (__fastcall *)())RepDIB_CY;
LABEL_32:
        v142 = (__int64 (__fastcall *)(__int128 *, __int64, __int64))v29;
        if ( !v29 )
          goto LABEL_39;
        if ( v160 )
        {
          if ( v160 == 1 )
          {
            v30 = (void (__fastcall *)(__int64, __int16 *, __int64, __int64, int))SkipDIB_CX;
            v31 = GraySkipDIB_CX;
          }
          else
          {
            if ( v160 != 2 )
            {
LABEL_38:
              v28 = -1;
              v159 = -1;
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
        v161 = v30;
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
      v142 = BltDIB_CY;
      goto LABEL_45;
    }
    v33 = v32 - 1;
    if ( v33 )
    {
      v34 = v33 - 1;
      if ( !v34 )
      {
        v116 = v20[5];
        v142 = (__int64 (__fastcall *)(__int128 *, __int64, __int64))ShrinkDIB_CY_SrkCX;
        v117 = v116 + 2;
        if ( (unsigned int)v117 < v116 )
          goto LABEL_165;
        v118 = 36 * v117;
        if ( v118 > 0xFFFFFFFF )
          goto LABEL_165;
        v111 = v118 + 2048;
        v115 = (unsigned int)v118 >= 0xFFFFF800;
        goto LABEL_164;
      }
      v35 = v34 - 1;
      if ( v35 )
      {
        if ( v35 != 1 )
          goto LABEL_45;
        if ( (v22 & 0x4000) != 0 )
        {
          v104 = v11 * (unsigned __int64)v27;
          if ( v104 <= 0xFFFFFFFF && 5 * (unsigned __int64)(unsigned int)v104 <= 0xFFFFFFFF )
          {
            v140 = 5 * v104;
            v142 = (__int64 (__fastcall *)(__int128 *, __int64, __int64))FastExpAA_CY;
            goto LABEL_45;
          }
          goto LABEL_165;
        }
        v105 = ExpandDIB_CY_ExpCX;
        if ( v11 == 1 )
          v105 = GrayExpandDIB_CY_ExpCX;
        v106 = (unsigned int)(v26 + 6);
        v142 = (__int64 (__fastcall *)(__int128 *, __int64, __int64))v105;
        if ( (unsigned int)v106 < (unsigned int)v26 )
          goto LABEL_210;
        v107 = v11 * v106;
        if ( v107 > 0xFFFFFFFF )
          goto LABEL_210;
        v108 = 4LL * (unsigned int)v107;
        if ( v108 > 0xFFFFFFFF )
          goto LABEL_210;
        v109 = v11 * (unsigned __int64)v27;
        if ( v109 > 0xFFFFFFFF )
          goto LABEL_210;
        v110 = 3LL * (unsigned int)v109;
        if ( v110 > 0xFFFFFFFF )
          goto LABEL_210;
        if ( (int)v110 + (int)v108 < (unsigned int)v110 )
          goto LABEL_210;
        v111 = v110 + v108 + 4096;
        if ( v111 < 0x1000 )
          goto LABEL_210;
        goto LABEL_157;
      }
      v112 = ExpandDIB_CY;
      if ( v11 == 1 )
        v112 = GrayExpandDIB_CY;
      v142 = (__int64 (__fastcall *)(__int128 *, __int64, __int64))v112;
      if ( (int)v26 + 6 >= (unsigned int)v26 )
      {
        v113 = v11 * (unsigned __int64)(unsigned int)(v26 + 6);
        if ( v113 <= 0xFFFFFFFF )
        {
          v114 = 6LL * (unsigned int)v113;
          if ( v114 <= 0xFFFFFFFF )
          {
            v111 = v114 + 4096;
            v115 = (unsigned int)v114 >= 0xFFFFF000;
LABEL_164:
            if ( !v115 )
            {
LABEL_157:
              v140 = v111;
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
      v142 = (__int64 (__fastcall *)(__int128 *, __int64, __int64))GrayShrinkDIB_CY;
      LODWORD(v119) = 12 * v26;
      if ( (unsigned __int64)(12 * v26) > 0xFFFFFFFF || (int)v26 + 6 < (unsigned int)v26 )
        goto LABEL_165;
      v120 = v26 + 2054;
    }
    else
    {
      v119 = v11 * (unsigned __int64)v27;
      v142 = (__int64 (__fastcall *)(__int128 *, __int64, __int64))ShrinkDIB_CY;
      if ( v119 > 0xFFFFFFFF || (unsigned __int64)(36 * v25) > 0xFFFFFFFF )
        goto LABEL_165;
      v120 = 36 * v25 + 2048;
    }
    if ( v120 < 0x800 || (unsigned int)v119 + v120 < (unsigned int)v119 )
      goto LABEL_165;
    v140 = v119 + v120;
  }
  else
  {
    v142 = (__int64 (__fastcall *)(__int128 *, __int64, __int64))TileDIB_CY;
    if ( v11 == 1 )
    {
      if ( (unsigned __int64)(2 * v25) > 0xFFFFFFFF )
        goto LABEL_165;
      v140 = 2 * v25;
    }
    else
    {
      v140 = 0;
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
  v139 = v39;
  if ( (int)ALIGN_MEM(&v139, (unsigned int)v39) < 0 )
    goto LABEL_209;
  if ( (int)ALIGN_MEM(&v140, v40) < 0 )
    goto LABEL_209;
  v43 = v41 + 2;
  if ( (unsigned int)v43 < v41 )
    goto LABEL_209;
  v44 = v42 * v43;
  if ( v44 > 0xFFFFFFFF )
    goto LABEL_209;
  v141 = v44;
  if ( (int)ALIGN_MEM(&v141, (unsigned int)v44) < 0 )
    goto LABEL_209;
  if ( (unsigned int)v26 >= 0xFFFFFFF6 )
    goto LABEL_209;
  v45 = 4LL * (unsigned int)(v26 + 10);
  if ( v45 > 0xFFFFFFFF )
    goto LABEL_209;
  v146 = 4 * (v26 + 10);
  if ( (int)ALIGN_MEM(&v146, (unsigned int)v45) < 0 )
    goto LABEL_209;
  if ( (v22 & 0x80u) != 0 )
  {
    v121 = ComputeBytesPerScanLine(1LL, v46, (unsigned int)v25);
    v122 = v121 + 4;
    if ( (unsigned int)v122 < v121 )
      goto LABEL_209;
    v143 = v121 + 4;
    if ( (int)ALIGN_MEM(&v143, v122) < 0 )
      goto LABEL_209;
    v48 = v143;
    v150 = v143;
  }
  else
  {
    v48 = 0;
    v150 = 0;
  }
  v49 = v141;
  if ( v141 < v139 )
    v49 = v139;
  v145 = v49;
  if ( (v22 & 0x1800) == 0x800 )
  {
    if ( (int)ALIGN_MEM(&v139, (unsigned int)v26) < 0 )
      goto LABEL_209;
    v50 = v139;
    v143 = v139;
  }
  else
  {
    v50 = 0;
    v143 = 0;
  }
  v51 = v153;
  if ( v149 == 254 && v153[7] )
  {
    if ( (int)ALIGN_MEM(&v141, 366LL) < 0 )
      goto LABEL_209;
    v52 = v141;
    v139 = v141;
  }
  else
  {
    v52 = 0;
    v139 = 0;
  }
  if ( (v22 & 0x40) != 0 )
  {
    v99 = v148 + 4;
    if ( (unsigned int)v99 >= v148 )
    {
      v100 = v47 * v99;
      if ( v100 <= 0xFFFFFFFF )
      {
        v141 = v100;
        if ( (int)ALIGN_MEM(&v141, (unsigned int)v100) >= 0 )
        {
          v53 = v141;
          goto LABEL_67;
        }
      }
    }
LABEL_209:
    v12 = -2;
LABEL_210:
    v138 = (int *)v20;
    goto LABEL_211;
  }
  v53 = 0;
LABEL_67:
  if ( (*(_BYTE *)(a3 + 8) & 4) != 0 && (v51[8] & 1) != 0 && (*(_BYTE *)(a3 + 72) & 1) != 0 && *((_BYTE *)v51 + 84) != 4 )
  {
    if ( (int)ALIGN_MEM(&v141, 3072LL) >= 0 )
    {
      v54 = v141;
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
  v57 = v56 + v146;
  if ( v56 + v146 < v56
    || (v58 = v57 + v48, v57 + v48 < v57)
    || (v59 = v58 + v50, v58 + v50 < v58)
    || (v60 = v59 + v54, v59 + v54 < v59)
    || (v61 = v60 + v52, v60 + v52 < v60)
    || (v62 = v140, v61 + v140 < v61)
    || (v63 = v163(v155, v158, &v169, v171, *(_DWORD *)(v147 + 16), v177, v179, &v173, &v175, v61 + v140),
        (v64 = (int *)v63) == 0LL) )
  {
LABEL_126:
    EngFreeMem(v20);
    return 4294967294LL;
  }
  if ( !*(_DWORD *)v63 || !*(_DWORD *)(v63 + 4) )
    goto LABEL_208;
  v65 = *(_QWORD *)(v63 + 32) + v62;
  v66 = v151 * v148;
  *(_DWORD *)a3 = v158;
  v67 = v143;
  *(_QWORD *)(a3 + 536) = v65;
  *(_DWORD *)(a3 + 64) = v66;
  v68 = v145 + v65;
  if ( (_DWORD)v67 )
  {
    v69 = v144;
    *(_QWORD *)(a3 + 352) = v68;
    *(_QWORD *)(a3 + 344) = v68;
    *(_DWORD *)(a3 + 368) = 1;
    v123 = v68 + v69;
    v68 += v67;
    *(_QWORD *)(a3 + 360) = v123;
  }
  else
  {
    LODWORD(v69) = v144;
  }
  if ( v53 )
  {
    *(_QWORD *)(a3 + 264) = v68;
    v97 = (_QWORD *)(a3 + 480);
    *(_DWORD *)(a3 + 528) = v53;
    v98 = 6LL;
    do
    {
      *v97 = v68;
      v68 += v53;
      ++v97;
      --v98;
    }
    while ( v98 );
  }
  v70 = v139;
  if ( v139 )
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
  v73 = v172;
  if ( v172 > v174 )
  {
    v124 = v172;
    *(_DWORD *)(a3 + 592) = -4;
    v73 = v174;
    v174 = v124;
    v125 = *(_QWORD *)(a3 + 568) - 4LL;
    v172 = v73;
    *(_QWORD *)(a3 + 576) = v125;
    *(_QWORD *)(a3 + 584) = *(_QWORD *)(a3 + 560) - 4LL;
    *(_QWORD *)(a3 + 352) = *(_QWORD *)(a3 + 360) - 1LL;
    *(_QWORD *)(a3 + 360) = *(_QWORD *)(a3 + 344) - 1LL;
    *(_DWORD *)(a3 + 368) = -*(_DWORD *)(a3 + 368);
  }
  else
  {
    *(_DWORD *)(a3 + 592) = 4;
  }
  v74 = v158;
  *(_DWORD *)(a3 + 328) = v73 - v182;
  if ( (v74 & 2) != 0 )
  {
    v75 = v181 - v173 - 1;
    v173 = v75;
    v175 = v181 - v175 - 1;
  }
  else
  {
    v75 = v173;
  }
  *(_QWORD *)(a3 + 304) = v20;
  *(_DWORD *)(a3 + 332) = v75 - v183;
  *(_QWORD *)(a3 + 288) = v161;
  *(_QWORD *)(a3 + 312) = v64;
  *(_DWORD *)(a3 + 56) = *v20;
  v76 = *v64;
  *(_DWORD *)(a3 + 60) = *v64;
  *(_DWORD *)(a3 + 40) = v76;
  if ( (v74 & 0x80u) == 0 )
    goto LABEL_94;
  v126 = v20[30] + v184;
  v127 = v152[5];
  v184 = v126;
  v128 = v64[30] + v185;
  v185 = v128;
  v129 = v126 + v20[31];
  v130 = v128 + v64[31];
  v145 = v127;
  if ( v126 < 0 || v128 < 0 || (int)v129 > v152[3] || v130 > v152[4] )
  {
    v12 = -13;
LABEL_208:
    EngFreeMem(v20);
    v138 = v64;
LABEL_211:
    EngFreeMem(v138);
    return v12;
  }
  *(_DWORD *)(a3 + 224) = v127;
  *(_DWORD *)(a3 + 228) = v64[31];
  ComputeByteOffset(1LL, v129, a3 + 4);
  v132 = ComputeByteOffset(1LL, (unsigned int)v126, v131);
  v133 = v145 * v128;
  v135 = v152;
  *(_DWORD *)(a3 + 200) = v134 - v132 + 1;
  v136 = v132 + *((_QWORD *)v135 + 3) + v133;
  v137 = v154;
  *(_QWORD *)(a3 + 216) = v136;
  if ( (*v137 & 8) != 0 )
  {
    v74 |= 0x100u;
    v158 = v74;
  }
  v73 = v172;
  *(_QWORD *)(a3 + 184) = v164;
  *(_QWORD *)(a3 + 192) = v165;
LABEL_94:
  v77 = v147;
  v78 = v168;
  v79 = *(_DWORD *)(v147 + 20);
  *(_DWORD *)(a3 + 68) = v79;
  *(_DWORD *)(a3 + 260) = v79;
  v80 = ComputeByteOffset(*(unsigned __int8 *)(v77 + 10), v78, a3 + 9);
  v82 = *(_QWORD *)(v77 + 24) + v81 * v169 + (__int64)v80;
  v83 = v157;
  *(_QWORD *)(a3 + 232) = v166;
  *(_QWORD *)(a3 + 240) = v167;
  *(_QWORD *)(a3 + 48) = v82;
  *(_QWORD *)(a3 + 32) = v82;
  v84 = *(_DWORD *)(v83 + 20);
  if ( v85 > v86 )
    v84 = -v84;
  v87 = v149;
  *(_DWORD *)(a3 + 156) = v84;
  v88 = ComputeByteOffset(v87, v73, a3 + 97);
  v91 = *(_QWORD *)(v83 + 24) + v90 * v89 + (__int64)v88;
  *(_QWORD *)(a3 + 136) = v91;
  *(_QWORD *)(a3 + 120) = v91;
  v92 = v144;
  *(_QWORD *)(a3 + 320) = v91 + *(_DWORD *)(a3 + 156) * v64[1];
  v93 = v156;
  *(_DWORD *)(a3 + 144) = v92;
  v94 = v64[1];
  *(_DWORD *)(a3 + 148) = v94;
  *(_DWORD *)(a3 + 128) = v94;
  v95 = v142;
  *(_DWORD *)a3 = v74;
  *v93 = v95;
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
