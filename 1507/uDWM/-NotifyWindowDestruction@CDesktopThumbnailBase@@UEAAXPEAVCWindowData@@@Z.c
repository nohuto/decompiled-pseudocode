/*
 * XREFs of ?NotifyWindowDestruction@CDesktopThumbnailBase@@UEAAXPEAVCWindowData@@@Z @ 0x180098F80
 * Callers:
 *     ?NotifyWindowDestruction@CVirtualDesktopThumbnail@@UEAAXPEAVCWindowData@@@Z @ 0x180099010 (-NotifyWindowDestruction@CVirtualDesktopThumbnail@@UEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180014F60 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x1800819F8 (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ?_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z @ 0x180099B24 (-_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z.c)
 */

void __fastcall CDesktopThumbnailBase::NotifyWindowDestruction(
        CDesktopThumbnailBase *this,
        const struct CTopLevelWindow **a2)
{
  int Index; // eax
  __int64 v3; // rcx
  unsigned int v4; // esi
  __int64 *v5; // rbx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx

  Index = CDesktopThumbnailBase::_GetIndex(this, a2[46]);
  v4 = Index;
  if ( Index >= 0 )
  {
    v5 = (__int64 *)(v3 + 264);
    VisualCollection::Remove(
      (VisualCollection *)(v3 + 32),
      *(struct CVisual **)(*(_QWORD *)(v3 + 264) + 16LL * (unsigned int)Index + 8));
    v6 = *(CBaseObject **)(*v5 + 16LL * v4);
    if ( v6 )
      CBaseObject::Release(v6);
    v7 = *(CBaseObject **)(*v5 + 16LL * v4 + 8);
    if ( v7 )
      CBaseObject::Release(v7);
    DynArray<CIconicBitmapPending,0>::RemoveAt(v5, v4);
  }
}
