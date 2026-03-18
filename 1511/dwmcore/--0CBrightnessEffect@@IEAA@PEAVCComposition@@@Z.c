/*
 * XREFs of ??0CBrightnessEffect@@IEAA@PEAVCComposition@@@Z @ 0x18011296C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180092F84 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x18001A8C8 (--0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z.c)
 */

CBrightnessEffect *__fastcall CBrightnessEffect::CBrightnessEffect(CBrightnessEffect *this, struct CComposition *a2)
{
  CBrightnessEffect *v2; // rcx
  CBrightnessEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2, &CLSID_D2D1Brightness);
  *((_DWORD *)v2 + 50) = 0;
  *((_DWORD *)v2 + 51) = 0;
  *((_DWORD *)v2 + 48) = 1065353216;
  *((_DWORD *)v2 + 49) = 1065353216;
  result = v2;
  *(_QWORD *)v2 = &CBrightnessEffect::`vftable';
  return result;
}
