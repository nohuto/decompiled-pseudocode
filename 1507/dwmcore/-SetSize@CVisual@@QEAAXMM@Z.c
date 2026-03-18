/*
 * XREFs of ?SetSize@CVisual@@QEAAXMM@Z @ 0x180034B64
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetSize@CCoRenderVisualProxy@@UEAAJMM@Z @ 0x1800F5EB0 (-SetSize@CCoRenderVisualProxy@@UEAAJMM@Z.c)
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180104B60 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180036438 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x18005B360 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z @ 0x18005D4DC (-NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z.c)
 */

void __fastcall CVisual::SetSize(CVisual *this, float a2, float a3)
{
  unsigned int v4; // edx
  float v5; // [rsp+70h] [rbp+8h] BYREF
  float v6; // [rsp+74h] [rbp+Ch]

  if ( *((float *)this + 33) != a2 || *((float *)this + 34) != a3 )
  {
    *((float *)this + 33) = a2;
    *((float *)this + 34) = a3;
    CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0);
    CVisual::OnOuterTransformChanged(this);
    v5 = a2;
    v6 = a3;
    CPropertyChangeResource::NotifyVector2PropertyChanged(this, v4, (const struct D2DVector2 *)&v5);
  }
}
