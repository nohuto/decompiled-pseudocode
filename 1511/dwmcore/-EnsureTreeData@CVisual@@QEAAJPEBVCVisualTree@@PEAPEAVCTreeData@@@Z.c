/*
 * XREFs of ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18004D8D0
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800061B4 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x1800521B0 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x180052A00 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEA.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x180052F20 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x180059500 (--0CTreeData@@IEAA@XZ.c)
 *     ?Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x18005C830 (-Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisual::EnsureTreeData(CVisual *this, const struct CVisualTree *a2, struct CTreeData **a3)
{
  CVisualTreeData *v4; // rbx
  char *v8; // rdx
  char *v9; // rcx
  void *(__fastcall *v10)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // r14
  CTreeData *v11; // rax
  void (__fastcall *v12)(CVisualTreeData *__hidden, struct CVisualTree *, struct CVisual *); // r14

  v4 = 0LL;
  *a3 = 0LL;
  if ( *((_BYTE *)a2 + 32) )
  {
    v4 = (CVisual *)((char *)this + 432);
  }
  else
  {
    v8 = (char *)this + 416;
    v9 = (char *)*((_QWORD *)this + 52);
    if ( v9 != v8 )
    {
      while ( *((const struct CVisualTree **)v9 + 4) != a2 )
      {
        v9 = *(char **)v9;
        if ( v9 == v8 )
          goto LABEL_3;
      }
      v4 = (CVisualTreeData *)(v9 - 264);
    }
  }
LABEL_3:
  if ( !v4 )
  {
    v4 = (CVisualTreeData *)*((_QWORD *)this + 88);
    if ( v4 )
    {
      *((_QWORD *)this + 88) = 0LL;
    }
    else
    {
      v10 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL);
      if ( v10 == WPF::ProcessHeapImpl::Alloc )
        v11 = (CTreeData *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x130uLL);
      else
        v11 = (CTreeData *)v10(WPF::g_pProcessHeap, 304uLL);
      v4 = v11;
      if ( !v11 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xE8Cu);
        return 2147942414LL;
      }
      CTreeData::CTreeData(v11);
      *((_QWORD *)v4 + 37) = 0LL;
      *(_QWORD *)v4 = &CVisualTreeData::`vftable';
    }
    v12 = *(void (__fastcall **)(CVisualTreeData *__hidden, struct CVisualTree *, struct CVisual *))(*(_QWORD *)v4 + 8LL);
    if ( v12 == CVisualTreeData::Initialize )
      CVisualTreeData::Initialize(v4, a2, this);
    else
      v12(v4, a2, this);
  }
  *a3 = v4;
  return 0LL;
}
