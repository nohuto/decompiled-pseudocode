/*
 * XREFs of ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x18001B7B4
 * Callers:
 *     ??_GCTopLevelAtlasedRectsVisual@@MEAAPEAXI@Z @ 0x180016DB0 (--_GCTopLevelAtlasedRectsVisual@@MEAAPEAXI@Z.c)
 *     ??1CButton@@MEAA@XZ @ 0x18001AA58 (--1CButton@@MEAA@XZ.c)
 *     ??_ECAtlasedRectsVisual@@MEAAPEAXI@Z @ 0x180067F70 (--_ECAtlasedRectsVisual@@MEAAPEAXI@Z.c)
 *     ??1CAnimatedGlassSheet@@UEAA@XZ @ 0x18007B224 (--1CAnimatedGlassSheet@@UEAA@XZ.c)
 * Callees:
 *     ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x18001B628 (-RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180028450 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CAtlasedRectsVisual::~CAtlasedRectsVisual(void **this)
{
  void (__fastcall *v2)(WPF::ProcessHeapImpl *__hidden, void *); // rdi

  *this = &CAtlasedRectsVisual::`vftable';
  CAtlasedRectsVisual::RemoveAllAtlasImages((CAtlasedRectsVisual *)this);
  v2 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v2 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this[37]);
  else
    v2(WPF::g_pProcessHeap, this[37]);
  if ( this[33] != this[34] )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this[33]);
    this[33] = 0LL;
  }
  *this = &CCanvas::`vftable';
  CVisual::~CVisual((CVisual *)this);
}
