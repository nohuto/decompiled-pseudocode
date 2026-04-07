/*
 * XREFs of ??_ECDesktopThumbnail@@MEAAPEAXI@Z @ 0x180098310
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180028054 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1CDesktopThumbnailBase@@MEAA@XZ @ 0x18009819C (--1CDesktopThumbnailBase@@MEAA@XZ.c)
 */

void **__fastcall CDesktopThumbnail::`vector deleting destructor'(void **this, char a2)
{
  *this = &CDesktopThumbnail::`vftable';
  CDesktopThumbnail::s_pThumbnailNoRef = 0LL;
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 38);
  CDesktopThumbnailBase::~CDesktopThumbnailBase(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
