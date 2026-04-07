/*
 * XREFs of ?_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008CD64
 * Callers:
 *     ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008C654 (-Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18003CA30 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?D2DMatrixRotationYawPitchRoll@@YAPEAUD2DMatrix@@PEAU1@MMM@Z @ 0x18009BA50 (-D2DMatrixRotationYawPitchRoll@@YAPEAUD2DMatrix@@PEAU1@MMM@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18009BB08 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_UpdateAnimated3DResources(CAnimatedTransitionVisual *this)
{
  float v1; // xmm2_4
  struct D2DMatrix *v2; // rdi
  float v3; // xmm1_4
  float v5; // xmm8_4
  signed int v6; // eax
  float v7; // xmm0_4
  __m128i v8; // xmm10
  signed int v9; // eax
  float v10; // xmm10_4
  __m128i v11; // xmm11
  signed int v12; // eax
  float v13; // xmm10_4
  int v14; // xmm2_4
  __m128i v15; // xmm6
  float v16; // xmm10_4
  __m128i v17; // xmm0
  int v18; // eax
  float v19; // xmm11_4
  float v20; // xmm10_4
  float v21; // xmm11_4
  float v22; // xmm7_4
  float v23; // xmm6_4
  int v24; // xmm0_4
  float v25; // xmm5_4
  int v26; // ecx
  int v27; // ecx
  float v28; // xmm7_4
  float v29; // xmm6_4
  signed int v30; // eax
  __m128i v31; // xmm3
  bool v32; // sf
  int v33; // eax
  __m128i v34; // xmm0
  signed int v35; // eax
  __m128i v36; // xmm3
  float v37; // xmm1_4
  float v38; // xmm0_4
  float v39; // xmm3_4
  const struct D2DMatrix *v40; // rdx
  float v41; // xmm0_4
  int v42; // eax
  unsigned int v43; // edi
  int v44; // eax
  int v46; // [rsp+38h] [rbp-D0h] BYREF
  int v47; // [rsp+3Ch] [rbp-CCh]
  int v48; // [rsp+40h] [rbp-C8h]
  int v49; // [rsp+44h] [rbp-C4h]
  int v50; // [rsp+48h] [rbp-C0h]
  float v51; // [rsp+4Ch] [rbp-BCh]
  int v52; // [rsp+50h] [rbp-B8h]
  int v53; // [rsp+54h] [rbp-B4h]
  int v54; // [rsp+58h] [rbp-B0h]
  int v55; // [rsp+5Ch] [rbp-ACh]
  int v56; // [rsp+60h] [rbp-A8h]
  int v57; // [rsp+64h] [rbp-A4h]
  float v58; // [rsp+68h] [rbp-A0h]
  float v59; // [rsp+6Ch] [rbp-9Ch]
  int v60; // [rsp+70h] [rbp-98h]
  int v61; // [rsp+74h] [rbp-94h]
  _DWORD v62[4]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v63[8]; // [rsp+88h] [rbp-80h] BYREF
  float v64; // [rsp+90h] [rbp-78h]
  _BYTE v65[144]; // [rsp+98h] [rbp-70h] BYREF

  v1 = *((float *)this + 190);
  v2 = (CAnimatedTransitionVisual *)((char *)this + 500);
  v3 = *((float *)this + 191);
  v5 = 0.0;
  v6 = *((_DWORD *)this + 212) - *((_DWORD *)this + 210);
  v7 = (float)*((int *)this + 210);
  if ( v6 < 0 )
    v6 = 0;
  v8 = _mm_cvtsi32_si128(v6);
  v9 = *((_DWORD *)this + 213) - *((_DWORD *)this + 211);
  LODWORD(v10) = _mm_cvtepi32_ps(v8).m128_u32[0];
  if ( v9 < 0 )
    v9 = 0;
  v11 = _mm_cvtsi32_si128(v9);
  v64 = 0.0;
  v12 = *((_DWORD *)this + 212) - *((_DWORD *)this + 210);
  v13 = v10 * v1;
  if ( v12 < 0 )
    v12 = 0;
  v14 = LODWORD(v1) ^ _xmm;
  v15 = _mm_cvtsi32_si128(v12);
  v16 = v13 + v7;
  v17 = _mm_cvtsi32_si128(*((_DWORD *)this + 211));
  v18 = *((_DWORD *)this + 213) - *((_DWORD *)this + 211);
  v19 = _mm_cvtepi32_ps(v11).m128_f32[0] * v3;
  if ( v18 < 0 )
    v18 = 0;
  v60 = 0;
  v20 = v16 + *((float *)this + 184);
  v59 = 0.0;
  v58 = 0.0;
  v57 = 0;
  v55 = 0;
  v54 = 0;
  v53 = 0;
  v52 = 0;
  v50 = 0;
  v49 = 0;
  v48 = 0;
  v47 = 0;
  v61 = 1065353216;
  v21 = (float)(v19 + _mm_cvtepi32_ps(v17).m128_f32[0]) + *((float *)this + 185);
  v22 = (float)v18 * *((float *)this + 188);
  v51 = v22;
  v23 = _mm_cvtepi32_ps(v15).m128_f32[0] * *((float *)this + 187);
  *(_QWORD *)((char *)this + 540) = 1065353216LL;
  *((_DWORD *)this + 137) = v14;
  *((_DWORD *)this + 138) = LODWORD(v3) ^ _xmm;
  *(_QWORD *)((char *)this + 532) = 0LL;
  *(_QWORD *)((char *)this + 524) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_DWORD *)this + 140) = 1065353216;
  *((_DWORD *)this + 130) = 1065353216;
  *(_DWORD *)v2 = 1065353216;
  *((_DWORD *)this + 139) = 0;
  v24 = *((_DWORD *)this + 189);
  v46 = LODWORD(v23);
  v56 = v24;
  D2DMatrixMultiply(
    (CAnimatedTransitionVisual *)((char *)this + 500),
    (CAnimatedTransitionVisual *)((char *)this + 500),
    (const struct D2DMatrix *)&v46);
  v26 = *((_DWORD *)this + 251);
  if ( v26 )
  {
    v27 = v26 - 1;
    if ( v27 )
    {
      if ( v27 == 1 )
      {
        v28 = (float)(v22 * *((float *)this + 197)) + (float)((float)(v25 - v22) * *((float *)this + 191));
        v29 = (float)(v23 * *((float *)this + 196)) + (float)((float)(v25 - v23) * *((float *)this + 190));
      }
      else
      {
        v28 = 0.0;
        v29 = 0.0;
      }
      goto LABEL_23;
    }
    v30 = *((_DWORD *)this + 216) - *((_DWORD *)this + 214);
    if ( v30 < 0 )
      v30 = 0;
    v31 = _mm_cvtsi32_si128(v30);
    v33 = *((_DWORD *)this + 217) - *((_DWORD *)this + 215);
    v32 = v33 < 0;
    v29 = (float)((float)(_mm_cvtepi32_ps(v31).m128_f32[0] * *((float *)this + 196)) + (float)*((int *)this + 214))
        - (float)(v20 - (float)((float)((float)(0.5 - *((float *)this + 190)) * v23) + *((float *)this + 190)));
    v34 = _mm_cvtsi32_si128(*((_DWORD *)this + 215));
  }
  else
  {
    v35 = *((_DWORD *)this + 212) - *((_DWORD *)this + 210);
    if ( v35 < 0 )
      v35 = 0;
    v36 = _mm_cvtsi32_si128(v35);
    v33 = *((_DWORD *)this + 213) - *((_DWORD *)this + 211);
    v32 = v33 < 0;
    v29 = (float)((float)(_mm_cvtepi32_ps(v36).m128_f32[0] * *((float *)this + 196)) + (float)*((int *)this + 210))
        - (float)(v20 - (float)((float)((float)(0.5 - *((float *)this + 190)) * v23) + *((float *)this + 190)));
    v34 = _mm_cvtsi32_si128(*((_DWORD *)this + 211));
  }
  if ( v32 )
    v33 = 0;
  v28 = (float)((float)((float)v33 * *((float *)this + 197)) + _mm_cvtepi32_ps(v34).m128_f32[0])
      - (float)(v21 - (float)((float)((float)(0.5 - *((float *)this + 191)) * v22) + *((float *)this + 191)));
LABEL_23:
  v37 = *((float *)this + 191);
  v38 = *((float *)this + 190) - v29;
  v57 = 0;
  v55 = 0;
  v54 = 0;
  v53 = 0;
  v52 = 0;
  v50 = 0;
  v49 = 0;
  v48 = 0;
  v47 = 0;
  v60 = 0;
  v58 = v38;
  v59 = v37 - v28;
  v61 = 1065353216;
  v56 = 1065353216;
  v51 = 1.0;
  v46 = 1065353216;
  D2DMatrixMultiply(v2, v2, (const struct D2DMatrix *)&v46);
  v39 = *((float *)this + 231);
  if ( v39 != 0.0 )
  {
    D2DMatrixRotationYawPitchRoll((struct D2DMatrix *)&v46, 0.0, 0.0, v39 * 0.017453292);
    D2DMatrixMultiply(v2, v2, (const struct D2DMatrix *)&v46);
  }
  D2DMatrixRotationYawPitchRoll(
    (struct D2DMatrix *)v65,
    *((float *)this + 194) * 0.017453292,
    *((float *)this + 193) * 0.017453292,
    *((float *)this + 195) * 0.017453292);
  D2DMatrixMultiply(v2, v2, (const struct D2DMatrix *)v65);
  v57 = 0;
  v55 = 0;
  v54 = 0;
  v53 = 0;
  v52 = 0;
  v50 = 0;
  v49 = 0;
  v48 = 0;
  v47 = 0;
  v60 = 0;
  v58 = v29 + v20;
  v59 = v28 + v21;
  v61 = 1065353216;
  v56 = 1065353216;
  v51 = 1.0;
  v46 = 1065353216;
  D2DMatrixMultiply(v2, v40, (const struct D2DMatrix *)&v46);
  v62[2] = 0;
  v62[0] = 1056964608;
  v62[1] = 1056964608;
  D3DXVec3TransformCoord((struct D2DVector3 *)v63, (const struct D2DVector3 *)v62, v2);
  if ( *((_BYTE *)this + 1020) )
    v5 = v64;
  v41 = *((float *)this + 226) + *((float *)this + 186);
  v57 = 0;
  v55 = 0;
  v54 = 0;
  v53 = 0;
  v52 = 0;
  v50 = 0;
  v49 = 0;
  v48 = 0;
  v47 = 0;
  v58 = 0.0;
  v59 = 0.0;
  v60 = COERCE_UNSIGNED_INT(v41 + v5) ^ _xmm;
  v61 = 1065353216;
  v56 = 1065353216;
  v51 = 1.0;
  v46 = 1065353216;
  D2DMatrixMultiply(v2, v2, (const struct D2DMatrix *)&v46);
  v42 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct D2DMatrix *))(**(_QWORD **)(*((_QWORD *)this + 34) + 16LL)
                                                                      + 1064LL))(
          *(_QWORD *)(*((_QWORD *)this + 34) + 16LL),
          *(unsigned int *)(*((_QWORD *)this + 34) + 24LL),
          v2);
  v43 = v42;
  if ( v42 >= 0 )
  {
    if ( *((float *)this + 182) != *((float *)this + 183) )
    {
      v44 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 37)
                                                                                            + 16LL)
                                                                              + 944LL))(
              *(_QWORD *)(*((_QWORD *)this + 37) + 16LL),
              *(unsigned int *)(*((_QWORD *)this + 37) + 24LL),
              *(unsigned int *)(*((_QWORD *)this + 36) + 24LL),
              0LL,
              *(_DWORD *)(*((_QWORD *)this + 36) + 24LL));
      v43 = v44;
      if ( v44 >= 0 )
        *((_DWORD *)this + 183) = *((_DWORD *)this + 182);
      else
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v44, 0x720u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v42, 0x717u);
  }
  return v43;
}
