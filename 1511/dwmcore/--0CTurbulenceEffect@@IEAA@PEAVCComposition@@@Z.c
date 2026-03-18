/*
 * XREFs of ??0CTurbulenceEffect@@IEAA@PEAVCComposition@@@Z @ 0x180133C30
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180092F84 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x18001A8C8 (--0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z.c)
 */

CTurbulenceEffect *__fastcall CTurbulenceEffect::CTurbulenceEffect(CTurbulenceEffect *this, struct CComposition *a2)
{
  __int64 v2; // rcx
  CTurbulenceEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2, &CLSID_D2D1Turbulence);
  *(_QWORD *)(v2 + 216) = 1LL;
  *(_QWORD *)v2 = &CTurbulenceEffect::`vftable';
  *(_DWORD *)(v2 + 200) = 1008981770;
  *(_QWORD *)(v2 + 204) = 1008981770LL;
  result = (CTurbulenceEffect *)v2;
  *(_QWORD *)(v2 + 192) = 0LL;
  *(_DWORD *)(v2 + 212) = 0;
  *(_QWORD *)(v2 + 224) = 0LL;
  return result;
}
