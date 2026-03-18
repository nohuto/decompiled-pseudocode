/*
 * XREFs of ?ClearVisualGroupData@CVisualGroup@@AEAAXXZ @ 0x180141154
 * Callers:
 *     ?ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z @ 0x18010E174 (-ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z.c)
 *     ??1CVisualGroup@@EEAA@XZ @ 0x1801410B8 (--1CVisualGroup@@EEAA@XZ.c)
 * Callees:
 *     ?ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z @ 0x18003B004 (-ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall CVisualGroup::ClearVisualGroupData(CComposition **this)
{
  __int64 i; // rdi
  __int64 j; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 34); i = (unsigned int)(i + 1) )
    CComposition::ReleaseWeakReference(this[2], *((struct CResource ***)this[14] + i));
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 42); j = (unsigned int)(j + 1) )
    CComposition::ReleaseWeakReference(this[2], *((struct CResource ***)this[18] + j));
  *((_DWORD *)this + 34) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)(this + 14), 8u);
  *((_DWORD *)this + 42) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)(this + 18), 8u);
}
