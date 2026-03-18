/*
 * XREFs of ??0CPropertyChangeResource@@QEAA@PEAVCComposition@@@Z @ 0x180023F70
 * Callers:
 *     ??0CComponentTransform2D@@QEAA@PEAVCComposition@@@Z @ 0x1800207BC (--0CComponentTransform2D@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CEffect@@IEAA@PEAVCComposition@@@Z @ 0x18002355C (--0CEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CGeometry@@IEAA@PEAVCComposition@@@Z @ 0x18002CB90 (--0CGeometry@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18004FE84 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CDropShadow@@QEAA@PEAVCComposition@@@Z @ 0x18014ECF0 (--0CDropShadow@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CCompositionLight@@QEAA@PEAVCComposition@@@Z @ 0x18014FF70 (--0CCompositionLight@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 */

CPropertyChangeResource *__fastcall CPropertyChangeResource::CPropertyChangeResource(
        CPropertyChangeResource *this,
        struct CComposition *a2)
{
  CResource::CResource(this, a2);
  *(_QWORD *)this = &CPropertyChangeResource::`vftable';
  return this;
}
