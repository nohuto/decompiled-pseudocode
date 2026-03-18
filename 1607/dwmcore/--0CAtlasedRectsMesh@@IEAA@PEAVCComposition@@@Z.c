/*
 * XREFs of ??0CAtlasedRectsMesh@@IEAA@PEAVCComposition@@@Z @ 0x18009CDC0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CAtlasedRects@@IEAA@PEAVCComposition@@@Z @ 0x18009C504 (--0CAtlasedRects@@IEAA@PEAVCComposition@@@Z.c)
 */

CAtlasedRectsMesh *__fastcall CAtlasedRectsMesh::CAtlasedRectsMesh(CAtlasedRectsMesh *this, struct CComposition *a2)
{
  CAtlasedRects::CAtlasedRects(this, a2);
  *(_QWORD *)this = &CAtlasedRectsMesh::`vftable'{for `CResource'};
  *((_QWORD *)this + 14) = &CAtlasedRectsMesh::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 58) = 0;
  *((_DWORD *)this + 62) = 0;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  return this;
}
