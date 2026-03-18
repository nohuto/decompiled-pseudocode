/*
 * XREFs of ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x18003724C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180104B60 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180036438 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x18005B360 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 */

void __fastcall CVisual::SetRelativeSize(CVisual *this, float a2, float a3)
{
  if ( *((float *)this + 35) != a2 || *((float *)this + 36) != a3 )
  {
    *((float *)this + 35) = a2;
    *((float *)this + 36) = a3;
    CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0);
    CVisual::OnOuterTransformChanged(this);
  }
}
