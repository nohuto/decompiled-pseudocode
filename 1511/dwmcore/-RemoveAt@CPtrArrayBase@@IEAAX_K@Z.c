/*
 * XREFs of ?RemoveAt@CPtrArrayBase@@IEAAX_K@Z @ 0x180067ACC
 * Callers:
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x1800521B0 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x180052A00 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEA.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x180067E18 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x1800AAB70 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 */

void __fastcall CPtrArrayBase::RemoveAt(CPtrArrayBase *this, unsigned __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int64 v4; // rbx
  _QWORD *v5; // rdi
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rbx
  void (__fastcall *v9)(WPF::ProcessHeapImpl *, void *); // rbp

  v2 = *(_QWORD *)this;
  if ( (*(_QWORD *)this & 2) != 0 )
    v4 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v4 = *(_QWORD *)this & 1LL;
  if ( a2 < v4 )
  {
    if ( v4 == 1 )
    {
      *(_QWORD *)this = 0LL;
    }
    else
    {
      v5 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
      v6 = v4 - 1;
      v7 = v5 + 2;
      if ( v6 == 1 )
      {
        v8 = v7[-a2 + 1];
        v9 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
        if ( v9 == WPF::ProcessHeapImpl::Free )
          WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v5);
        else
          v9(WPF::g_pProcessHeap, v5);
        *(_QWORD *)this = v8 | 1;
      }
      else
      {
        if ( a2 < v6 )
          memmove(&v7[a2], &v7[a2 + 1], 8 * (v6 - a2));
        *v5 = v6;
      }
    }
  }
}
