/*
 * XREFs of ??0CCompositionSpotLight@@QEAA@PEAVCComposition@@@Z @ 0x180150E34
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CCompositionLight@@QEAA@PEAVCComposition@@@Z @ 0x18014FF70 (--0CCompositionLight@@QEAA@PEAVCComposition@@@Z.c)
 */

CCompositionSpotLight *__fastcall CCompositionSpotLight::CCompositionSpotLight(
        CCompositionSpotLight *this,
        struct CComposition *a2)
{
  CCompositionSpotLight *result; // rax

  CCompositionLight::CCompositionLight(this, a2);
  *((_DWORD *)this + 56) = 1057360530;
  *(_QWORD *)this = &CCompositionSpotLight::`vftable';
  *((_DWORD *)this + 44) = 1065353216;
  *((_DWORD *)this + 61) = 1065353216;
  *((_DWORD *)this + 60) = 1065353216;
  *((_DWORD *)this + 59) = 1065353216;
  *((_DWORD *)this + 58) = 1065353216;
  *((_DWORD *)this + 65) = 1065353216;
  *((_DWORD *)this + 64) = 1065353216;
  *((_DWORD *)this + 63) = 1065353216;
  *((_DWORD *)this + 62) = 1065353216;
  result = this;
  *((_DWORD *)this + 57) = 1070141403;
  *((_DWORD *)this + 55) = -1082130432;
  *((_DWORD *)this + 52) = 1120403456;
  return result;
}
