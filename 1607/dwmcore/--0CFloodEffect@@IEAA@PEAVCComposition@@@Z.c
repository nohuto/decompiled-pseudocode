/*
 * XREFs of ??0CFloodEffect@@IEAA@PEAVCComposition@@@Z @ 0x18012AE00
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x180014E8C (--0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z.c)
 */

CFloodEffect *__fastcall CFloodEffect::CFloodEffect(CFloodEffect *this, struct CComposition *a2)
{
  CFilterEffect::CFilterEffect(this, a2, &CLSID_D2D1Flood);
  *((_DWORD *)this + 71) = 1065353216;
  *(_QWORD *)this = &CFloodEffect::`vftable';
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 70) = 0;
  return this;
}
