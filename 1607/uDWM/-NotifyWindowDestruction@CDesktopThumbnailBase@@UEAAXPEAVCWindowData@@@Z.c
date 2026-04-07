/*
 * XREFs of ?NotifyWindowDestruction@CDesktopThumbnailBase@@UEAAXPEAVCWindowData@@@Z @ 0x180097400
 * Callers:
 *     ?NotifyWindowDestruction@CVirtualDesktopThumbnail@@UEAAXPEAVCWindowData@@@Z @ 0x180097490 (-NotifyWindowDestruction@CVirtualDesktopThumbnail@@UEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001CD40 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x1800975EC (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ?_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z @ 0x180098020 (-_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z.c)
 */

void __fastcall CDesktopThumbnailBase::NotifyWindowDestruction(
        CDesktopThumbnailBase *this,
        const struct CTopLevelWindow **a2)
{
  int Index; // eax
  __int64 v3; // rcx
  unsigned int v4; // esi
  _QWORD *v5; // rbx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx

  Index = CDesktopThumbnailBase::_GetIndex(this, a2[48]);
  v4 = Index;
  if ( Index >= 0 )
  {
    v5 = (_QWORD *)(v3 + 264);
    VisualCollection::Remove(
      (VisualCollection *)(v3 + 32),
      *(struct CVisual **)(*(_QWORD *)(v3 + 264) + 16LL * (unsigned int)Index + 8));
    v6 = *(CBaseObject **)(*v5 + 16LL * v4);
    if ( v6 )
      CBaseObject::Release(v6);
    v7 = *(CBaseObject **)(*v5 + 16LL * v4 + 8);
    if ( v7 )
      CBaseObject::Release(v7);
    DynArray<CIconicBitmapPending,0>::RemoveAt(v5);
  }
}
