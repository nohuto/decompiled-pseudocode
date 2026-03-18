/*
 * XREFs of ?RemoveAt@CPtrArrayBase@@IEAAX_K@Z @ 0x18001B298
 * Callers:
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x18001B1E0 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x180031500 (--$WalkSubtree@VCDrawingContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawin.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x180031E90 (--$WalkSubtree@VCPreComputeContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPre.c)
 *     ?UnregisterGraphWalkRoot@CGraphWalker@@SAXXZ @ 0x18005C018 (-UnregisterGraphWalkRoot@CGraphWalker@@SAXXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CPtrArrayBase::RemoveAt(CPtrArrayBase *this, unsigned __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int64 v4; // rbx
  _QWORD *v5; // rdi
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rbx
  void (*v9)(WPF::ProcessHeapImpl *__hidden, void *); // rbp

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
        v9 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
        if ( v9 == WPF::ProcessHeapImpl::Free )
          WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v5);
        else
          ((void (__fastcall *)(WPF::ProcessHeapImpl *, _QWORD *))v9)(WPF::g_pProcessHeap, v5);
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
