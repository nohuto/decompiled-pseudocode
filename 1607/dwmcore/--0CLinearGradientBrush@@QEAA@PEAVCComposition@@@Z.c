/*
 * XREFs of ??0CLinearGradientBrush@@QEAA@PEAVCComposition@@@Z @ 0x18013EEB4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z @ 0x180139624 (--0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z.c)
 */

CLinearGradientBrush *__fastcall CLinearGradientBrush::CLinearGradientBrush(
        CLinearGradientBrush *this,
        struct CComposition *a2)
{
  CLinearGradientBrush *result; // rax

  CSurfaceBrush::CSurfaceBrush(this, a2);
  *((_BYTE *)this + 192) = 0;
  *((_QWORD *)this + 22) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_QWORD *)this = &CLinearGradientBrush::`vftable'{for `CSpriteVisualContent'};
  *((_QWORD *)this + 15) = &CLinearGradientBrush::`vftable'{for `IVisualListenerInfoProvider'};
  result = this;
  *((_QWORD *)this + 23) = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)0LL).m128_u64[0];
  return result;
}
