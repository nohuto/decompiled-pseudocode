/*
 * XREFs of ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800061B4
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPEAI4PEAU_LUID@@PEAVCMILMatrix@@5PEA_N5@Z @ 0x180008B40 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPE.c)
 * Callees:
 *     ?GotoParent@?$CGraphWalker@VCVisual@@@@QEAAXPEAPEAVCVisual@@@Z @ 0x180005F8C (-GotoParent@-$CGraphWalker@VCVisual@@@@QEAAXPEAPEAVCVisual@@@Z.c)
 *     ?GotoSibling@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@@Z @ 0x180005FF0 (-GotoSibling@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@@Z.c)
 *     ?GotoFirstChild@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@@Z @ 0x180006060 (-GotoFirstChild@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@@Z.c)
 *     ?EndWalk@?$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z @ 0x18000611C (-EndWalk@-$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z.c)
 *     ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800080E0 (-PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800089E0 (-PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18004D8D0 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?BeginWalk@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@_N@Z @ 0x1800A8A28 (-BeginWalk@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@_N@Z.c)
 */

__int64 __fastcall CVisualTreeIterator::WalkSubtree<CHitTestContext>(
        __int64 a1,
        const struct CVisualTree *a2,
        __int64 a3,
        CHitTestContext *a4,
        bool a5)
{
  int v8; // eax
  int v9; // ebx
  CVisual *v10; // rcx
  int v12; // r9d
  unsigned int v13; // [rsp+20h] [rbp-20h]
  struct CTreeData *v14; // [rsp+30h] [rbp-10h] BYREF
  bool v15; // [rsp+70h] [rbp+30h] BYREF
  CVisual *v16; // [rsp+78h] [rbp+38h] BYREF
  __int64 v17; // [rsp+80h] [rbp+40h] BYREF

  *(_QWORD *)(a1 + 64) = a2;
  v17 = a3;
  *(_DWORD *)(a1 + 72) = 4;
  v8 = CGraphWalker<CVisual>::BeginWalk(a1, &v17);
  v9 = v8;
  if ( v8 < 0 )
  {
    v13 = 89;
  }
  else
  {
    v10 = *(CVisual **)(a1 + 8);
    do
    {
LABEL_7:
      v9 = CVisual::EnsureTreeData(v10, a2, &v14);
      if ( v9 < 0 )
      {
        v13 = 103;
        v12 = v9;
        goto LABEL_25;
      }
      v8 = CHitTestContext::PreSubgraph(a4, a2, &v15);
      v9 = v8;
      if ( v8 < 0 )
      {
        v13 = 105;
        goto LABEL_21;
      }
      if ( !v15 )
        break;
      v16 = 0LL;
      v8 = CGraphWalker<CVisual>::GotoFirstChild(a1, &v16);
      v9 = v8;
      if ( v8 < 0 )
      {
        v13 = 111;
        goto LABEL_21;
      }
      v10 = v16;
    }
    while ( v16 );
    while ( 1 )
    {
      a5 = 1;
      v8 = CHitTestContext::PostSubgraph(a4, a2, &a5);
      v9 = v8;
      if ( v8 < 0 )
        break;
      v16 = 0LL;
      if ( a5 )
      {
        v8 = CGraphWalker<CVisual>::GotoSibling(a1, &v16);
        v9 = v8;
        if ( v8 < 0 )
        {
          v13 = 143;
          goto LABEL_21;
        }
        v10 = v16;
        if ( v16 )
          goto LABEL_7;
      }
      v16 = 0LL;
      CGraphWalker<CVisual>::GotoParent(a1, &v16);
      if ( !v16 )
        goto LABEL_12;
    }
    v13 = 135;
  }
LABEL_21:
  v12 = v8;
LABEL_25:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v13);
LABEL_12:
  if ( v9 == 1 || v9 == -2147467260 )
    v9 = 0;
  CGraphWalker<CVisual>::EndWalk(a1, v17);
  return (unsigned int)v9;
}
