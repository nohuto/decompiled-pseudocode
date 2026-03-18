/*
 * XREFs of ?BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z @ 0x18015B910
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004F330 (-PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x18015B7C8 (--$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonLi.c)
 *     ?Optimize@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCBspNode@@@@$0EA@$01$09@@QEAAXXZ @ 0x18015BBF0 (-Optimize@-$CWatermarkStack@UCFrame@-$CGraphWalker@VCBspNode@@@@$0EA@$01$09@@QEAAXXZ.c)
 */

__int64 __fastcall CBspPolygonListBuilder::BuildPolygonList(
        CBspPolygonListBuilder *this,
        struct CBspNode *a2,
        __int64 a3)
{
  char *v3; // rbx
  int v4; // eax
  int v5; // edi
  unsigned int v7; // [rsp+20h] [rbp-18h]

  v3 = (char *)this + 8;
  *((_DWORD *)this + 3) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 2) = a2;
  v7 = 0;
  v4 = CBspTreeIterator::WalkSubtree<CBspPolygonListBuilder>((__int64)this + 8, (__int64)a2, a3, this, v7);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x32u);
  *((_DWORD *)v3 + 1) = 0;
  *((_DWORD *)v3 + 8) = 0;
  *((_QWORD *)v3 + 1) = 0LL;
  *((_QWORD *)v3 + 2) = 0LL;
  CWatermarkStack<CGraphWalker<CBspNode>::CFrame,64,2,10>::Optimize();
  if ( v5 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x2Bu);
  return (unsigned int)v5;
}
