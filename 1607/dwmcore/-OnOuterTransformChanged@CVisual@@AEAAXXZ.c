/*
 * XREFs of ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800510C8
 * Callers:
 *     ?SetRelativeOffset@CVisual@@QEAAXMM@Z @ 0x18000C3C8 (-SetRelativeOffset@CVisual@@QEAAXMM@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x18004F010 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPAREN.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x180050434 (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z @ 0x180050728 (-SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x180052288 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180062AD0 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x180109E2C (-SetSize@CVisual@@QEAAXMM@Z.c)
 * Callees:
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x180050F44 (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 */

void __fastcall CVisual::OnOuterTransformChanged(CVisual *this)
{
  __int64 v1; // r10
  __int64 v2; // rcx
  __int64 i; // rcx
  _QWORD *j; // rax
  _QWORD *v5; // [rsp+30h] [rbp+8h]

  CVisual::OnTransformChanged(this);
  v2 = *(_QWORD *)(v1 + 272);
  *(_QWORD *)(v1 + 496) = 0LL;
  if ( (*(_DWORD *)(v2 + 4) & 0x80000) != 0 )
  {
    for ( i = v2 + 12; (*(_DWORD *)i & 0x7F000000) != 0xD000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    v5 = *(_QWORD **)(i + 4);
    if ( v5 )
    {
      for ( j = (_QWORD *)*v5; j != v5; j = (_QWORD *)*j )
        *(j - 6) = 0LL;
    }
  }
}
