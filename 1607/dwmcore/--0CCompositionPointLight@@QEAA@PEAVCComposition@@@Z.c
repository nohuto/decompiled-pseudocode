/*
 * XREFs of ??0CCompositionPointLight@@QEAA@PEAVCComposition@@@Z @ 0x180150950
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CCompositionLight@@QEAA@PEAVCComposition@@@Z @ 0x18014FF70 (--0CCompositionLight@@QEAA@PEAVCComposition@@@Z.c)
 */

CCompositionPointLight *__fastcall CCompositionPointLight::CCompositionPointLight(
        CCompositionPointLight *this,
        struct CComposition *a2)
{
  CCompositionLight::CCompositionLight(this, a2);
  *((_DWORD *)this + 56) = 1120403456;
  *(_QWORD *)this = &CCompositionPointLight::`vftable';
  *((_DWORD *)this + 44) = 1065353216;
  *((_DWORD *)this + 50) = 1065353216;
  *((_DWORD *)this + 49) = 1065353216;
  *((_DWORD *)this + 48) = 1065353216;
  *((_DWORD *)this + 47) = 1065353216;
  return this;
}
