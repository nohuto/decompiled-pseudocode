/*
 * XREFs of ??0CDcompRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800B6F40
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 */

CDcompRenderTarget *__fastcall CDcompRenderTarget::CDcompRenderTarget(
        CDcompRenderTarget *this,
        struct CComposition *a2)
{
  CResource::CResource(this, a2);
  *(_QWORD *)this = &CDcompRenderTarget::`vftable';
  return this;
}
