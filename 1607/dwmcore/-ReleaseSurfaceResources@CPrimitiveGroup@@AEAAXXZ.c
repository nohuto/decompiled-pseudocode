/*
 * XREFs of ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x18004C688
 * Callers:
 *     ?ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES@@PEBXI@Z @ 0x18004D048 (-ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_.c)
 *     ?ProcessClearSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_CLEARSURFACERESOURCES@@@Z @ 0x18004D18C (-ProcessClearSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROU.c)
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x18004DACC (--1CPrimitiveGroup@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CCompositionSurfaceBitmap@@UEAAKXZ @ 0x180093730 (-Release@CCompositionSurfaceBitmap@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPrimitiveGroup::ReleaseSurfaceResources(CPrimitiveGroup *this)
{
  __int64 i; // rbx
  CCompositionSurfaceBitmap *v3; // rcx
  void (*v4)(void); // rax

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 62); i = (unsigned int)(i + 1) )
  {
    v3 = *(CCompositionSurfaceBitmap **)(*((_QWORD *)this + 28) + 8 * i);
    v4 = *(void (**)(void))(*(_QWORD *)v3 + 16LL);
    if ( (char *)v4 == (char *)CCompositionSurfaceBitmap::Release )
      CCompositionSurfaceBitmap::Release(v3);
    else
      v4();
  }
  *((_DWORD *)this + 62) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 224, 8LL);
}
