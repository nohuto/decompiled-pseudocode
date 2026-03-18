/*
 * XREFs of ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18004EB80
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18000A804 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 *     ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x18000B500 (-BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualT.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x18005FC60 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800608B0 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x180060F20 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEA.c)
 *     ?ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K@Z @ 0x18018DA50 (-ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K@Z.c)
 * Callees:
 *     ??0CTreeData@@IEAA@XZ @ 0x1800312A8 (--0CTreeData@@IEAA@XZ.c)
 *     ?Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x180031790 (-Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x18004FA7C (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ?SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z @ 0x18004FD38 (-SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::EnsureTreeData(CVisual *this, const struct CVisualTree *a2, struct CTreeData **a3)
{
  struct CTreeData *UnusedTreeData; // rbx
  __int64 v8; // rax
  int v9; // edx
  int *v10; // rcx
  _QWORD *v11; // rdx
  void *(__fastcall *v12)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  CTreeData *v13; // rax
  void (__fastcall *v14)(CVisualTreeData *, struct CVisualTree *, struct CVisual *); // rax
  _QWORD *v15; // [rsp+58h] [rbp+10h]

  UnusedTreeData = 0LL;
  *a3 = 0LL;
  if ( *((_BYTE *)a2 + 32) )
  {
    UnusedTreeData = (CVisual *)((char *)this + 320);
  }
  else
  {
    v8 = *((_QWORD *)this + 34);
    if ( (*(_DWORD *)(v8 + 4) & 0x80000) == 0 )
      goto LABEL_13;
    v9 = *(_DWORD *)(v8 + 12);
    v10 = (int *)(v8 + 12);
    if ( (v9 & 0x7F000000) != 0xD000000 )
    {
      do
      {
        v10 = (int *)((char *)v10 + (v9 & 0xFFFFFF) + 4);
        v9 = *v10;
      }
      while ( (*v10 & 0x7F000000) != 0xD000000 );
    }
    v15 = *(_QWORD **)(v10 + 1);
    if ( v15 )
    {
      v11 = (_QWORD *)*v15;
      if ( (_QWORD *)*v15 != v15 )
      {
        while ( (const struct CVisualTree *)v11[4] != a2 )
        {
          v11 = (_QWORD *)*v11;
          if ( v11 == v15 )
            goto LABEL_3;
        }
        UnusedTreeData = (struct CTreeData *)(v11 - 28);
      }
    }
  }
LABEL_3:
  if ( UnusedTreeData )
  {
LABEL_4:
    *a3 = UnusedTreeData;
    return 0LL;
  }
LABEL_13:
  UnusedTreeData = CVisual::GetUnusedTreeData(this);
  if ( UnusedTreeData )
  {
    CVisual::SetUnusedTreeData(this, 0LL);
LABEL_18:
    v14 = *(void (__fastcall **)(CVisualTreeData *, struct CVisualTree *, struct CVisual *))(*(_QWORD *)UnusedTreeData
                                                                                           + 8LL);
    if ( v14 == CVisualTreeData::Initialize )
      CVisualTreeData::Initialize(UnusedTreeData, a2, this);
    else
      v14(UnusedTreeData, a2, this);
    goto LABEL_4;
  }
  v12 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v12 == WPF::ProcessHeapImpl::Alloc )
    v13 = (CTreeData *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x108uLL);
  else
    v13 = (CTreeData *)v12(WPF::g_pProcessHeap, 264uLL);
  UnusedTreeData = v13;
  if ( v13 )
  {
    CTreeData::CTreeData(v13);
    *((_QWORD *)UnusedTreeData + 32) = 0LL;
    *(_QWORD *)UnusedTreeData = &CVisualTreeData::`vftable';
    goto LABEL_18;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xFC5u);
  return 2147942414LL;
}
