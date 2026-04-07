/*
 * XREFs of ??_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z @ 0x18007EED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18001FE50 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180022130 (--1CVisual@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CDesktopThumbnailCVIVisual *__fastcall CDesktopThumbnailCVIVisual::`scalar deleting destructor'(
        CDesktopThumbnailCVIVisual *this,
        char a2)
{
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx

  *(_QWORD *)this = &CDesktopThumbnailCVIVisual::`vftable';
  v4 = (CBaseObject *)*((_QWORD *)this + 33);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 35);
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CBaseObject *)*((_QWORD *)this + 36);
  if ( v6 )
    CBaseObject::Release(v6);
  VisualCollection::RemoveAll((CDesktopThumbnailCVIVisual *)((char *)this + 32));
  CVisual::~CVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDesktopThumbnailCVIVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
