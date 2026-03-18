/*
 * XREFs of fs_FindBitMapSize @ 0x1C00AC4E8
 * Callers:
 *     lGetGlyphBitmap @ 0x1C00AA914 (lGetGlyphBitmap.c)
 *     lQueryTTOutline @ 0x1C00F65D4 (lQueryTTOutline.c)
 *     lGGOBitmap @ 0x1C0246EF8 (lGGOBitmap.c)
 * Callees:
 *     sfac_ReadGlyphMetrics @ 0x1C00A1768 (sfac_ReadGlyphMetrics.c)
 *     sbit_GetMetrics @ 0x1C00A1DA0 (sbit_GetMetrics.c)
 *     fsc_RemoveDups @ 0x1C00AB3AC (fsc_RemoveDups.c)
 *     fsc_MeasureGlyph @ 0x1C00AB4F0 (fsc_MeasureGlyph.c)
 *     fsg_CheckWorkSpaceForFit @ 0x1C00AD260 (fsg_CheckWorkSpaceForFit.c)
 *     fs_SetUpKey @ 0x1C00AD5A8 (fs_SetUpKey.c)
 *     fsg_UpdateWorkSpaceElement @ 0x1C00AD60C (fsg_UpdateWorkSpaceElement.c)
 *     CompDiv @ 0x1C00DA168 (CompDiv.c)
 *     scl_ScaleAdvanceWidth @ 0x1C00E5008 (scl_ScaleAdvanceWidth.c)
 *     mth_FixXYMul @ 0x1C00E5110 (mth_FixXYMul.c)
 *     fsc_OverScaleOutline @ 0x1C0104BC4 (fsc_OverScaleOutline.c)
 *     mth_DivShiftLong @ 0x1C0110454 (mth_DivShiftLong.c)
 */

