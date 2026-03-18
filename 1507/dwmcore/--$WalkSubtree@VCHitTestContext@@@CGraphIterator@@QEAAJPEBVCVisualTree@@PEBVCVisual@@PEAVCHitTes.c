/*
 * XREFs of ??$WalkSubtree@VCHitTestContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18000A73C
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPEAI4PEAU_LUID@@PEAVCMILMatrix@@5PEA_N5@Z @ 0x18000B398 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPE.c)
 * Callees:
 *     ?PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18000A900 (-PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18000AA90 (-PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GotoParent@CGraphWalker@@AEAAXPEAPEAVIGraphNode@@@Z @ 0x18000BC54 (-GotoParent@CGraphWalker@@AEAAXPEAPEAVIGraphNode@@@Z.c)
 *     ?GotoFirstChild@CGraphWalker@@AEAAJPEAPEAVIGraphNode@@@Z @ 0x18000BCB8 (-GotoFirstChild@CGraphWalker@@AEAAJPEAPEAVIGraphNode@@@Z.c)
 *     ?GotoSibling@CGraphWalker@@AEAAJPEAPEAVIGraphNode@@@Z @ 0x18000BD98 (-GotoSibling@CGraphWalker@@AEAAJPEAPEAVIGraphNode@@@Z.c)
 *     ?EndWalk@CGraphWalker@@AEAAXPEAVIGraphNode@@@Z @ 0x18000BE38 (-EndWalk@CGraphWalker@@AEAAXPEAVIGraphNode@@@Z.c)
 *     ?VisitNode@CVisual@@UEAAJPEBVCVisualTree@@@Z @ 0x180035CB0 (-VisitNode@CVisual@@UEAAJPEBVCVisualTree@@@Z.c)
 *     ?BeginWalk@CGraphWalker@@AEAAJPEAPEAVIGraphNode@@_N@Z @ 0x18005BE78 (-BeginWalk@CGraphWalker@@AEAAJPEAPEAVIGraphNode@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CGraphIterator::WalkSubtree<CHitTestContext>(
        CGraphWalker *this,
        struct CVisualTree *a2,
        __int64 a3,
        CHitTestContext *a4,
        bool a5)
{
  int v8; // eax
  unsigned int v9; // ebx
  CVisual *v10; // rdi
  int (*v11)(CVisual *__hidden, const struct CVisualTree *); // rbx
  int v12; // eax
  int v14; // r9d
  unsigned int v15; // [rsp+20h] [rbp-10h]
  bool v16; // [rsp+60h] [rbp+30h] BYREF
  struct IGraphNode *v17; // [rsp+68h] [rbp+38h] BYREF
  struct IGraphNode *v18; // [rsp+70h] [rbp+40h] BYREF

  if ( a3 )
    v17 = (struct IGraphNode *)(a3 + 64);
  else
    v17 = 0LL;
  *((_QWORD *)this + 8) = a2;
  *((_DWORD *)this + 18) = 4;
  v8 = CGraphWalker::BeginWalk(this, &v17, 1);
  v9 = v8;
  if ( v8 < 0 )
  {
    v15 = 89;
  }
  else
  {
    v10 = (CVisual *)*((_QWORD *)this + 1);
    do
    {
LABEL_5:
      v11 = *(int (**)(CVisual *__hidden, const struct CVisualTree *))(*(_QWORD *)v10 + 16LL);
      if ( v11 == CVisual::VisitNode )
        v12 = CVisual::VisitNode(v10, a2);
      else
        v12 = ((__int64 (__fastcall *)(CVisual *, struct CVisualTree *))v11)(v10, a2);
      v9 = v12;
      if ( v12 < 0 )
      {
        v15 = 103;
        v14 = v12;
        goto LABEL_31;
      }
      v8 = CHitTestContext::PreSubgraph(a4, a2, &v16);
      v9 = v8;
      if ( v8 < 0 )
      {
        v15 = 105;
        goto LABEL_25;
      }
      if ( !v16 )
        break;
      v18 = 0LL;
      v8 = CGraphWalker::GotoFirstChild(this, &v18);
      v9 = v8;
      if ( v8 < 0 )
      {
        v15 = 111;
        goto LABEL_25;
      }
      v10 = v18;
    }
    while ( v18 );
    while ( 1 )
    {
      a5 = 1;
      v8 = CHitTestContext::PostSubgraph(a4, a2, &a5);
      v9 = v8;
      if ( v8 < 0 )
        break;
      v18 = 0LL;
      if ( a5 )
      {
        v8 = CGraphWalker::GotoSibling(this, &v18);
        v9 = v8;
        if ( v8 < 0 )
        {
          v15 = 143;
          goto LABEL_25;
        }
        v10 = v18;
        if ( v18 )
          goto LABEL_5;
      }
      v18 = 0LL;
      CGraphWalker::GotoParent(this, &v18);
      if ( !v18 )
        goto LABEL_15;
    }
    v15 = 135;
  }
LABEL_25:
  v14 = v8;
LABEL_31:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, v15);
LABEL_15:
  if ( v9 == 1 || v9 == -2147467260 )
    v9 = 0;
  CGraphWalker::EndWalk(this, v17);
  return v9;
}
