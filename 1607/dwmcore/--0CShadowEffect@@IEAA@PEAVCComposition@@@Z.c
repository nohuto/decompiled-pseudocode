/*
 * XREFs of ??0CShadowEffect@@IEAA@PEAVCComposition@@@Z @ 0x18012B11C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x180014E8C (--0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z.c)
 */

CShadowEffect *__fastcall CShadowEffect::CShadowEffect(CShadowEffect *this, struct CComposition *a2)
{
  CShadowEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2, &CLSID_D2D1Shadow);
  *((_QWORD *)this + 34) = 1077936128LL;
  *(_QWORD *)this = &CShadowEffect::`vftable';
  *((_QWORD *)this + 35) = 0LL;
  result = this;
  *((_QWORD *)this + 36) = 1065353216LL;
  return result;
}
