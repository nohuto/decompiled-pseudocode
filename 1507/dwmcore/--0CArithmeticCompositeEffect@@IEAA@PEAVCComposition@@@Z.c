/*
 * XREFs of ??0CArithmeticCompositeEffect@@IEAA@PEAVCComposition@@@Z @ 0x1800F8648
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x180002CCC (--0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z.c)
 */

CArithmeticCompositeEffect *__fastcall CArithmeticCompositeEffect::CArithmeticCompositeEffect(
        CArithmeticCompositeEffect *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx
  CArithmeticCompositeEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2, &CLSID_D2D1ArithmeticComposite);
  *(_QWORD *)(v2 + 176) = 1065353216LL;
  *(_QWORD *)(v2 + 184) = 0LL;
  *(_DWORD *)(v2 + 192) = 0;
  result = (CArithmeticCompositeEffect *)v2;
  *(_QWORD *)v2 = &CArithmeticCompositeEffect::`vftable';
  return result;
}
