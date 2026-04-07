/*
 * XREFs of ?_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008DD6C
 * Callers:
 *     ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008D5F4 (-Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180036340 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 *     ?D2DMatrixRotationYawPitchRoll@@YAPEAUD2DMatrix@@PEAU1@MMM@Z @ 0x18009EE44 (-D2DMatrixRotationYawPitchRoll@@YAPEAUD2DMatrix@@PEAU1@MMM@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18009EEFC (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_UpdateAnimated3DResources(CAnimatedTransitionVisual *this)
{
  struct D2DMatrix *v1; // rdi
  float v2; // xmm2_4
  float v3; // xmm1_4
  signed int v4; // eax
  __m128i v6; // xmm0
  float v7; // xmm0_4
  __m128i v8; // xmm10
  float v9; // xmm8_4
  signed int v10; // eax
  float v11; // xmm10_4
  __m128i v12; // xmm11
  signed int v13; // eax
  float v14; // xmm10_4
  int v15; // xmm2_4
  __m128i v16; // xmm5
  float v17; // xmm10_4
  __m128i v18; // xmm0
  int v19; // eax
  float v20; // xmm11_4
  float v21; // xmm10_4
  float v22; // xmm11_4
  float v23; // xmm9_4
  float v24; // xmm5_4
  int v25; // xmm0_4
  const struct D2DMatrix *v26; // rdx
  float v27; // xmm4_4
  float v28; // xmm5_4
  int v29; // ecx
  float v30; // xmm6_4
  float v31; // xmm7_4
  int v32; // ecx
  signed int v33; // eax
  __m128i v34; // xmm6
  bool v35; // sf
  int v36; // eax
  __m128i v37; // xmm0
  signed int v38; // eax
  __m128i v39; // xmm6
  float v40; // xmm1_4
  float v41; // xmm0_4
  float v42; // xmm3_4
  const struct D2DMatrix *v43; // rdx
  float v44; // xmm0_4
  CResource *v45; // rcx
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  int v49; // eax
  unsigned int v50; // edi
  float v51; // xmm0_4
  CResource *v52; // rcx
  int v53; // eax
  float v55; // [rsp+38h] [rbp-D0h] BYREF
  int v56; // [rsp+3Ch] [rbp-CCh]
  int v57; // [rsp+40h] [rbp-C8h]
  int v58; // [rsp+44h] [rbp-C4h]
  int v59; // [rsp+48h] [rbp-C0h]
  float v60; // [rsp+4Ch] [rbp-BCh]
  int v61; // [rsp+50h] [rbp-B8h]
  int v62; // [rsp+54h] [rbp-B4h]
  int v63; // [rsp+58h] [rbp-B0h]
  int v64; // [rsp+5Ch] [rbp-ACh]
  int v65; // [rsp+60h] [rbp-A8h]
  int v66; // [rsp+64h] [rbp-A4h]
  float v67; // [rsp+68h] [rbp-A0h]
  float v68; // [rsp+6Ch] [rbp-9Ch]
  int v69; // [rsp+70h] [rbp-98h]
  int v70; // [rsp+74h] [rbp-94h]
  _DWORD v71[4]; // [rsp+78h] [rbp-90h] BYREF
  int v72; // [rsp+88h] [rbp-80h] BYREF
  __int128 v73; // [rsp+8Ch] [rbp-7Ch]
  int v74; // [rsp+9Ch] [rbp-6Ch]
  int v75; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v76[4]; // [rsp+ACh] [rbp-5Ch] BYREF
  __int128 v77; // [rsp+B0h] [rbp-58h]
  __int128 v78; // [rsp+C0h] [rbp-48h]
  __int128 v79; // [rsp+D0h] [rbp-38h]
  __int128 v80; // [rsp+E0h] [rbp-28h]

  v1 = (CAnimatedTransitionVisual *)((char *)this + 500);
  v2 = *((float *)this + 190);
  v3 = *((float *)this + 191);
  v4 = *((_DWORD *)this + 212) - *((_DWORD *)this + 210);
  v6 = _mm_cvtsi32_si128(*((_DWORD *)this + 210));
  if ( v4 < 0 )
    v4 = 0;
  LODWORD(v7) = _mm_cvtepi32_ps(v6).m128_u32[0];
  v8 = _mm_cvtsi32_si128(v4);
  v9 = 0.0;
  v10 = *((_DWORD *)this + 213) - *((_DWORD *)this + 211);
  LODWORD(v11) = _mm_cvtepi32_ps(v8).m128_u32[0];
  if ( v10 < 0 )
    v10 = 0;
  v12 = _mm_cvtsi32_si128(v10);
  DWORD1(v73) = 0;
  v13 = *((_DWORD *)this + 212) - *((_DWORD *)this + 210);
  v14 = v11 * v2;
  if ( v13 < 0 )
    v13 = 0;
  v15 = LODWORD(v2) ^ _xmm;
  v16 = _mm_cvtsi32_si128(v13);
  v17 = v14 + v7;
  v18 = _mm_cvtsi32_si128(*((_DWORD *)this + 211));
  v19 = *((_DWORD *)this + 213) - *((_DWORD *)this + 211);
  v20 = _mm_cvtepi32_ps(v12).m128_f32[0] * v3;
  if ( v19 < 0 )
    v19 = 0;
  v69 = 0;
  v21 = v17 + *((float *)this + 184);
  v68 = 0.0;
  v67 = 0.0;
  v66 = 0;
  v64 = 0;
  v63 = 0;
  v62 = 0;
  v61 = 0;
  v59 = 0;
  v58 = 0;
  v57 = 0;
  v56 = 0;
  v70 = 1065353216;
  v22 = (float)(v20 + _mm_cvtepi32_ps(v18).m128_f32[0]) + *((float *)this + 185);
  v23 = (float)v19 * *((float *)this + 188);
  v60 = v23;
  v24 = _mm_cvtepi32_ps(v16).m128_f32[0] * *((float *)this + 187);
  *(_QWORD *)((char *)this + 540) = 1065353216LL;
  *((_DWORD *)this + 137) = v15;
  *((_DWORD *)this + 138) = LODWORD(v3) ^ _xmm;
  *(_QWORD *)((char *)this + 532) = 0LL;
  *(_QWORD *)((char *)this + 524) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_DWORD *)this + 140) = 1065353216;
  *((_DWORD *)this + 130) = 1065353216;
  *(_DWORD *)v1 = 1065353216;
  *((_DWORD *)this + 139) = 0;
  v25 = *((_DWORD *)this + 189);
  v55 = v24;
  v65 = v25;
  D2DMatrixMultiply(
    (CAnimatedTransitionVisual *)((char *)this + 500),
    (CAnimatedTransitionVisual *)((char *)this + 500),
    (const struct D2DMatrix *)&v55);
  v29 = *((_DWORD *)this + 251);
  v30 = 0.0;
  v31 = 0.0;
  if ( v29 )
  {
    v32 = v29 - 1;
    if ( v32 )
    {
      if ( v32 == 1 )
      {
        v30 = (float)(v28 * *((float *)this + 196)) + (float)((float)(v27 - v28) * *((float *)this + 190));
        v31 = (float)(v23 * *((float *)this + 197)) + (float)((float)(v27 - v23) * *((float *)this + 191));
      }
      goto LABEL_22;
    }
    v33 = *((_DWORD *)this + 216) - *((_DWORD *)this + 214);
    if ( v33 < 0 )
      v33 = 0;
    v34 = _mm_cvtsi32_si128(v33);
    v36 = *((_DWORD *)this + 217) - *((_DWORD *)this + 215);
    v35 = v36 < 0;
    v30 = (float)((float)(_mm_cvtepi32_ps(v34).m128_f32[0] * *((float *)this + 196)) + (float)*((int *)this + 214))
        - (float)(v21 - (float)((float)((float)(0.5 - *((float *)this + 190)) * v28) + *((float *)this + 190)));
    v37 = _mm_cvtsi32_si128(*((_DWORD *)this + 215));
  }
  else
  {
    v38 = *((_DWORD *)this + 212) - *((_DWORD *)this + 210);
    if ( v38 < 0 )
      v38 = 0;
    v39 = _mm_cvtsi32_si128(v38);
    v36 = *((_DWORD *)this + 213) - *((_DWORD *)this + 211);
    v35 = v36 < 0;
    v30 = (float)((float)(_mm_cvtepi32_ps(v39).m128_f32[0] * *((float *)this + 196)) + (float)*((int *)this + 210))
        - (float)(v21 - (float)((float)((float)(0.5 - *((float *)this + 190)) * v28) + *((float *)this + 190)));
    v37 = _mm_cvtsi32_si128(*((_DWORD *)this + 211));
  }
  if ( v35 )
    v36 = 0;
  v31 = (float)((float)((float)v36 * *((float *)this + 197)) + _mm_cvtepi32_ps(v37).m128_f32[0])
      - (float)(v22 - (float)((float)((float)(0.5 - *((float *)this + 191)) * v23) + *((float *)this + 191)));
LABEL_22:
  v40 = *((float *)this + 191);
  v41 = *((float *)this + 190) - v30;
  v66 = 0;
  v64 = 0;
  v63 = 0;
  v62 = 0;
  v61 = 0;
  v59 = 0;
  v58 = 0;
  v57 = 0;
  v56 = 0;
  v69 = 0;
  v67 = v41;
  v68 = v40 - v31;
  v70 = 1065353216;
  v65 = 1065353216;
  v60 = 1.0;
  v55 = 1.0;
  D2DMatrixMultiply(v1, v26, (const struct D2DMatrix *)&v55);
  v42 = *((float *)this + 231);
  if ( v42 != 0.0 )
  {
    D2DMatrixRotationYawPitchRoll((struct D2DMatrix *)&v55, 0.0, 0.0, v42 * 0.017453292);
    D2DMatrixMultiply(v1, v1, (const struct D2DMatrix *)&v55);
  }
  D2DMatrixRotationYawPitchRoll(
    (struct D2DMatrix *)&v75,
    *((float *)this + 194) * 0.017453292,
    *((float *)this + 193) * 0.017453292,
    *((float *)this + 195) * 0.017453292);
  D2DMatrixMultiply(v1, v1, (const struct D2DMatrix *)&v75);
  v66 = 0;
  v64 = 0;
  v63 = 0;
  v62 = 0;
  v61 = 0;
  v59 = 0;
  v58 = 0;
  v57 = 0;
  v56 = 0;
  v69 = 0;
  v67 = v30 + v21;
  v68 = v31 + v22;
  v70 = 1065353216;
  v65 = 1065353216;
  v60 = 1.0;
  v55 = 1.0;
  D2DMatrixMultiply(v1, v43, (const struct D2DMatrix *)&v55);
  v71[2] = 0;
  v71[0] = 1056964608;
  v71[1] = 1056964608;
  D3DXVec3TransformCoord((struct D2DVector3 *)&v72, (const struct D2DVector3 *)v71, v1);
  if ( *((_BYTE *)this + 1020) )
    v9 = *((float *)&v73 + 1);
  v44 = *((float *)this + 226) + *((float *)this + 186);
  v66 = 0;
  v64 = 0;
  v63 = 0;
  v62 = 0;
  v61 = 0;
  v59 = 0;
  v58 = 0;
  v57 = 0;
  v56 = 0;
  v67 = 0.0;
  v68 = 0.0;
  v69 = COERCE_UNSIGNED_INT(v44 + v9) ^ _xmm;
  v70 = 1065353216;
  v65 = 1065353216;
  v60 = 1.0;
  v55 = 1.0;
  D2DMatrixMultiply(v1, v1, (const struct D2DMatrix *)&v55);
  v75 = 241;
  memset_0(v76, 0, 0x44uLL);
  v45 = (CResource *)*((_QWORD *)this + 34);
  v46 = *((_OWORD *)v1 + 1);
  v77 = *(_OWORD *)v1;
  v47 = *((_OWORD *)v1 + 2);
  v78 = v46;
  v48 = *((_OWORD *)v1 + 3);
  v79 = v47;
  v80 = v48;
  v49 = CResource::Send(v45, &v75, 0x48u);
  v50 = v49;
  if ( v49 >= 0 )
  {
    v51 = *((float *)this + 182);
    if ( v51 != *((float *)this + 183) )
    {
      v72 = 161;
      v73 = 0uLL;
      v74 = 0;
      v74 = *(_DWORD *)(*((_QWORD *)this + 36) + 24LL);
      v52 = (CResource *)*((_QWORD *)this + 37);
      *(double *)((char *)&v73 + 4) = v51;
      v53 = CResource::Send(v52, &v72, 0x18u);
      v50 = v53;
      if ( v53 >= 0 )
        *((_DWORD *)this + 183) = *((_DWORD *)this + 182);
      else
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v53, 0x711u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v49, 0x708u);
  }
  return v50;
}
