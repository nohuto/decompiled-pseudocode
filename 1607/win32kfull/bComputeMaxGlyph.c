/*
 * XREFs of bComputeMaxGlyph @ 0x1C0019FE0
 * Callers:
 *     bNewXform @ 0x1C0019E50 (bNewXform.c)
 * Callees:
 *     bXformUnitVector @ 0x1C0010AEC (bXformUnitVector.c)
 *     bFDXform @ 0x1C00169E4 (bFDXform.c)
 *     fxPtSize @ 0x1C0016E94 (fxPtSize.c)
 *     bFToL @ 0x1C0018BF4 (bFToL.c)
 *     vSetGrayState__FONTCONTEXT @ 0x1C0018D8C (vSetGrayState__FONTCONTEXT.c)
 *     vAdjustGrayStateAndBoldOptions__FONTCONTEXT @ 0x1C001A604 (vAdjustGrayStateAndBoldOptions__FONTCONTEXT.c)
 *     vQuantizeXform @ 0x1C001A7D4 (vQuantizeXform.c)
 *     vSetClearTypeState__FONTCONTEXT @ 0x1C001ACAC (vSetClearTypeState__FONTCONTEXT.c)
 *     vFindHdmxTable @ 0x1C001ADA0 (vFindHdmxTable.c)
 *     CJGD @ 0x1C00C296C (CJGD.c)
 *     FixMul @ 0x1C00C947C (FixMul.c)
 *     CompDiv @ 0x1C00F85F4 (CompDiv.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall bComputeMaxGlyph(__int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rcx
  _WORD *v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // edi
  unsigned int v9; // esi
  __int32 v10; // r14d
  __int32 v11; // r12d
  char v12; // al
  int v13; // r13d
  int fixed; // edi
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // r8
  int v18; // esi
  int v19; // eax
  int v20; // eax
  __int64 v21; // r8
  unsigned int v22; // r15d
  int v23; // eax
  unsigned int v24; // r11d
  __int64 v25; // r8
  int v26; // eax
  int v27; // r10d
  int v28; // r11d
  int v29; // r10d
  int v30; // r14d
  unsigned int v31; // eax
  int v32; // r14d
  __m128i v33; // xmm0
  int v34; // eax
  unsigned __int32 v35; // xmm0_4
  int v36; // ecx
  int v37; // r9d
  unsigned int v38; // r14d
  __int64 v39; // rdx
  int v40; // eax
  int v41; // r8d
  int v43; // eax
  int v44; // eax
  int v45; // esi
  int v46; // edi
  int v47; // r12d
  int *v48; // r8
  int v49; // r13d
  int v50; // ecx
  int v51; // edx
  __int64 v52; // r9
  int v53; // eax
  int v54; // ecx
  int v55; // r13d
  int v56; // r12d
  __int64 v57; // rcx
  int v58; // eax
  bool v59; // zf
  __int64 v60; // rcx
  float v61; // xmm1_4
  int v62; // r8d
  int v63; // r8d
  float v64; // xmm3_4
  float v65; // xmm2_4
  int v66; // edx
  int v67; // ecx
  float v68; // xmm0_4
  int v69; // eax
  __int64 v70; // rdx
  unsigned int v71; // r11d
  __int64 v72; // r8
  int v73; // ecx
  float v74; // xmm1_4
  float v75; // xmm1_4
  int v76; // edx
  char v77; // r8
  int v78; // eax
  int v79; // [rsp+38h] [rbp-29h] BYREF
  __int64 v80; // [rsp+40h] [rbp-21h] BYREF
  int v81; // [rsp+48h] [rbp-19h]
  int v82; // [rsp+4Ch] [rbp-15h]
  __m128i si128; // [rsp+50h] [rbp-11h] BYREF
  __int32 v84; // [rsp+60h] [rbp-1h]
  int v85; // [rsp+64h] [rbp+3h]
  __int32 v86; // [rsp+68h] [rbp+7h]
  int v87; // [rsp+6Ch] [rbp+Bh]
  int v88; // [rsp+70h] [rbp+Fh] BYREF
  int v89; // [rsp+74h] [rbp+13h]
  char v90; // [rsp+7Ch] [rbp+1Bh] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = a1;
  v3 = *(_QWORD *)(a1 + 192);
  v80 = a1;
  v4 = *(_QWORD *)(v1 + 64);
  v5 = *(unsigned int *)(v3 + 64);
  v6 = (_WORD *)(v4 + *(unsigned int *)(v3 + 16));
  if ( (_DWORD)v5 )
    v7 = v4 + v5;
  else
    v7 = 0LL;
  if ( v7 && (*(_DWORD *)(v2 + 116) & 3) != 0 )
  {
    v8 = -(__int16)__ROR2__(*(_WORD *)(v7 + 74), 8);
    v9 = (__int16)__ROR2__(*(_WORD *)(v7 + 76), 8);
  }
  else
  {
    v8 = -(__int16)__ROR2__(v6[21], 8);
    v9 = -(__int16)__ROR2__(v6[19], 8);
  }
  if ( (int)v8 >= (int)v9 )
    return 0LL;
  v10 = (__int16)__ROR2__(v6[18], 8);
  v11 = (__int16)__ROR2__(v6[20], 8);
  v79 = *(_DWORD *)(v2 + 40);
  if ( (v79 & 0x4000) != 0 )
  {
    v10 -= FixMul(v9, 22272LL, v4);
    v11 -= FixMul(v8, v71, v72);
  }
  if ( v10 >= v11 )
    return 0LL;
  v12 = *(_DWORD *)(v2 + 116) & 9;
  *(_QWORD *)(v2 + 124) = 0LL;
  *(_DWORD *)(v2 + 404) = 0;
  *(_QWORD *)(v2 + 136) = 0LL;
  if ( v12 == 1 )
  {
    v13 = *(_DWORD *)(v2 + 96);
    v79 = *(_DWORD *)(v2 + 80);
    fixed = FixMul((unsigned int)v13, v8, v4);
    v16 = FixMul((unsigned int)v13, v9, v15);
    v18 = v16;
    if ( v13 <= 0 )
    {
      *(_DWORD *)(v2 + 144) = fixed;
      v19 = -v16;
      *(_DWORD *)(v2 + 160) = v18;
      *(_DWORD *)(v2 + 164) = fixed;
    }
    else
    {
      vQuantizeXform(v2);
      if ( (*(_DWORD *)(v2 + 116) & 4) == 0 )
      {
        *(_DWORD *)(v2 + 160) = fixed;
        *(_DWORD *)(v2 + 164) = v18;
      }
      *(_DWORD *)(v2 + 144) = -*(_DWORD *)(v2 + 160);
      v19 = *(_DWORD *)(v2 + 164);
    }
    *(_DWORD *)(v2 + 148) = v19;
    if ( !*(_DWORD *)(v2 + 124) )
    {
      v43 = FixMul((unsigned int)v13, (unsigned int)*(__int16 *)(*(_QWORD *)(v2 + 8) + 408LL), v17);
      *(_DWORD *)(v2 + 124) = v43;
      if ( v43 < 0 )
        *(_DWORD *)(v2 + 124) = -v43;
    }
    v20 = CompDiv(*(unsigned int *)(v2 + 48), 72LL * (int)(*(_DWORD *)(v2 + 124) << 16));
    v22 = *(_DWORD *)(v2 + 164) - *(_DWORD *)(v2 + 160);
    *(_DWORD *)(v2 + 128) = v20;
    v23 = *(_DWORD *)(v2 + 96);
    if ( *(_DWORD *)(v2 + 80) == v23 && v23 > 0 )
    {
      *(_DWORD *)(v2 + 116) |= 0x10u;
      vFindHdmxTable(v2);
    }
    FixMul((unsigned int)(16 * v10), (unsigned int)v79, v21);
    v26 = FixMul((unsigned int)(16 * v11), v24, v25);
    if ( v28 < 0 )
    {
      v73 = v27;
      v27 = v26;
      v26 = v73;
    }
    *(_DWORD *)(v2 + 220) = 0;
    v29 = (v27 >> 4) - 2;
    *(_DWORD *)(v2 + 152) = v29;
    v30 = ((v26 + 15) >> 4) + 1;
    *(_DWORD *)(v2 + 256) = 0;
    v31 = -1;
    *(_DWORD *)(v2 + 156) = v30;
    v32 = v30 - v29;
    *(_DWORD *)(v2 + 200) = 0;
    if ( v28 > 0 )
      v31 = 1;
    v33 = _mm_cvtsi32_si128(v31);
    v34 = 1;
    v35 = _mm_cvtepi32_ps(v33).m128_u32[0];
    if ( v13 > 0 )
      v34 = -1;
    v36 = *(_DWORD *)(v2 + 144);
    *(_DWORD *)(v2 + 216) = v35;
    *(float *)(v2 + 260) = (float)v34;
    if ( v36 <= 0 || *(int *)(v2 + 148) <= 0 )
    {
      if ( *(int *)(v2 + 96) <= 0 )
        *(_DWORD *)(v2 + 204) = (v36 - *(_DWORD *)(v2 + 148)) >> 1;
      else
        *(_DWORD *)(v2 + 204) = (*(_DWORD *)(v2 + 148) - v36) >> 1;
    }
    else
    {
      *(_DWORD *)(v2 + 204) = 0;
    }
  }
  else
  {
    v44 = *(unsigned __int16 *)(v1 + 308) >> 6;
    v45 = v44 + v9;
    si128.m128i_i32[0] = v10;
    v46 = v8 - v44;
    v85 = v45;
    si128.m128i_i32[1] = v46;
    v87 = v45;
    si128.m128i_i64[1] = __PAIR64__(v46, v11);
    v84 = v10;
    v86 = v11;
    if ( !(unsigned int)bFDXform(v2 + 56, (__int64)&v88, (__int64)&si128) )
      return 0LL;
    v47 = v88;
    v48 = (int *)&v90;
    v49 = v89;
    v50 = v88;
    v51 = v89;
    v52 = 3LL;
    do
    {
      v53 = *(v48 - 1);
      if ( v53 < v47 )
        v47 = *(v48 - 1);
      if ( v53 > v50 )
        v50 = *(v48 - 1);
      if ( *v48 < v49 )
        v49 = *v48;
      if ( *v48 > v51 )
        v51 = *v48;
      v48 += 2;
      --v52;
    }
    while ( v52 );
    v2 = v80;
    v54 = (v50 + 15) >> 4;
    v55 = v49 >> 4;
    v56 = v47 >> 4;
    v22 = ((v51 + 15) >> 4) - v55;
    v32 = v54 - v56;
    v82 = (v51 + 15) >> 4;
    v81 = v54;
    si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffff000000000000000000000001);
    v57 = (v79 & 0x2000) != 0 ? v80 + 232 : 0LL;
    v58 = bXformUnitVector(
            (__int64)&si128,
            (float *)(v80 + 56),
            (float *)(v80 + 208),
            (float *)(v80 + 216),
            v57,
            (float *)(v80 + 224));
    v59 = (*(_DWORD *)(v80 + 40) & 0x2000) == 0;
    v79 = v58;
    v60 = v59 ? 0LL : v80 + 272;
    if ( ((unsigned int)bXformUnitVector(
                          (__int64)&si128.m128i_i64[1],
                          (float *)(v80 + 56),
                          (float *)(v80 + 248),
                          (float *)(v80 + 256),
                          v60,
                          (float *)(v80 + 264)) & v79) == 0 )
      return 0LL;
    v61 = *(float *)(v80 + 264);
    LODWORD(v80) = 0;
    bFToL((float)v46 * v61, &v80, 0);
    v79 &= v62;
    bFToL((float)v45 * v61, &v79, v62);
    v64 = *(float *)(v2 + 256);
    v65 = *(float *)(v2 + 260);
    v66 = (v63 + 15 - (int)v80) >> 4;
    v67 = (v79 + 15) >> 4;
    *(_DWORD *)(v2 + 144) = v66;
    *(_DWORD *)(v2 + 148) = v67;
    *(_DWORD *)(v2 + 288) = (int)(float)(v64 * (float)(16 * v66));
    *(_DWORD *)(v2 + 292) = (int)(float)(v65 * (float)(16 * v66));
    v68 = (float)(-16 * v67);
    *(_DWORD *)(v2 + 296) = (int)(float)(v68 * v64);
    *(_DWORD *)(v2 + 300) = (int)(float)(v68 * v65);
    if ( v46 >= 0 || v45 <= 0 || v66 + v67 < 3 )
    {
      v79 = 0;
      v74 = (float)((1 - v45 - v46) >> 1);
      bFToL(v74 * *(float *)(v2 + 248), &v79, v63);
      v75 = v74 * *(float *)(v2 + 252);
      v76 = (v79 >> 3) + 1;
      v79 = 0;
      *(_DWORD *)(v2 + 200) = v76 >> 1;
      bFToL(v75, &v79, v77);
      *(_DWORD *)(v2 + 204) = ((v79 >> 3) + 1) >> 1;
    }
    else
    {
      *(_QWORD *)(v2 + 200) = 0LL;
    }
    *(_DWORD *)(v2 + 156) = v81;
    *(_DWORD *)(v2 + 164) = v82;
    *(_DWORD *)(v2 + 152) = v56;
    *(_DWORD *)(v2 + 160) = v55;
    v69 = fxPtSize(v2);
    v70 = *(int *)(v2 + 48);
    *(_DWORD *)(v2 + 128) = v69;
    *(_DWORD *)(v2 + 124) = ((unsigned int)CompDiv(72LL, v69 * v70) + 0x8000) >> 16;
  }
  v37 = *(_DWORD *)(v2 + 40);
  if ( (v37 & 0x2000) != 0 )
    *(_WORD *)(v2 + 400) = (2 * *(_DWORD *)(v2 + 124) - 1) / 100 + 1;
  else
    *(_WORD *)(v2 + 400) = 0;
  if ( !v32 || !v22 )
    return 0LL;
  if ( (v37 & 0x2000) != 0 )
  {
    v78 = *(unsigned __int16 *)(v2 + 400);
    v32 += v78;
    v22 += v78;
  }
  v38 = (v32 + 7) & 0xFFFFFFF8;
  *(_DWORD *)(v2 + 168) = v38;
  v39 = (unsigned int)((int)((v38 + 31) & 0xFFFFFFE0) >> 31);
  if ( v22 * (unsigned __int64)(unsigned int)((int)((v38 + 31) & 0xFFFFFFE0) / 8) > 0xFFFFFFFF )
    return 0LL;
  if ( (v37 & 0x10000000) != 0 )
  {
    LODWORD(v39) = (int)((v38 + 31) & 0xFFFFFFE0) % 8;
    vSetClearTypeState__FONTCONTEXT(v2, v39);
  }
  else
  {
    vSetGrayState__FONTCONTEXT((__int64 *)v2);
  }
  vAdjustGrayStateAndBoldOptions__FONTCONTEXT(v2);
  v40 = CJGD(v38, v22, v2);
  v41 = *(_DWORD *)(v2 + 116);
  *(_DWORD *)(v2 + 172) = v40;
  if ( (v41 & 0x11) == 17 && (*(_BYTE *)(*(_QWORD *)(v2 + 8) + 300LL) & 0x40) != 0 )
    *(_DWORD *)(v2 + 116) = v41 | 0x40;
  return 1LL;
}
