/*
 * XREFs of ??0CAffineTransform2DEffect@@IEAA@PEAVCComposition@@@Z @ 0x1800F85F0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x180002CCC (--0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z.c)
 */

CAffineTransform2DEffect *__fastcall CAffineTransform2DEffect::CAffineTransform2DEffect(
        CAffineTransform2DEffect *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx
  CAffineTransform2DEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2, &CLSID_D2D12DAffineTransform);
  *(_QWORD *)v2 = &CAffineTransform2DEffect::`vftable';
  *(_QWORD *)(v2 + 184) = 1065353216LL;
  *(_QWORD *)(v2 + 196) = 1065353216LL;
  *(_DWORD *)(v2 + 208) = 1065353216;
  result = (CAffineTransform2DEffect *)v2;
  *(_QWORD *)(v2 + 176) = 0LL;
  *(_DWORD *)(v2 + 192) = 0;
  *(_DWORD *)(v2 + 204) = 0;
  return result;
}
