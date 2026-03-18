/*
 * XREFs of ??0CGaussianBlurEffect@@IEAA@PEAVCComposition@@@Z @ 0x18001A008
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180092F84 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x18001A8C8 (--0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z.c)
 */

CGaussianBlurEffect *__fastcall CGaussianBlurEffect::CGaussianBlurEffect(
        CGaussianBlurEffect *this,
        struct CComposition *a2)
{
  CGaussianBlurEffect *v2; // rcx
  CGaussianBlurEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2, &CLSID_D2D1GaussianBlur);
  *((_DWORD *)v2 + 49) = 0;
  *((_DWORD *)v2 + 50) = 0;
  result = v2;
  *(_QWORD *)v2 = &CGaussianBlurEffect::`vftable';
  *((_DWORD *)v2 + 48) = 1077936128;
  return result;
}
