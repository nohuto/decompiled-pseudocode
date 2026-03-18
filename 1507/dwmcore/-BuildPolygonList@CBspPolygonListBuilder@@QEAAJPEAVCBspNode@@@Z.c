/*
 * XREFs of ?BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z @ 0x18014D19C
 * Callers:
 *     ?PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEBVCVisual@@@Z @ 0x18014C8EC (-PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEBVCVisual@@@Z.c)
 * Callees:
 *     ?EndWalk@CGraphWalker@@AEAAXPEAVIGraphNode@@@Z @ 0x18000BE38 (-EndWalk@CGraphWalker@@AEAAXPEAVIGraphNode@@@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x180034EC0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x180035DBC (-ReleaseBspPolygonList@CVisual@@IEAAXXZ.c)
 *     ?BeginWalk@CGraphWalker@@AEAAJPEAPEAVIGraphNode@@_N@Z @ 0x18005BE78 (-BeginWalk@CGraphWalker@@AEAAJPEAPEAVIGraphNode@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$WalkBspSubtree@VCBspPolygonListBuilder@@@CGraphIterator@@AEAAJPEAVIGraphNode@@0PEAVCBspPolygonListBuilder@@AEBVCMILMatrix@@W4WalkDirection@@@Z @ 0x18014D030 (--$WalkBspSubtree@VCBspPolygonListBuilder@@@CGraphIterator@@AEAAJPEAVIGraphNode@@0PEAVCBspPolygo.c)
 */

__int64 __fastcall CBspPolygonListBuilder::BuildPolygonList(CVisual **this, struct CBspNode *a2)
{
  int v4; // eax
  __int64 v5; // r8
  int v6; // ebx
  int v7; // eax
  struct IGraphNode *v9; // [rsp+50h] [rbp+8h] BYREF

  CVisual::ReleaseBspPolygonList(this[11]);
  CVisual::CalcEffectiveTransform((__int64)this[11], 4, 0LL, &v9, (struct D2DMatrix *)(this + 12), 0LL);
  v9 = a2;
  v4 = CGraphWalker::BeginWalk((CGraphWalker *)(this + 1), &v9, 0);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v7 = CGraphIterator::WalkBspSubtree<CBspPolygonListBuilder>(
           (CGraphWalker *)(this + 1),
           (__int64)a2,
           v5,
           (__int64)this,
           (__int64)(this + 12),
           0);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xBDu);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xBCu);
  }
  CGraphWalker::EndWalk((CGraphWalker *)(this + 1), v9);
  if ( v6 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x33u);
  return (unsigned int)v6;
}
