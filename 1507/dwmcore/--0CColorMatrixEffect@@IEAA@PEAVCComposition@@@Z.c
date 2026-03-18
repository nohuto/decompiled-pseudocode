/*
 * XREFs of ??0CColorMatrixEffect@@IEAA@PEAVCComposition@@@Z @ 0x1800F86D4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x180002CCC (--0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z.c)
 */

CColorMatrixEffect *__fastcall CColorMatrixEffect::CColorMatrixEffect(
        CColorMatrixEffect *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx
  CColorMatrixEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2, &CLSID_D2D1ColorMatrix);
  result = (CColorMatrixEffect *)v2;
  *(_DWORD *)(v2 + 260) = 0;
  *(_OWORD *)(v2 + 176) = _xmm;
  *(_QWORD *)v2 = &CColorMatrixEffect::`vftable';
  *(_OWORD *)(v2 + 192) = _xmm;
  *(_DWORD *)(v2 + 256) = 1;
  *(_OWORD *)(v2 + 208) = _xmm;
  *(_OWORD *)(v2 + 224) = _xmm;
  *(_OWORD *)(v2 + 240) = 0LL;
  return result;
}
