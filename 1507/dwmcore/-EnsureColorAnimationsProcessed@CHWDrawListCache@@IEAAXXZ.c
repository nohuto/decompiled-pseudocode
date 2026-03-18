/*
 * XREFs of ?EnsureColorAnimationsProcessed@CHWDrawListCache@@IEAAXXZ @ 0x1800DE414
 * Callers:
 *     ?AppendHWDrawListEntries@CHWDrawListCache@@QEAAJPEAVID2DContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@_N@Z @ 0x1800DE1F0 (-AppendHWDrawListEntries@CHWDrawListCache@@QEAAJPEAVID2DContext@@AEBVCMILMatrix@@MW4Enum@MilComp.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?Premultiply@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x180099FBC (-Premultiply@@YA-AU_D3DCOLORVALUE@@AEBU1@@Z.c)
 *     ?UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x1800FEA20 (-UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z.c)
 */

void __fastcall CHWDrawListCache::EnsureColorAnimationsProcessed(CHWDrawListCache *this)
{
  __int64 i; // rdi
  __int64 v3; // r9
  __int64 v4; // rax
  const __m128i *v5; // rax
  __int64 v6; // r9
  __int64 v7; // r8
  __m128 v8; // xmm2
  const __m128i *v9; // rax
  __int64 v10; // r10
  __m128 v11; // xmm2
  unsigned __int32 v12; // xmm0_4
  unsigned __int32 v13; // xmm1_4
  __int64 v14; // rax
  _DWORD v15[4]; // [rsp+20h] [rbp-19h]
  _DWORD v16[4]; // [rsp+30h] [rbp-9h]
  struct _D3DCOLORVALUE v17; // [rsp+40h] [rbp+7h] BYREF
  struct _D3DCOLORVALUE v18; // [rsp+50h] [rbp+17h] BYREF
  struct _D3DCOLORVALUE v19; // [rsp+60h] [rbp+27h] BYREF
  struct _D3DCOLORVALUE v20; // [rsp+70h] [rbp+37h] BYREF

  if ( *((_BYTE *)this + 63) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 6); i = (unsigned int)(i + 1) )
    {
      v3 = *((_QWORD *)this + 2);
      v4 = *(_QWORD *)(48 * i + v3 + 32);
      if ( v4 && *(_QWORD *)(48 * i + v3) )
      {
        *(struct _D3DCOLORVALUE *)&v20.r = *(struct _D3DCOLORVALUE *)(v4 + 120);
        v5 = (const __m128i *)Premultiply(&v19, &v20);
        v8 = (__m128)_mm_loadu_si128(v5);
        v16[0] = v8.m128_i32[0];
        v16[3] = v5->m128i_i32[3];
        v16[1] = _mm_shuffle_ps(v8, v8, 85).m128_u32[0];
        v16[2] = _mm_shuffle_ps(v8, v8, 170).m128_u32[0];
        v9 = (const __m128i *)Premultiply(&v18, (const struct _D3DCOLORVALUE *)(v7 + v6 + 16));
        v11 = (__m128)_mm_loadu_si128(v9);
        v15[0] = v11.m128_i32[0];
        v12 = _mm_shuffle_ps(v11, v11, 85).m128_u32[0];
        v13 = _mm_shuffle_ps(v11, v11, 170).m128_u32[0];
        v11.m128_i32[0] = v9->m128i_i32[3];
        v14 = 0LL;
        v15[3] = v11.m128_i32[0];
        v15[1] = v12;
        v15[2] = v13;
        do
        {
          *(float *)((char *)&v17.r + v14 * 4) = *(float *)&v15[v14] * *(float *)&v16[v14];
          ++v14;
        }
        while ( v14 < 4 );
        CDrawListPrimitive::UpdatePremultipliedColor(*(CDrawListPrimitive **)(v10 + 16), &v17);
      }
    }
  }
}
