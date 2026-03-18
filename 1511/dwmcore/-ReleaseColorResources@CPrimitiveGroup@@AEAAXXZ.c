/*
 * XREFs of ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x1800923F0
 * Callers:
 *     ?ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES@@PEBXI@Z @ 0x1800099D4 (-ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_AD.c)
 *     ?ProcessClearColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_CLEARCOLORRESOURCES@@@Z @ 0x180009AE0 (-ProcessClearColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_.c)
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x180091E6C (--1CPrimitiveGroup@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008596C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CPrimitiveGroup::ReleaseColorResources(CPrimitiveGroup *this)
{
  __int64 i; // rbp
  __int64 v3; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 58); i = (unsigned int)(i + 1) )
  {
    v3 = *((_QWORD *)this + 26);
    CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v3 + 8 * i));
    *(_QWORD *)(v3 + 8 * i) = 0LL;
  }
  *((_DWORD *)this + 58) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 26, 8u);
}
