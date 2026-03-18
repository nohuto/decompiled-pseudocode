/*
 * XREFs of ??0CTurbulenceEffect@@IEAA@PEAVCComposition@@@Z @ 0x18015633C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x180014E8C (--0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z.c)
 */

CTurbulenceEffect *__fastcall CTurbulenceEffect::CTurbulenceEffect(CTurbulenceEffect *this, struct CComposition *a2)
{
  CTurbulenceEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2, &CLSID_D2D1Turbulence);
  *((_QWORD *)this + 37) = 1LL;
  *(_QWORD *)this = &CTurbulenceEffect::`vftable';
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 70) = 1008981770;
  *(_QWORD *)((char *)this + 284) = 1008981770LL;
  result = this;
  *((_DWORD *)this + 73) = 0;
  *((_QWORD *)this + 38) = 0LL;
  return result;
}
