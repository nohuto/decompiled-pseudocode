/*
 * XREFs of ?PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z @ 0x180069150
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004DC00 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180023F98 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18006E5B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 */

__int64 __fastcall CDrawingContext::PushTransform(CDrawingContext *this, struct CTransform *a2)
{
  const struct CMILMatrix *Matrix; // rax
  int v4; // eax
  unsigned int v5; // ebx

  if ( a2 )
    Matrix = CTransform3D::GetMatrix(a2, 0LL);
  else
    Matrix = (const struct CMILMatrix *)&CMILMatrix::Identity;
  v4 = CDrawingContext::PushTransformInternal(this, 0LL, Matrix, 1, 1);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x1453u);
  return v5;
}
