/*
 * XREFs of ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18015B4A4
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180050490 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Push@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBackfaceVisibility@@@Z @ 0x18000631C (-Push@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBackfaceVis.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004B150 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z @ 0x18004E7C0 (-Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x1800A4470 (-Push@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800A45C0 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x1800A9F70 (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x1800FE0F8 (-Push@-$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z @ 0x18015B000 (-Push@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMode@@@Z @ 0x18015B178 (-Push@-$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMod.c)
 */

__int64 __fastcall CBspPreComputeHelper::PushStacksForBspRootVisual(CBspPreComputeHelper *this, struct CVisual *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v7; // [rsp+28h] [rbp-29h]
  _BYTE v8[8]; // [rsp+38h] [rbp-19h] BYREF
  __int64 v9; // [rsp+40h] [rbp-11h] BYREF
  struct CVisual *v10; // [rsp+48h] [rbp-9h] BYREF
  _BYTE v11[64]; // [rsp+58h] [rbp+7h] BYREF

  v10 = a2;
  CVisual::CalcEffectiveTransform((__int64)a2, 5, 0LL, v8, (struct D2DMatrix *)v11, 0LL);
  v3 = CBaseMatrixStack::Push((CBspPreComputeHelper *)((char *)this + 64), (const struct CMILMatrix *)v11, 0);
  v4 = v3;
  if ( v3 < 0 )
  {
    v7 = 103;
LABEL_21:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, v7);
    return v4;
  }
  v9 = 0LL;
  v3 = CWatermarkStack<CBspNode *,64,2,10>::Push((unsigned int *)this, &v9);
  v4 = v3;
  if ( v3 < 0 )
  {
    v7 = 108;
    goto LABEL_21;
  }
  v5 = CWatermarkStack<CVisual *,64,2,10>::Push((unsigned int *)this + 8, &v10);
  v4 = v5;
  if ( v5 >= 0 )
  {
    v3 = CBaseMatrixStack::Push(
           (CBspPreComputeHelper *)((char *)this + 96),
           (const struct CMILMatrix *)&IdentityMatrix,
           0);
    v4 = v3;
    if ( v3 < 0 )
    {
      v7 = 114;
      goto LABEL_21;
    }
    LODWORD(v9) = -1;
    v3 = CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Push((unsigned int *)this + 32, &v9);
    v4 = v3;
    if ( v3 < 0 )
    {
      v7 = 117;
      goto LABEL_21;
    }
    LODWORD(v9) = -1;
    v3 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 40, &v9);
    v4 = v3;
    if ( v3 < 0 )
    {
      v7 = 120;
      goto LABEL_21;
    }
    LODWORD(v9) = -1;
    v3 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 48, &v9);
    v4 = v3;
    if ( v3 < 0 )
    {
      v7 = 123;
      goto LABEL_21;
    }
    LODWORD(v9) = 5;
    v3 = CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Push((unsigned int *)this + 56, &v9);
    v4 = v3;
    if ( v3 < 0 )
    {
      v7 = 126;
      goto LABEL_21;
    }
    *(float *)&v9 = FLOAT_1_0;
    v3 = CWatermarkStack<float,64,2,10>::Push((unsigned int *)this + 64, &v9);
    v4 = v3;
    if ( v3 < 0 )
    {
      v7 = 129;
      goto LABEL_21;
    }
    v8[0] = 0;
    v3 = CWatermarkStack<bool,64,2,10>::Push((const void **)this + 36, v8);
    v4 = v3;
    if ( v3 < 0 )
    {
      v7 = 132;
      goto LABEL_21;
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x6Fu);
  }
  return v4;
}
