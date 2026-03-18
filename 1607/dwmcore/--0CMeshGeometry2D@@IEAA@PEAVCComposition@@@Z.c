/*
 * XREFs of ??0CMeshGeometry2D@@IEAA@PEAVCComposition@@@Z @ 0x180143604
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 */

CMeshGeometry2D *__fastcall CMeshGeometry2D::CMeshGeometry2D(CMeshGeometry2D *this, struct CComposition *a2)
{
  CResource::CResource(this, a2);
  *(_QWORD *)this = &CMeshGeometry2D::`vftable';
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 50) = 0;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  return this;
}
