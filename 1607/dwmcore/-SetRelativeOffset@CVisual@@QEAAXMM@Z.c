/*
 * XREFs of ?SetRelativeOffset@CVisual@@QEAAXMM@Z @ 0x18000C3C8
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18000C310 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetRelativeOffsetInternal@CVisual@@QEAAXUD2D_VECTOR_2F@@@Z @ 0x18000C188 (-SetRelativeOffsetInternal@CVisual@@QEAAXUD2D_VECTOR_2F@@@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_2F@@XZ @ 0x18004FB1C (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_2F@@XZ.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800510C8 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall CVisual::SetRelativeOffset(CVisual *this, double a2, double a3)
{
  float v4; // [rsp+68h] [rbp+20h]
  float v5; // [rsp+6Ch] [rbp+24h]

  CVisual::GetRelativeOffsetInternal(this);
  if ( v4 != *(float *)&a2 || v5 != *(float *)&a3 )
  {
    CVisual::SetRelativeOffsetInternal(
      this,
      (struct D2D_VECTOR_2F)*(_OWORD *)&_mm_unpacklo_ps(*(__m128 *)&a2, *(__m128 *)&a3));
    CVisual::PropagateFlags(this, 1, 1, 0, 1, 0, 0);
    CVisual::OnOuterTransformChanged(this);
  }
}
