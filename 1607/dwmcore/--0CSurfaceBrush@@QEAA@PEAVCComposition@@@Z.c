/*
 * XREFs of ??0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z @ 0x180139624
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CLinearGradientBrush@@QEAA@PEAVCComposition@@@Z @ 0x18013EEB4 (--0CLinearGradientBrush@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 */

CSurfaceBrush *__fastcall CSurfaceBrush::CSurfaceBrush(CSurfaceBrush *this, struct CComposition *a2)
{
  CSurfaceBrush *result; // rax

  CResource::CResource(this, a2);
  *(_QWORD *)this = &CSurfaceBrush::`vftable'{for `CSpriteVisualContent'};
  *((_QWORD *)this + 15) = &CLinearGradientBrush::`vftable'{for `IVisualListenerInfoProvider'};
  *((_DWORD *)this + 32) = 1056964608;
  *((_DWORD *)this + 33) = 1056964608;
  result = this;
  *((_DWORD *)this + 34) = 2;
  *((_DWORD *)this + 35) = 1;
  return result;
}
