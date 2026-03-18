/*
 * XREFs of ?GotoParent@CGraphWalker@@AEAAXPEAPEAVIGraphNode@@@Z @ 0x18000BC54
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18000A73C (--$WalkSubtree@VCHitTestContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTes.c)
 *     ??$WalkBspSubtree@VCBspPolygonListBuilder@@@CGraphIterator@@AEAAJPEAVIGraphNode@@0PEAVCBspPolygonListBuilder@@AEBVCMILMatrix@@W4WalkDirection@@@Z @ 0x18014D030 (--$WalkBspSubtree@VCBspPolygonListBuilder@@@CGraphIterator@@AEAAJPEAVIGraphNode@@0PEAVCBspPolygo.c)
 * Callees:
 *     <none>
 */

void __fastcall CGraphWalker::GotoParent(CGraphWalker *this, struct IGraphNode **a2)
{
  __int64 v3; // rcx
  int v4; // eax
  int v5; // r9d
  __int64 v6; // rcx
  struct IGraphNode *v7; // rax

  v3 = 0LL;
  if ( *((_DWORD *)this + 1) )
  {
    v4 = *((_DWORD *)this + 8);
    v5 = 0;
    if ( v4 )
    {
      v6 = (unsigned int)(v4 - 1);
      *((_DWORD *)this + 8) = v6;
      v5 = *(_QWORD *)(*((_QWORD *)this + 6) + 16 * v6 + 8);
      v3 = *(_QWORD *)(*((_QWORD *)this + 6) + 16 * v6);
    }
    v7 = (struct IGraphNode *)*((_QWORD *)this + 2);
    --*((_DWORD *)this + 1);
    *((_QWORD *)this + 1) = v7;
    *a2 = v7;
    *((_QWORD *)this + 2) = v3;
    *((_DWORD *)this + 6) = v5;
  }
  else
  {
    *a2 = 0LL;
  }
}
