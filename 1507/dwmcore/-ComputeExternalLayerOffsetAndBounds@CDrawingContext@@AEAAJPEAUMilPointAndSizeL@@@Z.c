/*
 * XREFs of ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z @ 0x1800F1810
 * Callers:
 *     ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DA@@@@Z @ 0x1800F3FA4 (-PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColorTransf.c)
 *     ?CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1800FB840 (-CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E148 (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180073820 (-GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?InflateRectFToPointAndSizeL@@YAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAUMilPointAndSizeL@@@Z @ 0x1801247A4 (-InflateRectFToPointAndSizeL@@YAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 */

__int64 __fastcall CDrawingContext::ComputeExternalLayerOffsetAndBounds(
        CDrawingContext *this,
        struct MilPointAndSizeL *a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  float v6[4]; // [rsp+30h] [rbp-28h] BYREF

  CScopedClipStack::GetTopClipBoundsInScope((__int64 *)this + 85, (__int64)v6);
  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(v6) )
  {
    v3 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x1657u);
  }
  else
  {
    v4 = InflateRectFToPointAndSizeL(v6, a2);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x165Au);
  }
  return v3;
}
