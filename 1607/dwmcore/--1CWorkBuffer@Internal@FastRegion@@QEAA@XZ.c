/*
 * XREFs of ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x18009D0AC
 * Callers:
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18001D0D8 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18001D198 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJPEBVCMILMatrix@@@Z @ 0x18006F960 (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJPEBVCMILMatrix@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18009AC74 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FastRegion::Internal::CWorkBuffer::~CWorkBuffer(FastRegion::Internal::CWorkBuffer **this)
{
  if ( this + 2 != (FastRegion::Internal::CWorkBuffer **)this[1] )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
}
