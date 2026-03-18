/*
 * XREFs of ??0CComponentTransform3D@@IEAA@PEAVCComposition@@@Z @ 0x180023B70
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CTransform3D@@IEAA@PEAVCComposition@@_N@Z @ 0x180024194 (--0CTransform3D@@IEAA@PEAVCComposition@@_N@Z.c)
 */

CComponentTransform3D *__fastcall CComponentTransform3D::CComponentTransform3D(
        CComponentTransform3D *this,
        struct CComposition *a2)
{
  CTransform3D::CTransform3D(this, a2, 1);
  *(_QWORD *)this = &CComponentTransform3D::`vftable';
  *((_DWORD *)this + 86) = 0;
  *((_DWORD *)this + 68) = 1065353216;
  *((_DWORD *)this + 61) = 1065353216;
  *((_DWORD *)this + 62) = 1065353216;
  *((_DWORD *)this + 63) = 1065353216;
  *((_DWORD *)this + 64) = 1065353216;
  *(_OWORD *)((char *)this + 280) = CMILMatrix::Identity;
  *(_OWORD *)((char *)this + 296) = xmmword_1801EAD20;
  *(_OWORD *)((char *)this + 312) = xmmword_1801EAD30;
  *(_OWORD *)((char *)this + 328) = xmmword_1801EAD40;
  *((_DWORD *)this + 86) = dword_1801EAD50;
  return this;
}
