/*
 * XREFs of ??0CAffineTransform2DEffect@@IEAA@PEAVCComposition@@@Z @ 0x18012AC1C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x180014E8C (--0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z.c)
 */

CAffineTransform2DEffect *__fastcall CAffineTransform2DEffect::CAffineTransform2DEffect(
        CAffineTransform2DEffect *this,
        struct CComposition *a2)
{
  CAffineTransform2DEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2, &CLSID_D2D12DAffineTransform);
  *(_QWORD *)this = &CAffineTransform2DEffect::`vftable';
  *((_QWORD *)this + 35) = 1065353216LL;
  *(_QWORD *)((char *)this + 292) = 1065353216LL;
  *((_DWORD *)this + 76) = 1065353216;
  result = this;
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 72) = 0;
  *((_DWORD *)this + 75) = 0;
  return result;
}
