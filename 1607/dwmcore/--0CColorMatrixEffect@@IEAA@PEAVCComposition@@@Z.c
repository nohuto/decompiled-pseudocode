/*
 * XREFs of ??0CColorMatrixEffect@@IEAA@PEAVCComposition@@@Z @ 0x18012AD38
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x180014E8C (--0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z.c)
 */

CColorMatrixEffect *__fastcall CColorMatrixEffect::CColorMatrixEffect(
        CColorMatrixEffect *this,
        struct CComposition *a2)
{
  CColorMatrixEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2, &CLSID_D2D1ColorMatrix);
  *((_DWORD *)this + 89) = 0;
  *((_OWORD *)this + 17) = _xmm;
  *(_QWORD *)this = &CColorMatrixEffect::`vftable';
  result = this;
  *((_OWORD *)this + 18) = _xmm;
  *((_DWORD *)this + 88) = 1;
  *((_OWORD *)this + 19) = _xmm;
  *((_OWORD *)this + 20) = _xmm;
  *((_OWORD *)this + 21) = 0LL;
  return result;
}
