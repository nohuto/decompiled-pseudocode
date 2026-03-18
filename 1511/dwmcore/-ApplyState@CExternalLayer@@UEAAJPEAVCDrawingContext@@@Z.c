/*
 * XREFs of ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180010CE0
 * Callers:
 *     ?ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180010960 (-ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18000DDDC (-PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?CalcDeviceTransformDelta@CLinearInterpolationLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180010810 (-CalcDeviceTransformDelta@CLinearInterpolationLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@.c)
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180010E18 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExternalLayer::ApplyState(CExternalLayer *this, struct CDrawingContext *a2)
{
  const struct CMILMatrix *v2; // rbx
  __int64 (__fastcall *v5)(CLinearInterpolationLayer *, struct CDrawingContext *, struct CMILMatrix *); // rdi
  int v6; // eax
  int v7; // edi
  int v8; // eax
  unsigned int v10; // [rsp+20h] [rbp-18h]
  bool v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0;
  v2 = (CExternalLayer *)((char *)this + 40);
  v5 = *(__int64 (__fastcall **)(CLinearInterpolationLayer *, struct CDrawingContext *, struct CMILMatrix *))(*(_QWORD *)this + 32LL);
  if ( v5 == CLinearInterpolationLayer::CalcDeviceTransformDelta )
    v6 = CLinearInterpolationLayer::CalcDeviceTransformDelta(this, a2, (CExternalLayer *)((char *)this + 40));
  else
    v6 = v5(this, a2, (CExternalLayer *)((char *)this + 40));
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xC3u);
  }
  else
  {
    v8 = CDrawingContext::PushDeviceTransform(a2, v2, &v11);
    v7 = v8;
    if ( v8 < 0 )
    {
      v10 = 201;
    }
    else
    {
      *((_BYTE *)this + 32) = 1;
      v8 = CExternalLayer::ApplyRenderTarget(this, a2);
      v7 = v8;
      if ( v8 >= 0 )
      {
        *((_BYTE *)this + 36) = *((_BYTE *)a2 + 5967);
        *((_BYTE *)a2 + 5967) = v11;
        *((_BYTE *)this + 35) = 1;
        goto LABEL_7;
      }
      v10 = 207;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v10);
  }
LABEL_7:
  if ( v7 < 0 )
    (*(void (__fastcall **)(CExternalLayer *, struct CDrawingContext *))(*(_QWORD *)this + 24LL))(this, a2);
  return (unsigned int)v7;
}
