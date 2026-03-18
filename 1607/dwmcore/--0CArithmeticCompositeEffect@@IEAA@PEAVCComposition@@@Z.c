/*
 * XREFs of ??0CArithmeticCompositeEffect@@IEAA@PEAVCComposition@@@Z @ 0x18012AC78
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x180014E8C (--0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z.c)
 */

CArithmeticCompositeEffect *__fastcall CArithmeticCompositeEffect::CArithmeticCompositeEffect(
        CArithmeticCompositeEffect *this,
        struct CComposition *a2)
{
  CFilterEffect::CFilterEffect(this, a2, &CLSID_D2D1ArithmeticComposite);
  *((_QWORD *)this + 34) = 1065353216LL;
  *(_QWORD *)this = &CArithmeticCompositeEffect::`vftable';
  *((_QWORD *)this + 35) = 0LL;
  *((_DWORD *)this + 72) = 0;
  return this;
}
