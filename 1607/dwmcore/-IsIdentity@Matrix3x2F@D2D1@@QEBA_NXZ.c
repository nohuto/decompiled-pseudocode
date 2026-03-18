/*
 * XREFs of ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180098050
 * Callers:
 *     ?AppendRect@CDrawListPrimitiveBuilder@@IEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800965A0 (-AppendRect@CDrawListPrimitiveBuilder@@IEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttrib.c)
 *     ?TransformInput@CInteractionContextTransformHelper@@QEAAJAEBUtagPOINTER_INFO@@PEAU2@@Z @ 0x180112440 (-TransformInput@CInteractionContextTransformHelper@@QEAAJAEBUtagPOINTER_INFO@@PEAU2@@Z.c)
 *     ?GetInputParameters@CEffectBrush@@AEAAJIAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAUGraphInputParameters@1@@Z @ 0x18013BD88 (-GetInputParameters@CEffectBrush@@AEAAJIAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAUGraphInputParam.c)
 *     ?IsIdentity@CComponentTransform2D@@QEBA_NXZ @ 0x18014EADC (-IsIdentity@CComponentTransform2D@@QEBA_NXZ.c)
 *     ?CalculatePrediction@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CONTEXT_OUTPUT@@PEBUMANIPULATION_TRANSFORM@@PEBUtagRECT@@IMMPEAM3@Z @ 0x18018B220 (-CalculatePrediction@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CONTEXT_OUTPUT@@PE.c)
 *     ?TransformDirection@CInteractionContextTransformHelper@@SAXAEBVMatrix3x2F@D2D1@@MMPEAM1@Z @ 0x18018BB38 (-TransformDirection@CInteractionContextTransformHelper@@SAXAEBVMatrix3x2F@D2D1@@MMPEAM1@Z.c)
 *     ?TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CHANGESET@@AEBUtagRECT@@1PEAU2@@Z @ 0x18018BC14 (-TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CHANGESET@@AEBUtagRECT.c)
 *     ?UnTransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@PEAU2@@Z @ 0x18018C15C (-UnTransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@PEAU2@@Z.c)
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
