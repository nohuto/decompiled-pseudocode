/*
 * XREFs of ??0CTransform3D@@IEAA@PEAVCComposition@@_N@Z @ 0x180024194
 * Callers:
 *     ??0CMatrixTransform3D@@IEAA@PEAVCComposition@@@Z @ 0x180021524 (--0CMatrixTransform3D@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CTransform3DGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x180021AE4 (--0CTransform3DGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z.c)
 *     ??0CRotateTransform3D@@IEAA@PEAVCComposition@@@Z @ 0x180021E60 (--0CRotateTransform3D@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CTransform@@IEAA@PEAVCComposition@@@Z @ 0x180023508 (--0CTransform@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CComponentTransform3D@@IEAA@PEAVCComposition@@@Z @ 0x180023B70 (--0CComponentTransform3D@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CScaleTransform3D@@IEAA@PEAVCComposition@@@Z @ 0x18012B0D0 (--0CScaleTransform3D@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 */

CTransform3D *__fastcall CTransform3D::CTransform3D(CTransform3D *this, struct CComposition *a2, char a3)
{
  CTransform3D *result; // rax

  CResource::CResource(this, a2);
  *(_QWORD *)this = &CTransform3D::`vftable';
  result = this;
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *((_BYTE *)this + 212) = a3;
  return result;
}
