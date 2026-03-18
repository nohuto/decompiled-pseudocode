/*
 * XREFs of ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x180092464
 * Callers:
 *     ?ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES@@PEBXI@Z @ 0x1800912BC (-ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_.c)
 *     ?ProcessClearSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_CLEARSURFACERESOURCES@@@Z @ 0x180091434 (-ProcessClearSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROU.c)
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x180091E6C (--1CPrimitiveGroup@@MEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CCompositionSurfaceBitmap@@UEAAKXZ @ 0x18002E1C0 (-Release@CCompositionSurfaceBitmap@@UEAAKXZ.c)
 */

void __fastcall CPrimitiveGroup::ReleaseSurfaceResources(CPrimitiveGroup *this)
{
  __int64 i; // rbx
  __int64 (__fastcall *v3)(CCompositionSurfaceBitmap *); // rbp

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 42); i = (unsigned int)(i + 1) )
  {
    v3 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *))(**(_QWORD **)(*((_QWORD *)this + 18) + 8 * i) + 16LL);
    if ( v3 == CCompositionSurfaceBitmap::Release )
      CCompositionSurfaceBitmap::Release(*(CCompositionSurfaceBitmap **)(*((_QWORD *)this + 18) + 8 * i));
    else
      v3(*(CCompositionSurfaceBitmap **)(*((_QWORD *)this + 18) + 8 * i));
  }
  *((_DWORD *)this + 42) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 18, 8u);
}
