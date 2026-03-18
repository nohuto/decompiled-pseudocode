/*
 * XREFs of ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180036438
 * Callers:
 *     ?SetRelativeOffset@CVisual@@QEAAXMM@Z @ 0x18000BBC0 (-SetRelativeOffset@CVisual@@QEAAXMM@Z.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x180034A84 (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x180034B64 (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z @ 0x180034C90 (-SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x1800355CC (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPAREN.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x18003724C (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003A510 (-PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x180036324 (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 */

void __fastcall CVisual::OnOuterTransformChanged(CVisual *this)
{
  __int64 v1; // r9
  _QWORD **v2; // r9
  _QWORD *i; // rax

  CVisual::OnTransformChanged(this);
  *(_QWORD *)(v1 + 672) = 0LL;
  v2 = (_QWORD **)(v1 + 432);
  for ( i = *v2; i != v2; i = (_QWORD *)*i )
    *(i - 5) = 0LL;
}
