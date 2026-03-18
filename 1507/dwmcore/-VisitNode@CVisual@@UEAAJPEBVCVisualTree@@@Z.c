/*
 * XREFs of ?VisitNode@CVisual@@UEAAJPEBVCVisualTree@@@Z @ 0x180035CB0
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18000A73C (--$WalkSubtree@VCHitTestContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTes.c)
 * Callees:
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180031390 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x1800597D4 (--0CTreeData@@IEAA@XZ.c)
 *     ?Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x180059FD0 (-Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CVisual::VisitNode(CVisual *this, const struct CVisualTree *a2)
{
  struct CVisual *v2; // rbx
  const struct CVisualTree **v4; // rax
  const struct CVisualTree **v6; // rcx
  CVisualTreeData *v7; // rsi
  LPVOID (__fastcall *v8)(WPF::ProcessHeapImpl *, SIZE_T); // rbp
  CTreeData *v9; // rax
  void (__fastcall *v10)(CVisualTreeData *__hidden, struct CVisualTree *, struct CVisual *); // rbp

  v2 = (CVisual *)((char *)this - 64);
  if ( *((_BYTE *)a2 + 32) )
  {
    v4 = (const struct CVisualTree **)((char *)v2 + 448);
  }
  else
  {
    v6 = (const struct CVisualTree **)*((_QWORD *)v2 + 54);
    if ( v6 == (const struct CVisualTree **)((char *)v2 + 432) )
      goto LABEL_8;
    while ( 1 )
    {
      v4 = v6 - 33;
      if ( v6[4] == a2 )
        break;
      v6 = (const struct CVisualTree **)*v6;
      if ( v6 == (const struct CVisualTree **)((char *)v2 + 432) )
        goto LABEL_8;
    }
  }
  if ( v4 )
    return 0LL;
LABEL_8:
  v7 = (CVisualTreeData *)*((_QWORD *)v2 + 90);
  if ( v7 )
  {
    *((_QWORD *)v2 + 90) = 0LL;
  }
  else
  {
    v8 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v8 == WPF::ProcessHeapImpl::Alloc )
      v9 = (CTreeData *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x130uLL);
    else
      v9 = (CTreeData *)v8(WPF::g_pProcessHeap, 304LL);
    v7 = v9;
    if ( !v9 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xF26u);
      return 2147942414LL;
    }
    CTreeData::CTreeData(v9);
    *((_QWORD *)v7 + 37) = 0LL;
    *(_QWORD *)v7 = &CVisualTreeData::`vftable';
  }
  v10 = *(void (__fastcall **)(CVisualTreeData *__hidden, struct CVisualTree *, struct CVisual *))(*(_QWORD *)v7 + 8LL);
  if ( v10 == CVisualTreeData::Initialize )
    CVisualTreeData::Initialize(v7, a2, v2);
  else
    v10(v7, a2, v2);
  return 0LL;
}
