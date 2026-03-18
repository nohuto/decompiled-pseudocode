/*
 * XREFs of fs_FindBitMapSize @ 0x1C00B3C18
 * Callers:
 *     lGetGlyphBitmap @ 0x1C00B209C (lGetGlyphBitmap.c)
 *     lQueryTTOutline @ 0x1C00F0EFC (lQueryTTOutline.c)
 *     lGGOBitmap @ 0x1C0246DCC (lGGOBitmap.c)
 * Callees:
 *     fsc_RemoveDups @ 0x1C00B2AAC (fsc_RemoveDups.c)
 *     fsc_MeasureGlyph @ 0x1C00B2BF0 (fsc_MeasureGlyph.c)
 *     fsg_CheckWorkSpaceForFit @ 0x1C00B47B4 (fsg_CheckWorkSpaceForFit.c)
 *     fs_SetUpKey @ 0x1C00B4B00 (fs_SetUpKey.c)
 *     fsg_UpdateWorkSpaceElement @ 0x1C00B4B64 (fsg_UpdateWorkSpaceElement.c)
 *     mth_FixXYMul @ 0x1C00BA740 (mth_FixXYMul.c)
 *     CompDiv @ 0x1C00D3E04 (CompDiv.c)
 *     scl_ScaleAdvanceWidth @ 0x1C00E4A90 (scl_ScaleAdvanceWidth.c)
 *     sfac_ReadGlyphMetrics @ 0x1C0110654 (sfac_ReadGlyphMetrics.c)
 *     sbit_GetMetrics @ 0x1C0110D58 (sbit_GetMetrics.c)
 *     fsc_OverScaleOutline @ 0x1C014E1E0 (fsc_OverScaleOutline.c)
 *     mth_DivShiftLong @ 0x1C0154994 (mth_DivShiftLong.c)
 */

