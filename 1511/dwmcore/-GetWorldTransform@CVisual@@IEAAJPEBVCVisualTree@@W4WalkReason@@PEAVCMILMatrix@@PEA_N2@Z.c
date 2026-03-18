/*
 * XREFs of ?GetWorldTransform@CVisual@@IEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800094A4
 * Callers:
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x1800026AC (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800080E0 (-PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800089E0 (-PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPEAI4PEAU_LUID@@PEAVCMILMatrix@@5PEA_N5@Z @ 0x180008B40 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPE.c)
 * Callees:
 *     ?IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x180009024 (-IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@W4WalkReason@@@Z @ 0x18000937C (-EnsureWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@W4WalkReason@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004DB1C (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisual::GetWorldTransform(
        CVisual *a1,
        const struct CVisualTree *a2,
        int a3,
        __int64 a4,
        bool *a5,
        __int64 a6)
{
  unsigned int v8; // edi
  struct CTreeData *TreeData; // rax
  const struct CVisualTree *v10; // r10
  const struct CVisual *v11; // r11
  struct CTreeData *v12; // rsi
  bool v13; // r9
  int v14; // eax
  _OWORD *v16; // rax

  v8 = -2003292412;
  TreeData = CVisual::FindTreeData(a1, a2);
  v12 = TreeData;
  if ( TreeData )
  {
    v13 = 0;
    if ( a3 != 5 || *((_QWORD *)TreeData + 14) && CVisualTree::IsInTree((const struct CVisual **)v10, v11) )
    {
      v14 = CVisual::EnsureWorldTransform((__int64)v11, v10, v12);
      v8 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x477u);
        return v8;
      }
      v8 = 0;
      if ( !*((_QWORD *)v12 + 14) )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x70u);
        v8 = -2003292412;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x47Eu);
        return v8;
      }
      *(_OWORD *)a4 = *(_OWORD *)((char *)v12 + 40);
      *(_OWORD *)(a4 + 16) = *(_OWORD *)((char *)v12 + 56);
      *(_OWORD *)(a4 + 32) = *(_OWORD *)((char *)v12 + 72);
      *(_OWORD *)(a4 + 48) = *(_OWORD *)((char *)v12 + 88);
      v13 = (*((_BYTE *)v12 + 16) & 2) != 0;
      if ( a6 )
      {
        v16 = (_OWORD *)*((_QWORD *)v12 + 13);
        *(_OWORD *)a6 = *v16;
        *(_OWORD *)(a6 + 16) = v16[1];
        *(_OWORD *)(a6 + 32) = v16[2];
        *(_OWORD *)(a6 + 48) = v16[3];
      }
    }
    else
    {
      *(_QWORD *)(a4 + 52) = 0LL;
      *(_QWORD *)(a4 + 44) = 0LL;
      *(_QWORD *)(a4 + 32) = 0LL;
      *(_QWORD *)(a4 + 24) = 0LL;
      *(_QWORD *)(a4 + 12) = 0LL;
      *(_QWORD *)(a4 + 4) = 0LL;
      *(_DWORD *)(a4 + 60) = 1065353216;
      *(_DWORD *)(a4 + 40) = 1065353216;
      *(_DWORD *)(a4 + 20) = 1065353216;
      *(_DWORD *)a4 = 1065353216;
      if ( a6 )
      {
        *(_QWORD *)(a6 + 52) = 0LL;
        *(_QWORD *)(a6 + 44) = 0LL;
        *(_QWORD *)(a6 + 32) = 0LL;
        *(_QWORD *)(a6 + 24) = 0LL;
        *(_QWORD *)(a6 + 12) = 0LL;
        *(_QWORD *)(a6 + 4) = 0LL;
        *(_DWORD *)(a6 + 60) = 1065353216;
        *(_DWORD *)(a6 + 40) = 1065353216;
        *(_DWORD *)(a6 + 20) = 1065353216;
        *(_DWORD *)a6 = 1065353216;
      }
      v8 = 0;
    }
    if ( a5 )
      *a5 = v13;
  }
  return v8;
}
