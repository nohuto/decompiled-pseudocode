/*
 * XREFs of ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180030D64
 * Callers:
 *     ?AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLAGS@@W4D2D1_ANTIALIAS_MODE@@_N4PEBUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@PEAVCShape@@4@Z @ 0x180033340 (-AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLA.c)
 *     ?CreateSlowHitTestRegion@CPrimitiveGroup@@AEBAJXZ @ 0x180091F88 (-CreateSlowHitTestRegion@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?TransformInput@CInteractionContextTransformHelper@@QEAAJAEBUtagPOINTER_INFO@@PEAU2@@Z @ 0x1800FE494 (-TransformInput@CInteractionContextTransformHelper@@QEAAJAEBUtagPOINTER_INFO@@PEAU2@@Z.c)
 *     ?HasUserTransform@CEffectBrush@@QEBA_NI@Z @ 0x180122F20 (-HasUserTransform@CEffectBrush@@QEBA_NI@Z.c)
 *     ?UnTransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@PEAU2@@Z @ 0x18015A07C (-UnTransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@PEAU2@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall D2D1::Matrix3x2F::IsIdentity(D2D1::Matrix3x2F *this)
{
  return *(float *)this == 1.0
      && *((float *)this + 1) == 0.0
      && *((float *)this + 2) == 0.0
      && *((float *)this + 3) == 1.0
      && *((float *)this + 4) == 0.0
      && *((float *)this + 5) == 0.0;
}
