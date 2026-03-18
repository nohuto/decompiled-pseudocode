/*
 * XREFs of ??1CGeometry@@MEAA@XZ @ 0x180017818
 * Callers:
 *     ??1CRectangleGeometry@@MEAA@XZ @ 0x1800175B4 (--1CRectangleGeometry@@MEAA@XZ.c)
 *     ??1CRgnGeometry@@MEAA@XZ @ 0x18006FA64 (--1CRgnGeometry@@MEAA@XZ.c)
 *     ??_GCGeometry@@MEAAPEAXI@Z @ 0x1800F51B0 (--_GCGeometry@@MEAAPEAXI@Z.c)
 *     ??1CGeometryGroup@@MEAA@XZ @ 0x18011FA04 (--1CGeometryGroup@@MEAA@XZ.c)
 *     ??1CCombinedGeometry@@MEAA@XZ @ 0x18011FCCC (--1CCombinedGeometry@@MEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CGeometry::~CGeometry(CGeometry *this)
{
  void (__fastcall ***v1)(_QWORD, __int64); // rsi
  void (*v3)(WPF::ProcessHeapImpl *__hidden, void *); // rsi

  v1 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 6);
  *(_QWORD *)this = &CGeometry::`vftable';
  if ( v1 )
    (**v1)(v1, 1LL);
  v3 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v3 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, *((void **)this + 7));
  else
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, _QWORD))v3)(WPF::g_pProcessHeap, *((_QWORD *)this + 7));
  CResource::~CResource(this);
}
