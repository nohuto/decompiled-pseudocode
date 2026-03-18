/*
 * XREFs of ??0CScaleTransform3D@@IEAA@PEAVCComposition@@@Z @ 0x18012B0D0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CTransform3D@@IEAA@PEAVCComposition@@_N@Z @ 0x180024194 (--0CTransform3D@@IEAA@PEAVCComposition@@_N@Z.c)
 */

CScaleTransform3D *__fastcall CScaleTransform3D::CScaleTransform3D(CScaleTransform3D *this, struct CComposition *a2)
{
  CTransform3D::CTransform3D(this, a2, 0);
  *(_QWORD *)this = &CScaleTransform3D::`vftable';
  *((_QWORD *)this + 27) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 28) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 29) = 0x3FF0000000000000LL;
  return this;
}
