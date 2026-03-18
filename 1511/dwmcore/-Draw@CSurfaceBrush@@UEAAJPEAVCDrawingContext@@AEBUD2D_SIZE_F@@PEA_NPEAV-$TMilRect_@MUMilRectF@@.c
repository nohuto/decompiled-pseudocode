/*
 * XREFs of ?Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180121CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOverlayRequired@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000C2E0 (-IsOverlayRequired@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x18000CA24 (-IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA?B_NXZ @ 0x18000DC48 (-IsNormalDesktopRender@CDrawingContext@@QEBA-B_NXZ.c)
 *     ?IsOverlayAssigned@CDrawingContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_N@Z @ 0x18000DC74 (-IsOverlayAssigned@CDrawingContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_N@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x180043690 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z @ 0x180058210 (-Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectangleShape@@UEAA@XZ @ 0x1800587FC (--1CRectangleShape@@UEAA@XZ.c)
 *     ??0CRectangleShape@@QEAA@MMMM@Z @ 0x180058858 (--0CRectangleShape@@QEAA@MMMM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?SetCompositionMode@CCompositionSurfaceBitmap@@UEAAXW4BufferCompositionMode@@_N@Z @ 0x1800F4D70 (-SetCompositionMode@CCompositionSurfaceBitmap@@UEAAXW4BufferCompositionMode@@_N@Z.c)
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x18010C250 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 *     ?DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z @ 0x18010CEB8 (-DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z.c)
 *     ?CalculateDestinationRect@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUD2D_RECT_F@@PEAU3@@Z @ 0x1801216B0 (-CalculateDestinationRect@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUD2D_RECT.c)
 *     ?IsReadyToDraw@CSurfaceBrush@@QEBA_NXZ @ 0x180122304 (-IsReadyToDraw@CSurfaceBrush@@QEBA_NXZ.c)
 */

__int64 __fastcall CSurfaceBrush::Draw(CSurfaceBrush *this, CDrawingContext *a2, struct D2D_SIZE_F *a3)
{
  unsigned int v3; // ebx
  struct CVisual *CurrentVisual; // rbx
  __int64 v8; // rcx
  struct ISwapChainContent *v9; // r8
  char IsOverlayAssigned; // r15
  int v11; // eax
  struct ISwapChainContent *v12; // rdx
  int v13; // eax
  int v14; // eax
  bool v16; // [rsp+38h] [rbp-31h] BYREF
  struct D2D_RECT_F v17; // [rsp+40h] [rbp-29h] BYREF
  struct D2D_RECT_F v18; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v19[32]; // [rsp+60h] [rbp-9h] BYREF

  v3 = 0;
  if ( a3->width != 0.0 && a3->height != 0.0 && CSurfaceBrush::IsReadyToDraw(this) )
  {
    v16 = 0;
    CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)a2 + 56));
    if ( (unsigned __int8)CCompositionSurfaceBitmap::IsSwapChain(*((CCompositionSurfaceBitmap **)this + 8))
      && (!v8 ? (v9 = 0LL) : (v9 = (struct ISwapChainContent *)(v8 + 40)),
          (IsOverlayAssigned = CDrawingContext::IsOverlayAssigned((COverlayContext **)a2, CurrentVisual, v9, &v16)) != 0
       || CCompositionSurfaceBitmap::IsOverlayRequired((CCompositionSurfaceBitmap *)(*((_QWORD *)this + 8) + 40LL))) )
    {
      CDrawingContext::IsNormalDesktopRender(a2);
      CCompositionSurfaceBitmap::SetCompositionMode(*((_QWORD *)this + 8) + 40LL);
      v11 = CSurfaceBrush::CalculateDestinationRect(this, a3, 0LL, &v17, 0LL);
      v3 = v11;
      if ( v11 >= 0 )
      {
        CRectangleShape::CRectangleShape((CRectangleShape *)v19, 0.0, 0.0, 0.0, 0.0);
        v18 = v17;
        CRectangleShape::Set((CRectangleShape *)v19, (const struct MilRectF *)&v18);
        v12 = (struct ISwapChainContent *)*((_QWORD *)this + 8);
        if ( v12 )
          v12 = (struct ISwapChainContent *)((char *)v12 + 40);
        v13 = CDrawingContext::DrawOverlayArea(
                (struct CComposition **)a2,
                v12,
                (struct CShape *)v19,
                IsOverlayAssigned,
                v16);
        v3 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x245u);
        CRectangleShape::~CRectangleShape((CRectangleShape *)v19);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x23Fu);
      }
    }
    else
    {
      v14 = CDrawingContext::DrawCommonRenderingEffect(a2, CurrentVisual, this, a3);
      v3 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x249u);
    }
  }
  return v3;
}
