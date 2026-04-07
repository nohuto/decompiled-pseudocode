/*
 * XREFs of ??_GCTopLevelWindow3D@@MEAAPEAXI@Z @ 0x180033940
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002B450 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x180036278 (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CTopLevelWindow3D *__fastcall CTopLevelWindow3D::`scalar deleting destructor'(CTopLevelWindow3D *this, char a2)
{
  void (__fastcall *v4)(WPF::ProcessHeapImpl *, void *); // rsi

  CTopLevelWindow3D::~CTopLevelWindow3D(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v4(WPF::g_pProcessHeap, this);
  }
  return this;
}
