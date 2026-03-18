/*
 * XREFs of ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x18004D3CC
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180009290 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetPosition@CCoRenderVisualProxy@@UEAAJMM@Z @ 0x18010FB10 (-SetPosition@CCoRenderVisualProxy@@UEAAJMM@Z.c)
 * Callees:
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180048E68 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z @ 0x180064E8C (-NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800A9D58 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __fastcall CVisual::SetOffset(CVisual *this, float a2, float a3, float a4)
{
  _DWORD v5[4]; // [rsp+40h] [rbp-58h] BYREF

  if ( *((float *)this + 22) != a2 || *((float *)this + 23) != a3 || *((float *)this + 24) != a4 )
  {
    *((float *)this + 22) = a2;
    *((float *)this + 23) = a3;
    *((float *)this + 24) = a4;
    CVisual::PropagateFlags(this, 1, 1, 0, 1, 0, 0);
    CVisual::OnOuterTransformChanged(this);
    *(float *)v5 = a2;
    *(float *)&v5[1] = a3;
    *(float *)&v5[2] = a4;
    CPropertyChangeResource::NotifyVector3PropertyChanged(this, 0x19u, (const struct D2DVector3 *)v5);
  }
}
