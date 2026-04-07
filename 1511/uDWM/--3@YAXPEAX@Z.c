/*
 * XREFs of ??3@YAXPEAX@Z @ 0x18009E03C
 * Callers:
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x18004ECE0 (--_Gtype_info@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall operator delete(void *a1)
{
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    a1);
}
