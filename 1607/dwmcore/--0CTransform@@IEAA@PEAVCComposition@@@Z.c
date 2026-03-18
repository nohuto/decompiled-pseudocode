/*
 * XREFs of ??0CTransform@@IEAA@PEAVCComposition@@@Z @ 0x180023508
 * Callers:
 *     ??0CManipulationTransform@@IEAA@PEAVCComposition@@@Z @ 0x180022480 (--0CManipulationTransform@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CScaleTransform@@IEAA@PEAVCComposition@@@Z @ 0x180022A6C (--0CScaleTransform@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CTransformGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x180022E44 (--0CTransformGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z.c)
 *     ??0CMatrixTransform@@IEAA@PEAVCComposition@@@Z @ 0x180024360 (--0CMatrixTransform@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CTransform3D@@IEAA@PEAVCComposition@@_N@Z @ 0x180024194 (--0CTransform3D@@IEAA@PEAVCComposition@@_N@Z.c)
 */

CTransform *__fastcall CTransform::CTransform(CTransform *this, struct CComposition *a2)
{
  CTransform3D::CTransform3D(this, a2, 0);
  *(_QWORD *)this = &CTransform::`vftable';
  return this;
}
