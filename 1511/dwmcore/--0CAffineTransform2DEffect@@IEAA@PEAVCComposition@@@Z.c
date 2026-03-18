/*
 * XREFs of ??0CAffineTransform2DEffect@@IEAA@PEAVCComposition@@@Z @ 0x1801128D0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180092F84 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x18001A8C8 (--0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z.c)
 */

CAffineTransform2DEffect *__fastcall CAffineTransform2DEffect::CAffineTransform2DEffect(
        CAffineTransform2DEffect *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx
  CAffineTransform2DEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2, &CLSID_D2D12DAffineTransform);
  *(_QWORD *)v2 = &CAffineTransform2DEffect::`vftable';
  *(_QWORD *)(v2 + 200) = 1065353216LL;
  *(_QWORD *)(v2 + 212) = 1065353216LL;
  *(_DWORD *)(v2 + 224) = 1065353216;
  result = (CAffineTransform2DEffect *)v2;
  *(_QWORD *)(v2 + 192) = 0LL;
  *(_DWORD *)(v2 + 208) = 0;
  *(_DWORD *)(v2 + 220) = 0;
  return result;
}
