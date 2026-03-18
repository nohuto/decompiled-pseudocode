/*
 * XREFs of ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18002F290
 * Callers:
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180001DAC (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18002F750 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18004BE00 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z @ 0x180053DA4 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z.c)
 *     ?Clear@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800E9CF8 (-Clear@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x1800EF214 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileBrush@@PEBUBrushContext@@PEBVCMILMatrix@@2PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIBitmapSource@@PEAV4@PEAHPEAW4XSpaceDefinition@@@Z @ 0x18012172C (-GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileBrush@@PEBUBrushContext@@PEBVCMILMatrix@@2.c)
 * Callees:
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x180022D18 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJPEAVCShape@@_N@Z @ 0x18002D784 (-FillShapeForBounds@CDrawingContext@@AEAAJPEAVCShape@@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180030500 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180030950 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800310B0 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180073820 (-GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ??0CRectangleShape@@QEAA@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180078D28 (--0CRectangleShape@@QEAA@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquenes.c)
 *     ??1CRectangleShape@@UEAA@XZ @ 0x1800790B4 (--1CRectangleShape@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDrawingContext::Clear(CDrawingContext *this, const struct _D3DCOLORVALUE *a2)
{
  CDrawingContext *v4; // rcx
  char *v5; // rsi
  int v6; // eax
  unsigned int v7; // ebp
  int v9; // eax
  _BYTE v10[16]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v11[32]; // [rsp+40h] [rbp-48h] BYREF

  v5 = 0LL;
  if ( (unsigned __int8)CDrawingContext::IsBounding(this) )
  {
    CDrawingContext::PushTransformInternal(v4, 0LL, (const struct CMILMatrix *)&IdentityMatrix, 0, 1);
    CScopedClipStack::GetTopClipBoundsInScope((char *)this + 680, v10);
    CRectangleShape::CRectangleShape(v11, v10);
    v9 = CDrawingContext::FillShapeForBounds(this, (struct CShape *)v11);
    v7 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x33Du);
    CRectangleShape::~CRectangleShape((CRectangleShape *)v11);
    CDrawingContext::PopTransformInternal(this, 1);
  }
  else
  {
    v6 = CDrawingContext::ApplyRenderStateInternal(v4, 0);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x341u);
    }
    else
    {
      if ( this )
        v5 = (char *)this + 56;
      (*(void (__fastcall **)(_QWORD, char *, const struct _D3DCOLORVALUE *))(**((_QWORD **)this + 47) + 40LL))(
        *((_QWORD *)this + 47),
        v5,
        a2);
    }
  }
  return v7;
}
