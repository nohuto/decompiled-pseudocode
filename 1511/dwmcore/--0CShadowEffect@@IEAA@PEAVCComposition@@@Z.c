/*
 * XREFs of ??0CShadowEffect@@IEAA@PEAVCComposition@@@Z @ 0x180112C40
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180092F84 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x18001A8C8 (--0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z.c)
 */

CShadowEffect *__fastcall CShadowEffect::CShadowEffect(CShadowEffect *this, struct CComposition *a2)
{
  CShadowEffect *v2; // rcx
  CShadowEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2, &CLSID_D2D1Shadow);
  *((_QWORD *)v2 + 24) = 1077936128LL;
  *((_QWORD *)v2 + 25) = 0LL;
  result = v2;
  *(_QWORD *)v2 = &CShadowEffect::`vftable';
  *((_QWORD *)v2 + 26) = 1065353216LL;
  return result;
}
