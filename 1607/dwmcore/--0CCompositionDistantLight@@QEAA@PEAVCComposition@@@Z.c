/*
 * XREFs of ??0CCompositionDistantLight@@QEAA@PEAVCComposition@@@Z @ 0x180150564
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CCompositionLight@@QEAA@PEAVCComposition@@@Z @ 0x18014FF70 (--0CCompositionLight@@QEAA@PEAVCComposition@@@Z.c)
 */

CCompositionDistantLight *__fastcall CCompositionDistantLight::CCompositionDistantLight(
        CCompositionDistantLight *this,
        struct CComposition *a2)
{
  CCompositionLight::CCompositionLight(this, a2);
  *((_DWORD *)this + 52) = -1082130432;
  *(_QWORD *)this = &CCompositionDistantLight::`vftable';
  *((_DWORD *)this + 47) = 1065353216;
  *((_DWORD *)this + 46) = 1065353216;
  *((_DWORD *)this + 45) = 1065353216;
  *((_DWORD *)this + 44) = 1065353216;
  return this;
}
