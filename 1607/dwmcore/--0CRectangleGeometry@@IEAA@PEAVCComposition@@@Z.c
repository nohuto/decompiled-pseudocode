/*
 * XREFs of ??0CRectangleGeometry@@IEAA@PEAVCComposition@@@Z @ 0x180095DC8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?SetClip@CCoRenderVisualProxy@@UEAAJMM@Z @ 0x180125CF0 (-SetClip@CCoRenderVisualProxy@@UEAAJMM@Z.c)
 * Callees:
 *     ??0CGeometry@@IEAA@PEAVCComposition@@@Z @ 0x18002CB90 (--0CGeometry@@IEAA@PEAVCComposition@@@Z.c)
 */

CRectangleGeometry *__fastcall CRectangleGeometry::CRectangleGeometry(
        CRectangleGeometry *this,
        struct CComposition *a2)
{
  CGeometry::CGeometry(this, a2);
  *(_QWORD *)this = &CRectangleGeometry::`vftable';
  return this;
}
