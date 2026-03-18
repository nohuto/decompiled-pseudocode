/*
 * XREFs of ??0CAtlasedRects@@IEAA@PEAVCComposition@@@Z @ 0x18009C504
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CAtlasedRectsMesh@@IEAA@PEAVCComposition@@@Z @ 0x18009CDC0 (--0CAtlasedRectsMesh@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 */

CAtlasedRects *__fastcall CAtlasedRects::CAtlasedRects(CAtlasedRects *this, struct CComposition *a2)
{
  CResource::CResource(this, a2);
  *(_QWORD *)this = &CAtlasedRects::`vftable'{for `CResource'};
  *((_QWORD *)this + 14) = &CAtlasedRectsMesh::`vftable'{for `IDeviceResourceNotify'};
  *((_DWORD *)this + 42) = 0;
  *((_QWORD *)this + 18) = (char *)this + 176;
  *((_QWORD *)this + 19) = (char *)this + 176;
  *((_DWORD *)this + 40) = 2;
  *((_DWORD *)this + 41) = 2;
  return this;
}
