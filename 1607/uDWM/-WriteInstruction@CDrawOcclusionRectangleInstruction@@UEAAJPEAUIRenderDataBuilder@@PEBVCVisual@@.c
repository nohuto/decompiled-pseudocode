/*
 * XREFs of ?WriteInstruction@CDrawOcclusionRectangleInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x1800192E0
 * Callers:
 *     ?UpdateRenderData@CVisual@@UEAAJXZ @ 0x180020070 (-UpdateRenderData@CVisual@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawOcclusionRectangleInstruction::WriteInstruction(
        CDrawOcclusionRectangleInstruction *this,
        struct IRenderDataBuilder *a2,
        const struct CVisual *a3)
{
  signed int v3; // eax
  __m128i v4; // xmm1
  __m128i v5; // xmm2
  float v6; // xmm1_4
  __m128i v7; // xmm0
  int v8; // eax
  float v9; // xmm0_4
  float v11; // xmm1_4
  __m128i v12; // xmm0
  float v13; // xmm1_4
  float v14; // [rsp+20h] [rbp-28h] BYREF
  float v15; // [rsp+24h] [rbp-24h]
  float v16; // [rsp+28h] [rbp-20h]
  float v17; // [rsp+2Ch] [rbp-1Ch]

  if ( *((_DWORD *)this + 10) <= *((_DWORD *)this + 8) || *((_DWORD *)this + 11) <= *((_DWORD *)this + 9) )
  {
    v3 = *((_DWORD *)a3 + 28) - *((_DWORD *)this + 5) - *((_DWORD *)this + 4);
    v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 4));
    v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
    if ( v3 < 0 )
      v3 = 0;
    LODWORD(v6) = _mm_cvtepi32_ps(v4).m128_u32[0];
    v7 = _mm_cvtsi32_si128(v3);
    v8 = *((_DWORD *)a3 + 29) - *((_DWORD *)this + 7) - *((_DWORD *)this + 6);
    LODWORD(v9) = _mm_cvtepi32_ps(v7).m128_u32[0];
    if ( v8 < 0 )
      v8 = 0;
    v14 = v6;
    v15 = _mm_cvtepi32_ps(v5).m128_f32[0];
    v16 = v9 + v6;
    v17 = (float)v8 + v15;
  }
  else
  {
    v11 = (float)*((int *)this + 9);
    v14 = (float)*((int *)this + 8);
    v12 = _mm_cvtsi32_si128(*((_DWORD *)this + 10));
    v15 = v11;
    v13 = (float)*((int *)this + 11);
    LODWORD(v16) = _mm_cvtepi32_ps(v12).m128_u32[0];
    v17 = v13;
  }
  return (*(__int64 (__fastcall **)(struct IRenderDataBuilder *, float *))(*(_QWORD *)a2 + 72LL))(a2, &v14);
}
