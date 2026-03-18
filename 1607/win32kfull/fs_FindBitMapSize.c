/*
 * XREFs of fs_FindBitMapSize @ 0x1C00C408C
 * Callers:
 *     lGetGlyphBitmap @ 0x1C00C267C (lGetGlyphBitmap.c)
 *     lQueryTTOutline @ 0x1C0117134 (lQueryTTOutline.c)
 *     lGGOBitmap @ 0x1C02430B4 (lGGOBitmap.c)
 * Callees:
 *     sfac_ReadGlyphMetrics @ 0x1C001C940 (sfac_ReadGlyphMetrics.c)
 *     sbit_GetMetrics @ 0x1C001D128 (sbit_GetMetrics.c)
 *     fsc_RemoveDups @ 0x1C00C2F1C (fsc_RemoveDups.c)
 *     fsc_MeasureGlyph @ 0x1C00C3070 (fsc_MeasureGlyph.c)
 *     fsg_CheckWorkSpaceForFit @ 0x1C00C4D60 (fsg_CheckWorkSpaceForFit.c)
 *     fs_SetUpKey @ 0x1C00C50AC (fs_SetUpKey.c)
 *     fsg_UpdateWorkSpaceElement @ 0x1C00C5110 (fsg_UpdateWorkSpaceElement.c)
 *     CompDiv @ 0x1C00F85F4 (CompDiv.c)
 *     scl_CalcLSBsAndAdvanceWidths @ 0x1C00FEE3C (scl_CalcLSBsAndAdvanceWidths.c)
 *     scl_ScaleAdvanceWidth @ 0x1C0106AE0 (scl_ScaleAdvanceWidth.c)
 *     mth_FixXYMul @ 0x1C0106B94 (mth_FixXYMul.c)
 *     fsc_OverScaleOutline @ 0x1C0126618 (fsc_OverScaleOutline.c)
 *     mth_DivShiftLong @ 0x1C0131010 (mth_DivShiftLong.c)
 */

