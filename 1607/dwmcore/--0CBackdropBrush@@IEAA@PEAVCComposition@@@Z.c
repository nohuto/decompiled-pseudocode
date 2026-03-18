/*
 * XREFs of ??0CBackdropBrush@@IEAA@PEAVCComposition@@@Z @ 0x18015817C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 */

CBackdropBrush *__fastcall CBackdropBrush::CBackdropBrush(CBackdropBrush *this, struct CComposition *a2)
{
  CResource::CResource(this, a2);
  *(_QWORD *)this = &CBackdropBrush::`vftable';
  return this;
}
