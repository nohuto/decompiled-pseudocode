/*
 * XREFs of ??1CText@@EEAA@XZ @ 0x18001B918
 * Callers:
 *     ??_GCText@@EEAAPEAXI@Z @ 0x18001B9A0 (--_GCText@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseResources@CText@@AEAAXXZ @ 0x18001AFD4 (-ReleaseResources@CText@@AEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002B450 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CText::~CText(CText *this)
{
  void *v1; // rdi
  void (__fastcall *v3)(WPF::ProcessHeapImpl *__hidden, void *); // rbp

  v1 = (void *)*((_QWORD *)this + 34);
  *(_QWORD *)this = &CText::`vftable';
  if ( v1 )
  {
    v3 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v3 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v1);
    else
      v3(WPF::g_pProcessHeap, v1);
    *((_QWORD *)this + 34) = 0LL;
  }
  CText::ReleaseResources((CBaseObject **)this);
  CVisual::~CVisual(this);
}
