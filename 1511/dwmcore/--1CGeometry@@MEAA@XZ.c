/*
 * XREFs of ??1CGeometry@@MEAA@XZ @ 0x180064360
 * Callers:
 *     ??1CCombinedGeometry@@MEAA@XZ @ 0x18001D0A8 (--1CCombinedGeometry@@MEAA@XZ.c)
 *     ??1CRgnGeometry@@MEAA@XZ @ 0x180064D78 (--1CRgnGeometry@@MEAA@XZ.c)
 *     ??1CRectangleGeometry@@MEAA@XZ @ 0x1800654F8 (--1CRectangleGeometry@@MEAA@XZ.c)
 *     ??_GCGeometry@@MEAAPEAXI@Z @ 0x18010EE90 (--_GCGeometry@@MEAAPEAXI@Z.c)
 *     ??1CGeometryGroup@@MEAA@XZ @ 0x18013546C (--1CGeometryGroup@@MEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 */

void __fastcall CGeometry::~CGeometry(CGeometry *this)
{
  void (__fastcall ***v1)(_QWORD, __int64); // rsi
  void (__fastcall *v3)(WPF::ProcessHeapImpl *, void *); // rsi

  v1 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 8);
  *(_QWORD *)this = &CGeometry::`vftable';
  if ( v1 )
    (**v1)(v1, 1LL);
  v3 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v3 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, *((void **)this + 9));
  else
    v3(WPF::g_pProcessHeap, *((void **)this + 9));
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
