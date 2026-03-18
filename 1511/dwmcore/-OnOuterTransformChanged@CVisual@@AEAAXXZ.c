/*
 * XREFs of ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180048E68
 * Callers:
 *     ?SetRelativeOffset@CVisual@@QEAAXMM@Z @ 0x180009328 (-SetRelativeOffset@CVisual@@QEAAXMM@Z.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x180047E90 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPAREN.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x180049D64 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x18004D3CC (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x18004D4B4 (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z @ 0x18004D660 (-SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180050490 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x180048D70 (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 */

void __fastcall CVisual::OnOuterTransformChanged(CVisual *this)
{
  __int64 v1; // r9
  _QWORD **v2; // r9
  _QWORD *i; // rax

  CVisual::OnTransformChanged(this);
  *(_QWORD *)(v1 + 656) = 0LL;
  v2 = (_QWORD **)(v1 + 416);
  for ( i = *v2; i != v2; i = (_QWORD *)*i )
    *(i - 5) = 0LL;
}
