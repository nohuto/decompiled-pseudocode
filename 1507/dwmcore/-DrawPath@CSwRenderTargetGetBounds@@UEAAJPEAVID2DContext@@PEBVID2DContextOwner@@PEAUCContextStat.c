/*
 * XREFs of ?DrawPath@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAUBrushContext@@PEAVCShape@@PEAVCBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x180043F90
 * Callers:
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJPEAVCShape@@_N@Z @ 0x18002D784 (-FillShapeForBounds@CDrawingContext@@AEAAJPEAVCShape@@_N@Z.c)
 * Callees:
 *     ?AddBounds@CSwRenderTargetGetBounds@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCAliasedClip@@@Z @ 0x180043EB8 (-AddBounds@CSwRenderTargetGetBounds@@AEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTightBoundsNoBadNumber@CShape@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800781CC (-GetTightBoundsNoBadNumber@CShape@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::DrawPath(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // ebx
  int TightBoundsNoBadNumber; // eax
  _BYTE v12[16]; // [rsp+30h] [rbp-28h] BYREF

  v8 = 0;
  if ( a8 || a7 )
  {
    TightBoundsNoBadNumber = CShape::GetTightBoundsNoBadNumber(a6, v12, a4 + 204);
    v8 = TightBoundsNoBadNumber;
    if ( TightBoundsNoBadNumber < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBoundsNoBadNumber, 0xE2u);
    else
      CSwRenderTargetGetBounds::AddBounds(a1 - 16, (__int64)v12);
  }
  return v8;
}
