/*
 * XREFs of ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z @ 0x180121A4C
 * Callers:
 *     ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DF@@@@Z @ 0x18012430C (-PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColorTransf.c)
 *     ?PushHDRConversionLayer@CDrawingContext@@AEAAJXZ @ 0x1801245B4 (-PushHDRConversionLayer@CDrawingContext@@AEAAJXZ.c)
 *     ?CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x18012E640 (-CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004B91C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180098510 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?InflateRectFToPointAndSizeL@@YAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAUMilPointAndSizeL@@@Z @ 0x1801638BC (-InflateRectFToPointAndSizeL@@YAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 */

__int64 __fastcall CDrawingContext::ComputeExternalLayerOffsetAndBounds(
        CDrawingContext *this,
        struct MilPointAndSizeL *a2)
{
  __int64 v2; // r9
  unsigned int v3; // ebx
  int v4; // eax
  float v6[4]; // [rsp+30h] [rbp-28h] BYREF

  CScopedClipStack::GetTopGpuClipInScope((__int64 *)this + 114, 1, (__int64)v6);
  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(v6) )
  {
    v3 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x1652u);
  }
  else
  {
    v4 = InflateRectFToPointAndSizeL(v6, v2);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x1655u);
  }
  return v3;
}
