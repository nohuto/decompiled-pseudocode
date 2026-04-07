/*
 * XREFs of ??1CText@@EEAA@XZ @ 0x180016A2C
 * Callers:
 *     ??_GCText@@EEAAPEAXI@Z @ 0x180016AC0 (--_GCText@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseResources@CText@@AEAAXXZ @ 0x180016114 (-ReleaseResources@CText@@AEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180028450 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
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
