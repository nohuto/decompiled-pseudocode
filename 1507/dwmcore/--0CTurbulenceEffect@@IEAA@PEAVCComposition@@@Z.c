/*
 * XREFs of ??0CTurbulenceEffect@@IEAA@PEAVCComposition@@@Z @ 0x18011D1F0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x180002CCC (--0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z.c)
 */

CTurbulenceEffect *__fastcall CTurbulenceEffect::CTurbulenceEffect(CTurbulenceEffect *this, struct CComposition *a2)
{
  __int64 v2; // rcx
  CTurbulenceEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2, &CLSID_D2D1Turbulence);
  *(_QWORD *)(v2 + 200) = 1LL;
  *(_QWORD *)v2 = &CTurbulenceEffect::`vftable';
  *(_DWORD *)(v2 + 184) = 1008981770;
  *(_QWORD *)(v2 + 188) = 1008981770LL;
  result = (CTurbulenceEffect *)v2;
  *(_QWORD *)(v2 + 176) = 0LL;
  *(_DWORD *)(v2 + 196) = 0;
  *(_QWORD *)(v2 + 208) = 0LL;
  return result;
}
