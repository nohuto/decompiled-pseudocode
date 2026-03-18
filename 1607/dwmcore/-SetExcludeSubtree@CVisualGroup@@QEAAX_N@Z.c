/*
 * XREFs of ?SetExcludeSubtree@CVisualGroup@@QEAAX_N@Z @ 0x18010E09C
 * Callers:
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800BB910 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z @ 0x18003B004 (-ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z.c)
 *     ?RemoveAtOrderNotPreserved@?$DynArray@PEAV?$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z @ 0x180110CB4 (-RemoveAtOrderNotPreserved@-$DynArray@PEAV-$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CVisualGroup::SetExcludeSubtree(CVisualGroup *this, char a2)
{
  __int64 v2; // rdi
  struct CResource **v5; // rdx
  struct CResource *v6; // rcx
  __int64 v7; // rdi
  struct CResource **v8; // rdx
  struct CResource *v9; // rcx

  v2 = 0LL;
  while ( (unsigned int)v2 < *((_DWORD *)this + 34) )
  {
    v5 = *(struct CResource ***)(*((_QWORD *)this + 14) + 8 * v2);
    v6 = *v5;
    if ( *v5 )
    {
      *((_BYTE *)v6 + 154) &= ~0x10u;
      *((_BYTE *)v6 + 154) |= 16 * (a2 & 1);
      v2 = (unsigned int)(v2 + 1);
    }
    else
    {
      CComposition::ReleaseWeakReference(*((CComposition **)this + 2), v5);
      DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved((char *)this + 112, (unsigned int)v2);
    }
  }
  v7 = 0LL;
  while ( (unsigned int)v7 < *((_DWORD *)this + 42) )
  {
    v8 = *(struct CResource ***)(*((_QWORD *)this + 18) + 8 * v7);
    v9 = *v8;
    if ( *v8 )
    {
      *((_BYTE *)v9 + 154) &= ~0x10u;
      *((_BYTE *)v9 + 154) |= 16 * (a2 & 1);
      v7 = (unsigned int)(v7 + 1);
    }
    else
    {
      CComposition::ReleaseWeakReference(*((CComposition **)this + 2), v8);
      DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved((char *)this + 144, (unsigned int)v7);
    }
  }
}
