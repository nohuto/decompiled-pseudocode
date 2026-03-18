/*
 * XREFs of ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18000BEC8
 * Callers:
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x18000606C (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18000AB10 (-PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18000AE20 (-PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@PEAPEAXPEAI4PEAU_LUID@@PEAVCMILMatrix@@5PEA_N5@Z @ 0x18000AF70 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PE.c)
 *     ?CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@@Z @ 0x180150054 (-CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisua.c)
 *     ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18015015C (-IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?EnsureWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x18000C56C (-EnsureWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x18000CA64 (-IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004EE84 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 */

__int64 __fastcall CVisual::GetWorldTransform(
        CVisual *a1,
        const struct CVisualTree *a2,
        int a3,
        __int64 a4,
        bool *a5,
        __int64 a6)
{
  unsigned int v10; // edi
  struct CTreeData *TreeData; // rax
  struct CTreeData *v12; // rbx
  bool v13; // r9
  int v14; // eax
  __int64 v16; // rax

  v10 = -2003292412;
  TreeData = CVisual::FindTreeData(a1, a2);
  v12 = TreeData;
  if ( TreeData )
  {
    v13 = 0;
    if ( a3 != 5 || *((_QWORD *)TreeData + 15) && CVisualTree::IsInTree(a2, a1) )
    {
      v14 = CVisual::EnsureWorldTransform(a1, a2, v12);
      v10 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x4E7u);
        return v10;
      }
      v10 = 0;
      if ( !*((_QWORD *)v12 + 15) )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x70u);
        v10 = -2003292412;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x4EEu);
        return v10;
      }
      *(_OWORD *)a4 = *(_OWORD *)((char *)v12 + 40);
      *(_OWORD *)(a4 + 16) = *(_OWORD *)((char *)v12 + 56);
      *(_OWORD *)(a4 + 32) = *(_OWORD *)((char *)v12 + 72);
      *(_OWORD *)(a4 + 48) = *(_OWORD *)((char *)v12 + 88);
      *(_DWORD *)(a4 + 64) = *((_DWORD *)v12 + 26);
      v13 = (*((_BYTE *)v12 + 16) & 2) != 0;
      if ( a6 )
      {
        v16 = *((_QWORD *)v12 + 14);
        *(_OWORD *)a6 = *(_OWORD *)v16;
        *(_OWORD *)(a6 + 16) = *(_OWORD *)(v16 + 16);
        *(_OWORD *)(a6 + 32) = *(_OWORD *)(v16 + 32);
        *(_OWORD *)(a6 + 48) = *(_OWORD *)(v16 + 48);
        *(_DWORD *)(a6 + 64) = *(_DWORD *)(v16 + 64);
      }
    }
    else
    {
      *(_WORD *)(a4 + 64) = 32085;
      *(_OWORD *)a4 = _xmm;
      *(_OWORD *)(a4 + 16) = _xmm;
      *(_OWORD *)(a4 + 32) = _xmm;
      *(_OWORD *)(a4 + 48) = _xmm;
      if ( a6 )
      {
        *(_WORD *)(a6 + 64) = 32085;
        *(_OWORD *)a6 = _xmm;
        *(_OWORD *)(a6 + 16) = _xmm;
        *(_OWORD *)(a6 + 32) = _xmm;
        *(_OWORD *)(a6 + 48) = _xmm;
      }
      v10 = 0;
    }
    if ( a5 )
      *a5 = v13;
  }
  return v10;
}
