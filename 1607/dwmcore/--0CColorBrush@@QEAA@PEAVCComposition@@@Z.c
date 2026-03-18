/*
 * XREFs of ??0CColorBrush@@QEAA@PEAVCComposition@@@Z @ 0x18012AD10
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?GetMaskContentNoRef@CDropShadow@@AEAAJPEAPEAVCSpriteVisualContent@@@Z @ 0x18014F850 (-GetMaskContentNoRef@CDropShadow@@AEAAJPEAPEAVCSpriteVisualContent@@@Z.c)
 * Callees:
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 */

CColorBrush *__fastcall CColorBrush::CColorBrush(CColorBrush *this, struct CComposition *a2)
{
  CResource::CResource(this, a2);
  *(_QWORD *)this = &CColorBrush::`vftable';
  return this;
}
