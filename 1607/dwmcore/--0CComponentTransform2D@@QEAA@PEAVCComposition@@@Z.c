/*
 * XREFs of ??0CComponentTransform2D@@QEAA@PEAVCComposition@@@Z @ 0x1800207BC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CPropertyChangeResource@@QEAA@PEAVCComposition@@@Z @ 0x180023F70 (--0CPropertyChangeResource@@QEAA@PEAVCComposition@@@Z.c)
 */

CComponentTransform2D *__fastcall CComponentTransform2D::CComponentTransform2D(
        CComponentTransform2D *this,
        struct CComposition *a2)
{
  CComponentTransform2D *result; // rax

  CPropertyChangeResource::CPropertyChangeResource(this, a2);
  *(_QWORD *)this = &CComponentTransform2D::`vftable';
  *((_DWORD *)this + 40) = 1065353216;
  *((_DWORD *)this + 41) = 1065353216;
  result = this;
  *(_OWORD *)((char *)this + 172) = _xmm;
  *(_QWORD *)((char *)this + 188) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  return result;
}