__int64 __fastcall fs_FindBitMapSize(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // r8
  __int16 *v9; // r12
  __int64 v10; // rdi
  __int64 *v11; // rcx
  __int64 result; // rax
  __int16 v13; // di
  __int64 v14; // rsi
  __int16 v15; // r14
  int v16; // eax
  __int16 v17; // bx
  __int64 *v18; // r9
  int v19; // r14d
  __int64 v20; // r11
  __int64 v21; // r10
  __int16 v22; // bx
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // esi
  int v26; // edi
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  int v30; // r14d
  int v31; // rax^4
  __int64 *v32; // rdx
  int v33; // r14d
  __int64 v34; // r10
  __int64 v35; // r9
  __int64 v36; // r8
  __int64 v37; // rcx
  int v38; // esi
  int v39; // edi
  int v40; // ebx
  __int64 v41; // rcx
  int v42; // r14d
  __int64 v43; // rbx
  __int16 v44; // ax
  __int16 v45; // r8
  int v46; // eax
  __int64 v47; // r11
  __int16 *v48; // rdi
  __int16 *v49; // rsi
  int v50; // ecx
  unsigned int v51; // edx
  int v52; // ecx
  unsigned int v53; // edx
  int v54; // ecx
  unsigned int v55; // edx
  int v56; // ecx
  unsigned int v57; // edx
  int v58; // ecx
  unsigned int v59; // edx
  int v60; // ecx
  unsigned int v61; // edx
  int v62; // ecx
  unsigned int v63; // edx
  int v64; // ecx
  unsigned int v65; // edx
  int v66; // ecx
  __int16 v67; // ax
  int v68; // ecx
  int v69; // eax
  unsigned int v70; // edx
  _WORD *v71; // r10
  unsigned int v72; // r9d
  int v73; // ecx
  __int64 v74; // kr00_8
  _WORD *v75; // r8
  _WORD *v76; // r11
  int v77; // edx
  _WORD *v78; // r9
  int v79; // ecx
  __int128 v80; // xmm1
  __int128 v81; // xmm0
  int v82; // eax
  __int64 v83; // rbx
  int v84; // r9d
  int v85; // eax
  __int64 v86; // r11
  _DWORD *v87; // rdx
  int v88; // ebx
  int v89; // r9d
  int v90; // r11d
  int v91; // r10d
  __int64 v92; // kr08_8
  int v93; // ecx
  int v94; // eax
  int v95; // r8d
  __int16 v96; // ax
  __int16 v97; // r8
  int v98; // eax
  __int64 v99; // r10
  int v100; // eax
  __int64 v101; // rax
  _DWORD *v102; // rdx
  __int16 i; // r8
  int v104; // eax
  __int64 v105; // r10
  _DWORD *v106; // rdx
  __int64 v107; // rdx
  unsigned __int16 v108; // r10
  unsigned __int16 v109; // r10
  unsigned __int16 v110; // r10
  __int16 v111; // r9
  __int16 v112; // ax
  __int16 v113; // dx
  int v114; // eax
  unsigned __int16 v115; // r10
  unsigned __int16 v116; // r10
  unsigned __int16 v117; // r10
  int v118; // eax
  __int16 v119; // r11
  __int16 v120; // r9
  __int16 v121; // dx
  int v122; // ecx
  int v123; // [rsp+60h] [rbp-39h] BYREF
  int v124; // [rsp+64h] [rbp-35h]
  __int64 v125; // [rsp+68h] [rbp-31h] BYREF
  int v126; // [rsp+70h] [rbp-29h] BYREF
  int v127; // [rsp+74h] [rbp-25h] BYREF
  _DWORD v128[2]; // [rsp+78h] [rbp-21h] BYREF
  _DWORD v129[2]; // [rsp+80h] [rbp-19h] BYREF
  __int16 v130; // [rsp+88h] [rbp-11h] BYREF
  __int64 v131; // [rsp+90h] [rbp-9h]
  __int64 v132; // [rsp+98h] [rbp-1h]
  __int64 v133; // [rsp+A0h] [rbp+7h]
  __int64 v134; // [rsp+A8h] [rbp+Fh]
  __int64 v135; // [rsp+B0h] [rbp+17h]
  __int64 v136; // [rsp+B8h] [rbp+1Fh]
  __int64 v137; // [rsp+100h] [rbp+67h] BYREF
  __int64 v138; // [rsp+110h] [rbp+77h] BYREF
  int v139; // [rsp+118h] [rbp+7Fh] BYREF
  int v140; // [rsp+11Ch] [rbp+83h]

  if ( !a1[1] || !a1[4] || !a1[5] )
    return 4099LL;
  v5 = fs_SetUpKey(a1, 30LL, &v137, a4);
  v6 = v5;
  if ( !v5 )
    return (unsigned int)v137;
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
  v137 = v10;
  if ( *(_DWORD *)(v6 + 844) && (*(_BYTE *)(v6 + 1076) & 1) == 0 )
  {
    result = sbit_GetMetrics(
               (int)v6 + 964,
               v6,
               (unsigned int)v128,
               (unsigned int)&v138,
               (__int64)&v139,
               (__int64)v129,
               (__int64)&v125,
               (__int64)&v123,
               v6 + 694,
               (__int64)&v137,
               (__int64)&v126,
               (__int64)&v127);
    if ( (_DWORD)result )
      return result;
    v88 = v138;
    v89 = v140;
    v90 = HIDWORD(v138);
    v91 = v139;
    v92 = v125;
    v93 = v123;
    *(_DWORD *)(a2 + 72) = v128[0] << 10;
    *(_DWORD *)(a2 + 76) = v128[1] << 10;
    *(_DWORD *)(a2 + 204) = v129[0] << 10;
    *(_DWORD *)(a2 + 208) = v129[1] << 10;
    v94 = v124 << 10;
    *(_DWORD *)(a2 + 184) = v124 << 10;
    *(_DWORD *)(a2 + 192) = v94;
    v89 <<= 10;
    v93 <<= 10;
    v88 <<= 10;
    *(_DWORD *)(a2 + 80) = v88;
    v90 <<= 10;
    v91 <<= 10;
    *(_DWORD *)(a2 + 64) = v88;
    *(_DWORD *)(a2 + 52) = v89;
    *(_DWORD *)(a2 + 212) = (_DWORD)v92 << 10;
    *(_DWORD *)(a2 + 180) = v93;
    *(_DWORD *)(a2 + 60) = v89;
    *(_DWORD *)(a2 + 196) = (_DWORD)v92 << 10;
    *(_DWORD *)(a2 + 188) = v93;
    *(_DWORD *)(a2 + 84) = v90;
    *(_DWORD *)(a2 + 48) = v91;
    *(_DWORD *)(a2 + 216) = HIDWORD(v92) << 10;
    *(_DWORD *)(a2 + 68) = v90;
    *(_DWORD *)(a2 + 56) = v91;
    *(_DWORD *)(a2 + 200) = HIDWORD(v92) << 10;
    result = sfac_ReadGlyphMetrics(
               v6,
               *(unsigned __int16 *)(v6 + 216),
               (int)v6 + 384,
               (int)v6 + 386,
               (__int64)&v139,
               (__int64)&v138);
    if ( (_DWORD)result )
      return result;
    v95 = *(unsigned __int16 *)(v6 + 384);
    *(_DWORD *)(a2 + 44) = 0;
    scl_ScaleAdvanceWidth(v10, a2 + 40, v95, *(_DWORD *)(v6 + 360), *(_WORD *)(v6 + 316), v6 + 320);
    v96 = *(_WORD *)(v6 + 386);
    *(_DWORD *)(a2 + 172) = 0;
    v97 = *(_WORD *)(v6 + 316);
    if ( *(_DWORD *)(v6 + 360) )
    {
      v98 = CompDiv((unsigned int)v97, v96 * (__int64)*(int *)(v10 + 388));
      *(_DWORD *)(v99 + 4) = v98;
      if ( v98 )
        *(_DWORD *)(v99 + 4) = v98 + 0x10000;
    }
    else
    {
      LODWORD(v138) = v96 << 16;
      HIDWORD(v138) = v96 >> 15;
      v104 = CompDiv((unsigned int)v97, v138);
      v106 = (_DWORD *)(v105 + 4);
      *(_DWORD *)(v105 + 4) = v104;
      if ( v104 )
        *v106 = v104 + 0x10000;
      mth_FixXYMul(v105, v106, v6 + 320);
    }
    v71 = (_WORD *)(a2 + 100);
    *(_WORD *)(a2 + 100) = *(_WORD *)(v6 + 696);
    v76 = (_WORD *)(a2 + 104);
    v48 = (__int16 *)(a2 + 98);
    *(_WORD *)(a2 + 104) = *(_WORD *)(v6 + 700);
    v49 = (__int16 *)(a2 + 102);
    v75 = (_WORD *)(a2 + 96);
    *(_WORD *)(a2 + 98) = *(_WORD *)(v6 + 698);
    v84 = a2 + 24;
    v83 = a2 + 28;
    *(_WORD *)(a2 + 102) = *v9;
    *(_WORD *)(a2 + 96) = v137;
    v100 = v126;
    *(_QWORD *)(a2 + 88) = 0LL;
    *(_DWORD *)(a2 + 20) = v100;
    *(_DWORD *)(a2 + 24) = v127;
    *(_DWORD *)(a2 + 28) = 0;
    *(_DWORD *)(a2 + 32) = 0;
    goto LABEL_29;
  }
  if ( *(_DWORD *)(v6 + 356) )
  {
    v101 = *(_QWORD *)(v6 + 448);
    v102 = *(_DWORD **)v101;
    for ( i = *(_WORD *)(*(_QWORD *)(v101 + 64) + 2LL * *(__int16 *)(v101 + 80) - 2); i >= 0; --i )
      ++*v102++;
  }
  v11 = *(__int64 **)(v6 + 448);
  v133 = *v11;
  v134 = v11[1];
  v131 = v11[7];
  v132 = v11[8];
  v135 = v11[6];
  v136 = v11[11];
  v130 = *((_WORD *)v11 + 40);
  result = fsc_RemoveDups((__int64)&v130);
  if ( !(_DWORD)result )
  {
    v13 = 0;
    v14 = v6 + 688;
    v15 = 1;
    if ( *(_DWORD *)(v6 + 836) )
    {
      result = fsc_OverScaleOutline(&v130, *(unsigned __int16 *)(v6 + 832));
      if ( (_DWORD)result )
        return result;
      v15 = *(_WORD *)(v6 + 832);
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
        v13 = *(_WORD *)(v6 + 832) * *(_WORD *)(v6 + 1074);
      }
      else
      {
        v13 = *(_WORD *)(v6 + 1074);
        if ( (*(_BYTE *)(v6 + 1076) & 1) != 0 )
          v17 = 6 * *(_WORD *)(v6 + 1072);
        else
          v17 = *(_WORD *)(v6 + 1072);
      }
    }
    else
    {
      v17 = 0;
    }
    result = fsc_MeasureGlyph((__int64)&v130, v14, (int *)(v6 + 736), *(_WORD *)(v6 + 312), v15, v17, v13);
    if ( (_DWORD)result == 4869 )
    {
      *(_WORD *)(v6 + 312) &= ~4u;
      result = fsc_MeasureGlyph((__int64)&v130, v14, (int *)(v6 + 736), *(_WORD *)(v6 + 312), v15, v17, v13);
    }
    if ( !(_DWORD)result )
    {
      if ( *(_DWORD *)(v6 + 836) )
      {
        v107 = *(unsigned __int16 *)(v6 + 832);
        if ( *(_DWORD *)(v6 + 840) )
        {
          *(_WORD *)(v6 + 696) = (int)(mth_DivShiftLong(*(unsigned int *)(v6 + 804), v107) + 31) >> 6;
          *(_WORD *)(v6 + 700) = (int)(mth_DivShiftLong(*(unsigned int *)(v6 + 808), v115) + 32) >> 6;
          *(_WORD *)(v6 + 698) = (int)(mth_DivShiftLong(*(unsigned int *)(v6 + 812), v116) + 31) >> 6;
          v118 = (int)(mth_DivShiftLong(*(unsigned int *)(v6 + 816), v117) + 32) >> 6;
          *v9 = v118;
          if ( v120 == v119 )
            *(_WORD *)(v6 + 700) = v119 + 1;
          if ( *(_WORD *)(v6 + 698) != (_WORD)v118 )
            goto LABEL_17;
          v112 = v118 + 1;
        }
        else
        {
          *(_WORD *)(v6 + 696) = mth_DivShiftLong((unsigned int)*(__int16 *)(v6 + 792), v107);
          *(_WORD *)(v6 + 700) = mth_DivShiftLong((unsigned int)(__int16)(v108 + *(_WORD *)(v6 + 796) - 1), v108);
          *(_WORD *)(v6 + 698) = mth_DivShiftLong((unsigned int)*(__int16 *)(v6 + 794), v109);
          v112 = mth_DivShiftLong((unsigned int)(__int16)(v110 + *(_WORD *)(v6 + 790) - v111), v110);
        }
        *v9 = v112;
      }
LABEL_17:
      v18 = *(__int64 **)(v6 + 448);
      v19 = *v9 << 6;
      v20 = *v18;
      v21 = v18[1];
      v22 = *(_WORD *)(v18[8] + 2LL * *((__int16 *)v18 + 40) - 2);
      v23 = (unsigned __int16)(v22 + 2);
      v24 = (unsigned __int16)(v22 + 1);
      v25 = (*(__int16 *)(v6 + 696) << 6) - *(_DWORD *)(*v18 + 4 * v24);
      v26 = *(_DWORD *)(*v18 + 4 * v23) - *(_DWORD *)(*v18 + 4 * v24);
      LODWORD(v18) = *(_DWORD *)(v21 + 4 * v23) - *(_DWORD *)(v21 + 4 * v24);
      v27 = (unsigned __int16)(v22 + 6);
      HIDWORD(v138) = v19 - *(_DWORD *)(v21 + 4 * v24);
      v28 = (unsigned __int16)(v22 + 5);
      LODWORD(v138) = v25;
      v25 <<= 10;
      v29 = *(_DWORD *)(v20 + 4 * v28);
      v30 = v19 - *(_DWORD *)(v21 + 4 * v28) - *(_DWORD *)(v21 + 4 * v27);
      LODWORD(v20) = *(_DWORD *)(v20 + 4 * v27);
      *(_DWORD *)(a2 + 84) = HIDWORD(v138) << 10;
      LODWORD(v20) = v20 - v29;
      v31 = HIDWORD(v138);
      *(_DWORD *)(a2 + 80) = v25;
      *(_DWORD *)(a2 + 64) = v25;
      *(_DWORD *)(a2 + 68) = v31 << 10;
      v140 = v30;
      *(_DWORD *)(a2 + 72) = v26 << 10;
      *(_DWORD *)(a2 + 52) = v30 << 10;
      v139 = v20;
      *(_DWORD *)(a2 + 60) = v140 << 10;
      LODWORD(v20) = (_DWORD)v20 << 10;
      *(_DWORD *)(a2 + 48) = v20;
      *(_DWORD *)(a2 + 56) = v20;
      *(_DWORD *)(a2 + 76) = (_DWORD)v18 << 10;
      v32 = *(__int64 **)(v6 + 448);
      v33 = *(__int16 *)(v6 + 696) << 6;
      v34 = *v32;
      v35 = v32[1];
      LOWORD(v20) = *(_WORD *)(v32[8] + 2LL * *((__int16 *)v32 + 40) - 2);
      v36 = (unsigned __int16)(v20 + 4);
      v37 = (unsigned __int16)(v20 + 3);
      v39 = *(_DWORD *)(*v32 + 4 * v37) - *(_DWORD *)(*v32 + 4 * v36);
      v40 = *(_DWORD *)(v35 + 4 * v37) - *(_DWORD *)(v35 + 4 * v36);
      LODWORD(v36) = (*v9 << 6) - *(_DWORD *)(v35 + 4 * v37);
      LODWORD(v125) = v33 - *(_DWORD *)(*v32 + 4 * v37);
      v38 = v125;
      HIDWORD(v125) = v36;
      v41 = (unsigned __int16)(v20 + 8);
      LOWORD(v20) = v20 + 7;
      LODWORD(v32) = *(_DWORD *)(v35 + 4 * v41) - *(_DWORD *)(v35 + 4LL * (unsigned __int16)v20);
      v42 = v33 - *(_DWORD *)(v34 + 4LL * (unsigned __int16)v20) - *(_DWORD *)(v34 + 4 * v41);
      *(_DWORD *)(a2 + 200) = (_DWORD)v36 << 10;
      *(_DWORD *)(a2 + 208) = v40 << 10;
      v43 = v137;
      *(_DWORD *)(a2 + 216) = (_DWORD)v36 << 10;
      v124 = (int)v32;
      v123 = v42;
      *(_DWORD *)(a2 + 192) = (_DWORD)v32 << 10;
      v42 <<= 10;
      *(_DWORD *)(a2 + 180) = v42;
      *(_DWORD *)(a2 + 188) = v42;
      *(_DWORD *)(a2 + 184) = (_DWORD)v32 << 10;
      v38 <<= 10;
      *(_DWORD *)(a2 + 212) = v38;
      *(_DWORD *)(a2 + 196) = v38;
      *(_DWORD *)(a2 + 204) = v39 << 10;
      LODWORD(v36) = *(unsigned __int16 *)(v6 + 384);
      *(_DWORD *)(a2 + 44) = 0;
      scl_ScaleAdvanceWidth(v43, a2 + 40, v36, *(_DWORD *)(v6 + 360), *(_WORD *)(v6 + 316), v6 + 320);
      v44 = *(_WORD *)(v6 + 386);
      *(_DWORD *)(a2 + 172) = 0;
      v45 = *(_WORD *)(v6 + 316);
      if ( *(_DWORD *)(v6 + 360) )
      {
        v46 = CompDiv((unsigned int)v45, v44 * (__int64)*(int *)(v43 + 388));
        *(_DWORD *)(v47 + 4) = v46;
        if ( v46 )
          *(_DWORD *)(v47 + 4) = v46 + 0x10000;
      }
      else
      {
        LODWORD(v137) = v44 << 16;
        HIDWORD(v137) = v44 >> 15;
        v85 = CompDiv((unsigned int)v45, v137);
        v87 = (_DWORD *)(v86 + 4);
        *(_DWORD *)(v86 + 4) = v85;
        if ( v85 )
          *v87 = v85 + 0x10000;
        mth_FixXYMul(v86, v87, v6 + 320);
      }
      v48 = (__int16 *)(a2 + 98);
      v49 = (__int16 *)(a2 + 102);
      *(_OWORD *)(v6 + 848) = *(_OWORD *)(a2 + 40);
      *(_OWORD *)(v6 + 864) = *(_OWORD *)(a2 + 56);
      *(_OWORD *)(v6 + 880) = *(_OWORD *)(a2 + 72);
      *(_OWORD *)(v6 + 896) = *(_OWORD *)v47;
      *(_OWORD *)(v6 + 912) = *(_OWORD *)(v47 + 16);
      *(_OWORD *)(v6 + 928) = *(_OWORD *)(v47 + 32);
      *(_WORD *)(a2 + 98) = *(_WORD *)(v6 + 698);
      *(_WORD *)(a2 + 102) = *v9;
      *(_QWORD *)(a2 + 88) = 0LL;
      if ( (*(_BYTE *)(v6 + 1076) & 1) != 0 )
      {
        v50 = *(_DWORD *)(a2 + 80) + 3;
        *(_DWORD *)(a2 + 72) = (*(_DWORD *)(a2 + 72) + 3) / 6;
        v51 = (unsigned __int64)(715827883LL * v50) >> 32;
        v52 = *(_DWORD *)(a2 + 48) + 3;
        *(_DWORD *)(a2 + 80) = (v51 >> 31) + v51;
        v53 = (unsigned __int64)(715827883LL * v52) >> 32;
        v54 = *(_DWORD *)(a2 + 64) + 3;
        *(_DWORD *)(a2 + 48) = (v53 >> 31) + v53;
        v55 = (unsigned __int64)(715827883LL * v54) >> 32;
        v56 = *(_DWORD *)(a2 + 56) + 3;
        *(_DWORD *)(a2 + 64) = (v55 >> 31) + v55;
        v57 = (unsigned __int64)(715827883LL * v56) >> 32;
        v58 = *(_DWORD *)(a2 + 204) + 3;
        *(_DWORD *)(a2 + 56) = (v57 >> 31) + v57;
        v59 = (unsigned __int64)(715827883LL * v58) >> 32;
        v60 = *(_DWORD *)(a2 + 212) + 3;
        *(_DWORD *)(a2 + 204) = (v59 >> 31) + v59;
        v61 = (unsigned __int64)(715827883LL * v60) >> 32;
        v62 = *(_DWORD *)(a2 + 180) + 3;
        *(_DWORD *)(a2 + 212) = (v61 >> 31) + v61;
        v63 = (unsigned __int64)(715827883LL * v62) >> 32;
        v64 = *(_DWORD *)(a2 + 196) + 3;
        *(_DWORD *)(a2 + 180) = (v63 >> 31) + v63;
        v65 = (unsigned __int64)(715827883LL * v64) >> 32;
        v66 = *(_DWORD *)(a2 + 188) + 3;
        *(_DWORD *)(a2 + 196) = (v65 >> 31) + v65;
        *(_DWORD *)(a2 + 188) = v66 / 6;
        v67 = *(_WORD *)(v6 + 696);
        if ( v67 < 0 )
        {
          v68 = 5 - v67;
          v69 = -715827883;
        }
        else
        {
          v68 = v67;
          v69 = 715827883;
        }
        v70 = (unsigned __int64)(v68 * (__int64)v69) >> 32;
        v71 = (_WORD *)(a2 + 100);
        v72 = v70 + (v70 >> 31);
        *(_WORD *)(a2 + 100) = v70 + (v70 >> 31);
        v73 = *(__int16 *)(v6 + 700);
        if ( v73 + 5 < 0 )
          v74 = 715827883LL * *(__int16 *)(v6 + 700);
        else
          v74 = 715827883LL * (v73 + 5);
        v75 = (_WORD *)(a2 + 96);
        v76 = (_WORD *)(a2 + 104);
        v77 = (HIDWORD(v74) >> 31) + HIDWORD(v74);
        *(_WORD *)(a2 + 104) = v77;
        LOWORD(v77) = v77 - v72;
        v78 = (_WORD *)(v6 + 688);
        *(_WORD *)(a2 + 96) = (v77 + 3) & 0xFFFC;
        v79 = *v9;
        v80 = *(_OWORD *)(v6 + 704);
        *(_OWORD *)(v6 + 784) = *(_OWORD *)(v6 + 688);
        v81 = *(_OWORD *)(v6 + 720);
        *(_OWORD *)(v6 + 800) = v80;
        *(_OWORD *)(v6 + 816) = v81;
        *(_WORD *)(v6 + 688) = *(_WORD *)(a2 + 96);
        *(_WORD *)(v6 + 696) = *v71;
        *(_WORD *)(v6 + 700) = *(_WORD *)(a2 + 104);
        v82 = *(_DWORD *)(v6 + 820);
        *(_DWORD *)(v6 + 724) = *(__int16 *)(a2 + 96) * (v79 - *(__int16 *)(v6 + 698));
        *(_DWORD *)(a2 + 32) = v82;
      }
      else
      {
        v71 = (_WORD *)(a2 + 100);
        *(_WORD *)(a2 + 100) = *(_WORD *)(v6 + 696);
        v76 = (_WORD *)(a2 + 104);
        v78 = (_WORD *)(v6 + 688);
        *(_WORD *)(a2 + 104) = *(_WORD *)(v6 + 700);
        v75 = (_WORD *)(a2 + 96);
        *(_WORD *)(a2 + 96) = *(_WORD *)(v6 + 688);
      }
      if ( *(_DWORD *)(v6 + 836) )
      {
        v113 = (*(_WORD *)(v6 + 700) - *(_WORD *)(v6 + 696) + 3) & 0xFFFC;
        *v75 = v113;
        v114 = *(_DWORD *)(v6 + 820);
        *(_DWORD *)(v6 + 724) = v113 * (*(__int16 *)(v6 + 694) - *(__int16 *)(v6 + 698));
        *(_DWORD *)(a2 + 32) = v114;
      }
      v83 = a2 + 28;
      *v78 = *v75;
      v84 = a2 + 24;
      *(_DWORD *)(a2 + 20) = *(_DWORD *)(v6 + 724);
      *(_DWORD *)(a2 + 24) = *(_DWORD *)(v6 + 740);
      *(_DWORD *)(a2 + 28) = *(_DWORD *)(v6 + 744);
LABEL_29:
      if ( *(_DWORD *)(v6 + 1152) )
      {
        v121 = (*v76 - *v71 + 3) & 0xFFFC;
        v122 = v121 * (*v49 - *v48);
        *v75 = v121;
        *(_DWORD *)(a2 + 20) = v122;
      }
      fsg_CheckWorkSpaceForFit(v6 + 480, *(_DWORD *)(v6 + 944), *(_DWORD *)(v6 + 736), v84, v83);
      result = 0LL;
      *(_DWORD *)(v6 + 680) = 0;
      *(_DWORD *)(v6 + 948) = 0;
      *(_DWORD *)(v6 + 420) = 62;
    }
  }
  return result;
}
