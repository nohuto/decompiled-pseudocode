/*
 * XREFs of ??0CRotateTransform3D@@IEAA@PEAVCComposition@@@Z @ 0x180021E60
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CTransform3D@@IEAA@PEAVCComposition@@_N@Z @ 0x180024194 (--0CTransform3D@@IEAA@PEAVCComposition@@_N@Z.c)
 */

CRotateTransform3D *__fastcall CRotateTransform3D::CRotateTransform3D(
        CRotateTransform3D *this,
        struct CComposition *a2)
{
  CTransform3D::CTransform3D(this, a2, 0);
  *(_QWORD *)this = &CRotateTransform3D::`vftable';
  *((_QWORD *)this + 30) = 0x3FF0000000000000LL;
  return this;
}
