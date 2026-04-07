/*
 * XREFs of ??1CWindowData@@QEAA@XZ @ 0x18001D6EC
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180004000 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ??_GCWindowData@@QEAAPEAXI@Z @ 0x18001E824 (--_GCWindowData@@QEAAPEAXI@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180031848 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002B450 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CWindowData::~CWindowData(void **this)
{
  void (__fastcall *v2)(WPF::ProcessHeapImpl *__hidden, void *); // rbp
  void (__fastcall *v3)(WPF::ProcessHeapImpl *__hidden, void *); // rbp
  void (__fastcall *v4)(WPF::ProcessHeapImpl *__hidden, void *); // rbp

  if ( this[2] != (char *)this + 1166 )
  {
    v4 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this[2]);
    else
      v4(WPF::g_pProcessHeap, this[2]);
  }
  if ( this[66] != this[67] )
  {
    v2 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v2 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this[66]);
    else
      v2(WPF::g_pProcessHeap, this[66]);
    this[66] = 0LL;
  }
  if ( this[61] != this[62] )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this[61]);
    this[61] = 0LL;
  }
  if ( this[57] != this[58] )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this[57]);
    this[57] = 0LL;
  }
  if ( this[52] != this[53] )
  {
    v3 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v3 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this[52]);
    else
      v3(WPF::g_pProcessHeap, this[52]);
    this[52] = 0LL;
  }
}