__int64 __fastcall fs_FindBitMapSize(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // r8
  __int16 *v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 result; // rax
  __int16 v11; // r14
  __int64 v12; // rsi
  __int16 v13; // bx
  int v14; // eax
  __int16 v15; // di
  __int64 *v16; // r9
  int v17; // r14d
  __int64 v18; // r11
  __int64 v19; // r10
  __int16 v20; // bx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // esi
  int v24; // edi
  int v25; // r8d
  __int64 v26; // rcx
  int v27; // r14d
  int v28; // rax^4
  __int64 *v29; // rdx
  int v30; // r14d
  __int64 v31; // r10
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // rcx
  int v35; // esi
  int v36; // edi
  int v37; // ebx
  __int64 v38; // rcx
  int v39; // r14d
  __int64 v40; // rbx
  __int16 v41; // ax
  __int16 v42; // r8
  int v43; // eax
  __int64 v44; // r11
  __int16 *v45; // rdi
  __int16 *v46; // rsi
  int v47; // ecx
  unsigned int v48; // edx
  int v49; // ecx
  unsigned int v50; // edx
  int v51; // ecx
  unsigned int v52; // edx
  int v53; // ecx
  unsigned int v54; // edx
  int v55; // ecx
  unsigned int v56; // edx
  int v57; // ecx
  unsigned int v58; // edx
  int v59; // ecx
  unsigned int v60; // edx
  int v61; // ecx
  unsigned int v62; // edx
  int v63; // ecx
  __int16 v64; // ax
  int v65; // ecx
  int v66; // eax
  unsigned int v67; // edx
  _WORD *v68; // r10
  unsigned int v69; // r9d
  int v70; // ecx
  __int64 v71; // kr00_8
  _WORD *v72; // r11
  __int16 *v73; // r8
  int v74; // edx
  _WORD *v75; // r9
  bool v76; // zf
  __int128 v77; // xmm1
  __int128 v78; // xmm0
  int v79; // eax
  __int64 v80; // rbx
  int v81; // r9d
  int v82; // eax
  __int64 v83; // r11
  _DWORD *v84; // rdx
  int v85; // ebx
  int v86; // r9d
  int v87; // r11d
  int v88; // r10d
  __int64 v89; // kr08_8
  int v90; // ecx
  int v91; // eax
  int v92; // r8d
  __int16 v93; // ax
  __int16 v94; // r8
  int v95; // eax
  __int64 v96; // r10
  int v97; // eax
  __int16 v98; // r8
  __int64 v99; // rax
  _DWORD *v100; // rdx
  __int16 i; // r8
  int v102; // eax
  __int64 v103; // r10
  _DWORD *v104; // rdx
  __int64 v105; // rdx
  unsigned __int16 v106; // r10
  unsigned __int16 v107; // r10
  unsigned __int16 v108; // r10
  __int16 v109; // r9
  __int16 v110; // ax
  __int16 v111; // dx
  int v112; // eax
  int v113; // ecx
  int v114; // edx
  int v115; // ecx
  int v116; // edx
  int v117; // ecx
  int v118; // edx
  int v119; // ecx
  int v120; // edx
  int v121; // ecx
  int v122; // edx
  int v123; // ecx
  int v124; // edx
  int v125; // ecx
  int v126; // edx
  int v127; // ecx
  int v128; // edx
  int v129; // ecx
  __int16 v130; // ax
  int v131; // ecx
  int v132; // eax
  int v133; // ecx
  int v134; // edx
  int v135; // ecx
  int v136; // ecx
  unsigned __int16 v137; // r10
  unsigned __int16 v138; // r10
  unsigned __int16 v139; // r10
  int v140; // eax
  __int16 v141; // r11
  __int16 v142; // r9
  int v143; // ecx
  __int16 v144; // dx
  int v145; // ecx
  int v146; // [rsp+60h] [rbp-39h] BYREF
  int v147; // [rsp+64h] [rbp-35h]
  __int64 v148; // [rsp+68h] [rbp-31h] BYREF
  int v149; // [rsp+70h] [rbp-29h] BYREF
  int v150; // [rsp+74h] [rbp-25h] BYREF
  int v151[2]; // [rsp+78h] [rbp-21h] BYREF
  int v152[2]; // [rsp+80h] [rbp-19h] BYREF
  _QWORD v153[13]; // [rsp+88h] [rbp-11h] BYREF
  __int64 v154; // [rsp+100h] [rbp+67h] BYREF
  unsigned __int64 v155; // [rsp+110h] [rbp+77h] BYREF
  int v156; // [rsp+118h] [rbp+7Fh] BYREF
  int v157; // [rsp+11Ch] [rbp+83h]

  if ( !a1[1] || !a1[4] || !a1[5] )
    return 4099LL;
  v3 = fs_SetUpKey(a1, 30LL, &v154);
  v4 = v3;
  if ( !v3 )
    return (unsigned int)v154;
  v5 = *(_QWORD *)(v3 + 232);
  v6 = *(_QWORD *)(v5 + 24);
  if ( *(_QWORD *)(v4 + 264) != v6 )
  {
    *(_QWORD *)(v4 + 432) = v6 + *(unsigned int *)(v4 + 480);
    *(_QWORD *)(v4 + 440) = v6 + *(unsigned int *)(v4 + 484);
    *(_QWORD *)(v4 + 448) = v6 + *(unsigned int *)(v4 + 488);
    *(_QWORD *)(v4 + 456) = v6 + *(unsigned int *)(v4 + 492);
    *(_QWORD *)(v4 + 464) = v6 + *(unsigned int *)(v4 + 496);
    *(_QWORD *)(v4 + 472) = v6 + *(unsigned int *)(v4 + 548);
    fsg_UpdateWorkSpaceElement(v4 + 480, v4 + 432);
    v5 = *(_QWORD *)(v4 + 232);
    *(_OWORD *)(v4 + 240) = *(_OWORD *)v5;
    *(_OWORD *)(v4 + 256) = *(_OWORD *)(v5 + 16);
    *(_OWORD *)(v4 + 272) = *(_OWORD *)(v5 + 32);
    *(_OWORD *)(v4 + 288) = *(_OWORD *)(v5 + 48);
    *(_QWORD *)(v4 + 304) = *(_QWORD *)(v5 + 64);
  }
  v7 = (__int16 *)(v4 + 694);
  v8 = *(_QWORD *)(v5 + 32) + *(unsigned int *)(v4 + 584);
  v154 = v8;
  if ( *(_DWORD *)(v4 + 844) && (*(_BYTE *)(v4 + 1076) & 1) == 0 )
  {
    result = sbit_GetMetrics(
               v4 + 964,
               v4,
               v151,
               (int *)&v155,
               &v156,
               v152,
               (int *)&v148,
               &v146,
               (_WORD *)(v4 + 694),
               &v154,
               &v149,
               &v150);
    if ( (_DWORD)result )
      return result;
    v85 = v155;
    v86 = v157;
    v87 = HIDWORD(v155);
    v88 = v156;
    v89 = v148;
    v90 = v146;
    *(_DWORD *)(a2 + 72) = v151[0] << 10;
    *(_DWORD *)(a2 + 76) = v151[1] << 10;
    *(_DWORD *)(a2 + 204) = v152[0] << 10;
    *(_DWORD *)(a2 + 208) = v152[1] << 10;
    v91 = v147 << 10;
    *(_DWORD *)(a2 + 184) = v147 << 10;
    *(_DWORD *)(a2 + 192) = v91;
    v86 <<= 10;
    v90 <<= 10;
    v85 <<= 10;
    *(_DWORD *)(a2 + 80) = v85;
    v87 <<= 10;
    v88 <<= 10;
    *(_DWORD *)(a2 + 64) = v85;
    *(_DWORD *)(a2 + 52) = v86;
    *(_DWORD *)(a2 + 212) = (_DWORD)v89 << 10;
    *(_DWORD *)(a2 + 180) = v90;
    *(_DWORD *)(a2 + 60) = v86;
    *(_DWORD *)(a2 + 196) = (_DWORD)v89 << 10;
    *(_DWORD *)(a2 + 188) = v90;
    *(_DWORD *)(a2 + 84) = v87;
    *(_DWORD *)(a2 + 48) = v88;
    *(_DWORD *)(a2 + 216) = HIDWORD(v89) << 10;
    *(_DWORD *)(a2 + 68) = v87;
    *(_DWORD *)(a2 + 56) = v88;
    *(_DWORD *)(a2 + 200) = HIDWORD(v89) << 10;
    result = sfac_ReadGlyphMetrics(v4, *(_WORD *)(v4 + 216), (_WORD *)(v4 + 384), v4 + 386, &v156, (__int64)&v155);
    if ( (_DWORD)result )
      return result;
    v92 = *(unsigned __int16 *)(v4 + 384);
    *(_DWORD *)(a2 + 44) = 0;
    scl_ScaleAdvanceWidth(v8, a2 + 40, v92, *(_DWORD *)(v4 + 360), *(_WORD *)(v4 + 316), v4 + 320);
    v93 = *(_WORD *)(v4 + 386);
    *(_DWORD *)(a2 + 172) = 0;
    v94 = *(_WORD *)(v4 + 316);
    if ( *(_DWORD *)(v4 + 360) )
    {
      v95 = CompDiv((unsigned int)v94, v93 * (__int64)*(int *)(v8 + 388));
      *(_DWORD *)(v96 + 4) = v95;
      if ( v95 )
        *(_DWORD *)(v96 + 4) = v95 + 0x10000;
    }
    else
    {
      LODWORD(v155) = v93 << 16;
      HIDWORD(v155) = v93 >> 15;
      v102 = CompDiv((unsigned int)v94, v155);
      v104 = (_DWORD *)(v103 + 4);
      *(_DWORD *)(v103 + 4) = v102;
      if ( v102 )
        *v104 = v102 + 0x10000;
      mth_FixXYMul(v103, v104, v4 + 320);
    }
    v68 = (_WORD *)(a2 + 100);
    *(_WORD *)(a2 + 100) = *(_WORD *)(v4 + 696);
    v72 = (_WORD *)(a2 + 104);
    v45 = (__int16 *)(a2 + 98);
    *(_WORD *)(a2 + 104) = *(_WORD *)(v4 + 700);
    v46 = (__int16 *)(a2 + 102);
    v73 = (__int16 *)(a2 + 96);
    *(_WORD *)(a2 + 98) = *(_WORD *)(v4 + 698);
    v81 = a2 + 24;
    v80 = a2 + 28;
    *(_WORD *)(a2 + 102) = *v7;
    *(_WORD *)(a2 + 96) = v154;
    v97 = v149;
    *(_QWORD *)(a2 + 88) = 0LL;
    *(_DWORD *)(a2 + 20) = v97;
    *(_DWORD *)(a2 + 24) = v150;
    *(_DWORD *)(a2 + 28) = 0;
    *(_DWORD *)(a2 + 32) = 0;
    goto LABEL_30;
  }
  if ( *(_DWORD *)(v4 + 356) )
  {
    v99 = *(_QWORD *)(v4 + 448);
    v100 = *(_DWORD **)v99;
    for ( i = *(_WORD *)(*(_QWORD *)(v99 + 64) + 2LL * *(__int16 *)(v99 + 80) - 2); i >= 0; --i )
      ++*v100++;
  }
  v9 = *(_QWORD *)(v4 + 448);
  v153[3] = *(_QWORD *)v9;
  v153[4] = *(_QWORD *)(v9 + 8);
  v153[1] = *(_QWORD *)(v9 + 56);
  v153[2] = *(_QWORD *)(v9 + 64);
  v153[5] = *(_QWORD *)(v9 + 48);
  v153[6] = *(_QWORD *)(v9 + 88);
  LOWORD(v153[0]) = *(_WORD *)(v9 + 80);
  result = fsc_RemoveDups((__int64)v153);
  if ( !(_DWORD)result )
  {
    v11 = 1;
    v12 = v4 + 688;
    v13 = 0;
    if ( *(_DWORD *)(v4 + 836) )
    {
      result = fsc_OverScaleOutline(v153, *(unsigned __int16 *)(v4 + 832));
      if ( (_DWORD)result )
        return result;
      v11 = *(_WORD *)(v4 + 832);
      v12 = v4 + 784;
    }
    v14 = *(_DWORD *)(v4 + 944);
    *(_QWORD *)(v4 + 760) = *(_QWORD *)(*(_QWORD *)(v4 + 232) + 24LL) + *(unsigned int *)(v4 + 548);
    *(_DWORD *)(v4 + 736) = v14;
    if ( *(_DWORD *)(v4 + 1068) )
    {
      if ( *(_DWORD *)(v4 + 836) )
      {
        v15 = *(_WORD *)(v4 + 832) * *(_WORD *)(v4 + 1072);
        v13 = *(_WORD *)(v4 + 832) * *(_WORD *)(v4 + 1074);
      }
      else
      {
        v98 = *(_WORD *)(v4 + 1076);
        v13 = *(_WORD *)(v4 + 1074);
        if ( (v98 & 1) != 0 )
        {
          v15 = 6 * *(_WORD *)(v4 + 1072);
          if ( (v98 & 0x10) != 0 )
            v13 *= 5;
        }
        else
        {
          v15 = *(_WORD *)(v4 + 1072);
        }
      }
    }
    else
    {
      v15 = 0;
    }
    result = fsc_MeasureGlyph(v153, v12, (int *)(v4 + 736), *(_WORD *)(v4 + 312), v11, v15, v13);
    if ( (_DWORD)result == 4869 )
    {
      *(_WORD *)(v4 + 312) &= ~4u;
      result = fsc_MeasureGlyph(v153, v12, (int *)(v4 + 736), *(_WORD *)(v4 + 312), v11, v15, v13);
    }
    if ( !(_DWORD)result )
    {
      if ( *(_DWORD *)(v4 + 836) )
      {
        v105 = *(unsigned __int16 *)(v4 + 832);
        if ( *(_DWORD *)(v4 + 840) )
        {
          *(_WORD *)(v4 + 696) = (int)(mth_DivShiftLong(*(unsigned int *)(v4 + 804), v105) + 31) >> 6;
          *(_WORD *)(v4 + 700) = (int)(mth_DivShiftLong(*(unsigned int *)(v4 + 808), v137) + 32) >> 6;
          *(_WORD *)(v4 + 698) = (int)(mth_DivShiftLong(*(unsigned int *)(v4 + 812), v138) + 31) >> 6;
          v140 = (int)(mth_DivShiftLong(*(unsigned int *)(v4 + 816), v139) + 32) >> 6;
          *v7 = v140;
          if ( v142 == v141 )
            *(_WORD *)(v4 + 700) = v141 + 1;
          if ( *(_WORD *)(v4 + 698) != (_WORD)v140 )
            goto LABEL_17;
          v110 = v140 + 1;
        }
        else
        {
          *(_WORD *)(v4 + 696) = mth_DivShiftLong((unsigned int)*(__int16 *)(v4 + 792), v105);
          *(_WORD *)(v4 + 700) = mth_DivShiftLong((unsigned int)(__int16)(v106 + *(_WORD *)(v4 + 796) - 1), v106);
          *(_WORD *)(v4 + 698) = mth_DivShiftLong((unsigned int)*(__int16 *)(v4 + 794), v107);
          v110 = mth_DivShiftLong((unsigned int)(__int16)(v108 + *(_WORD *)(v4 + 790) - v109), v108);
        }
        *v7 = v110;
      }
LABEL_17:
      v16 = *(__int64 **)(v4 + 448);
      v17 = *v7 << 6;
      v18 = *v16;
      v19 = v16[1];
      v20 = *(_WORD *)(v16[8] + 2LL * *((__int16 *)v16 + 40) - 2);
      v21 = (unsigned __int16)(v20 + 2);
      v22 = (unsigned __int16)(v20 + 1);
      v23 = (*(__int16 *)(v4 + 696) << 6) - *(_DWORD *)(*v16 + 4 * v22);
      v24 = *(_DWORD *)(*v16 + 4 * v21) - *(_DWORD *)(*v16 + 4 * v22);
      v25 = v17 - *(_DWORD *)(v19 + 4 * v22);
      LODWORD(v16) = *(_DWORD *)(v19 + 4 * v21) - *(_DWORD *)(v19 + 4 * v22);
      v26 = (unsigned __int16)(v20 + 5);
      v155 = __PAIR64__(v25, v23);
      v23 <<= 10;
      v27 = v17 - *(_DWORD *)(v19 + 4 * v26) - *(_DWORD *)(v19 + 4LL * (unsigned __int16)(v20 + 6));
      LODWORD(v18) = *(_DWORD *)(v18 + 4LL * (unsigned __int16)(v20 + 6)) - *(_DWORD *)(v18 + 4 * v26);
      *(_DWORD *)(a2 + 80) = v23;
      v28 = HIDWORD(v155);
      *(_DWORD *)(a2 + 64) = v23;
      *(_DWORD *)(a2 + 68) = v28 << 10;
      v157 = v27;
      *(_DWORD *)(a2 + 72) = v24 << 10;
      *(_DWORD *)(a2 + 84) = v25 << 10;
      *(_DWORD *)(a2 + 52) = v27 << 10;
      v156 = v18;
      *(_DWORD *)(a2 + 60) = v157 << 10;
      LODWORD(v18) = (_DWORD)v18 << 10;
      *(_DWORD *)(a2 + 48) = v18;
      *(_DWORD *)(a2 + 56) = v18;
      *(_DWORD *)(a2 + 76) = (_DWORD)v16 << 10;
      v29 = *(__int64 **)(v4 + 448);
      v30 = *(__int16 *)(v4 + 696) << 6;
      v31 = *v29;
      v32 = v29[1];
      LOWORD(v18) = *(_WORD *)(v29[8] + 2LL * *((__int16 *)v29 + 40) - 2);
      v33 = (unsigned __int16)(v18 + 4);
      v34 = (unsigned __int16)(v18 + 3);
      v36 = *(_DWORD *)(*v29 + 4 * v34) - *(_DWORD *)(*v29 + 4 * v33);
      v37 = *(_DWORD *)(v32 + 4 * v34) - *(_DWORD *)(v32 + 4 * v33);
      LODWORD(v33) = *v7 << 6;
      LODWORD(v148) = v30 - *(_DWORD *)(*v29 + 4 * v34);
      v35 = v148;
      LODWORD(v33) = v33 - *(_DWORD *)(v32 + 4 * v34);
      v38 = (unsigned __int16)(v18 + 8);
      LOWORD(v18) = v18 + 7;
      HIDWORD(v148) = v33;
      LODWORD(v29) = *(_DWORD *)(v32 + 4 * v38) - *(_DWORD *)(v32 + 4LL * (unsigned __int16)v18);
      v39 = v30 - *(_DWORD *)(v31 + 4LL * (unsigned __int16)v18) - *(_DWORD *)(v31 + 4 * v38);
      *(_DWORD *)(a2 + 200) = (_DWORD)v33 << 10;
      *(_DWORD *)(a2 + 216) = (_DWORD)v33 << 10;
      v147 = (int)v29;
      v146 = v39;
      *(_DWORD *)(a2 + 192) = (_DWORD)v29 << 10;
      v39 <<= 10;
      *(_DWORD *)(a2 + 180) = v39;
      *(_DWORD *)(a2 + 188) = v39;
      *(_DWORD *)(a2 + 184) = (_DWORD)v29 << 10;
      *(_DWORD *)(a2 + 208) = v37 << 10;
      v40 = v154;
      v35 <<= 10;
      LODWORD(v38) = v154;
      *(_DWORD *)(a2 + 212) = v35;
      *(_DWORD *)(a2 + 196) = v35;
      *(_DWORD *)(a2 + 204) = v36 << 10;
      LODWORD(v33) = *(unsigned __int16 *)(v4 + 384);
      *(_DWORD *)(a2 + 44) = 0;
      scl_ScaleAdvanceWidth(v38, a2 + 40, v33, *(_DWORD *)(v4 + 360), *(_WORD *)(v4 + 316), v4 + 320);
      v41 = *(_WORD *)(v4 + 386);
      *(_DWORD *)(a2 + 172) = 0;
      v42 = *(_WORD *)(v4 + 316);
      if ( *(_DWORD *)(v4 + 360) )
      {
        v43 = CompDiv((unsigned int)v42, v41 * (__int64)*(int *)(v40 + 388));
        *(_DWORD *)(v44 + 4) = v43;
        if ( v43 )
          *(_DWORD *)(v44 + 4) = v43 + 0x10000;
      }
      else
      {
        LODWORD(v154) = v41 << 16;
        HIDWORD(v154) = v41 >> 15;
        v82 = CompDiv((unsigned int)v42, v154);
        v84 = (_DWORD *)(v83 + 4);
        *(_DWORD *)(v83 + 4) = v82;
        if ( v82 )
          *v84 = v82 + 0x10000;
        mth_FixXYMul(v83, v84, v4 + 320);
      }
      v45 = (__int16 *)(a2 + 98);
      v46 = (__int16 *)(a2 + 102);
      *(_OWORD *)(v4 + 848) = *(_OWORD *)(a2 + 40);
      *(_OWORD *)(v4 + 864) = *(_OWORD *)(a2 + 56);
      *(_OWORD *)(v4 + 880) = *(_OWORD *)(a2 + 72);
      *(_OWORD *)(v4 + 896) = *(_OWORD *)v44;
      *(_OWORD *)(v4 + 912) = *(_OWORD *)(v44 + 16);
      *(_OWORD *)(v4 + 928) = *(_OWORD *)(v44 + 32);
      *(_WORD *)(a2 + 98) = *(_WORD *)(v4 + 698);
      *(_WORD *)(a2 + 102) = *v7;
      *(_QWORD *)(a2 + 88) = 0LL;
      *(_WORD *)(a2 + 232) = 0;
      if ( (*(_BYTE *)(v4 + 1076) & 1) != 0 )
      {
        v47 = *(_DWORD *)(a2 + 80) + 3;
        *(_DWORD *)(a2 + 72) = (*(_DWORD *)(a2 + 72) + 3) / 6;
        v48 = (unsigned __int64)(715827883LL * v47) >> 32;
        v49 = *(_DWORD *)(a2 + 48) + 3;
        *(_DWORD *)(a2 + 80) = (v48 >> 31) + v48;
        v50 = (unsigned __int64)(715827883LL * v49) >> 32;
        v51 = *(_DWORD *)(a2 + 64) + 3;
        *(_DWORD *)(a2 + 48) = (v50 >> 31) + v50;
        v52 = (unsigned __int64)(715827883LL * v51) >> 32;
        v53 = *(_DWORD *)(a2 + 56) + 3;
        *(_DWORD *)(a2 + 64) = (v52 >> 31) + v52;
        v54 = (unsigned __int64)(715827883LL * v53) >> 32;
        v55 = *(_DWORD *)(a2 + 204) + 3;
        *(_DWORD *)(a2 + 56) = (v54 >> 31) + v54;
        v56 = (unsigned __int64)(715827883LL * v55) >> 32;
        v57 = *(_DWORD *)(a2 + 212) + 3;
        *(_DWORD *)(a2 + 204) = (v56 >> 31) + v56;
        v58 = (unsigned __int64)(715827883LL * v57) >> 32;
        v59 = *(_DWORD *)(a2 + 180) + 3;
        *(_DWORD *)(a2 + 212) = (v58 >> 31) + v58;
        v60 = (unsigned __int64)(715827883LL * v59) >> 32;
        v61 = *(_DWORD *)(a2 + 196) + 3;
        *(_DWORD *)(a2 + 180) = (v60 >> 31) + v60;
        v62 = (unsigned __int64)(715827883LL * v61) >> 32;
        v63 = *(_DWORD *)(a2 + 188) + 3;
        *(_DWORD *)(a2 + 196) = (v62 >> 31) + v62;
        *(_DWORD *)(a2 + 188) = v63 / 6;
        v64 = *(_WORD *)(v4 + 696);
        if ( v64 < 0 )
        {
          v65 = 5 - v64;
          v66 = -715827883;
        }
        else
        {
          v65 = v64;
          v66 = 715827883;
        }
        v67 = (unsigned __int64)(v65 * (__int64)v66) >> 32;
        v68 = (_WORD *)(a2 + 100);
        v69 = v67 + (v67 >> 31);
        *(_WORD *)(a2 + 100) = v67 + (v67 >> 31);
        v70 = *(__int16 *)(v4 + 700);
        if ( v70 + 5 < 0 )
          v71 = 715827883LL * *(__int16 *)(v4 + 700);
        else
          v71 = 715827883LL * (v70 + 5);
        v72 = (_WORD *)(a2 + 104);
        v73 = (__int16 *)(a2 + 96);
        v74 = (HIDWORD(v71) >> 31) + HIDWORD(v71);
        *(_WORD *)(a2 + 104) = v74;
        LOWORD(v74) = v74 - v69;
        v75 = (_WORD *)(v4 + 688);
        *(_WORD *)(a2 + 96) = (v74 + 3) & 0xFFFC;
        v76 = (*(_BYTE *)(v4 + 1076) & 0x10) == 0;
        v77 = *(_OWORD *)(v4 + 704);
        *(_OWORD *)(v4 + 784) = *(_OWORD *)(v4 + 688);
        v78 = *(_OWORD *)(v4 + 720);
        *(_OWORD *)(v4 + 800) = v77;
        *(_OWORD *)(v4 + 816) = v78;
        *(_WORD *)(v4 + 688) = *(_WORD *)(a2 + 96);
        *(_WORD *)(v4 + 696) = *v68;
        *(_WORD *)(v4 + 700) = *(_WORD *)(a2 + 104);
        if ( !v76 )
        {
          v113 = *(_DWORD *)(a2 + 84) + 2;
          *(_DWORD *)(a2 + 76) = (*(_DWORD *)(a2 + 76) + 2) / 5;
          v114 = (unsigned __int64)(1717986919LL * v113) >> 32;
          v115 = *(_DWORD *)(a2 + 52) + 2;
          *(_DWORD *)(a2 + 84) = ((unsigned int)v114 >> 31) + (v114 >> 1);
          v116 = (unsigned __int64)(1717986919LL * v115) >> 32;
          v117 = *(_DWORD *)(a2 + 68) + 2;
          *(_DWORD *)(a2 + 52) = ((unsigned int)v116 >> 31) + (v116 >> 1);
          v118 = (unsigned __int64)(1717986919LL * v117) >> 32;
          v119 = *(_DWORD *)(a2 + 60) + 2;
          *(_DWORD *)(a2 + 68) = ((unsigned int)v118 >> 31) + (v118 >> 1);
          v120 = (unsigned __int64)(1717986919LL * v119) >> 32;
          v121 = *(_DWORD *)(a2 + 208) + 2;
          *(_DWORD *)(a2 + 60) = ((unsigned int)v120 >> 31) + (v120 >> 1);
          v122 = (unsigned __int64)(1717986919LL * v121) >> 32;
          v123 = *(_DWORD *)(a2 + 216) + 2;
          *(_DWORD *)(a2 + 208) = ((unsigned int)v122 >> 31) + (v122 >> 1);
          v124 = (unsigned __int64)(1717986919LL * v123) >> 32;
          v125 = *(_DWORD *)(a2 + 184) + 2;
          *(_DWORD *)(a2 + 216) = ((unsigned int)v124 >> 31) + (v124 >> 1);
          v126 = (unsigned __int64)(1717986919LL * v125) >> 32;
          v127 = *(_DWORD *)(a2 + 200) + 2;
          *(_DWORD *)(a2 + 184) = ((unsigned int)v126 >> 31) + (v126 >> 1);
          v128 = v127 / 5;
          v129 = *(_DWORD *)(a2 + 192);
          *(_DWORD *)(a2 + 200) = v128;
          *(_DWORD *)(a2 + 192) = (v129 + 2) / 5;
          v130 = *(_WORD *)(v4 + 698);
          if ( v130 < 0 )
          {
            v131 = 4 - v130;
            v132 = -1717986919;
          }
          else
          {
            v131 = v130;
            v132 = 1717986919;
          }
          *v45 = ((unsigned int)((unsigned __int64)(v131 * (__int64)v132) >> 32) >> 31)
               + ((int)((unsigned __int64)(v131 * (__int64)v132) >> 32) >> 1);
          v133 = *v7;
          if ( v133 + 4 < 0 )
            v134 = v133 / 5;
          else
            LOWORD(v134) = (__int16)(v133 + 4) / 5;
          *v46 = v134;
          *(_WORD *)(a2 + 232) = *v7 - *(_WORD *)(v4 + 698);
          v135 = *v7;
          if ( *v7 < 0 )
          {
            v143 = -v135 % 5;
            *(_WORD *)(a2 + 234) = 5 - v143;
            if ( (unsigned __int16)v143 > 5u && (_WORD)v143 != 0 )
              *(_WORD *)(a2 + 234) = 5;
          }
          else
          {
            v136 = v135 % 5;
            *(_WORD *)(a2 + 234) = v136;
            if ( !(_WORD)v136 )
              *(_WORD *)(a2 + 234) = 5;
          }
        }
        v79 = *(_DWORD *)(v4 + 820);
        *(_DWORD *)(v4 + 724) = *v73 * (*v7 - *(__int16 *)(v4 + 698));
        *(_DWORD *)(a2 + 32) = v79;
      }
      else
      {
        v68 = (_WORD *)(a2 + 100);
        *(_WORD *)(a2 + 100) = *(_WORD *)(v4 + 696);
        v72 = (_WORD *)(a2 + 104);
        v75 = (_WORD *)(v4 + 688);
        *(_WORD *)(a2 + 104) = *(_WORD *)(v4 + 700);
        v73 = (__int16 *)(a2 + 96);
        *(_WORD *)(a2 + 96) = *(_WORD *)(v4 + 688);
      }
      if ( *(_DWORD *)(v4 + 836) )
      {
        v111 = (*(_WORD *)(v4 + 700) - *(_WORD *)(v4 + 696) + 3) & 0xFFFC;
        *v73 = v111;
        v112 = *(_DWORD *)(v4 + 820);
        *(_DWORD *)(v4 + 724) = v111 * (*(__int16 *)(v4 + 694) - *(__int16 *)(v4 + 698));
        *(_DWORD *)(a2 + 32) = v112;
      }
      v80 = a2 + 28;
      *v75 = *v73;
      v81 = a2 + 24;
      *(_DWORD *)(a2 + 20) = *(_DWORD *)(v4 + 724);
      *(_DWORD *)(a2 + 24) = *(_DWORD *)(v4 + 740);
      *(_DWORD *)(a2 + 28) = *(_DWORD *)(v4 + 744);
LABEL_30:
      if ( *(_DWORD *)(v4 + 1152) )
      {
        v144 = (*v72 - *v68 + 3) & 0xFFFC;
        v145 = v144 * (*v46 - *v45);
        *v73 = v144;
        *(_DWORD *)(a2 + 20) = v145;
      }
      fsg_CheckWorkSpaceForFit(v4 + 480, *(_DWORD *)(v4 + 944), *(_DWORD *)(v4 + 736), v81, v80);
      result = 0LL;
      *(_DWORD *)(v4 + 680) = 0;
      *(_DWORD *)(v4 + 948) = 0;
      *(_DWORD *)(v4 + 420) = 62;
    }
  }
  return result;
}
