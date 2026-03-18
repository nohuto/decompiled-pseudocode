/*
 * XREFs of ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x18006E624
 * Callers:
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x18006E46C (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ?ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES@@PEBXI@Z @ 0x18006EF34 (-ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_.c)
 *     ?ProcessClearSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_CLEARSURFACERESOURCES@@@Z @ 0x18006F05C (-ProcessClearSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROU.c)
 * Callees:
 *     ?Release@CBitmapRealization@@UEAAKXZ @ 0x1800468D0 (-Release@CBitmapRealization@@UEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CPrimitiveGroup::ReleaseSurfaceResources(CPrimitiveGroup *this)
{
  __int64 i; // rbx
  __int64 (__fastcall *v3)(CBitmapRealization *); // rbp

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 42); i = (unsigned int)(i + 1) )
  {
    v3 = *(__int64 (__fastcall **)(CBitmapRealization *))(**(_QWORD **)(*((_QWORD *)this + 18) + 8 * i) + 16LL);
    if ( v3 == CBitmapRealization::Release )
      CBitmapRealization::Release(*(CBitmapRealization **)(*((_QWORD *)this + 18) + 8 * i));
    else
      v3(*(CBitmapRealization **)(*((_QWORD *)this + 18) + 8 * i));
  }
  *((_DWORD *)this + 42) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 18, 8u);
}
