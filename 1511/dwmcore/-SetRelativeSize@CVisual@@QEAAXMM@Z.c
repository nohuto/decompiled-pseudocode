/*
 * XREFs of ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x180049D64
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180009290 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180048E68 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800A9D58 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 */

void __fastcall CVisual::SetRelativeSize(CVisual *this, float a2, float a3)
{
  if ( *((float *)this + 31) != a2 || *((float *)this + 32) != a3 )
  {
    *((float *)this + 31) = a2;
    *((float *)this + 32) = a3;
    CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0);
    CVisual::OnOuterTransformChanged(this);
  }
}
