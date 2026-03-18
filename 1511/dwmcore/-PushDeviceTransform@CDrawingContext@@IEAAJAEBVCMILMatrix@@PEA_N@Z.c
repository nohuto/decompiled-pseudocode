/*
 * XREFs of ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18000DDDC
 * Callers:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180010CE0 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18000DCEC (-UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180046380 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Invert@CBaseMatrix@@IEAAHAEBV1@@Z @ 0x1800476D8 (-Invert@CBaseMatrix@@IEAAHAEBV1@@Z.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x18004E9F8 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::PushDeviceTransform(CDrawingContext *this, const struct CMILMatrix *a2, bool *a3)
{
  int updated; // eax
  unsigned int v7; // ebx
  unsigned int v9; // [rsp+20h] [rbp-B8h]
  _BYTE v10[64]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v11[64]; // [rsp+70h] [rbp-68h] BYREF

  if ( !CBaseMatrix::Invert((CBaseMatrix *)v11, a2) )
  {
    v7 = -2003304441;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304441, 0x19E4u);
    return v7;
  }
  updated = CDrawingContext::UpdateDeviceTransform(this, a2, a3);
  v7 = updated;
  if ( updated < 0 )
  {
    v9 = 6632;
LABEL_8:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, v9);
    return v7;
  }
  CBaseMatrixStack::Top((CDrawingContext *)((char *)this + 456), (struct CBaseMatrix *)v10);
  D2DMatrixMultiply((struct D2DMatrix *)v10, (const struct D2DMatrix *)v10, a2);
  updated = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)v10, 0, 0);
  v7 = updated;
  if ( updated < 0 )
  {
    v9 = 6644;
    goto LABEL_8;
  }
  return v7;
}
