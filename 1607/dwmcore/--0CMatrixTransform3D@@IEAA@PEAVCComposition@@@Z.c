/*
 * XREFs of ??0CMatrixTransform3D@@IEAA@PEAVCComposition@@@Z @ 0x180021524
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?SetTransform@CCoRenderVisualProxy@@UEAAJPEBU_D3DMATRIX@@0@Z @ 0x180126020 (-SetTransform@CCoRenderVisualProxy@@UEAAJPEBU_D3DMATRIX@@0@Z.c)
 * Callees:
 *     ??0CTransform3D@@IEAA@PEAVCComposition@@_N@Z @ 0x180024194 (--0CTransform3D@@IEAA@PEAVCComposition@@_N@Z.c)
 */

CMatrixTransform3D *__fastcall CMatrixTransform3D::CMatrixTransform3D(
        CMatrixTransform3D *this,
        struct CComposition *a2)
{
  CTransform3D::CTransform3D(this, a2, 0);
  *(_QWORD *)this = &CMatrixTransform3D::`vftable';
  *((_DWORD *)this + 54) = 1065353216;
  *((_DWORD *)this + 59) = 1065353216;
  *((_DWORD *)this + 64) = 1065353216;
  *((_DWORD *)this + 69) = 1065353216;
  return this;
}
