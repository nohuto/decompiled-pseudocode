/*
 * XREFs of ??0CCoRenderContent@@QEAA@PEAVCComposition@@@Z @ 0x180155350
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 */

CCoRenderContent *__fastcall CCoRenderContent::CCoRenderContent(CCoRenderContent *this, struct CComposition *a2)
{
  CResource::CResource(this, a2);
  *(_QWORD *)this = &CCoRenderContent::`vftable'{for `CContent'};
  *((_QWORD *)this + 14) = &CCoRenderContent::`vftable'{for `ID2D1PrivateCompositorRenderer'};
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  return this;
}
