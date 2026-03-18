/*
 * XREFs of ??0CMaskBrush@@IEAA@PEAVCComposition@@@Z @ 0x18013E78C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 */

CMaskBrush *__fastcall CMaskBrush::CMaskBrush(CMaskBrush *this, struct CComposition *a2)
{
  CResource::CResource(this, a2);
  *(_QWORD *)this = &CMaskBrush::`vftable'{for `CSpriteVisualContent'};
  *((_QWORD *)this + 15) = &CMaskBrush::`vftable'{for `IVisualListenerInfoProvider'};
  return this;
}
