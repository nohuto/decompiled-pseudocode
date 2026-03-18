/*
 * XREFs of bComputeMaxGlyph @ 0x1C0119094
 * Callers:
 *     bNewXform @ 0x1C0118F04 (bNewXform.c)
 * Callees:
 *     CJGD @ 0x1C00AB374 (CJGD.c)
 *     FixMul @ 0x1C00AFF84 (FixMul.c)
 *     CompDiv @ 0x1C00DA168 (CompDiv.c)
 *     bFDXform @ 0x1C01158F4 (bFDXform.c)
 *     fxPtSize @ 0x1C01159C0 (fxPtSize.c)
 *     bXformUnitVector @ 0x1C0116064 (bXformUnitVector.c)
 *     bFToL @ 0x1C0116F84 (bFToL.c)
 *     vSetGrayState__FONTCONTEXT @ 0x1C011704C (vSetGrayState__FONTCONTEXT.c)
 *     vFindHdmxTable @ 0x1C0118398 (vFindHdmxTable.c)
 *     vSetClearTypeState__FONTCONTEXT @ 0x1C0118434 (vSetClearTypeState__FONTCONTEXT.c)
 *     vQuantizeXform @ 0x1C01189B4 (vQuantizeXform.c)
 *     vAdjustGrayStateAndBoldOptions__FONTCONTEXT @ 0x1C0119714 (vAdjustGrayStateAndBoldOptions__FONTCONTEXT.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
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
  int v8; // edi
  int v9; // esi
  __int32 v10; // r14d
  __int32 v11; // r12d
  char v12; // al
  int v13; // r13d
  int fixed; // edi
  int v15; // eax
  int v16; // esi
  int v17; // eax
  int v18; // eax
  unsigned int v19; // r15d
  int v20; // eax
  int v21; // r11d
  int v22; // eax
  int v23; // r10d
  int v24; // r11d
  int v25; // r10d
  int v26; // r14d
  unsigned int v27; // eax
  int v28; // r14d
  __m128i v29; // xmm0
  int v30; // eax
  unsigned __int32 v31; // xmm0_4
  int v32; // ecx
  int v33; // r9d
  unsigned int v34; // r14d
  int v35; // eax
  int v36; // r8d
  int v38; // eax
  int v39; // eax
  int v40; // esi
  int v41; // edi
  int v42; // r12d
  int *v43; // r8
  int v44; // r13d
  int v45; // ecx
  int v46; // edx
  __int64 v47; // r9
  int v48; // eax
  int v49; // ecx
  int v50; // r13d
  int v51; // r12d
  __int64 v52; // rcx
  int v53; // eax
  bool v54; // zf
  __int64 v55; // rcx
  float v56; // xmm1_4
  int v57; // r8d
  int v58; // r8d
  float v59; // xmm3_4
  float v60; // xmm2_4
  int v61; // edx
  int v62; // ecx
  float v63; // xmm0_4
  int v64; // eax
  __int64 v65; // rdx
  int v66; // eax
  int v67; // r11d
  int v68; // ecx
  float v69; // xmm1_4
  float v70; // xmm1_4
  int v71; // edx
  char v72; // r8
  int v73; // [rsp+38h] [rbp-29h] BYREF
  __int64 v74; // [rsp+40h] [rbp-21h] BYREF
  int v75; // [rsp+48h] [rbp-19h]
  int v76; // [rsp+4Ch] [rbp-15h]
  __m128i si128; // [rsp+50h] [rbp-11h] BYREF
  __int32 v78; // [rsp+60h] [rbp-1h]
  int v79; // [rsp+64h] [rbp+3h]
  __int32 v80; // [rsp+68h] [rbp+7h]
  int v81; // [rsp+6Ch] [rbp+Bh]
  int v82; // [rsp+70h] [rbp+Fh] BYREF
  int v83; // [rsp+74h] [rbp+13h]
  char v84; // [rsp+7Ch] [rbp+1Bh] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = a1;
  v3 = *(_QWORD *)(a1 + 192);
  v74 = a1;
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
  if ( v8 >= v9 )
    return 0LL;
  v10 = (__int16)__ROR2__(v6[18], 8);
  v11 = (__int16)__ROR2__(v6[20], 8);
  v73 = *(_DWORD *)(v2 + 40);
  if ( (v73 & 0x4000) != 0 )
  {
    v10 -= FixMul(v9, 22272);
    v11 -= FixMul(v8, v67);
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
    v73 = *(_DWORD *)(v2 + 80);
    fixed = FixMul(v13, v8);
    v15 = FixMul(v13, v9);
    v16 = v15;
    if ( v13 <= 0 )
    {
      *(_DWORD *)(v2 + 144) = fixed;
      v17 = -v15;
      *(_DWORD *)(v2 + 160) = v16;
      *(_DWORD *)(v2 + 164) = fixed;
    }
    else
    {
      vQuantizeXform(v2);
      if ( (*(_DWORD *)(v2 + 116) & 4) == 0 )
      {
        *(_DWORD *)(v2 + 160) = fixed;
        *(_DWORD *)(v2 + 164) = v16;
      }
      *(_DWORD *)(v2 + 144) = -*(_DWORD *)(v2 + 160);
      v17 = *(_DWORD *)(v2 + 164);
    }
    *(_DWORD *)(v2 + 148) = v17;
    if ( !*(_DWORD *)(v2 + 124) )
    {
      v38 = FixMul(v13, *(__int16 *)(*(_QWORD *)(v2 + 8) + 408LL));
      *(_DWORD *)(v2 + 124) = v38;
      if ( v38 < 0 )
        *(_DWORD *)(v2 + 124) = -v38;
    }
    v18 = CompDiv(*(_DWORD *)(v2 + 48), 72LL * (int)(*(_DWORD *)(v2 + 124) << 16));
    v19 = *(_DWORD *)(v2 + 164) - *(_DWORD *)(v2 + 160);
    *(_DWORD *)(v2 + 128) = v18;
    v20 = *(_DWORD *)(v2 + 96);
    if ( *(_DWORD *)(v2 + 80) == v20 && v20 > 0 )
    {
      *(_DWORD *)(v2 + 116) |= 0x10u;
      vFindHdmxTable(v2);
    }
    FixMul(16 * v10, v73);
    v22 = FixMul(16 * v11, v21);
    if ( v24 < 0 )
    {
      v68 = v23;
      v23 = v22;
      v22 = v68;
    }
    *(_DWORD *)(v2 + 220) = 0;
    v25 = (v23 >> 4) - 2;
    *(_DWORD *)(v2 + 152) = v25;
    v26 = ((v22 + 15) >> 4) + 1;
    *(_DWORD *)(v2 + 256) = 0;
    v27 = -1;
    *(_DWORD *)(v2 + 156) = v26;
    v28 = v26 - v25;
    *(_DWORD *)(v2 + 200) = 0;
    if ( v24 > 0 )
      v27 = 1;
    v29 = _mm_cvtsi32_si128(v27);
    v30 = 1;
    v31 = _mm_cvtepi32_ps(v29).m128_u32[0];
    if ( v13 > 0 )
      v30 = -1;
    v32 = *(_DWORD *)(v2 + 144);
    *(_DWORD *)(v2 + 216) = v31;
    *(float *)(v2 + 260) = (float)v30;
    if ( v32 <= 0 || *(int *)(v2 + 148) <= 0 )
    {
      if ( *(int *)(v2 + 96) <= 0 )
        *(_DWORD *)(v2 + 204) = (v32 - *(_DWORD *)(v2 + 148)) >> 1;
      else
        *(_DWORD *)(v2 + 204) = (*(_DWORD *)(v2 + 148) - v32) >> 1;
    }
    else
    {
      *(_DWORD *)(v2 + 204) = 0;
    }
  }
  else
  {
    v39 = *(unsigned __int16 *)(v1 + 308) >> 6;
    v40 = v39 + v9;
    si128.m128i_i32[0] = v10;
    v41 = v8 - v39;
    v79 = v40;
    si128.m128i_i32[1] = v41;
    v81 = v40;
    si128.m128i_i64[1] = __PAIR64__(v41, v11);
    v78 = v10;
    v80 = v11;
    if ( !(unsigned int)bFDXform(v2 + 56, (__int64)&v82, (__int64)&si128) )
      return 0LL;
    v42 = v82;
    v43 = (int *)&v84;
    v44 = v83;
    v45 = v82;
    v46 = v83;
    v47 = 3LL;
    do
    {
      v48 = *(v43 - 1);
      if ( v48 < v42 )
        v42 = *(v43 - 1);
      if ( v48 > v45 )
        v45 = *(v43 - 1);
      if ( *v43 < v44 )
        v44 = *v43;
      if ( *v43 > v46 )
        v46 = *v43;
      v43 += 2;
      --v47;
    }
    while ( v47 );
    v2 = v74;
    v49 = (v45 + 15) >> 4;
    v50 = v44 >> 4;
    v51 = v42 >> 4;
    v19 = ((v46 + 15) >> 4) - v50;
    v28 = v49 - v51;
    v76 = (v46 + 15) >> 4;
    v75 = v49;
    si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffff000000000000000000000001);
    v52 = (v73 & 0x2000) != 0 ? v74 + 232 : 0LL;
    v53 = bXformUnitVector(
            (__int64)&si128,
            (float *)(v74 + 56),
            (float *)(v74 + 208),
            (float *)(v74 + 216),
            v52,
            (float *)(v74 + 224));
    v54 = (*(_DWORD *)(v74 + 40) & 0x2000) == 0;
    v73 = v53;
    v55 = v54 ? 0LL : v74 + 272;
    if ( ((unsigned int)bXformUnitVector(
                          (__int64)&si128.m128i_i64[1],
                          (float *)(v74 + 56),
                          (float *)(v74 + 248),
                          (float *)(v74 + 256),
                          v55,
                          (float *)(v74 + 264)) & v73) == 0 )
      return 0LL;
    v56 = *(float *)(v74 + 264);
    LODWORD(v74) = 0;
    bFToL((float)v41 * v56, &v74, 0);
    v73 &= v57;
    bFToL((float)v40 * v56, &v73, v57);
    v59 = *(float *)(v2 + 256);
    v60 = *(float *)(v2 + 260);
    v61 = (v58 + 15 - (int)v74) >> 4;
    v62 = (v73 + 15) >> 4;
    *(_DWORD *)(v2 + 144) = v61;
    *(_DWORD *)(v2 + 148) = v62;
    *(_DWORD *)(v2 + 288) = (int)(float)(v59 * (float)(16 * v61));
    *(_DWORD *)(v2 + 292) = (int)(float)(v60 * (float)(16 * v61));
    v63 = (float)(-16 * v62);
    *(_DWORD *)(v2 + 296) = (int)(float)(v63 * v59);
    *(_DWORD *)(v2 + 300) = (int)(float)(v63 * v60);
    if ( v41 >= 0 || v40 <= 0 || v61 + v62 < 3 )
    {
      v73 = 0;
      v69 = (float)((1 - v40 - v41) >> 1);
      bFToL(v69 * *(float *)(v2 + 248), &v73, v58);
      v70 = v69 * *(float *)(v2 + 252);
      v71 = (v73 >> 3) + 1;
      v73 = 0;
      *(_DWORD *)(v2 + 200) = v71 >> 1;
      bFToL(v70, &v73, v72);
      *(_DWORD *)(v2 + 204) = ((v73 >> 3) + 1) >> 1;
    }
    else
    {
      *(_QWORD *)(v2 + 200) = 0LL;
    }
    *(_DWORD *)(v2 + 156) = v75;
    *(_DWORD *)(v2 + 164) = v76;
    *(_DWORD *)(v2 + 152) = v51;
    *(_DWORD *)(v2 + 160) = v50;
    v64 = fxPtSize(v2);
    v65 = *(int *)(v2 + 48);
    *(_DWORD *)(v2 + 128) = v64;
    *(_DWORD *)(v2 + 124) = ((unsigned int)CompDiv(72, v64 * v65) + 0x8000) >> 16;
  }
  v33 = *(_DWORD *)(v2 + 40);
  if ( (v33 & 0x2000) != 0 )
    *(_WORD *)(v2 + 400) = (2 * *(_DWORD *)(v2 + 124) - 1) / 100 + 1;
  else
    *(_WORD *)(v2 + 400) = 0;
  if ( !v28 || !v19 )
    return 0LL;
  if ( (v33 & 0x2000) != 0 )
  {
    v66 = *(unsigned __int16 *)(v2 + 400);
    v28 += v66;
    v19 += v66;
  }
  v34 = (v28 + 7) & 0xFFFFFFF8;
  *(_DWORD *)(v2 + 168) = v34;
  if ( v19 * (unsigned __int64)(unsigned int)((int)((v34 + 31) & 0xFFFFFFE0) / 8) > 0xFFFFFFFF )
    return 0LL;
  if ( (v33 & 0x10000000) != 0 )
    vSetClearTypeState__FONTCONTEXT((__int64 *)v2);
  else
    vSetGrayState__FONTCONTEXT((__int64 *)v2);
  vAdjustGrayStateAndBoldOptions__FONTCONTEXT(v2);
  v35 = CJGD(v34, v19, v2);
  v36 = *(_DWORD *)(v2 + 116);
  *(_DWORD *)(v2 + 172) = v35;
  if ( (v36 & 0x11) == 17 && (*(_BYTE *)(*(_QWORD *)(v2 + 8) + 300LL) & 0x40) != 0 )
    *(_DWORD *)(v2 + 116) = v36 | 0x40;
  return 1LL;
}