__int64 __fastcall fs_FindBitMapSize(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // r8
  __int16 *v9; // r12
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 result; // rax
  __int16 v13; // r14
  __int64 v14; // rsi
  __int16 v15; // bx
  int v16; // eax
  __int16 v17; // di
  __int64 *v18; // rdx
  int v19; // r14d
  __int64 v20; // r10
  __int64 v21; // r9
  unsigned __int16 v22; // r11
  __int64 v23; // r8
  __int64 v24; // rcx
  unsigned __int16 v25; // ax
  int v26; // esi
  int v27; // edi
  int v28; // ebx
  __int64 v29; // rcx
  int v30; // eax
  int v31; // r14d
  __int64 v32; // rbx
  __int16 v33; // ax
  __int16 v34; // r8
  int v35; // eax
  __int64 v36; // r11
  __int16 *v37; // rdi
  __int16 *v38; // rsi
  int v39; // ecx
  unsigned int v40; // edx
  int v41; // ecx
  unsigned int v42; // edx
  int v43; // ecx
  unsigned int v44; // edx
  int v45; // ecx
  unsigned int v46; // edx
  int v47; // ecx
  unsigned int v48; // edx
  int v49; // ecx
  unsigned int v50; // edx
  int v51; // ecx
  unsigned int v52; // edx
  int v53; // ecx
  unsigned int v54; // edx
  int v55; // ecx
  __int16 v56; // ax
  int v57; // ecx
  int v58; // eax
  unsigned int v59; // edx
  _WORD *v60; // r10
  unsigned int v61; // r9d
  int v62; // ecx
  __int64 v63; // kr00_8
  _WORD *v64; // r11
  __int16 *v65; // r8
  int v66; // edx
  _WORD *v67; // r9
  bool v68; // zf
  __int128 v69; // xmm1
  __int128 v70; // xmm0
  int v71; // eax
  __int64 v72; // rbx
  int v73; // r9d
  int v74; // ebx
  int v75; // r11d
  int v76; // r10d
  int v77; // r9d
  unsigned __int64 v78; // kr08_8
  int v79; // ecx
  int v80; // eax
  int v81; // r8d
  __int16 v82; // ax
  __int16 v83; // r8
  int v84; // eax
  __int64 v85; // r10
  int v86; // eax
  int v87; // eax
  __int64 v88; // r11
  _DWORD *v89; // rdx
  __int64 v90; // rdx
  unsigned __int16 v91; // r10
  unsigned __int16 v92; // r10
  unsigned __int16 v93; // r10
  __int16 v94; // r9
  __int16 v95; // ax
  __int16 v96; // dx
  int v97; // eax
  int v98; // ecx
  int v99; // edx
  int v100; // ecx
  int v101; // edx
  int v102; // ecx
  int v103; // edx
  int v104; // ecx
  int v105; // edx
  int v106; // ecx
  int v107; // edx
  int v108; // ecx
  int v109; // edx
  int v110; // ecx
  int v111; // edx
  int v112; // ecx
  int v113; // edx
  int v114; // ecx
  __int16 v115; // ax
  int v116; // ecx
  int v117; // eax
  int v118; // ecx
  int v119; // edx
  int v120; // ecx
  int v121; // ecx
  int v122; // eax
  __int64 v123; // r10
  _DWORD *v124; // rdx
  __int64 v125; // rdx
  _DWORD *v126; // r8
  __int16 i; // dx
  __int16 v128; // r8
  unsigned __int16 v129; // r10
  unsigned __int16 v130; // r10
  unsigned __int16 v131; // r10
  int v132; // eax
  __int16 v133; // r11
  __int16 v134; // r9
  int v135; // ecx
  __int16 v136; // dx
  int v137; // ecx
  int v138; // [rsp+60h] [rbp-49h] BYREF
  int v139; // [rsp+64h] [rbp-45h]
  unsigned __int64 v140; // [rsp+68h] [rbp-41h] BYREF
  int v141; // [rsp+70h] [rbp-39h] BYREF
  int v142; // [rsp+74h] [rbp-35h]
  int v143; // [rsp+78h] [rbp-31h] BYREF
  int v144; // [rsp+7Ch] [rbp-2Dh]
  int v145; // [rsp+80h] [rbp-29h] BYREF
  __int64 v146; // [rsp+88h] [rbp-21h] BYREF
  _QWORD v147[14]; // [rsp+90h] [rbp-19h] BYREF
  __int64 v148; // [rsp+110h] [rbp+67h] BYREF
  __int64 v149; // [rsp+120h] [rbp+77h] BYREF
  int v150; // [rsp+128h] [rbp+7Fh] BYREF
  int v151; // [rsp+12Ch] [rbp+83h]

  if ( !a1[1] || !a1[4] || !a1[5] )
    return 4099LL;
  v5 = fs_SetUpKey(a1, 30LL, &v148, a4);
  v6 = v5;
  if ( !v5 )
    return (unsigned int)v148;
  v7 = *(_QWORD *)(v5 + 232);
  v8 = *(_QWORD *)(v7 + 24);
  if ( *(_QWORD *)(v6 + 264) != v8 )
  {
    *(_QWORD *)(v6 + 432) = v8 + *(unsigned int *)(v6 + 480);
    *(_QWORD *)(v6 + 440) = v8 + *(unsigned int *)(v6 + 484);
    *(_QWORD *)(v6 + 448) = v8 + *(unsigned int *)(v6 + 488);
    *(_QWORD *)(v6 + 456) = v8 + *(unsigned int *)(v6 + 492);
    *(_QWORD *)(v6 + 464) = v8 + *(unsigned int *)(v6 + 496);
    *(_QWORD *)(v6 + 472) = v8 + *(unsigned int *)(v6 + 548);
    fsg_UpdateWorkSpaceElement(v6 + 480, v6 + 432);
    v7 = *(_QWORD *)(v6 + 232);
    *(_OWORD *)(v6 + 240) = *(_OWORD *)v7;
    *(_OWORD *)(v6 + 256) = *(_OWORD *)(v7 + 16);
    *(_OWORD *)(v6 + 272) = *(_OWORD *)(v7 + 32);
    *(_OWORD *)(v6 + 288) = *(_OWORD *)(v7 + 48);
    *(_QWORD *)(v6 + 304) = *(_QWORD *)(v7 + 64);
  }
  v9 = (__int16 *)(v6 + 694);
  v10 = *(_QWORD *)(v7 + 32) + *(unsigned int *)(v6 + 584);
  v146 = v10;
  if ( *(_DWORD *)(v6 + 844) && (*(_BYTE *)(v6 + 1076) & 1) == 0 )
  {
    result = sbit_GetMetrics(
               v6 + 964,
               v6,
               (int *)&v149,
               &v150,
               &v138,
               &v143,
               (int *)&v140,
               &v141,
               (_WORD *)(v6 + 694),
               &v148,
               &v145,
               &v146);
    if ( (_DWORD)result )
      return result;
    v74 = v150;
    v75 = v151;
    v76 = v138;
    v77 = v139;
    v78 = v140;
    v79 = v141;
    *(_DWORD *)(a2 + 72) = (_DWORD)v149 << 10;
    *(_DWORD *)(a2 + 76) = HIDWORD(v149) << 10;
    *(_DWORD *)(a2 + 204) = v143 << 10;
    *(_DWORD *)(a2 + 208) = v144 << 10;
    v80 = v142 << 10;
    *(_DWORD *)(a2 + 184) = v142 << 10;
    *(_DWORD *)(a2 + 192) = v80;
    v77 <<= 10;
    v79 <<= 10;
    v74 <<= 10;
    *(_DWORD *)(a2 + 80) = v74;
    v75 <<= 10;
    v76 <<= 10;
    *(_DWORD *)(a2 + 64) = v74;
    *(_DWORD *)(a2 + 52) = v77;
    *(_DWORD *)(a2 + 212) = (_DWORD)v78 << 10;
    *(_DWORD *)(a2 + 180) = v79;
    *(_DWORD *)(a2 + 60) = v77;
    *(_DWORD *)(a2 + 196) = (_DWORD)v78 << 10;
    *(_DWORD *)(a2 + 188) = v79;
    *(_DWORD *)(a2 + 84) = v75;
    *(_DWORD *)(a2 + 48) = v76;
    *(_DWORD *)(a2 + 216) = HIDWORD(v78) << 10;
    *(_DWORD *)(a2 + 68) = v75;
    *(_DWORD *)(a2 + 56) = v76;
    *(_DWORD *)(a2 + 200) = HIDWORD(v78) << 10;
    result = sfac_ReadGlyphMetrics(
               v6,
               *(unsigned __int16 *)(v6 + 216),
               v6 + 384,
               v6 + 386,
               (__int64)&v150,
               (__int64)&v149);
    if ( (_DWORD)result )
      return result;
    v81 = *(unsigned __int16 *)(v6 + 384);
    *(_DWORD *)(a2 + 44) = 0;
    scl_ScaleAdvanceWidth(v10, a2 + 40, v81, *(_DWORD *)(v6 + 360), *(_WORD *)(v6 + 316), v6 + 320);
    v82 = *(_WORD *)(v6 + 386);
    *(_DWORD *)(a2 + 172) = 0;
    v83 = *(_WORD *)(v6 + 316);
    if ( *(_DWORD *)(v6 + 360) )
    {
      v84 = CompDiv((unsigned int)v83, v82 * (__int64)*(int *)(v10 + 388));
      *(_DWORD *)(v85 + 4) = v84;
      if ( v84 )
        *(_DWORD *)(v85 + 4) = v84 + 0x10000;
    }
    else
    {
      LODWORD(v149) = v82 << 16;
      HIDWORD(v149) = v82 >> 15;
      v122 = CompDiv((unsigned int)v83, v149);
      v124 = (_DWORD *)(v123 + 4);
      *(_DWORD *)(v123 + 4) = v122;
      if ( v122 )
        *v124 = v122 + 0x10000;
      mth_FixXYMul(v123, v124, v6 + 320);
    }
    v60 = (_WORD *)(a2 + 100);
    *(_WORD *)(a2 + 100) = *(_WORD *)(v6 + 696);
    v64 = (_WORD *)(a2 + 104);
    v37 = (__int16 *)(a2 + 98);
    *(_WORD *)(a2 + 104) = *(_WORD *)(v6 + 700);
    v38 = (__int16 *)(a2 + 102);
    v65 = (__int16 *)(a2 + 96);
    *(_WORD *)(a2 + 98) = *(_WORD *)(v6 + 698);
    v73 = a2 + 24;
    v72 = a2 + 28;
    *(_WORD *)(a2 + 102) = *v9;
    *(_WORD *)(a2 + 96) = v148;
    v86 = v145;
    *(_QWORD *)(a2 + 88) = 0LL;
    *(_DWORD *)(a2 + 20) = v86;
    *(_DWORD *)(a2 + 24) = v146;
    *(_DWORD *)(a2 + 28) = 0;
    *(_DWORD *)(a2 + 32) = 0;
    goto LABEL_30;
  }
  if ( *(_DWORD *)(v6 + 356) )
  {
    v125 = *(_QWORD *)(v6 + 448);
    v126 = *(_DWORD **)v125;
    for ( i = *(_WORD *)(*(_QWORD *)(v125 + 64) + 2LL * (*(__int16 *)(v125 + 80) - 1)); i >= 0; --i )
      ++*v126++;
  }
  v11 = *(_QWORD *)(v6 + 448);
  v147[3] = *(_QWORD *)v11;
  v147[4] = *(_QWORD *)(v11 + 8);
  v147[1] = *(_QWORD *)(v11 + 56);
  v147[2] = *(_QWORD *)(v11 + 64);
  v147[5] = *(_QWORD *)(v11 + 48);
  v147[6] = *(_QWORD *)(v11 + 88);
  LOWORD(v147[0]) = *(_WORD *)(v11 + 80);
  result = fsc_RemoveDups((__int64)v147);
  if ( !(_DWORD)result )
  {
    v13 = 1;
    v14 = v6 + 688;
    v15 = 0;
    if ( *(_DWORD *)(v6 + 836) )
    {
      result = fsc_OverScaleOutline(v147, *(unsigned __int16 *)(v6 + 832));
      if ( (_DWORD)result )
        return result;
      v13 = *(_WORD *)(v6 + 832);
      v14 = v6 + 784;
    }
    v16 = *(_DWORD *)(v6 + 944);
    *(_QWORD *)(v6 + 760) = *(_QWORD *)(*(_QWORD *)(v6 + 232) + 24LL) + *(unsigned int *)(v6 + 548);
    *(_DWORD *)(v6 + 736) = v16;
    if ( *(_DWORD *)(v6 + 1068) )
    {
      if ( *(_DWORD *)(v6 + 836) )
      {
        v17 = *(_WORD *)(v6 + 832) * *(_WORD *)(v6 + 1072);
        v15 = *(_WORD *)(v6 + 832) * *(_WORD *)(v6 + 1074);
      }
      else
      {
        v128 = *(_WORD *)(v6 + 1076);
        v15 = *(_WORD *)(v6 + 1074);
        if ( (v128 & 1) != 0 )
        {
          v17 = 6 * *(_WORD *)(v6 + 1072);
          if ( (v128 & 0x10) != 0 )
            v15 *= 5;
        }
        else
        {
          v17 = *(_WORD *)(v6 + 1072);
        }
      }
    }
    else
    {
      v17 = 0;
    }
    result = fsc_MeasureGlyph(v147, v14, (int *)(v6 + 736), *(_WORD *)(v6 + 312), v13, v17, v15);
    if ( (_DWORD)result == 4869 )
    {
      *(_WORD *)(v6 + 312) &= ~4u;
      result = fsc_MeasureGlyph(v147, v14, (int *)(v6 + 736), *(_WORD *)(v6 + 312), v13, v17, v15);
    }
    if ( !(_DWORD)result )
    {
      if ( !*(_DWORD *)(v6 + 836) )
        goto LABEL_17;
      v90 = *(unsigned __int16 *)(v6 + 832);
      if ( *(_DWORD *)(v6 + 840) )
      {
        *(_WORD *)(v6 + 696) = (int)(mth_DivShiftLong(*(unsigned int *)(v6 + 804), v90) + 31) >> 6;
        *(_WORD *)(v6 + 700) = (int)(mth_DivShiftLong(*(unsigned int *)(v6 + 808), v129) + 32) >> 6;
        *(_WORD *)(v6 + 698) = (int)(mth_DivShiftLong(*(unsigned int *)(v6 + 812), v130) + 31) >> 6;
        v132 = (int)(mth_DivShiftLong(*(unsigned int *)(v6 + 816), v131) + 32) >> 6;
        *v9 = v132;
        if ( v134 == v133 )
          *(_WORD *)(v6 + 700) = v133 + 1;
        if ( *(_WORD *)(v6 + 698) != (_WORD)v132 )
        {
LABEL_17:
          scl_CalcLSBsAndAdvanceWidths(
            *(_QWORD *)(v6 + 448),
            *(__int16 *)(v6 + 696) << 6,
            *v9 << 6,
            (unsigned int)&v149,
            (__int64)&v150,
            (__int64)&v138,
            (__int64)&v148,
            (__int64)&v143);
          *(_DWORD *)(a2 + 72) = (_DWORD)v149 << 10;
          *(_DWORD *)(a2 + 76) = HIDWORD(v149) << 10;
          *(_DWORD *)(a2 + 80) = v150 << 10;
          *(_DWORD *)(a2 + 84) = v151 << 10;
          *(_DWORD *)(a2 + 48) = v138 << 10;
          *(_DWORD *)(a2 + 52) = v139 << 10;
          *(_DWORD *)(a2 + 64) = (_DWORD)v148 << 10;
          *(_DWORD *)(a2 + 68) = HIDWORD(v148) << 10;
          *(_DWORD *)(a2 + 56) = v143 << 10;
          *(_DWORD *)(a2 + 60) = v144 << 10;
          v18 = *(__int64 **)(v6 + 448);
          v19 = *(__int16 *)(v6 + 696) << 6;
          v20 = *v18;
          v21 = v18[1];
          v22 = *(_WORD *)(v18[8] + 2LL * (*((__int16 *)v18 + 40) - 1));
          v23 = (unsigned __int16)(v22 + 4);
          v24 = (unsigned __int16)(v22 + 3);
          v25 = v22 + 8;
          v22 += 7;
          v26 = v19 - *(_DWORD *)(*v18 + 4 * v24);
          v27 = *(_DWORD *)(*v18 + 4 * v24) - *(_DWORD *)(*v18 + 4 * v23);
          v28 = *(_DWORD *)(v21 + 4 * v24) - *(_DWORD *)(v21 + 4 * v23);
          LODWORD(v23) = (*v9 << 6) - *(_DWORD *)(v21 + 4 * v24);
          v29 = v25;
          v140 = __PAIR64__(v23, v26);
          LODWORD(v18) = *(_DWORD *)(v21 + 4LL * v25);
          v30 = *(_DWORD *)(v21 + 4LL * v22);
          v141 = v19 - *(_DWORD *)(v20 + 4LL * v22) - *(_DWORD *)(v20 + 4 * v29);
          LODWORD(v18) = (_DWORD)v18 - v30;
          v31 = v141 << 10;
          *(_DWORD *)(a2 + 200) = (_DWORD)v23 << 10;
          *(_DWORD *)(a2 + 180) = v31;
          *(_DWORD *)(a2 + 188) = v31;
          v142 = (int)v18;
          *(_DWORD *)(a2 + 192) = (_DWORD)v18 << 10;
          *(_DWORD *)(a2 + 216) = (_DWORD)v23 << 10;
          *(_DWORD *)(a2 + 184) = (_DWORD)v18 << 10;
          *(_DWORD *)(a2 + 208) = v28 << 10;
          v32 = v146;
          v26 <<= 10;
          LODWORD(v29) = v146;
          *(_DWORD *)(a2 + 212) = v26;
          *(_DWORD *)(a2 + 196) = v26;
          *(_DWORD *)(a2 + 204) = v27 << 10;
          LODWORD(v23) = *(unsigned __int16 *)(v6 + 384);
          *(_DWORD *)(a2 + 44) = 0;
          scl_ScaleAdvanceWidth(v29, a2 + 40, v23, *(_DWORD *)(v6 + 360), *(_WORD *)(v6 + 316), v6 + 320);
          v33 = *(_WORD *)(v6 + 386);
          *(_DWORD *)(a2 + 172) = 0;
          v34 = *(_WORD *)(v6 + 316);
          if ( *(_DWORD *)(v6 + 360) )
          {
            v35 = CompDiv((unsigned int)v34, v33 * (__int64)*(int *)(v32 + 388));
            *(_DWORD *)(v36 + 4) = v35;
            if ( v35 )
              *(_DWORD *)(v36 + 4) = v35 + 0x10000;
          }
          else
          {
            LODWORD(v148) = v33 << 16;
            HIDWORD(v148) = v33 >> 15;
            v87 = CompDiv((unsigned int)v34, v148);
            v89 = (_DWORD *)(v88 + 4);
            *(_DWORD *)(v88 + 4) = v87;
            if ( v87 )
              *v89 = v87 + 0x10000;
            mth_FixXYMul(v88, v89, v6 + 320);
          }
          v37 = (__int16 *)(a2 + 98);
          v38 = (__int16 *)(a2 + 102);
          *(_OWORD *)(v6 + 848) = *(_OWORD *)(a2 + 40);
          *(_OWORD *)(v6 + 864) = *(_OWORD *)(a2 + 56);
          *(_OWORD *)(v6 + 880) = *(_OWORD *)(a2 + 72);
          *(_OWORD *)(v6 + 896) = *(_OWORD *)v36;
          *(_OWORD *)(v6 + 912) = *(_OWORD *)(v36 + 16);
          *(_OWORD *)(v6 + 928) = *(_OWORD *)(v36 + 32);
          *(_WORD *)(a2 + 98) = *(_WORD *)(v6 + 698);
          *(_WORD *)(a2 + 102) = *v9;
          *(_QWORD *)(a2 + 88) = 0LL;
          *(_WORD *)(a2 + 232) = 0;
          if ( (*(_BYTE *)(v6 + 1076) & 1) == 0 )
          {
            v60 = (_WORD *)(a2 + 100);
            *(_WORD *)(a2 + 100) = *(_WORD *)(v6 + 696);
            v64 = (_WORD *)(a2 + 104);
            v67 = (_WORD *)(v6 + 688);
            *(_WORD *)(a2 + 104) = *(_WORD *)(v6 + 700);
            v65 = (__int16 *)(a2 + 96);
            *(_WORD *)(a2 + 96) = *(_WORD *)(v6 + 688);
            goto LABEL_27;
          }
          v39 = *(_DWORD *)(a2 + 80) + 3;
          *(_DWORD *)(a2 + 72) = (*(_DWORD *)(a2 + 72) + 3) / 6;
          v40 = (unsigned __int64)(715827883LL * v39) >> 32;
          v41 = *(_DWORD *)(a2 + 48) + 3;
          *(_DWORD *)(a2 + 80) = (v40 >> 31) + v40;
          v42 = (unsigned __int64)(715827883LL * v41) >> 32;
          v43 = *(_DWORD *)(a2 + 64) + 3;
          *(_DWORD *)(a2 + 48) = (v42 >> 31) + v42;
          v44 = (unsigned __int64)(715827883LL * v43) >> 32;
          v45 = *(_DWORD *)(a2 + 56) + 3;
          *(_DWORD *)(a2 + 64) = (v44 >> 31) + v44;
          v46 = (unsigned __int64)(715827883LL * v45) >> 32;
          v47 = *(_DWORD *)(a2 + 204) + 3;
          *(_DWORD *)(a2 + 56) = (v46 >> 31) + v46;
          v48 = (unsigned __int64)(715827883LL * v47) >> 32;
          v49 = *(_DWORD *)(a2 + 212) + 3;
          *(_DWORD *)(a2 + 204) = (v48 >> 31) + v48;
          v50 = (unsigned __int64)(715827883LL * v49) >> 32;
          v51 = *(_DWORD *)(a2 + 180) + 3;
          *(_DWORD *)(a2 + 212) = (v50 >> 31) + v50;
          v52 = (unsigned __int64)(715827883LL * v51) >> 32;
          v53 = *(_DWORD *)(a2 + 196) + 3;
          *(_DWORD *)(a2 + 180) = (v52 >> 31) + v52;
          v54 = (unsigned __int64)(715827883LL * v53) >> 32;
          v55 = *(_DWORD *)(a2 + 188) + 3;
          *(_DWORD *)(a2 + 196) = (v54 >> 31) + v54;
          *(_DWORD *)(a2 + 188) = v55 / 6;
          v56 = *(_WORD *)(v6 + 696);
          if ( v56 < 0 )
          {
            v57 = 5 - v56;
            v58 = -715827883;
          }
          else
          {
            v57 = v56;
            v58 = 715827883;
          }
          v59 = (unsigned __int64)(v57 * (__int64)v58) >> 32;
          v60 = (_WORD *)(a2 + 100);
          v61 = v59 + (v59 >> 31);
          *(_WORD *)(a2 + 100) = v59 + (v59 >> 31);
          v62 = *(__int16 *)(v6 + 700);
          if ( v62 + 5 < 0 )
            v63 = 715827883LL * *(__int16 *)(v6 + 700);
          else
            v63 = 715827883LL * (v62 + 5);
          v64 = (_WORD *)(a2 + 104);
          v65 = (__int16 *)(a2 + 96);
          v66 = (HIDWORD(v63) >> 31) + HIDWORD(v63);
          *(_WORD *)(a2 + 104) = v66;
          LOWORD(v66) = v66 - v61;
          v67 = (_WORD *)(v6 + 688);
          *(_WORD *)(a2 + 96) = (v66 + 3) & 0xFFFC;
          v68 = (*(_BYTE *)(v6 + 1076) & 0x10) == 0;
          v69 = *(_OWORD *)(v6 + 704);
          *(_OWORD *)(v6 + 784) = *(_OWORD *)(v6 + 688);
          v70 = *(_OWORD *)(v6 + 720);
          *(_OWORD *)(v6 + 800) = v69;
          *(_OWORD *)(v6 + 816) = v70;
          *(_WORD *)(v6 + 688) = *(_WORD *)(a2 + 96);
          *(_WORD *)(v6 + 696) = *v60;
          *(_WORD *)(v6 + 700) = *(_WORD *)(a2 + 104);
          if ( v68 )
          {
LABEL_26:
            v71 = *(_DWORD *)(v6 + 820);
            *(_DWORD *)(v6 + 724) = *v65 * (*v9 - *(__int16 *)(v6 + 698));
            *(_DWORD *)(a2 + 32) = v71;
LABEL_27:
            if ( *(_DWORD *)(v6 + 836) )
            {
              v96 = (*(_WORD *)(v6 + 700) - *(_WORD *)(v6 + 696) + 3) & 0xFFFC;
              *v65 = v96;
              v97 = *(_DWORD *)(v6 + 820);
              *(_DWORD *)(v6 + 724) = v96 * (*(__int16 *)(v6 + 694) - *(__int16 *)(v6 + 698));
              *(_DWORD *)(a2 + 32) = v97;
            }
            v72 = a2 + 28;
            *v67 = *v65;
            v73 = a2 + 24;
            *(_DWORD *)(a2 + 20) = *(_DWORD *)(v6 + 724);
            *(_DWORD *)(a2 + 24) = *(_DWORD *)(v6 + 740);
            *(_DWORD *)(a2 + 28) = *(_DWORD *)(v6 + 744);
LABEL_30:
            if ( *(_DWORD *)(v6 + 1152) )
            {
              v136 = (*v64 - *v60 + 3) & 0xFFFC;
              v137 = v136 * (*v38 - *v37);
              *v65 = v136;
              *(_DWORD *)(a2 + 20) = v137;
            }
            fsg_CheckWorkSpaceForFit(v6 + 480, *(_DWORD *)(v6 + 944), *(_DWORD *)(v6 + 736), v73, v72);
            *(_DWORD *)(v6 + 680) = 0;
            result = 0LL;
            *(_DWORD *)(v6 + 948) = 0;
            *(_DWORD *)(v6 + 420) = 62;
            return result;
          }
          v98 = *(_DWORD *)(a2 + 84) + 2;
          *(_DWORD *)(a2 + 76) = (*(_DWORD *)(a2 + 76) + 2) / 5;
          v99 = (unsigned __int64)(1717986919LL * v98) >> 32;
          v100 = *(_DWORD *)(a2 + 52) + 2;
          *(_DWORD *)(a2 + 84) = ((unsigned int)v99 >> 31) + (v99 >> 1);
          v101 = (unsigned __int64)(1717986919LL * v100) >> 32;
          v102 = *(_DWORD *)(a2 + 68) + 2;
          *(_DWORD *)(a2 + 52) = ((unsigned int)v101 >> 31) + (v101 >> 1);
          v103 = (unsigned __int64)(1717986919LL * v102) >> 32;
          v104 = *(_DWORD *)(a2 + 60) + 2;
          *(_DWORD *)(a2 + 68) = ((unsigned int)v103 >> 31) + (v103 >> 1);
          v105 = (unsigned __int64)(1717986919LL * v104) >> 32;
          v106 = *(_DWORD *)(a2 + 208) + 2;
          *(_DWORD *)(a2 + 60) = ((unsigned int)v105 >> 31) + (v105 >> 1);
          v107 = (unsigned __int64)(1717986919LL * v106) >> 32;
          v108 = *(_DWORD *)(a2 + 216) + 2;
          *(_DWORD *)(a2 + 208) = ((unsigned int)v107 >> 31) + (v107 >> 1);
          v109 = (unsigned __int64)(1717986919LL * v108) >> 32;
          v110 = *(_DWORD *)(a2 + 184) + 2;
          *(_DWORD *)(a2 + 216) = ((unsigned int)v109 >> 31) + (v109 >> 1);
          v111 = (unsigned __int64)(1717986919LL * v110) >> 32;
          v112 = *(_DWORD *)(a2 + 200) + 2;
          *(_DWORD *)(a2 + 184) = ((unsigned int)v111 >> 31) + (v111 >> 1);
          v113 = v112 / 5;
          v114 = *(_DWORD *)(a2 + 192);
          *(_DWORD *)(a2 + 200) = v113;
          *(_DWORD *)(a2 + 192) = (v114 + 2) / 5;
          v115 = *(_WORD *)(v6 + 698);
          if ( v115 < 0 )
          {
            v116 = 4 - v115;
            v117 = -1717986919;
          }
          else
          {
            v116 = v115;
            v117 = 1717986919;
          }
          *v37 = ((unsigned int)((unsigned __int64)(v116 * (__int64)v117) >> 32) >> 31)
               + ((int)((unsigned __int64)(v116 * (__int64)v117) >> 32) >> 1);
          v118 = *v9;
          if ( v118 + 4 < 0 )
            v119 = v118 / 5;
          else
            LOWORD(v119) = (__int16)(v118 + 4) / 5;
          *v38 = v119;
          *(_WORD *)(a2 + 232) = *v9 - *(_WORD *)(v6 + 698);
          v120 = *v9;
          if ( *v9 < 0 )
          {
            v135 = -v120 % 5;
            *(_WORD *)(a2 + 234) = 5 - v135;
            if ( (unsigned __int16)v135 <= 5u || (_WORD)v135 == 0 )
              goto LABEL_26;
          }
          else
          {
            v121 = v120 % 5;
            *(_WORD *)(a2 + 234) = v121;
            if ( (_WORD)v121 )
              goto LABEL_26;
          }
          *(_WORD *)(a2 + 234) = 5;
          goto LABEL_26;
        }
        v95 = v132 + 1;
      }
      else
      {
        *(_WORD *)(v6 + 696) = mth_DivShiftLong((unsigned int)*(__int16 *)(v6 + 792), v90);
        *(_WORD *)(v6 + 700) = mth_DivShiftLong((unsigned int)(__int16)(v91 + *(_WORD *)(v6 + 796) - 1), v91);
        *(_WORD *)(v6 + 698) = mth_DivShiftLong((unsigned int)*(__int16 *)(v6 + 794), v92);
        v95 = mth_DivShiftLong((unsigned int)(__int16)(v93 + *(_WORD *)(v6 + 790) - v94), v93);
      }
      *v9 = v95;
      goto LABEL_17;
    }
  }
  return result;
}
