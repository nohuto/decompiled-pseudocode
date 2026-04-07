/*
 * XREFs of ??_GCAnimationEngine@@AEAAPEAXI@Z @ 0x18008AD14
 * Callers:
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x1800298C0 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180031480 (-Release@CAnimationEngine@@UEAAKXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180028054 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void **__fastcall CAnimationEngine::`scalar deleting destructor'(void **this)
{
  *this = &CAnimationEngine::`vftable';
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 9);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 5);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
