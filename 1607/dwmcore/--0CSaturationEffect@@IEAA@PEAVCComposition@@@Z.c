/*
 * XREFs of ??0CSaturationEffect@@IEAA@PEAVCComposition@@@Z @ 0x18012B098
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x180014E8C (--0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z.c)
 */

CSaturationEffect *__fastcall CSaturationEffect::CSaturationEffect(CSaturationEffect *this, struct CComposition *a2)
{
  CFilterEffect::CFilterEffect(this, a2, &CLSID_D2D1Saturation);
  *((_DWORD *)this + 68) = 1056964608;
  *(_QWORD *)this = &CSaturationEffect::`vftable';
  return this;
}
