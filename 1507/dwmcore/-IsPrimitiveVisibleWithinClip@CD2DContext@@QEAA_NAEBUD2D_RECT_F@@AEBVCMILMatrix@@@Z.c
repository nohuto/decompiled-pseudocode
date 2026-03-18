/*
 * XREFs of ?IsPrimitiveVisibleWithinClip@CD2DContext@@QEAA_NAEBUD2D_RECT_F@@AEBVCMILMatrix@@@Z @ 0x1800DDC90
 * Callers:
 *     ?AppendHWDrawListEntries@CHWDrawListCache@@QEAAJPEAVID2DContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@_N@Z @ 0x1800DE1F0 (-AppendHWDrawListEntries@CHWDrawListCache@@QEAAJPEAVID2DContext@@AEBVCMILMatrix@@MW4Enum@MilComp.c)
 * Callees:
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x180040290 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?Transform@CBaseMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1800DEA3C (-Transform@CBaseMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 */

bool __fastcall CD2DContext::IsPrimitiveVisibleWithinClip(
        CD2DContext *this,
        const struct D2D_RECT_F *a2,
        const struct CMILMatrix *a3)
{
  __m128 top_low; // xmm1
  int v4; // ebx
  int v6; // ecx
  __int64 v8; // rax
  unsigned __int64 v9; // xmm0_8
  __m128 bottom_low; // xmm1
  bool v11; // zf
  float v12; // xmm11_4
  float v13; // xmm10_4
  float v14; // xmm13_4
  float v15; // xmm12_4
  float v16; // xmm8_4
  __int64 v17; // rax
  float v18; // xmm9_4
  float v19; // xmm7_4
  float v20; // xmm6_4
  __int128 v22; // [rsp+28h] [rbp-79h] BYREF
  __int128 v23; // [rsp+38h] [rbp-69h]
  _QWORD v24[4]; // [rsp+48h] [rbp-59h] BYREF

  top_low = (__m128)LODWORD(a2->top);
  v4 = 0;
  v6 = *((_DWORD *)this + 48);
  v8 = 0LL;
  v23 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
  v24[0] = _mm_unpacklo_ps((__m128)LODWORD(a2->left), top_low).m128_u64[0];
  v9 = _mm_unpacklo_ps((__m128)LODWORD(a2->right), top_low).m128_u64[0];
  bottom_low = (__m128)LODWORD(a2->bottom);
  v24[1] = v9;
  v24[2] = _mm_unpacklo_ps((__m128)LODWORD(a2->left), bottom_low).m128_u64[0];
  v24[3] = _mm_unpacklo_ps((__m128)LODWORD(a2->right), bottom_low).m128_u64[0];
  if ( v6 )
    v8 = *(_QWORD *)(*((_QWORD *)this + 21) + 8LL * (unsigned int)(v6 - 1));
  v11 = *(_DWORD *)(v8 + 76) == 1;
  v22 = *(_OWORD *)(v8 + 60);
  if ( v11 )
  {
    v12 = (float)(int)CFloatFPU::CeilingSat(*(float *)&v22 - 0.5);
    v13 = (float)(int)CFloatFPU::CeilingSat(*((float *)&v22 + 1) - 0.5);
    v14 = (float)(int)CFloatFPU::CeilingSat(*((float *)&v22 + 2) - 0.5);
    v15 = (float)(int)CFloatFPU::CeilingSat(*((float *)&v22 + 3) - 0.5);
  }
  else
  {
    v15 = *((float *)&v22 + 3);
    v14 = *((float *)&v22 + 2);
    v13 = *((float *)&v22 + 1);
    v12 = *(float *)&v22;
  }
  v16 = *((float *)&v23 + 3);
  v17 = 0LL;
  v18 = *((float *)&v23 + 2);
  v19 = *((float *)&v23 + 1);
  v20 = *(float *)&v23;
  do
  {
    CBaseMatrix::Transform(a3, (const struct MilPoint2F *)&v24[v17], (struct MilPoint2F *)&v22, 1u);
    if ( v16 <= *((float *)&v22 + 1) )
      v16 = *((float *)&v22 + 1);
    if ( v18 <= *(float *)&v22 )
      v18 = *(float *)&v22;
    if ( *((float *)&v22 + 1) <= v19 )
      v19 = *((float *)&v22 + 1);
    if ( *(float *)&v22 <= v20 )
      v20 = *(float *)&v22;
    v17 = ++v4;
  }
  while ( (unsigned __int64)v4 < 4 );
  return v14 > v20 && v15 > v19 && v18 > v12 && v16 > v13;
}
