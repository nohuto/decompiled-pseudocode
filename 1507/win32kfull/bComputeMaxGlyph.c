/*
 * XREFs of bComputeMaxGlyph @ 0x1C00A9D18
 * Callers:
 *     bNewXform @ 0x1C00A9B88 (bNewXform.c)
 * Callees:
 *     bFDXform @ 0x1C00A8634 (bFDXform.c)
 *     fxPtSize @ 0x1C00A8700 (fxPtSize.c)
 *     bXformUnitVector @ 0x1C00A8750 (bXformUnitVector.c)
 *     bFToL @ 0x1C00A95A4 (bFToL.c)
 *     vSetGrayState__FONTCONTEXT @ 0x1C00A9774 (vSetGrayState__FONTCONTEXT.c)
 *     vAdjustGrayStateAndBoldOptions__FONTCONTEXT @ 0x1C00AA3C4 (vAdjustGrayStateAndBoldOptions__FONTCONTEXT.c)
 *     vQuantizeXform @ 0x1C00AA5B4 (vQuantizeXform.c)
 *     vSetClearTypeState__FONTCONTEXT @ 0x1C00AAAA0 (vSetClearTypeState__FONTCONTEXT.c)
 *     vFindHdmxTable @ 0x1C00AAB94 (vFindHdmxTable.c)
 *     FixMul @ 0x1C00B6E4C (FixMul.c)
 *     CompDiv @ 0x1C00D3E04 (CompDiv.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall bComputeMaxGlyph(__int64 a1)
{
  __int64 v1; // r10
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rcx
  _WORD *v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // edi
  unsigned int v9; // esi
  __int32 v10; // r14d
  __int32 v11; // r15d
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
  unsigned int v22; // r12d
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
  unsigned int v38; // edi
  __int64 v39; // rdx
  int v40; // r11d
  int v41; // r8d
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // esi
  int v47; // edi
  int v48; // r15d
  int *v49; // r8
  int v50; // r13d
  int v51; // ecx
  int v52; // edx
  __int64 v53; // r9
  int v54; // eax
  int v55; // eax
  int v56; // ecx
  int v57; // r13d
  int v58; // r15d
  __int64 v59; // rcx
  int v60; // eax
  bool v61; // zf
  __int64 v62; // rcx
  float v63; // xmm1_4
  int v64; // r8d
  int v65; // r8d
  float v66; // xmm3_4
  float v67; // xmm2_4
  int v68; // edx
  int v69; // ecx
  float v70; // xmm0_4
  int v71; // eax
  __int64 v72; // rdx
  int v73; // eax
  unsigned int v74; // r11d
  __int64 v75; // r8
  int v76; // ecx
  float v77; // xmm1_4
  float v78; // xmm1_4
  int v79; // edx
  char v80; // r8
  int v81; // [rsp+38h] [rbp-29h] BYREF
  int v82; // [rsp+3Ch] [rbp-25h] BYREF
  int v83; // [rsp+40h] [rbp-21h]
  int v84; // [rsp+44h] [rbp-1Dh]
  __m128i si128; // [rsp+48h] [rbp-19h] BYREF
  __int32 v86; // [rsp+58h] [rbp-9h]
  int v87; // [rsp+5Ch] [rbp-5h]
  __int32 v88; // [rsp+60h] [rbp-1h]
  int v89; // [rsp+64h] [rbp+3h]
  int v90; // [rsp+68h] [rbp+7h] BYREF
  int v91; // [rsp+6Ch] [rbp+Bh]
  char v92; // [rsp+74h] [rbp+13h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 192);
  v4 = *(_QWORD *)(v1 + 64);
  v5 = *(unsigned int *)(v3 + 64);
  v6 = (_WORD *)(v4 + *(unsigned int *)(v3 + 16));
  if ( (_DWORD)v5 )
    v7 = v4 + v5;
  else
    v7 = 0LL;
  if ( v7 && (*(_DWORD *)(a1 + 116) & 3) != 0 )
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
  v81 = *(_DWORD *)(a1 + 40);
  if ( (v81 & 0x4000) != 0 )
  {
    v10 -= FixMul(v9, 22272LL, v4);
    v11 -= FixMul(v8, v74, v75);
  }
  if ( v10 >= v11 )
    return 0LL;
  v12 = *(_DWORD *)(a1 + 116) & 9;
  *(_QWORD *)(a1 + 124) = 0LL;
  *(_DWORD *)(a1 + 404) = 0;
  *(_QWORD *)(a1 + 136) = 0LL;
  if ( v12 == 1 )
  {
    v13 = *(_DWORD *)(a1 + 96);
    v81 = *(_DWORD *)(a1 + 80);
    fixed = FixMul((unsigned int)v13, v8, v4);
    v16 = FixMul((unsigned int)v13, v9, v15);
    v18 = v16;
    if ( v13 <= 0 )
    {
      *(_DWORD *)(a1 + 144) = fixed;
      v19 = -v16;
      *(_DWORD *)(a1 + 160) = v18;
      *(_DWORD *)(a1 + 164) = fixed;
    }
    else
    {
      vQuantizeXform(a1);
      if ( (*(_DWORD *)(a1 + 116) & 4) == 0 )
      {
        *(_DWORD *)(a1 + 160) = fixed;
        *(_DWORD *)(a1 + 164) = v18;
      }
      *(_DWORD *)(a1 + 144) = -*(_DWORD *)(a1 + 160);
      v19 = *(_DWORD *)(a1 + 164);
    }
    *(_DWORD *)(a1 + 148) = v19;
    if ( !*(_DWORD *)(a1 + 124) )
    {
      v43 = FixMul((unsigned int)v13, (unsigned int)*(__int16 *)(*(_QWORD *)(a1 + 8) + 408LL), v17);
      *(_DWORD *)(a1 + 124) = v43;
      if ( v43 < 0 )
        *(_DWORD *)(a1 + 124) = -v43;
    }
    v20 = CompDiv(*(unsigned int *)(a1 + 48), 72LL * (int)(*(_DWORD *)(a1 + 124) << 16));
    v22 = *(_DWORD *)(a1 + 164) - *(_DWORD *)(a1 + 160);
    *(_DWORD *)(a1 + 128) = v20;
    v23 = *(_DWORD *)(a1 + 96);
    if ( *(_DWORD *)(a1 + 80) == v23 && v23 > 0 )
    {
      *(_DWORD *)(a1 + 116) |= 0x10u;
      vFindHdmxTable(a1);
    }
    FixMul((unsigned int)(16 * v10), (unsigned int)v81, v21);
    v26 = FixMul((unsigned int)(16 * v11), v24, v25);
    if ( v28 < 0 )
    {
      v76 = v27;
      v27 = v26;
      v26 = v76;
    }
    *(_DWORD *)(a1 + 220) = 0;
    v29 = (v27 >> 4) - 2;
    *(_DWORD *)(a1 + 152) = v29;
    v30 = ((v26 + 15) >> 4) + 1;
    *(_DWORD *)(a1 + 256) = 0;
    v31 = -1;
    *(_DWORD *)(a1 + 156) = v30;
    v32 = v30 - v29;
    *(_DWORD *)(a1 + 200) = 0;
    if ( v28 > 0 )
      v31 = 1;
    v33 = _mm_cvtsi32_si128(v31);
    v34 = 1;
    v35 = _mm_cvtepi32_ps(v33).m128_u32[0];
    if ( v13 > 0 )
      v34 = -1;
    v36 = *(_DWORD *)(a1 + 144);
    *(_DWORD *)(a1 + 216) = v35;
    *(float *)(a1 + 260) = (float)v34;
    if ( v36 <= 0 || *(int *)(a1 + 148) <= 0 )
    {
      if ( *(int *)(a1 + 96) <= 0 )
        *(_DWORD *)(a1 + 204) = (v36 - *(_DWORD *)(a1 + 148)) >> 1;
      else
        *(_DWORD *)(a1 + 204) = (*(_DWORD *)(a1 + 148) - v36) >> 1;
    }
    else
    {
      *(_DWORD *)(a1 + 204) = 0;
    }
  }
  else
  {
    v45 = *(unsigned __int16 *)(v1 + 308) >> 6;
    v46 = v45 + v9;
    si128.m128i_i32[0] = v10;
    v47 = v8 - v45;
    v87 = v46;
    si128.m128i_i32[1] = v47;
    v89 = v46;
    si128.m128i_i64[1] = __PAIR64__(v47, v11);
    v86 = v10;
    v88 = v11;
    if ( !(unsigned int)bFDXform(a1 + 56, (__int64)&v90, (__int64)&si128) )
      return 0LL;
    v48 = v90;
    v49 = (int *)&v92;
    v50 = v91;
    v51 = v90;
    v52 = v91;
    v53 = 3LL;
    do
    {
      v54 = *(v49 - 1);
      if ( v54 < v48 )
        v48 = *(v49 - 1);
      if ( v54 > v51 )
        v51 = *(v49 - 1);
      v55 = *v49;
      v49 += 2;
      if ( v55 < v50 )
        v50 = v55;
      if ( v55 > v52 )
        v52 = v55;
      --v53;
    }
    while ( v53 );
    v56 = (v51 + 15) >> 4;
    v57 = v50 >> 4;
    v58 = v48 >> 4;
    v22 = ((v52 + 15) >> 4) - v57;
    v32 = v56 - v58;
    v84 = (v52 + 15) >> 4;
    v83 = v56;
    si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffff000000000000000000000001);
    v59 = (v81 & 0x2000) != 0 ? a1 + 232 : 0LL;
    v60 = bXformUnitVector(
            (__int64)&si128,
            (float *)(a1 + 56),
            (float *)(a1 + 208),
            (float *)(a1 + 216),
            v59,
            (float *)(a1 + 224));
    v61 = (*(_DWORD *)(a1 + 40) & 0x2000) == 0;
    v81 = v60;
    v62 = v61 ? 0LL : a1 + 272;
    if ( ((unsigned int)bXformUnitVector(
                          (__int64)&si128.m128i_i64[1],
                          (float *)(a1 + 56),
                          (float *)(a1 + 248),
                          (float *)(a1 + 256),
                          v62,
                          (float *)(a1 + 264)) & v81) == 0 )
      return 0LL;
    v63 = *(float *)(a1 + 264);
    v82 = 0;
    bFToL((float)v47 * v63, &v82, 0);
    v81 &= v64;
    bFToL((float)v46 * v63, &v81, v64);
    v66 = *(float *)(a1 + 256);
    v67 = *(float *)(a1 + 260);
    v68 = (v65 + 15 - v82) >> 4;
    v69 = (v81 + 15) >> 4;
    *(_DWORD *)(a1 + 144) = v68;
    *(_DWORD *)(a1 + 148) = v69;
    *(_DWORD *)(a1 + 288) = (int)(float)(v66 * (float)(16 * v68));
    *(_DWORD *)(a1 + 292) = (int)(float)(v67 * (float)(16 * v68));
    v70 = (float)(-16 * v69);
    *(_DWORD *)(a1 + 296) = (int)(float)(v70 * v66);
    *(_DWORD *)(a1 + 300) = (int)(float)(v70 * v67);
    if ( v47 >= 0 || v46 <= 0 || v68 + v69 < 3 )
    {
      v81 = 0;
      v77 = (float)((1 - v46 - v47) >> 1);
      bFToL(v77 * *(float *)(a1 + 248), &v81, v65);
      v78 = v77 * *(float *)(a1 + 252);
      v79 = (v81 >> 3) + 1;
      v81 = 0;
      *(_DWORD *)(a1 + 200) = v79 >> 1;
      bFToL(v78, &v81, v80);
      *(_DWORD *)(a1 + 204) = ((v81 >> 3) + 1) >> 1;
    }
    else
    {
      *(_QWORD *)(a1 + 200) = 0LL;
    }
    *(_DWORD *)(a1 + 156) = v83;
    *(_DWORD *)(a1 + 164) = v84;
    *(_DWORD *)(a1 + 152) = v58;
    *(_DWORD *)(a1 + 160) = v57;
    v71 = fxPtSize(a1);
    v72 = *(int *)(a1 + 48);
    *(_DWORD *)(a1 + 128) = v71;
    *(_DWORD *)(a1 + 124) = ((unsigned int)CompDiv(72LL, v71 * v72) + 0x8000) >> 16;
  }
  v37 = *(_DWORD *)(a1 + 40);
  if ( (v37 & 0x2000) != 0 )
    *(_WORD *)(a1 + 400) = (2 * *(_DWORD *)(a1 + 124) - 1) / 100 + 1;
  else
    *(_WORD *)(a1 + 400) = 0;
  if ( !v32 || !v22 )
    return 0LL;
  if ( (v37 & 0x2000) != 0 )
  {
    v73 = *(unsigned __int16 *)(a1 + 400);
    v32 += v73;
    v22 += v73;
  }
  v38 = (v32 + 7) & 0xFFFFFFF8;
  *(_DWORD *)(a1 + 168) = v38;
  v39 = (unsigned int)((int)((v38 + 31) & 0xFFFFFFE0) >> 31);
  if ( v22 * (unsigned __int64)(unsigned int)((int)((v38 + 31) & 0xFFFFFFE0) / 8) > 0xFFFFFFFF )
    return 0LL;
  if ( (v37 & 0x10000000) != 0 )
  {
    LODWORD(v39) = (int)((v38 + 31) & 0xFFFFFFE0) % 8;
    vSetClearTypeState__FONTCONTEXT(a1, v39);
  }
  else
  {
    vSetGrayState__FONTCONTEXT((__int64 *)a1);
  }
  vAdjustGrayStateAndBoldOptions__FONTCONTEXT(a1);
  v40 = *(_DWORD *)(a1 + 40);
  if ( (v40 & 0x10000) == 0 )
  {
    v44 = (int)(v38 + 7) / 8;
LABEL_45:
    v38 = v44;
    goto LABEL_39;
  }
  if ( (v40 & 0x10000000) == 0 )
  {
    v44 = (int)(v38 + 1) / 2;
    goto LABEL_45;
  }
LABEL_39:
  v41 = *(_DWORD *)(a1 + 116);
  *(_DWORD *)(a1 + 172) = ((v22 * v38 + 3) & 0xFFFFFFFC) + 16;
  if ( (v41 & 0x11) == 17 && (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 300LL) & 0x40) != 0 )
    *(_DWORD *)(a1 + 116) = v41 | 0x40;
  return 1LL;
}
