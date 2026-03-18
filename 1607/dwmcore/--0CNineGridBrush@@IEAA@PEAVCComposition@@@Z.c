/*
 * XREFs of ??0CNineGridBrush@@IEAA@PEAVCComposition@@@Z @ 0x18013F740
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 */

CNineGridBrush *__fastcall CNineGridBrush::CNineGridBrush(CNineGridBrush *this, struct CComposition *a2)
{
  CResource::CResource(this, a2);
  *(_QWORD *)this = &CNineGridBrush::`vftable'{for `CSpriteVisualContent'};
  *((_QWORD *)this + 15) = &CNineGridBrush::`vftable'{for `IVisualListenerInfoProvider'};
  *((_DWORD *)this + 35) = 1065353216;
  *((_DWORD *)this + 37) = 1065353216;
  *((_DWORD *)this + 39) = 1065353216;
  *((_DWORD *)this + 41) = 1065353216;
  return this;
}
