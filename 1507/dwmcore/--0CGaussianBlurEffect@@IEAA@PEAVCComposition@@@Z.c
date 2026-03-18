/*
 * XREFs of ??0CGaussianBlurEffect@@IEAA@PEAVCComposition@@@Z @ 0x1800021A8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x180002CCC (--0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z.c)
 */

CGaussianBlurEffect *__fastcall CGaussianBlurEffect::CGaussianBlurEffect(
        CGaussianBlurEffect *this,
        struct CComposition *a2)
{
  CGaussianBlurEffect *v2; // rcx
  CGaussianBlurEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2, &CLSID_D2D1GaussianBlur);
  *((_DWORD *)v2 + 45) = 0;
  *((_DWORD *)v2 + 46) = 0;
  result = v2;
  *(_QWORD *)v2 = &CGaussianBlurEffect::`vftable';
  *((_DWORD *)v2 + 44) = 1077936128;
  return result;
}
